// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DOMAIN20180208_H_
#define ALIBABACLOUD_DOMAIN20180208_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Domain20180208 {
class AcceptDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> message{};

  AcceptDemandRequest() {}

  explicit AcceptDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~AcceptDemandRequest() = default;
};
class AcceptDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bindUrl{};
  shared_ptr<string> requestId{};

  AcceptDemandResponseBody() {}

  explicit AcceptDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindUrl) {
      res["BindUrl"] = boost::any(*bindUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindUrl") != m.end() && !m["BindUrl"].empty()) {
      bindUrl = make_shared<string>(boost::any_cast<string>(m["BindUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AcceptDemandResponseBody() = default;
};
class AcceptDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AcceptDemandResponseBody> body{};

  AcceptDemandResponse() {}

  explicit AcceptDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AcceptDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AcceptDemandResponseBody>(model1);
      }
    }
  }


  virtual ~AcceptDemandResponse() = default;
};
class BidDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> auctionId{};
  shared_ptr<string> currency{};
  shared_ptr<double> maxBid{};

  BidDomainRequest() {}

  explicit BidDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (maxBid) {
      res["MaxBid"] = boost::any(*maxBid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("MaxBid") != m.end() && !m["MaxBid"].empty()) {
      maxBid = make_shared<double>(boost::any_cast<double>(m["MaxBid"]));
    }
  }


  virtual ~BidDomainRequest() = default;
};
class BidDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> auctionId{};
  shared_ptr<string> requestId{};

  BidDomainResponseBody() {}

  explicit BidDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BidDomainResponseBody() = default;
};
class BidDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BidDomainResponseBody> body{};

  BidDomainResponse() {}

  explicit BidDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BidDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BidDomainResponseBody>(model1);
      }
    }
  }


  virtual ~BidDomainResponse() = default;
};
class ChangeAuctionRequestAuctionListBidRecords : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<double> price{};
  shared_ptr<string> userId{};

  ChangeAuctionRequestAuctionListBidRecords() {}

  explicit ChangeAuctionRequestAuctionListBidRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ChangeAuctionRequestAuctionListBidRecords() = default;
};
class ChangeAuctionRequestAuctionList : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeAuctionRequestAuctionListBidRecords>> bidRecords{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> isReserve{};
  shared_ptr<double> reservePrice{};
  shared_ptr<string> reserveRange{};
  shared_ptr<string> status{};
  shared_ptr<long> timeLeft{};
  shared_ptr<string> winner{};
  shared_ptr<double> winnerPrice{};

  ChangeAuctionRequestAuctionList() {}

  explicit ChangeAuctionRequestAuctionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bidRecords) {
      vector<boost::any> temp1;
      for(auto item1:*bidRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BidRecords"] = boost::any(temp1);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isReserve) {
      res["IsReserve"] = boost::any(*isReserve);
    }
    if (reservePrice) {
      res["ReservePrice"] = boost::any(*reservePrice);
    }
    if (reserveRange) {
      res["ReserveRange"] = boost::any(*reserveRange);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeLeft) {
      res["TimeLeft"] = boost::any(*timeLeft);
    }
    if (winner) {
      res["Winner"] = boost::any(*winner);
    }
    if (winnerPrice) {
      res["WinnerPrice"] = boost::any(*winnerPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BidRecords") != m.end() && !m["BidRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["BidRecords"].type()) {
        vector<ChangeAuctionRequestAuctionListBidRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BidRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeAuctionRequestAuctionListBidRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bidRecords = make_shared<vector<ChangeAuctionRequestAuctionListBidRecords>>(expect1);
      }
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsReserve") != m.end() && !m["IsReserve"].empty()) {
      isReserve = make_shared<long>(boost::any_cast<long>(m["IsReserve"]));
    }
    if (m.find("ReservePrice") != m.end() && !m["ReservePrice"].empty()) {
      reservePrice = make_shared<double>(boost::any_cast<double>(m["ReservePrice"]));
    }
    if (m.find("ReserveRange") != m.end() && !m["ReserveRange"].empty()) {
      reserveRange = make_shared<string>(boost::any_cast<string>(m["ReserveRange"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TimeLeft") != m.end() && !m["TimeLeft"].empty()) {
      timeLeft = make_shared<long>(boost::any_cast<long>(m["TimeLeft"]));
    }
    if (m.find("Winner") != m.end() && !m["Winner"].empty()) {
      winner = make_shared<string>(boost::any_cast<string>(m["Winner"]));
    }
    if (m.find("WinnerPrice") != m.end() && !m["WinnerPrice"].empty()) {
      winnerPrice = make_shared<double>(boost::any_cast<double>(m["WinnerPrice"]));
    }
  }


  virtual ~ChangeAuctionRequestAuctionList() = default;
};
class ChangeAuctionRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeAuctionRequestAuctionList>> auctionList{};

  ChangeAuctionRequest() {}

  explicit ChangeAuctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionList) {
      vector<boost::any> temp1;
      for(auto item1:*auctionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuctionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionList") != m.end() && !m["AuctionList"].empty()) {
      if (typeid(vector<boost::any>) == m["AuctionList"].type()) {
        vector<ChangeAuctionRequestAuctionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuctionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeAuctionRequestAuctionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auctionList = make_shared<vector<ChangeAuctionRequestAuctionList>>(expect1);
      }
    }
  }


  virtual ~ChangeAuctionRequest() = default;
};
class ChangeAuctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeAuctionResponseBody() {}

  explicit ChangeAuctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChangeAuctionResponseBody() = default;
};
class ChangeAuctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeAuctionResponseBody> body{};

  ChangeAuctionResponse() {}

  explicit ChangeAuctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeAuctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeAuctionResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeAuctionResponse() = default;
};
class CheckDomainStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};

  CheckDomainStatusRequest() {}

  explicit CheckDomainStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~CheckDomainStatusRequest() = default;
};
class CheckDomainStatusResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> deadDate{};
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<double> price{};
  shared_ptr<long> regDate{};

  CheckDomainStatusResponseBodyModule() {}

  explicit CheckDomainStatusResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deadDate) {
      res["DeadDate"] = boost::any(*deadDate);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (regDate) {
      res["RegDate"] = boost::any(*regDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeadDate") != m.end() && !m["DeadDate"].empty()) {
      deadDate = make_shared<long>(boost::any_cast<long>(m["DeadDate"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("RegDate") != m.end() && !m["RegDate"].empty()) {
      regDate = make_shared<long>(boost::any_cast<long>(m["RegDate"]));
    }
  }


  virtual ~CheckDomainStatusResponseBodyModule() = default;
};
class CheckDomainStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<CheckDomainStatusResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckDomainStatusResponseBody() {}

  explicit CheckDomainStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        CheckDomainStatusResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<CheckDomainStatusResponseBodyModule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckDomainStatusResponseBody() = default;
};
class CheckDomainStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDomainStatusResponseBody> body{};

  CheckDomainStatusResponse() {}

  explicit CheckDomainStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDomainStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDomainStatusResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDomainStatusResponse() = default;
};
class CheckSelectedDomainStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};

  CheckSelectedDomainStatusRequest() {}

  explicit CheckSelectedDomainStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~CheckSelectedDomainStatusRequest() = default;
};
class CheckSelectedDomainStatusResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> deadDate{};
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<bool> premium{};
  shared_ptr<double> price{};
  shared_ptr<long> regDate{};

  CheckSelectedDomainStatusResponseBodyModule() {}

  explicit CheckSelectedDomainStatusResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deadDate) {
      res["DeadDate"] = boost::any(*deadDate);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (premium) {
      res["Premium"] = boost::any(*premium);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (regDate) {
      res["RegDate"] = boost::any(*regDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeadDate") != m.end() && !m["DeadDate"].empty()) {
      deadDate = make_shared<long>(boost::any_cast<long>(m["DeadDate"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Premium") != m.end() && !m["Premium"].empty()) {
      premium = make_shared<bool>(boost::any_cast<bool>(m["Premium"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("RegDate") != m.end() && !m["RegDate"].empty()) {
      regDate = make_shared<long>(boost::any_cast<long>(m["RegDate"]));
    }
  }


  virtual ~CheckSelectedDomainStatusResponseBodyModule() = default;
};
class CheckSelectedDomainStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<CheckSelectedDomainStatusResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckSelectedDomainStatusResponseBody() {}

  explicit CheckSelectedDomainStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        CheckSelectedDomainStatusResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<CheckSelectedDomainStatusResponseBodyModule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckSelectedDomainStatusResponseBody() = default;
};
class CheckSelectedDomainStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckSelectedDomainStatusResponseBody> body{};

  CheckSelectedDomainStatusResponse() {}

  explicit CheckSelectedDomainStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckSelectedDomainStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckSelectedDomainStatusResponseBody>(model1);
      }
    }
  }


  virtual ~CheckSelectedDomainStatusResponse() = default;
};
class CreateFixedPriceDemandOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> contactId{};
  shared_ptr<string> domain{};
  shared_ptr<string> source{};

  CreateFixedPriceDemandOrderRequest() {}

  explicit CreateFixedPriceDemandOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateFixedPriceDemandOrderRequest() = default;
};
class CreateFixedPriceDemandOrderResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> orderNo{};
  shared_ptr<long> price{};

  CreateFixedPriceDemandOrderResponseBodyModule() {}

  explicit CreateFixedPriceDemandOrderResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (orderNo) {
      res["OrderNo"] = boost::any(*orderNo);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("OrderNo") != m.end() && !m["OrderNo"].empty()) {
      orderNo = make_shared<string>(boost::any_cast<string>(m["OrderNo"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["Price"]));
    }
  }


  virtual ~CreateFixedPriceDemandOrderResponseBodyModule() = default;
};
class CreateFixedPriceDemandOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<CreateFixedPriceDemandOrderResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateFixedPriceDemandOrderResponseBody() {}

  explicit CreateFixedPriceDemandOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        CreateFixedPriceDemandOrderResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<CreateFixedPriceDemandOrderResponseBodyModule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateFixedPriceDemandOrderResponseBody() = default;
};
class CreateFixedPriceDemandOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFixedPriceDemandOrderResponseBody> body{};

  CreateFixedPriceDemandOrderResponse() {}

  explicit CreateFixedPriceDemandOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFixedPriceDemandOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFixedPriceDemandOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFixedPriceDemandOrderResponse() = default;
};
class CreateFixedPriceSelectedOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> contactId{};
  shared_ptr<string> domainName{};
  shared_ptr<double> expectedPrice{};
  shared_ptr<string> source{};

  CreateFixedPriceSelectedOrderRequest() {}

  explicit CreateFixedPriceSelectedOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (expectedPrice) {
      res["ExpectedPrice"] = boost::any(*expectedPrice);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ExpectedPrice") != m.end() && !m["ExpectedPrice"].empty()) {
      expectedPrice = make_shared<double>(boost::any_cast<double>(m["ExpectedPrice"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateFixedPriceSelectedOrderRequest() = default;
};
class CreateFixedPriceSelectedOrderResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> orderNo{};
  shared_ptr<long> price{};

  CreateFixedPriceSelectedOrderResponseBodyModule() {}

  explicit CreateFixedPriceSelectedOrderResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (orderNo) {
      res["OrderNo"] = boost::any(*orderNo);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("OrderNo") != m.end() && !m["OrderNo"].empty()) {
      orderNo = make_shared<string>(boost::any_cast<string>(m["OrderNo"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["Price"]));
    }
  }


  virtual ~CreateFixedPriceSelectedOrderResponseBodyModule() = default;
};
class CreateFixedPriceSelectedOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<CreateFixedPriceSelectedOrderResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateFixedPriceSelectedOrderResponseBody() {}

  explicit CreateFixedPriceSelectedOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        CreateFixedPriceSelectedOrderResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<CreateFixedPriceSelectedOrderResponseBodyModule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateFixedPriceSelectedOrderResponseBody() = default;
};
class CreateFixedPriceSelectedOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFixedPriceSelectedOrderResponseBody> body{};

  CreateFixedPriceSelectedOrderResponse() {}

  explicit CreateFixedPriceSelectedOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFixedPriceSelectedOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFixedPriceSelectedOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFixedPriceSelectedOrderResponse() = default;
};
class FailDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> message{};

  FailDemandRequest() {}

  explicit FailDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~FailDemandRequest() = default;
};
class FailDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FailDemandResponseBody() {}

  explicit FailDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FailDemandResponseBody() = default;
};
class FailDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FailDemandResponseBody> body{};

  FailDemandResponse() {}

  explicit FailDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FailDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FailDemandResponseBody>(model1);
      }
    }
  }


  virtual ~FailDemandResponse() = default;
};
class FinishDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> message{};

  FinishDemandRequest() {}

  explicit FinishDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~FinishDemandRequest() = default;
};
class FinishDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FinishDemandResponseBody() {}

  explicit FinishDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FinishDemandResponseBody() = default;
};
class FinishDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FinishDemandResponseBody> body{};

  FinishDemandResponse() {}

  explicit FinishDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FinishDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FinishDemandResponseBody>(model1);
      }
    }
  }


  virtual ~FinishDemandResponse() = default;
};
class GetIntlDomainDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<boost::any>> errorArgs{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> url{};

  GetIntlDomainDownloadUrlResponseBody() {}

  explicit GetIntlDomainDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorArgs) {
      res["ErrorArgs"] = boost::any(*errorArgs);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorArgs") != m.end() && !m["ErrorArgs"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ErrorArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErrorArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      errorArgs = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetIntlDomainDownloadUrlResponseBody() = default;
};
class GetIntlDomainDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIntlDomainDownloadUrlResponseBody> body{};

  GetIntlDomainDownloadUrlResponse() {}

  explicit GetIntlDomainDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIntlDomainDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIntlDomainDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetIntlDomainDownloadUrlResponse() = default;
};
class GetReserveDomainUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> url{};

  GetReserveDomainUrlResponseBody() {}

  explicit GetReserveDomainUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetReserveDomainUrlResponseBody() = default;
};
class GetReserveDomainUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetReserveDomainUrlResponseBody> body{};

  GetReserveDomainUrlResponse() {}

  explicit GetReserveDomainUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetReserveDomainUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReserveDomainUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetReserveDomainUrlResponse() = default;
};
class PurchaseIntlDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> auctionId{};
  shared_ptr<string> currency{};
  shared_ptr<double> price{};

  PurchaseIntlDomainRequest() {}

  explicit PurchaseIntlDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
  }


  virtual ~PurchaseIntlDomainRequest() = default;
};
class PurchaseIntlDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> auctionId{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<boost::any>> errorArgs{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PurchaseIntlDomainResponseBody() {}

  explicit PurchaseIntlDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorArgs) {
      res["ErrorArgs"] = boost::any(*errorArgs);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorArgs") != m.end() && !m["ErrorArgs"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ErrorArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErrorArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      errorArgs = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PurchaseIntlDomainResponseBody() = default;
};
class PurchaseIntlDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PurchaseIntlDomainResponseBody> body{};

  PurchaseIntlDomainResponse() {}

  explicit PurchaseIntlDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PurchaseIntlDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseIntlDomainResponseBody>(model1);
      }
    }
  }


  virtual ~PurchaseIntlDomainResponse() = default;
};
class QueryAuctionDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> auctionId{};

  QueryAuctionDetailRequest() {}

  explicit QueryAuctionDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
  }


  virtual ~QueryAuctionDetailRequest() = default;
};
class QueryAuctionDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> auctionEndTime{};
  shared_ptr<string> auctionId{};
  shared_ptr<long> bookEndTime{};
  shared_ptr<string> bookedPartner{};
  shared_ptr<string> currency{};
  shared_ptr<long> deliveryTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainType{};
  shared_ptr<string> failCode{};
  shared_ptr<double> highBid{};
  shared_ptr<string> highBidder{};
  shared_ptr<double> nextValidBid{};
  shared_ptr<string> partnerType{};
  shared_ptr<long> payEndTime{};
  shared_ptr<double> payPrice{};
  shared_ptr<string> payStatus{};
  shared_ptr<string> produceStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> reserveMet{};
  shared_ptr<double> reservePrice{};
  shared_ptr<string> status{};
  shared_ptr<double> transferInPrice{};
  shared_ptr<double> yourCurrentBid{};
  shared_ptr<double> yourMaxBid{};

  QueryAuctionDetailResponseBody() {}

  explicit QueryAuctionDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionEndTime) {
      res["AuctionEndTime"] = boost::any(*auctionEndTime);
    }
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (bookEndTime) {
      res["BookEndTime"] = boost::any(*bookEndTime);
    }
    if (bookedPartner) {
      res["BookedPartner"] = boost::any(*bookedPartner);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (failCode) {
      res["FailCode"] = boost::any(*failCode);
    }
    if (highBid) {
      res["HighBid"] = boost::any(*highBid);
    }
    if (highBidder) {
      res["HighBidder"] = boost::any(*highBidder);
    }
    if (nextValidBid) {
      res["NextValidBid"] = boost::any(*nextValidBid);
    }
    if (partnerType) {
      res["PartnerType"] = boost::any(*partnerType);
    }
    if (payEndTime) {
      res["PayEndTime"] = boost::any(*payEndTime);
    }
    if (payPrice) {
      res["PayPrice"] = boost::any(*payPrice);
    }
    if (payStatus) {
      res["PayStatus"] = boost::any(*payStatus);
    }
    if (produceStatus) {
      res["ProduceStatus"] = boost::any(*produceStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (reserveMet) {
      res["ReserveMet"] = boost::any(*reserveMet);
    }
    if (reservePrice) {
      res["ReservePrice"] = boost::any(*reservePrice);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transferInPrice) {
      res["TransferInPrice"] = boost::any(*transferInPrice);
    }
    if (yourCurrentBid) {
      res["YourCurrentBid"] = boost::any(*yourCurrentBid);
    }
    if (yourMaxBid) {
      res["YourMaxBid"] = boost::any(*yourMaxBid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionEndTime") != m.end() && !m["AuctionEndTime"].empty()) {
      auctionEndTime = make_shared<long>(boost::any_cast<long>(m["AuctionEndTime"]));
    }
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("BookEndTime") != m.end() && !m["BookEndTime"].empty()) {
      bookEndTime = make_shared<long>(boost::any_cast<long>(m["BookEndTime"]));
    }
    if (m.find("BookedPartner") != m.end() && !m["BookedPartner"].empty()) {
      bookedPartner = make_shared<string>(boost::any_cast<string>(m["BookedPartner"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<long>(boost::any_cast<long>(m["DeliveryTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("FailCode") != m.end() && !m["FailCode"].empty()) {
      failCode = make_shared<string>(boost::any_cast<string>(m["FailCode"]));
    }
    if (m.find("HighBid") != m.end() && !m["HighBid"].empty()) {
      highBid = make_shared<double>(boost::any_cast<double>(m["HighBid"]));
    }
    if (m.find("HighBidder") != m.end() && !m["HighBidder"].empty()) {
      highBidder = make_shared<string>(boost::any_cast<string>(m["HighBidder"]));
    }
    if (m.find("NextValidBid") != m.end() && !m["NextValidBid"].empty()) {
      nextValidBid = make_shared<double>(boost::any_cast<double>(m["NextValidBid"]));
    }
    if (m.find("PartnerType") != m.end() && !m["PartnerType"].empty()) {
      partnerType = make_shared<string>(boost::any_cast<string>(m["PartnerType"]));
    }
    if (m.find("PayEndTime") != m.end() && !m["PayEndTime"].empty()) {
      payEndTime = make_shared<long>(boost::any_cast<long>(m["PayEndTime"]));
    }
    if (m.find("PayPrice") != m.end() && !m["PayPrice"].empty()) {
      payPrice = make_shared<double>(boost::any_cast<double>(m["PayPrice"]));
    }
    if (m.find("PayStatus") != m.end() && !m["PayStatus"].empty()) {
      payStatus = make_shared<string>(boost::any_cast<string>(m["PayStatus"]));
    }
    if (m.find("ProduceStatus") != m.end() && !m["ProduceStatus"].empty()) {
      produceStatus = make_shared<string>(boost::any_cast<string>(m["ProduceStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReserveMet") != m.end() && !m["ReserveMet"].empty()) {
      reserveMet = make_shared<bool>(boost::any_cast<bool>(m["ReserveMet"]));
    }
    if (m.find("ReservePrice") != m.end() && !m["ReservePrice"].empty()) {
      reservePrice = make_shared<double>(boost::any_cast<double>(m["ReservePrice"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransferInPrice") != m.end() && !m["TransferInPrice"].empty()) {
      transferInPrice = make_shared<double>(boost::any_cast<double>(m["TransferInPrice"]));
    }
    if (m.find("YourCurrentBid") != m.end() && !m["YourCurrentBid"].empty()) {
      yourCurrentBid = make_shared<double>(boost::any_cast<double>(m["YourCurrentBid"]));
    }
    if (m.find("YourMaxBid") != m.end() && !m["YourMaxBid"].empty()) {
      yourMaxBid = make_shared<double>(boost::any_cast<double>(m["YourMaxBid"]));
    }
  }


  virtual ~QueryAuctionDetailResponseBody() = default;
};
class QueryAuctionDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAuctionDetailResponseBody> body{};

  QueryAuctionDetailResponse() {}

  explicit QueryAuctionDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryAuctionDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAuctionDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAuctionDetailResponse() = default;
};
class QueryAuctionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> auctionEndTimeOrder{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};
  shared_ptr<string> statuses{};

  QueryAuctionsRequest() {}

  explicit QueryAuctionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionEndTimeOrder) {
      res["AuctionEndTimeOrder"] = boost::any(*auctionEndTimeOrder);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionEndTimeOrder") != m.end() && !m["AuctionEndTimeOrder"].empty()) {
      auctionEndTimeOrder = make_shared<string>(boost::any_cast<string>(m["AuctionEndTimeOrder"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      statuses = make_shared<string>(boost::any_cast<string>(m["Statuses"]));
    }
  }


  virtual ~QueryAuctionsRequest() = default;
};
class QueryAuctionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> auctionEndTime{};
  shared_ptr<string> auctionId{};
  shared_ptr<long> bookEndTime{};
  shared_ptr<string> bookedPartner{};
  shared_ptr<string> currency{};
  shared_ptr<long> deliveryTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainType{};
  shared_ptr<string> failCode{};
  shared_ptr<double> highBid{};
  shared_ptr<string> highBidder{};
  shared_ptr<double> nextValidBid{};
  shared_ptr<string> partnerType{};
  shared_ptr<long> payEndTime{};
  shared_ptr<double> payPrice{};
  shared_ptr<string> payStatus{};
  shared_ptr<string> produceStatus{};
  shared_ptr<long> reserveMax{};
  shared_ptr<bool> reserveMet{};
  shared_ptr<long> reserveMin{};
  shared_ptr<long> reservePrice{};
  shared_ptr<string> status{};
  shared_ptr<double> transferInPrice{};
  shared_ptr<double> yourCurrentBid{};
  shared_ptr<double> yourMaxBid{};

  QueryAuctionsResponseBodyData() {}

  explicit QueryAuctionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionEndTime) {
      res["AuctionEndTime"] = boost::any(*auctionEndTime);
    }
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (bookEndTime) {
      res["BookEndTime"] = boost::any(*bookEndTime);
    }
    if (bookedPartner) {
      res["BookedPartner"] = boost::any(*bookedPartner);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (failCode) {
      res["FailCode"] = boost::any(*failCode);
    }
    if (highBid) {
      res["HighBid"] = boost::any(*highBid);
    }
    if (highBidder) {
      res["HighBidder"] = boost::any(*highBidder);
    }
    if (nextValidBid) {
      res["NextValidBid"] = boost::any(*nextValidBid);
    }
    if (partnerType) {
      res["PartnerType"] = boost::any(*partnerType);
    }
    if (payEndTime) {
      res["PayEndTime"] = boost::any(*payEndTime);
    }
    if (payPrice) {
      res["PayPrice"] = boost::any(*payPrice);
    }
    if (payStatus) {
      res["PayStatus"] = boost::any(*payStatus);
    }
    if (produceStatus) {
      res["ProduceStatus"] = boost::any(*produceStatus);
    }
    if (reserveMax) {
      res["ReserveMax"] = boost::any(*reserveMax);
    }
    if (reserveMet) {
      res["ReserveMet"] = boost::any(*reserveMet);
    }
    if (reserveMin) {
      res["ReserveMin"] = boost::any(*reserveMin);
    }
    if (reservePrice) {
      res["ReservePrice"] = boost::any(*reservePrice);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transferInPrice) {
      res["TransferInPrice"] = boost::any(*transferInPrice);
    }
    if (yourCurrentBid) {
      res["YourCurrentBid"] = boost::any(*yourCurrentBid);
    }
    if (yourMaxBid) {
      res["YourMaxBid"] = boost::any(*yourMaxBid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionEndTime") != m.end() && !m["AuctionEndTime"].empty()) {
      auctionEndTime = make_shared<long>(boost::any_cast<long>(m["AuctionEndTime"]));
    }
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("BookEndTime") != m.end() && !m["BookEndTime"].empty()) {
      bookEndTime = make_shared<long>(boost::any_cast<long>(m["BookEndTime"]));
    }
    if (m.find("BookedPartner") != m.end() && !m["BookedPartner"].empty()) {
      bookedPartner = make_shared<string>(boost::any_cast<string>(m["BookedPartner"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<long>(boost::any_cast<long>(m["DeliveryTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("FailCode") != m.end() && !m["FailCode"].empty()) {
      failCode = make_shared<string>(boost::any_cast<string>(m["FailCode"]));
    }
    if (m.find("HighBid") != m.end() && !m["HighBid"].empty()) {
      highBid = make_shared<double>(boost::any_cast<double>(m["HighBid"]));
    }
    if (m.find("HighBidder") != m.end() && !m["HighBidder"].empty()) {
      highBidder = make_shared<string>(boost::any_cast<string>(m["HighBidder"]));
    }
    if (m.find("NextValidBid") != m.end() && !m["NextValidBid"].empty()) {
      nextValidBid = make_shared<double>(boost::any_cast<double>(m["NextValidBid"]));
    }
    if (m.find("PartnerType") != m.end() && !m["PartnerType"].empty()) {
      partnerType = make_shared<string>(boost::any_cast<string>(m["PartnerType"]));
    }
    if (m.find("PayEndTime") != m.end() && !m["PayEndTime"].empty()) {
      payEndTime = make_shared<long>(boost::any_cast<long>(m["PayEndTime"]));
    }
    if (m.find("PayPrice") != m.end() && !m["PayPrice"].empty()) {
      payPrice = make_shared<double>(boost::any_cast<double>(m["PayPrice"]));
    }
    if (m.find("PayStatus") != m.end() && !m["PayStatus"].empty()) {
      payStatus = make_shared<string>(boost::any_cast<string>(m["PayStatus"]));
    }
    if (m.find("ProduceStatus") != m.end() && !m["ProduceStatus"].empty()) {
      produceStatus = make_shared<string>(boost::any_cast<string>(m["ProduceStatus"]));
    }
    if (m.find("ReserveMax") != m.end() && !m["ReserveMax"].empty()) {
      reserveMax = make_shared<long>(boost::any_cast<long>(m["ReserveMax"]));
    }
    if (m.find("ReserveMet") != m.end() && !m["ReserveMet"].empty()) {
      reserveMet = make_shared<bool>(boost::any_cast<bool>(m["ReserveMet"]));
    }
    if (m.find("ReserveMin") != m.end() && !m["ReserveMin"].empty()) {
      reserveMin = make_shared<long>(boost::any_cast<long>(m["ReserveMin"]));
    }
    if (m.find("ReservePrice") != m.end() && !m["ReservePrice"].empty()) {
      reservePrice = make_shared<long>(boost::any_cast<long>(m["ReservePrice"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransferInPrice") != m.end() && !m["TransferInPrice"].empty()) {
      transferInPrice = make_shared<double>(boost::any_cast<double>(m["TransferInPrice"]));
    }
    if (m.find("YourCurrentBid") != m.end() && !m["YourCurrentBid"].empty()) {
      yourCurrentBid = make_shared<double>(boost::any_cast<double>(m["YourCurrentBid"]));
    }
    if (m.find("YourMaxBid") != m.end() && !m["YourMaxBid"].empty()) {
      yourMaxBid = make_shared<double>(boost::any_cast<double>(m["YourMaxBid"]));
    }
  }


  virtual ~QueryAuctionsResponseBodyData() = default;
};
class QueryAuctionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<QueryAuctionsResponseBodyData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryAuctionsResponseBody() {}

  explicit QueryAuctionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryAuctionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAuctionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryAuctionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryAuctionsResponseBody() = default;
};
class QueryAuctionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAuctionsResponseBody> body{};

  QueryAuctionsResponse() {}

  explicit QueryAuctionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryAuctionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAuctionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAuctionsResponse() = default;
};
class QueryBidRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> auctionId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  QueryBidRecordsRequest() {}

  explicit QueryBidRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryBidRecordsRequest() = default;
};
class QueryBidRecordsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> bid{};
  shared_ptr<long> bidTime{};
  shared_ptr<string> bidder{};
  shared_ptr<string> currency{};
  shared_ptr<string> domainName{};

  QueryBidRecordsResponseBodyData() {}

  explicit QueryBidRecordsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (bidTime) {
      res["BidTime"] = boost::any(*bidTime);
    }
    if (bidder) {
      res["Bidder"] = boost::any(*bidder);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<double>(boost::any_cast<double>(m["Bid"]));
    }
    if (m.find("BidTime") != m.end() && !m["BidTime"].empty()) {
      bidTime = make_shared<long>(boost::any_cast<long>(m["BidTime"]));
    }
    if (m.find("Bidder") != m.end() && !m["Bidder"].empty()) {
      bidder = make_shared<string>(boost::any_cast<string>(m["Bidder"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~QueryBidRecordsResponseBodyData() = default;
};
class QueryBidRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<QueryBidRecordsResponseBodyData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryBidRecordsResponseBody() {}

  explicit QueryBidRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryBidRecordsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBidRecordsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryBidRecordsResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryBidRecordsResponseBody() = default;
};
class QueryBidRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBidRecordsResponseBody> body{};

  QueryBidRecordsResponse() {}

  explicit QueryBidRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBidRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBidRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBidRecordsResponse() = default;
};
class QueryBookingDomainInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};

  QueryBookingDomainInfoRequest() {}

  explicit QueryBookingDomainInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~QueryBookingDomainInfoRequest() = default;
};
class QueryBookingDomainInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> auctionId{};
  shared_ptr<long> bookEndTime{};
  shared_ptr<string> currency{};
  shared_ptr<double> maxBid{};
  shared_ptr<string> partnerType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snatchNo{};
  shared_ptr<double> transferInPrice{};

  QueryBookingDomainInfoResponseBody() {}

  explicit QueryBookingDomainInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (bookEndTime) {
      res["BookEndTime"] = boost::any(*bookEndTime);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (maxBid) {
      res["MaxBid"] = boost::any(*maxBid);
    }
    if (partnerType) {
      res["PartnerType"] = boost::any(*partnerType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snatchNo) {
      res["SnatchNo"] = boost::any(*snatchNo);
    }
    if (transferInPrice) {
      res["TransferInPrice"] = boost::any(*transferInPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<long>(boost::any_cast<long>(m["AuctionId"]));
    }
    if (m.find("BookEndTime") != m.end() && !m["BookEndTime"].empty()) {
      bookEndTime = make_shared<long>(boost::any_cast<long>(m["BookEndTime"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("MaxBid") != m.end() && !m["MaxBid"].empty()) {
      maxBid = make_shared<double>(boost::any_cast<double>(m["MaxBid"]));
    }
    if (m.find("PartnerType") != m.end() && !m["PartnerType"].empty()) {
      partnerType = make_shared<string>(boost::any_cast<string>(m["PartnerType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnatchNo") != m.end() && !m["SnatchNo"].empty()) {
      snatchNo = make_shared<string>(boost::any_cast<string>(m["SnatchNo"]));
    }
    if (m.find("TransferInPrice") != m.end() && !m["TransferInPrice"].empty()) {
      transferInPrice = make_shared<double>(boost::any_cast<double>(m["TransferInPrice"]));
    }
  }


  virtual ~QueryBookingDomainInfoResponseBody() = default;
};
class QueryBookingDomainInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBookingDomainInfoResponseBody> body{};

  QueryBookingDomainInfoResponse() {}

  explicit QueryBookingDomainInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBookingDomainInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBookingDomainInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBookingDomainInfoResponse() = default;
};
class QueryBrokerDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  QueryBrokerDemandRequest() {}

  explicit QueryBrokerDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryBrokerDemandRequest() = default;
};
class QueryBrokerDemandResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<string> bargainSellerMobile{};
  shared_ptr<double> bargainSellerPrice{};
  shared_ptr<string> bizId{};
  shared_ptr<string> demandDomain{};
  shared_ptr<double> demandPrice{};
  shared_ptr<string> description{};
  shared_ptr<string> email{};
  shared_ptr<string> mobile{};
  shared_ptr<long> orderType{};
  shared_ptr<string> partnerDomain{};
  shared_ptr<string> payDomain{};
  shared_ptr<double> payPrice{};
  shared_ptr<long> payTime{};
  shared_ptr<long> produceType{};
  shared_ptr<long> publishTime{};
  shared_ptr<long> purchaseStatus{};
  shared_ptr<double> servicePayPrice{};
  shared_ptr<double> settleBasePrice{};
  shared_ptr<string> status{};

  QueryBrokerDemandResponseBodyData() {}

  explicit QueryBrokerDemandResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (bargainSellerMobile) {
      res["BargainSellerMobile"] = boost::any(*bargainSellerMobile);
    }
    if (bargainSellerPrice) {
      res["BargainSellerPrice"] = boost::any(*bargainSellerPrice);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (demandDomain) {
      res["DemandDomain"] = boost::any(*demandDomain);
    }
    if (demandPrice) {
      res["DemandPrice"] = boost::any(*demandPrice);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (partnerDomain) {
      res["PartnerDomain"] = boost::any(*partnerDomain);
    }
    if (payDomain) {
      res["PayDomain"] = boost::any(*payDomain);
    }
    if (payPrice) {
      res["PayPrice"] = boost::any(*payPrice);
    }
    if (payTime) {
      res["PayTime"] = boost::any(*payTime);
    }
    if (produceType) {
      res["ProduceType"] = boost::any(*produceType);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (purchaseStatus) {
      res["PurchaseStatus"] = boost::any(*purchaseStatus);
    }
    if (servicePayPrice) {
      res["ServicePayPrice"] = boost::any(*servicePayPrice);
    }
    if (settleBasePrice) {
      res["SettleBasePrice"] = boost::any(*settleBasePrice);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("BargainSellerMobile") != m.end() && !m["BargainSellerMobile"].empty()) {
      bargainSellerMobile = make_shared<string>(boost::any_cast<string>(m["BargainSellerMobile"]));
    }
    if (m.find("BargainSellerPrice") != m.end() && !m["BargainSellerPrice"].empty()) {
      bargainSellerPrice = make_shared<double>(boost::any_cast<double>(m["BargainSellerPrice"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("DemandDomain") != m.end() && !m["DemandDomain"].empty()) {
      demandDomain = make_shared<string>(boost::any_cast<string>(m["DemandDomain"]));
    }
    if (m.find("DemandPrice") != m.end() && !m["DemandPrice"].empty()) {
      demandPrice = make_shared<double>(boost::any_cast<double>(m["DemandPrice"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<long>(boost::any_cast<long>(m["OrderType"]));
    }
    if (m.find("PartnerDomain") != m.end() && !m["PartnerDomain"].empty()) {
      partnerDomain = make_shared<string>(boost::any_cast<string>(m["PartnerDomain"]));
    }
    if (m.find("PayDomain") != m.end() && !m["PayDomain"].empty()) {
      payDomain = make_shared<string>(boost::any_cast<string>(m["PayDomain"]));
    }
    if (m.find("PayPrice") != m.end() && !m["PayPrice"].empty()) {
      payPrice = make_shared<double>(boost::any_cast<double>(m["PayPrice"]));
    }
    if (m.find("PayTime") != m.end() && !m["PayTime"].empty()) {
      payTime = make_shared<long>(boost::any_cast<long>(m["PayTime"]));
    }
    if (m.find("ProduceType") != m.end() && !m["ProduceType"].empty()) {
      produceType = make_shared<long>(boost::any_cast<long>(m["ProduceType"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<long>(boost::any_cast<long>(m["PublishTime"]));
    }
    if (m.find("PurchaseStatus") != m.end() && !m["PurchaseStatus"].empty()) {
      purchaseStatus = make_shared<long>(boost::any_cast<long>(m["PurchaseStatus"]));
    }
    if (m.find("ServicePayPrice") != m.end() && !m["ServicePayPrice"].empty()) {
      servicePayPrice = make_shared<double>(boost::any_cast<double>(m["ServicePayPrice"]));
    }
    if (m.find("SettleBasePrice") != m.end() && !m["SettleBasePrice"].empty()) {
      settleBasePrice = make_shared<double>(boost::any_cast<double>(m["SettleBasePrice"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryBrokerDemandResponseBodyData() = default;
};
class QueryBrokerDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<QueryBrokerDemandResponseBodyData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryBrokerDemandResponseBody() {}

  explicit QueryBrokerDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryBrokerDemandResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBrokerDemandResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryBrokerDemandResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryBrokerDemandResponseBody() = default;
};
class QueryBrokerDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBrokerDemandResponseBody> body{};

  QueryBrokerDemandResponse() {}

  explicit QueryBrokerDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBrokerDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBrokerDemandResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBrokerDemandResponse() = default;
};
class QueryBrokerDemandRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  QueryBrokerDemandRecordRequest() {}

  explicit QueryBrokerDemandRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryBrokerDemandRecordRequest() = default;
};
class QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};

  QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord() {}

  explicit QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord() = default;
};
class QueryBrokerDemandRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord>> brokerDemandRecord{};

  QueryBrokerDemandRecordResponseBodyData() {}

  explicit QueryBrokerDemandRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerDemandRecord) {
      vector<boost::any> temp1;
      for(auto item1:*brokerDemandRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BrokerDemandRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrokerDemandRecord") != m.end() && !m["BrokerDemandRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["BrokerDemandRecord"].type()) {
        vector<QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BrokerDemandRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        brokerDemandRecord = make_shared<vector<QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord>>(expect1);
      }
    }
  }


  virtual ~QueryBrokerDemandRecordResponseBodyData() = default;
};
class QueryBrokerDemandRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<QueryBrokerDemandRecordResponseBodyData> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryBrokerDemandRecordResponseBody() {}

  explicit QueryBrokerDemandRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryBrokerDemandRecordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryBrokerDemandRecordResponseBodyData>(model1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryBrokerDemandRecordResponseBody() = default;
};
class QueryBrokerDemandRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBrokerDemandRecordResponseBody> body{};

  QueryBrokerDemandRecordResponse() {}

  explicit QueryBrokerDemandRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBrokerDemandRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBrokerDemandRecordResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBrokerDemandRecordResponse() = default;
};
class QueryDomainTransferStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};

  QueryDomainTransferStatusRequest() {}

  explicit QueryDomainTransferStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~QueryDomainTransferStatusRequest() = default;
};
class QueryDomainTransferStatusResponseBodyDomainTransferStatus : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatusDescription{};

  QueryDomainTransferStatusResponseBodyDomainTransferStatus() {}

  explicit QueryDomainTransferStatusResponseBodyDomainTransferStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatusDescription) {
      res["DomainStatusDescription"] = boost::any(*domainStatusDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatusDescription") != m.end() && !m["DomainStatusDescription"].empty()) {
      domainStatusDescription = make_shared<string>(boost::any_cast<string>(m["DomainStatusDescription"]));
    }
  }


  virtual ~QueryDomainTransferStatusResponseBodyDomainTransferStatus() = default;
};
class QueryDomainTransferStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus>> domainTransferStatus{};
  shared_ptr<string> requestId{};

  QueryDomainTransferStatusResponseBody() {}

  explicit QueryDomainTransferStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainTransferStatus) {
      vector<boost::any> temp1;
      for(auto item1:*domainTransferStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainTransferStatus"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainTransferStatus") != m.end() && !m["DomainTransferStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainTransferStatus"].type()) {
        vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainTransferStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDomainTransferStatusResponseBodyDomainTransferStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainTransferStatus = make_shared<vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDomainTransferStatusResponseBody() = default;
};
class QueryDomainTransferStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainTransferStatusResponseBody> body{};

  QueryDomainTransferStatusResponse() {}

  explicit QueryDomainTransferStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainTransferStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainTransferStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainTransferStatusResponse() = default;
};
class QueryPurchasedDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endOperationTime{};
  shared_ptr<bool> opTimeOrder{};
  shared_ptr<long> operationStatus{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> productType{};
  shared_ptr<string> startOperationTime{};
  shared_ptr<bool> updateTimeOrder{};

  QueryPurchasedDomainsRequest() {}

  explicit QueryPurchasedDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endOperationTime) {
      res["EndOperationTime"] = boost::any(*endOperationTime);
    }
    if (opTimeOrder) {
      res["OpTimeOrder"] = boost::any(*opTimeOrder);
    }
    if (operationStatus) {
      res["OperationStatus"] = boost::any(*operationStatus);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (startOperationTime) {
      res["StartOperationTime"] = boost::any(*startOperationTime);
    }
    if (updateTimeOrder) {
      res["UpdateTimeOrder"] = boost::any(*updateTimeOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndOperationTime") != m.end() && !m["EndOperationTime"].empty()) {
      endOperationTime = make_shared<string>(boost::any_cast<string>(m["EndOperationTime"]));
    }
    if (m.find("OpTimeOrder") != m.end() && !m["OpTimeOrder"].empty()) {
      opTimeOrder = make_shared<bool>(boost::any_cast<bool>(m["OpTimeOrder"]));
    }
    if (m.find("OperationStatus") != m.end() && !m["OperationStatus"].empty()) {
      operationStatus = make_shared<long>(boost::any_cast<long>(m["OperationStatus"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["ProductType"]));
    }
    if (m.find("StartOperationTime") != m.end() && !m["StartOperationTime"].empty()) {
      startOperationTime = make_shared<string>(boost::any_cast<string>(m["StartOperationTime"]));
    }
    if (m.find("UpdateTimeOrder") != m.end() && !m["UpdateTimeOrder"].empty()) {
      updateTimeOrder = make_shared<bool>(boost::any_cast<bool>(m["UpdateTimeOrder"]));
    }
  }


  virtual ~QueryPurchasedDomainsRequest() = default;
};
class QueryPurchasedDomainsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deliveryTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> operationStatus{};
  shared_ptr<string> operationTime{};
  shared_ptr<string> productType{};
  shared_ptr<double> tradeMoney{};

  QueryPurchasedDomainsResponseBodyData() {}

  explicit QueryPurchasedDomainsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (operationStatus) {
      res["OperationStatus"] = boost::any(*operationStatus);
    }
    if (operationTime) {
      res["OperationTime"] = boost::any(*operationTime);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (tradeMoney) {
      res["TradeMoney"] = boost::any(*tradeMoney);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<string>(boost::any_cast<string>(m["DeliveryTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("OperationStatus") != m.end() && !m["OperationStatus"].empty()) {
      operationStatus = make_shared<string>(boost::any_cast<string>(m["OperationStatus"]));
    }
    if (m.find("OperationTime") != m.end() && !m["OperationTime"].empty()) {
      operationTime = make_shared<string>(boost::any_cast<string>(m["OperationTime"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("TradeMoney") != m.end() && !m["TradeMoney"].empty()) {
      tradeMoney = make_shared<double>(boost::any_cast<double>(m["TradeMoney"]));
    }
  }


  virtual ~QueryPurchasedDomainsResponseBodyData() = default;
};
class QueryPurchasedDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<QueryPurchasedDomainsResponseBodyData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryPurchasedDomainsResponseBody() {}

  explicit QueryPurchasedDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryPurchasedDomainsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPurchasedDomainsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryPurchasedDomainsResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryPurchasedDomainsResponseBody() = default;
};
class QueryPurchasedDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPurchasedDomainsResponseBody> body{};

  QueryPurchasedDomainsResponse() {}

  explicit QueryPurchasedDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPurchasedDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPurchasedDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPurchasedDomainsResponse() = default;
};
class RecordDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> message{};

  RecordDemandRequest() {}

  explicit RecordDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~RecordDemandRequest() = default;
};
class RecordDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RecordDemandResponseBody() {}

  explicit RecordDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecordDemandResponseBody() = default;
};
class RecordDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecordDemandResponseBody> body{};

  RecordDemandResponse() {}

  explicit RecordDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecordDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecordDemandResponseBody>(model1);
      }
    }
  }


  virtual ~RecordDemandResponse() = default;
};
class RefuseDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> message{};

  RefuseDemandRequest() {}

  explicit RefuseDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~RefuseDemandRequest() = default;
};
class RefuseDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RefuseDemandResponseBody() {}

  explicit RefuseDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefuseDemandResponseBody() = default;
};
class RefuseDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefuseDemandResponseBody> body{};

  RefuseDemandResponse() {}

  explicit RefuseDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefuseDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefuseDemandResponseBody>(model1);
      }
    }
  }


  virtual ~RefuseDemandResponse() = default;
};
class RequestPayDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> message{};
  shared_ptr<double> price{};
  shared_ptr<long> produceType{};

  RequestPayDemandRequest() {}

  explicit RequestPayDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (produceType) {
      res["ProduceType"] = boost::any(*produceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("ProduceType") != m.end() && !m["ProduceType"].empty()) {
      produceType = make_shared<long>(boost::any_cast<long>(m["ProduceType"]));
    }
  }


  virtual ~RequestPayDemandRequest() = default;
};
class RequestPayDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RequestPayDemandResponseBody() {}

  explicit RequestPayDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RequestPayDemandResponseBody() = default;
};
class RequestPayDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestPayDemandResponseBody> body{};

  RequestPayDemandResponse() {}

  explicit RequestPayDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RequestPayDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestPayDemandResponseBody>(model1);
      }
    }
  }


  virtual ~RequestPayDemandResponse() = default;
};
class ReserveDomainRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> channels{};
  shared_ptr<string> domainName{};

  ReserveDomainRequest() {}

  explicit ReserveDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channels) {
      res["Channels"] = boost::any(*channels);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~ReserveDomainRequest() = default;
};
class ReserveDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> auctionId{};
  shared_ptr<string> requestId{};

  ReserveDomainResponseBody() {}

  explicit ReserveDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReserveDomainResponseBody() = default;
};
class ReserveDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReserveDomainResponseBody> body{};

  ReserveDomainResponse() {}

  explicit ReserveDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReserveDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReserveDomainResponseBody>(model1);
      }
    }
  }


  virtual ~ReserveDomainResponse() = default;
};
class ReserveIntlDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};

  ReserveIntlDomainRequest() {}

  explicit ReserveIntlDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~ReserveIntlDomainRequest() = default;
};
class ReserveIntlDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> auctionId{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<boost::any>> errorArgs{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReserveIntlDomainResponseBody() {}

  explicit ReserveIntlDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (auctionId) {
      res["AuctionId"] = boost::any(*auctionId);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorArgs) {
      res["ErrorArgs"] = boost::any(*errorArgs);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AuctionId") != m.end() && !m["AuctionId"].empty()) {
      auctionId = make_shared<string>(boost::any_cast<string>(m["AuctionId"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorArgs") != m.end() && !m["ErrorArgs"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ErrorArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErrorArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      errorArgs = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReserveIntlDomainResponseBody() = default;
};
class ReserveIntlDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReserveIntlDomainResponseBody> body{};

  ReserveIntlDomainResponse() {}

  explicit ReserveIntlDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReserveIntlDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReserveIntlDomainResponseBody>(model1);
      }
    }
  }


  virtual ~ReserveIntlDomainResponse() = default;
};
class SelectedDomainListRequest : public Darabonba::Model {
public:
  shared_ptr<string> listDate{};

  SelectedDomainListRequest() {}

  explicit SelectedDomainListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listDate) {
      res["ListDate"] = boost::any(*listDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListDate") != m.end() && !m["ListDate"].empty()) {
      listDate = make_shared<string>(boost::any_cast<string>(m["ListDate"]));
    }
  }


  virtual ~SelectedDomainListRequest() = default;
};
class SelectedDomainListResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> downloadUrl{};

  SelectedDomainListResponseBodyModule() {}

  explicit SelectedDomainListResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
  }


  virtual ~SelectedDomainListResponseBodyModule() = default;
};
class SelectedDomainListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<SelectedDomainListResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SelectedDomainListResponseBody() {}

  explicit SelectedDomainListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        SelectedDomainListResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<SelectedDomainListResponseBodyModule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SelectedDomainListResponseBody() = default;
};
class SelectedDomainListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SelectedDomainListResponseBody> body{};

  SelectedDomainListResponse() {}

  explicit SelectedDomainListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SelectedDomainListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SelectedDomainListResponseBody>(model1);
      }
    }
  }


  virtual ~SelectedDomainListResponse() = default;
};
class SubmitPurchaseInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> purchaseCurrency{};
  shared_ptr<double> purchasePrice{};
  shared_ptr<vector<string>> purchaseProofs{};

  SubmitPurchaseInfoRequest() {}

  explicit SubmitPurchaseInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (purchaseCurrency) {
      res["PurchaseCurrency"] = boost::any(*purchaseCurrency);
    }
    if (purchasePrice) {
      res["PurchasePrice"] = boost::any(*purchasePrice);
    }
    if (purchaseProofs) {
      res["PurchaseProofs"] = boost::any(*purchaseProofs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("PurchaseCurrency") != m.end() && !m["PurchaseCurrency"].empty()) {
      purchaseCurrency = make_shared<string>(boost::any_cast<string>(m["PurchaseCurrency"]));
    }
    if (m.find("PurchasePrice") != m.end() && !m["PurchasePrice"].empty()) {
      purchasePrice = make_shared<double>(boost::any_cast<double>(m["PurchasePrice"]));
    }
    if (m.find("PurchaseProofs") != m.end() && !m["PurchaseProofs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PurchaseProofs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PurchaseProofs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      purchaseProofs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SubmitPurchaseInfoRequest() = default;
};
class SubmitPurchaseInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<boost::any>> errorArgs{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<boost::any> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitPurchaseInfoResponseBody() {}

  explicit SubmitPurchaseInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorArgs) {
      res["ErrorArgs"] = boost::any(*errorArgs);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorArgs") != m.end() && !m["ErrorArgs"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ErrorArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErrorArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      errorArgs = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<boost::any>(boost::any_cast<boost::any>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitPurchaseInfoResponseBody() = default;
};
class SubmitPurchaseInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitPurchaseInfoResponseBody> body{};

  SubmitPurchaseInfoResponse() {}

  explicit SubmitPurchaseInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitPurchaseInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitPurchaseInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitPurchaseInfoResponse() = default;
};
class UpdatePartnerReservePriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> biddingId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> partnerType{};
  shared_ptr<double> reservePrice{};

  UpdatePartnerReservePriceRequest() {}

  explicit UpdatePartnerReservePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (biddingId) {
      res["BiddingId"] = boost::any(*biddingId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (partnerType) {
      res["PartnerType"] = boost::any(*partnerType);
    }
    if (reservePrice) {
      res["ReservePrice"] = boost::any(*reservePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BiddingId") != m.end() && !m["BiddingId"].empty()) {
      biddingId = make_shared<long>(boost::any_cast<long>(m["BiddingId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("PartnerType") != m.end() && !m["PartnerType"].empty()) {
      partnerType = make_shared<string>(boost::any_cast<string>(m["PartnerType"]));
    }
    if (m.find("ReservePrice") != m.end() && !m["ReservePrice"].empty()) {
      reservePrice = make_shared<double>(boost::any_cast<double>(m["ReservePrice"]));
    }
  }


  virtual ~UpdatePartnerReservePriceRequest() = default;
};
class UpdatePartnerReservePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdatePartnerReservePriceResponseBody() {}

  explicit UpdatePartnerReservePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePartnerReservePriceResponseBody() = default;
};
class UpdatePartnerReservePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePartnerReservePriceResponseBody> body{};

  UpdatePartnerReservePriceResponse() {}

  explicit UpdatePartnerReservePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePartnerReservePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePartnerReservePriceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePartnerReservePriceResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AcceptDemandResponse acceptDemandWithOptions(shared_ptr<AcceptDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AcceptDemandResponse acceptDemand(shared_ptr<AcceptDemandRequest> request);
  BidDomainResponse bidDomainWithOptions(shared_ptr<BidDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BidDomainResponse bidDomain(shared_ptr<BidDomainRequest> request);
  ChangeAuctionResponse changeAuctionWithOptions(shared_ptr<ChangeAuctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeAuctionResponse changeAuction(shared_ptr<ChangeAuctionRequest> request);
  CheckDomainStatusResponse checkDomainStatusWithOptions(shared_ptr<CheckDomainStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDomainStatusResponse checkDomainStatus(shared_ptr<CheckDomainStatusRequest> request);
  CheckSelectedDomainStatusResponse checkSelectedDomainStatusWithOptions(shared_ptr<CheckSelectedDomainStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckSelectedDomainStatusResponse checkSelectedDomainStatus(shared_ptr<CheckSelectedDomainStatusRequest> request);
  CreateFixedPriceDemandOrderResponse createFixedPriceDemandOrderWithOptions(shared_ptr<CreateFixedPriceDemandOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFixedPriceDemandOrderResponse createFixedPriceDemandOrder(shared_ptr<CreateFixedPriceDemandOrderRequest> request);
  CreateFixedPriceSelectedOrderResponse createFixedPriceSelectedOrderWithOptions(shared_ptr<CreateFixedPriceSelectedOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFixedPriceSelectedOrderResponse createFixedPriceSelectedOrder(shared_ptr<CreateFixedPriceSelectedOrderRequest> request);
  FailDemandResponse failDemandWithOptions(shared_ptr<FailDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FailDemandResponse failDemand(shared_ptr<FailDemandRequest> request);
  FinishDemandResponse finishDemandWithOptions(shared_ptr<FinishDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FinishDemandResponse finishDemand(shared_ptr<FinishDemandRequest> request);
  GetIntlDomainDownloadUrlResponse getIntlDomainDownloadUrlWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIntlDomainDownloadUrlResponse getIntlDomainDownloadUrl();
  GetReserveDomainUrlResponse getReserveDomainUrlWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReserveDomainUrlResponse getReserveDomainUrl();
  PurchaseIntlDomainResponse purchaseIntlDomainWithOptions(shared_ptr<PurchaseIntlDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PurchaseIntlDomainResponse purchaseIntlDomain(shared_ptr<PurchaseIntlDomainRequest> request);
  QueryAuctionDetailResponse queryAuctionDetailWithOptions(shared_ptr<QueryAuctionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAuctionDetailResponse queryAuctionDetail(shared_ptr<QueryAuctionDetailRequest> request);
  QueryAuctionsResponse queryAuctionsWithOptions(shared_ptr<QueryAuctionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAuctionsResponse queryAuctions(shared_ptr<QueryAuctionsRequest> request);
  QueryBidRecordsResponse queryBidRecordsWithOptions(shared_ptr<QueryBidRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBidRecordsResponse queryBidRecords(shared_ptr<QueryBidRecordsRequest> request);
  QueryBookingDomainInfoResponse queryBookingDomainInfoWithOptions(shared_ptr<QueryBookingDomainInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBookingDomainInfoResponse queryBookingDomainInfo(shared_ptr<QueryBookingDomainInfoRequest> request);
  QueryBrokerDemandResponse queryBrokerDemandWithOptions(shared_ptr<QueryBrokerDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBrokerDemandResponse queryBrokerDemand(shared_ptr<QueryBrokerDemandRequest> request);
  QueryBrokerDemandRecordResponse queryBrokerDemandRecordWithOptions(shared_ptr<QueryBrokerDemandRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBrokerDemandRecordResponse queryBrokerDemandRecord(shared_ptr<QueryBrokerDemandRecordRequest> request);
  QueryDomainTransferStatusResponse queryDomainTransferStatusWithOptions(shared_ptr<QueryDomainTransferStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainTransferStatusResponse queryDomainTransferStatus(shared_ptr<QueryDomainTransferStatusRequest> request);
  QueryPurchasedDomainsResponse queryPurchasedDomainsWithOptions(shared_ptr<QueryPurchasedDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPurchasedDomainsResponse queryPurchasedDomains(shared_ptr<QueryPurchasedDomainsRequest> request);
  RecordDemandResponse recordDemandWithOptions(shared_ptr<RecordDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecordDemandResponse recordDemand(shared_ptr<RecordDemandRequest> request);
  RefuseDemandResponse refuseDemandWithOptions(shared_ptr<RefuseDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefuseDemandResponse refuseDemand(shared_ptr<RefuseDemandRequest> request);
  RequestPayDemandResponse requestPayDemandWithOptions(shared_ptr<RequestPayDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestPayDemandResponse requestPayDemand(shared_ptr<RequestPayDemandRequest> request);
  ReserveDomainResponse reserveDomainWithOptions(shared_ptr<ReserveDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReserveDomainResponse reserveDomain(shared_ptr<ReserveDomainRequest> request);
  ReserveIntlDomainResponse reserveIntlDomainWithOptions(shared_ptr<ReserveIntlDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReserveIntlDomainResponse reserveIntlDomain(shared_ptr<ReserveIntlDomainRequest> request);
  SelectedDomainListResponse selectedDomainListWithOptions(shared_ptr<SelectedDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SelectedDomainListResponse selectedDomainList(shared_ptr<SelectedDomainListRequest> request);
  SubmitPurchaseInfoResponse submitPurchaseInfoWithOptions(shared_ptr<SubmitPurchaseInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitPurchaseInfoResponse submitPurchaseInfo(shared_ptr<SubmitPurchaseInfoRequest> request);
  UpdatePartnerReservePriceResponse updatePartnerReservePriceWithOptions(shared_ptr<UpdatePartnerReservePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePartnerReservePriceResponse updatePartnerReservePrice(shared_ptr<UpdatePartnerReservePriceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Domain20180208

#endif
