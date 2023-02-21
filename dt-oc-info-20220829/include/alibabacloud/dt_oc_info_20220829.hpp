// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DT-OC-INFO20220829_H_
#define ALIBABACLOUD_DT-OC-INFO20220829_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dt-oc-info20220829 {
class GetOcCompetitorsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcCompetitorsRequest() {}

  explicit GetOcCompetitorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcCompetitorsRequest() = default;
};
class GetOcCompetitorsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> competitionBrandIntroduction{};
  shared_ptr<string> competitionEntAddress{};
  shared_ptr<string> competitionEntEsDate{};
  shared_ptr<string> competitionEntFinTurn{};
  shared_ptr<string> competitionEntName{};
  shared_ptr<string> competitionIntroduction{};
  shared_ptr<string> competitionLogoUrl{};
  shared_ptr<string> competitionProductName{};
  shared_ptr<string> competitionTag{};
  shared_ptr<string> competitionWebsite{};
  shared_ptr<string> entName{};

  GetOcCompetitorsResponseBodyData() {}

  explicit GetOcCompetitorsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (competitionBrandIntroduction) {
      res["CompetitionBrandIntroduction"] = boost::any(*competitionBrandIntroduction);
    }
    if (competitionEntAddress) {
      res["CompetitionEntAddress"] = boost::any(*competitionEntAddress);
    }
    if (competitionEntEsDate) {
      res["CompetitionEntEsDate"] = boost::any(*competitionEntEsDate);
    }
    if (competitionEntFinTurn) {
      res["CompetitionEntFinTurn"] = boost::any(*competitionEntFinTurn);
    }
    if (competitionEntName) {
      res["CompetitionEntName"] = boost::any(*competitionEntName);
    }
    if (competitionIntroduction) {
      res["CompetitionIntroduction"] = boost::any(*competitionIntroduction);
    }
    if (competitionLogoUrl) {
      res["CompetitionLogoUrl"] = boost::any(*competitionLogoUrl);
    }
    if (competitionProductName) {
      res["CompetitionProductName"] = boost::any(*competitionProductName);
    }
    if (competitionTag) {
      res["CompetitionTag"] = boost::any(*competitionTag);
    }
    if (competitionWebsite) {
      res["CompetitionWebsite"] = boost::any(*competitionWebsite);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompetitionBrandIntroduction") != m.end() && !m["CompetitionBrandIntroduction"].empty()) {
      competitionBrandIntroduction = make_shared<string>(boost::any_cast<string>(m["CompetitionBrandIntroduction"]));
    }
    if (m.find("CompetitionEntAddress") != m.end() && !m["CompetitionEntAddress"].empty()) {
      competitionEntAddress = make_shared<string>(boost::any_cast<string>(m["CompetitionEntAddress"]));
    }
    if (m.find("CompetitionEntEsDate") != m.end() && !m["CompetitionEntEsDate"].empty()) {
      competitionEntEsDate = make_shared<string>(boost::any_cast<string>(m["CompetitionEntEsDate"]));
    }
    if (m.find("CompetitionEntFinTurn") != m.end() && !m["CompetitionEntFinTurn"].empty()) {
      competitionEntFinTurn = make_shared<string>(boost::any_cast<string>(m["CompetitionEntFinTurn"]));
    }
    if (m.find("CompetitionEntName") != m.end() && !m["CompetitionEntName"].empty()) {
      competitionEntName = make_shared<string>(boost::any_cast<string>(m["CompetitionEntName"]));
    }
    if (m.find("CompetitionIntroduction") != m.end() && !m["CompetitionIntroduction"].empty()) {
      competitionIntroduction = make_shared<string>(boost::any_cast<string>(m["CompetitionIntroduction"]));
    }
    if (m.find("CompetitionLogoUrl") != m.end() && !m["CompetitionLogoUrl"].empty()) {
      competitionLogoUrl = make_shared<string>(boost::any_cast<string>(m["CompetitionLogoUrl"]));
    }
    if (m.find("CompetitionProductName") != m.end() && !m["CompetitionProductName"].empty()) {
      competitionProductName = make_shared<string>(boost::any_cast<string>(m["CompetitionProductName"]));
    }
    if (m.find("CompetitionTag") != m.end() && !m["CompetitionTag"].empty()) {
      competitionTag = make_shared<string>(boost::any_cast<string>(m["CompetitionTag"]));
    }
    if (m.find("CompetitionWebsite") != m.end() && !m["CompetitionWebsite"].empty()) {
      competitionWebsite = make_shared<string>(boost::any_cast<string>(m["CompetitionWebsite"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
  }


  virtual ~GetOcCompetitorsResponseBodyData() = default;
};
class GetOcCompetitorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcCompetitorsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcCompetitorsResponseBody() {}

  explicit GetOcCompetitorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcCompetitorsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcCompetitorsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcCompetitorsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcCompetitorsResponseBody() = default;
};
class GetOcCompetitorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcCompetitorsResponseBody> body{};

  GetOcCompetitorsResponse() {}

  explicit GetOcCompetitorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcCompetitorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcCompetitorsResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcCompetitorsResponse() = default;
};
class GetOcCoreTeamsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcCoreTeamsRequest() {}

  explicit GetOcCoreTeamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcCoreTeamsRequest() = default;
};
class GetOcCoreTeamsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> entName{};
  shared_ptr<string> memberIntroduction{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberPosition{};

  GetOcCoreTeamsResponseBodyData() {}

  explicit GetOcCoreTeamsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (memberIntroduction) {
      res["MemberIntroduction"] = boost::any(*memberIntroduction);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberPosition) {
      res["MemberPosition"] = boost::any(*memberPosition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("MemberIntroduction") != m.end() && !m["MemberIntroduction"].empty()) {
      memberIntroduction = make_shared<string>(boost::any_cast<string>(m["MemberIntroduction"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberPosition") != m.end() && !m["MemberPosition"].empty()) {
      memberPosition = make_shared<string>(boost::any_cast<string>(m["MemberPosition"]));
    }
  }


  virtual ~GetOcCoreTeamsResponseBodyData() = default;
};
class GetOcCoreTeamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcCoreTeamsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcCoreTeamsResponseBody() {}

  explicit GetOcCoreTeamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcCoreTeamsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcCoreTeamsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcCoreTeamsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcCoreTeamsResponseBody() = default;
};
class GetOcCoreTeamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcCoreTeamsResponseBody> body{};

  GetOcCoreTeamsResponse() {}

  explicit GetOcCoreTeamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcCoreTeamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcCoreTeamsResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcCoreTeamsResponse() = default;
};
class GetOcFinancingRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcFinancingRequest() {}

  explicit GetOcFinancingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcFinancingRequest() = default;
};
class GetOcFinancingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> entName{};
  shared_ptr<string> finAmount{};
  shared_ptr<string> finDate{};
  shared_ptr<string> finTurn{};
  shared_ptr<string> investors{};

  GetOcFinancingResponseBodyData() {}

  explicit GetOcFinancingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (finAmount) {
      res["FinAmount"] = boost::any(*finAmount);
    }
    if (finDate) {
      res["FinDate"] = boost::any(*finDate);
    }
    if (finTurn) {
      res["FinTurn"] = boost::any(*finTurn);
    }
    if (investors) {
      res["Investors"] = boost::any(*investors);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("FinAmount") != m.end() && !m["FinAmount"].empty()) {
      finAmount = make_shared<string>(boost::any_cast<string>(m["FinAmount"]));
    }
    if (m.find("FinDate") != m.end() && !m["FinDate"].empty()) {
      finDate = make_shared<string>(boost::any_cast<string>(m["FinDate"]));
    }
    if (m.find("FinTurn") != m.end() && !m["FinTurn"].empty()) {
      finTurn = make_shared<string>(boost::any_cast<string>(m["FinTurn"]));
    }
    if (m.find("Investors") != m.end() && !m["Investors"].empty()) {
      investors = make_shared<string>(boost::any_cast<string>(m["Investors"]));
    }
  }


  virtual ~GetOcFinancingResponseBodyData() = default;
};
class GetOcFinancingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcFinancingResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcFinancingResponseBody() {}

  explicit GetOcFinancingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcFinancingResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcFinancingResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcFinancingResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcFinancingResponseBody() = default;
};
class GetOcFinancingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcFinancingResponseBody> body{};

  GetOcFinancingResponse() {}

  explicit GetOcFinancingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcFinancingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcFinancingResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcFinancingResponse() = default;
};
class GetOcFuzzSearchRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcFuzzSearchRequest() {}

  explicit GetOcFuzzSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcFuzzSearchRequest() = default;
};
class GetOcFuzzSearchResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> entName{};

  GetOcFuzzSearchResponseBodyData() {}

  explicit GetOcFuzzSearchResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
  }


  virtual ~GetOcFuzzSearchResponseBodyData() = default;
};
class GetOcFuzzSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcFuzzSearchResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcFuzzSearchResponseBody() {}

  explicit GetOcFuzzSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcFuzzSearchResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcFuzzSearchResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcFuzzSearchResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcFuzzSearchResponseBody() = default;
};
class GetOcFuzzSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcFuzzSearchResponseBody> body{};

  GetOcFuzzSearchResponse() {}

  explicit GetOcFuzzSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcFuzzSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcFuzzSearchResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcFuzzSearchResponse() = default;
};
class GetOcIcAbnormalOperationRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcAbnormalOperationRequest() {}

  explicit GetOcIcAbnormalOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcAbnormalOperationRequest() = default;
};
class GetOcIcAbnormalOperationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> inDate{};
  shared_ptr<string> inDepartment{};
  shared_ptr<string> inReason{};
  shared_ptr<string> outDate{};
  shared_ptr<string> outDepartment{};
  shared_ptr<string> outReason{};

  GetOcIcAbnormalOperationResponseBodyData() {}

  explicit GetOcIcAbnormalOperationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inDate) {
      res["InDate"] = boost::any(*inDate);
    }
    if (inDepartment) {
      res["InDepartment"] = boost::any(*inDepartment);
    }
    if (inReason) {
      res["InReason"] = boost::any(*inReason);
    }
    if (outDate) {
      res["OutDate"] = boost::any(*outDate);
    }
    if (outDepartment) {
      res["OutDepartment"] = boost::any(*outDepartment);
    }
    if (outReason) {
      res["OutReason"] = boost::any(*outReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InDate") != m.end() && !m["InDate"].empty()) {
      inDate = make_shared<string>(boost::any_cast<string>(m["InDate"]));
    }
    if (m.find("InDepartment") != m.end() && !m["InDepartment"].empty()) {
      inDepartment = make_shared<string>(boost::any_cast<string>(m["InDepartment"]));
    }
    if (m.find("InReason") != m.end() && !m["InReason"].empty()) {
      inReason = make_shared<string>(boost::any_cast<string>(m["InReason"]));
    }
    if (m.find("OutDate") != m.end() && !m["OutDate"].empty()) {
      outDate = make_shared<string>(boost::any_cast<string>(m["OutDate"]));
    }
    if (m.find("OutDepartment") != m.end() && !m["OutDepartment"].empty()) {
      outDepartment = make_shared<string>(boost::any_cast<string>(m["OutDepartment"]));
    }
    if (m.find("OutReason") != m.end() && !m["OutReason"].empty()) {
      outReason = make_shared<string>(boost::any_cast<string>(m["OutReason"]));
    }
  }


  virtual ~GetOcIcAbnormalOperationResponseBodyData() = default;
};
class GetOcIcAbnormalOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcAbnormalOperationResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcAbnormalOperationResponseBody() {}

  explicit GetOcIcAbnormalOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcAbnormalOperationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcAbnormalOperationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcAbnormalOperationResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcAbnormalOperationResponseBody() = default;
};
class GetOcIcAbnormalOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcAbnormalOperationResponseBody> body{};

  GetOcIcAbnormalOperationResponse() {}

  explicit GetOcIcAbnormalOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcAbnormalOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcAbnormalOperationResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcAbnormalOperationResponse() = default;
};
class GetOcIcAdminLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcAdminLicenseRequest() {}

  explicit GetOcIcAdminLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcAdminLicenseRequest() = default;
};
class GetOcIcAdminLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> department{};
  shared_ptr<string> endDate{};
  shared_ptr<string> licenseName{};
  shared_ptr<string> licenseNo{};
  shared_ptr<string> startDate{};

  GetOcIcAdminLicenseResponseBodyData() {}

  explicit GetOcIcAdminLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (licenseName) {
      res["LicenseName"] = boost::any(*licenseName);
    }
    if (licenseNo) {
      res["LicenseNo"] = boost::any(*licenseNo);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("LicenseName") != m.end() && !m["LicenseName"].empty()) {
      licenseName = make_shared<string>(boost::any_cast<string>(m["LicenseName"]));
    }
    if (m.find("LicenseNo") != m.end() && !m["LicenseNo"].empty()) {
      licenseNo = make_shared<string>(boost::any_cast<string>(m["LicenseNo"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetOcIcAdminLicenseResponseBodyData() = default;
};
class GetOcIcAdminLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcAdminLicenseResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcAdminLicenseResponseBody() {}

  explicit GetOcIcAdminLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcAdminLicenseResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcAdminLicenseResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcAdminLicenseResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcAdminLicenseResponseBody() = default;
};
class GetOcIcAdminLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcAdminLicenseResponseBody> body{};

  GetOcIcAdminLicenseResponse() {}

  explicit GetOcIcAdminLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcAdminLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcAdminLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcAdminLicenseResponse() = default;
};
class GetOcIcBasicRequest : public Darabonba::Model {
public:
  shared_ptr<string> searchKey{};

  GetOcIcBasicRequest() {}

  explicit GetOcIcBasicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcBasicRequest() = default;
};
class GetOcIcBasicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> checkDate{};
  shared_ptr<string> entAddress{};
  shared_ptr<string> entBrief{};
  shared_ptr<string> entName{};
  shared_ptr<string> entNameEng{};
  shared_ptr<string> entStatus{};
  shared_ptr<string> entType{};
  shared_ptr<string> esDate{};
  shared_ptr<string> formerNames{};
  shared_ptr<string> industryNameLv1{};
  shared_ptr<string> industryNameLv2{};
  shared_ptr<string> insuredNum{};
  shared_ptr<string> legalName{};
  shared_ptr<string> licenseNumber{};
  shared_ptr<string> opFrom{};
  shared_ptr<string> opScope{};
  shared_ptr<string> opTo{};
  shared_ptr<string> orgNo{};
  shared_ptr<string> recCap{};
  shared_ptr<string> regCap{};
  shared_ptr<string> regOrg{};
  shared_ptr<string> regOrgCity{};
  shared_ptr<string> regOrgDistrict{};
  shared_ptr<string> regOrgProvince{};
  shared_ptr<string> socialCreditCode{};
  shared_ptr<string> staffNum{};
  shared_ptr<string> taxNum{};

  GetOcIcBasicResponseBodyData() {}

  explicit GetOcIcBasicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkDate) {
      res["CheckDate"] = boost::any(*checkDate);
    }
    if (entAddress) {
      res["EntAddress"] = boost::any(*entAddress);
    }
    if (entBrief) {
      res["EntBrief"] = boost::any(*entBrief);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (entNameEng) {
      res["EntNameEng"] = boost::any(*entNameEng);
    }
    if (entStatus) {
      res["EntStatus"] = boost::any(*entStatus);
    }
    if (entType) {
      res["EntType"] = boost::any(*entType);
    }
    if (esDate) {
      res["EsDate"] = boost::any(*esDate);
    }
    if (formerNames) {
      res["FormerNames"] = boost::any(*formerNames);
    }
    if (industryNameLv1) {
      res["IndustryNameLv1"] = boost::any(*industryNameLv1);
    }
    if (industryNameLv2) {
      res["IndustryNameLv2"] = boost::any(*industryNameLv2);
    }
    if (insuredNum) {
      res["InsuredNum"] = boost::any(*insuredNum);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (licenseNumber) {
      res["LicenseNumber"] = boost::any(*licenseNumber);
    }
    if (opFrom) {
      res["OpFrom"] = boost::any(*opFrom);
    }
    if (opScope) {
      res["OpScope"] = boost::any(*opScope);
    }
    if (opTo) {
      res["OpTo"] = boost::any(*opTo);
    }
    if (orgNo) {
      res["OrgNo"] = boost::any(*orgNo);
    }
    if (recCap) {
      res["RecCap"] = boost::any(*recCap);
    }
    if (regCap) {
      res["RegCap"] = boost::any(*regCap);
    }
    if (regOrg) {
      res["RegOrg"] = boost::any(*regOrg);
    }
    if (regOrgCity) {
      res["RegOrgCity"] = boost::any(*regOrgCity);
    }
    if (regOrgDistrict) {
      res["RegOrgDistrict"] = boost::any(*regOrgDistrict);
    }
    if (regOrgProvince) {
      res["RegOrgProvince"] = boost::any(*regOrgProvince);
    }
    if (socialCreditCode) {
      res["SocialCreditCode"] = boost::any(*socialCreditCode);
    }
    if (staffNum) {
      res["StaffNum"] = boost::any(*staffNum);
    }
    if (taxNum) {
      res["TaxNum"] = boost::any(*taxNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckDate") != m.end() && !m["CheckDate"].empty()) {
      checkDate = make_shared<string>(boost::any_cast<string>(m["CheckDate"]));
    }
    if (m.find("EntAddress") != m.end() && !m["EntAddress"].empty()) {
      entAddress = make_shared<string>(boost::any_cast<string>(m["EntAddress"]));
    }
    if (m.find("EntBrief") != m.end() && !m["EntBrief"].empty()) {
      entBrief = make_shared<string>(boost::any_cast<string>(m["EntBrief"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("EntNameEng") != m.end() && !m["EntNameEng"].empty()) {
      entNameEng = make_shared<string>(boost::any_cast<string>(m["EntNameEng"]));
    }
    if (m.find("EntStatus") != m.end() && !m["EntStatus"].empty()) {
      entStatus = make_shared<string>(boost::any_cast<string>(m["EntStatus"]));
    }
    if (m.find("EntType") != m.end() && !m["EntType"].empty()) {
      entType = make_shared<string>(boost::any_cast<string>(m["EntType"]));
    }
    if (m.find("EsDate") != m.end() && !m["EsDate"].empty()) {
      esDate = make_shared<string>(boost::any_cast<string>(m["EsDate"]));
    }
    if (m.find("FormerNames") != m.end() && !m["FormerNames"].empty()) {
      formerNames = make_shared<string>(boost::any_cast<string>(m["FormerNames"]));
    }
    if (m.find("IndustryNameLv1") != m.end() && !m["IndustryNameLv1"].empty()) {
      industryNameLv1 = make_shared<string>(boost::any_cast<string>(m["IndustryNameLv1"]));
    }
    if (m.find("IndustryNameLv2") != m.end() && !m["IndustryNameLv2"].empty()) {
      industryNameLv2 = make_shared<string>(boost::any_cast<string>(m["IndustryNameLv2"]));
    }
    if (m.find("InsuredNum") != m.end() && !m["InsuredNum"].empty()) {
      insuredNum = make_shared<string>(boost::any_cast<string>(m["InsuredNum"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      licenseNumber = make_shared<string>(boost::any_cast<string>(m["LicenseNumber"]));
    }
    if (m.find("OpFrom") != m.end() && !m["OpFrom"].empty()) {
      opFrom = make_shared<string>(boost::any_cast<string>(m["OpFrom"]));
    }
    if (m.find("OpScope") != m.end() && !m["OpScope"].empty()) {
      opScope = make_shared<string>(boost::any_cast<string>(m["OpScope"]));
    }
    if (m.find("OpTo") != m.end() && !m["OpTo"].empty()) {
      opTo = make_shared<string>(boost::any_cast<string>(m["OpTo"]));
    }
    if (m.find("OrgNo") != m.end() && !m["OrgNo"].empty()) {
      orgNo = make_shared<string>(boost::any_cast<string>(m["OrgNo"]));
    }
    if (m.find("RecCap") != m.end() && !m["RecCap"].empty()) {
      recCap = make_shared<string>(boost::any_cast<string>(m["RecCap"]));
    }
    if (m.find("RegCap") != m.end() && !m["RegCap"].empty()) {
      regCap = make_shared<string>(boost::any_cast<string>(m["RegCap"]));
    }
    if (m.find("RegOrg") != m.end() && !m["RegOrg"].empty()) {
      regOrg = make_shared<string>(boost::any_cast<string>(m["RegOrg"]));
    }
    if (m.find("RegOrgCity") != m.end() && !m["RegOrgCity"].empty()) {
      regOrgCity = make_shared<string>(boost::any_cast<string>(m["RegOrgCity"]));
    }
    if (m.find("RegOrgDistrict") != m.end() && !m["RegOrgDistrict"].empty()) {
      regOrgDistrict = make_shared<string>(boost::any_cast<string>(m["RegOrgDistrict"]));
    }
    if (m.find("RegOrgProvince") != m.end() && !m["RegOrgProvince"].empty()) {
      regOrgProvince = make_shared<string>(boost::any_cast<string>(m["RegOrgProvince"]));
    }
    if (m.find("SocialCreditCode") != m.end() && !m["SocialCreditCode"].empty()) {
      socialCreditCode = make_shared<string>(boost::any_cast<string>(m["SocialCreditCode"]));
    }
    if (m.find("StaffNum") != m.end() && !m["StaffNum"].empty()) {
      staffNum = make_shared<string>(boost::any_cast<string>(m["StaffNum"]));
    }
    if (m.find("TaxNum") != m.end() && !m["TaxNum"].empty()) {
      taxNum = make_shared<string>(boost::any_cast<string>(m["TaxNum"]));
    }
  }


  virtual ~GetOcIcBasicResponseBodyData() = default;
};
class GetOcIcBasicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetOcIcBasicResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcBasicResponseBody() {}

  explicit GetOcIcBasicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOcIcBasicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOcIcBasicResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcBasicResponseBody() = default;
};
class GetOcIcBasicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcBasicResponseBody> body{};

  GetOcIcBasicResponse() {}

  explicit GetOcIcBasicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcBasicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcBasicResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcBasicResponse() = default;
};
class GetOcIcBranchRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcBranchRequest() {}

  explicit GetOcIcBranchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcBranchRequest() = default;
};
class GetOcIcBranchResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> entName{};
  shared_ptr<string> entStatus{};
  shared_ptr<string> esDate{};
  shared_ptr<string> operName{};

  GetOcIcBranchResponseBodyData() {}

  explicit GetOcIcBranchResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (entStatus) {
      res["EntStatus"] = boost::any(*entStatus);
    }
    if (esDate) {
      res["EsDate"] = boost::any(*esDate);
    }
    if (operName) {
      res["OperName"] = boost::any(*operName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("EntStatus") != m.end() && !m["EntStatus"].empty()) {
      entStatus = make_shared<string>(boost::any_cast<string>(m["EntStatus"]));
    }
    if (m.find("EsDate") != m.end() && !m["EsDate"].empty()) {
      esDate = make_shared<string>(boost::any_cast<string>(m["EsDate"]));
    }
    if (m.find("OperName") != m.end() && !m["OperName"].empty()) {
      operName = make_shared<string>(boost::any_cast<string>(m["OperName"]));
    }
  }


  virtual ~GetOcIcBranchResponseBodyData() = default;
};
class GetOcIcBranchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcBranchResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcBranchResponseBody() {}

  explicit GetOcIcBranchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcBranchResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcBranchResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcBranchResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcBranchResponseBody() = default;
};
class GetOcIcBranchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcBranchResponseBody> body{};

  GetOcIcBranchResponse() {}

  explicit GetOcIcBranchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcBranchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcBranchResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcBranchResponse() = default;
};
class GetOcIcChangeRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcChangeRecordRequest() {}

  explicit GetOcIcChangeRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcChangeRecordRequest() = default;
};
class GetOcIcChangeRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> afterContent{};
  shared_ptr<string> beforeContent{};
  shared_ptr<string> changeDate{};
  shared_ptr<string> type{};

  GetOcIcChangeRecordResponseBodyData() {}

  explicit GetOcIcChangeRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterContent) {
      res["AfterContent"] = boost::any(*afterContent);
    }
    if (beforeContent) {
      res["BeforeContent"] = boost::any(*beforeContent);
    }
    if (changeDate) {
      res["ChangeDate"] = boost::any(*changeDate);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterContent") != m.end() && !m["AfterContent"].empty()) {
      afterContent = make_shared<string>(boost::any_cast<string>(m["AfterContent"]));
    }
    if (m.find("BeforeContent") != m.end() && !m["BeforeContent"].empty()) {
      beforeContent = make_shared<string>(boost::any_cast<string>(m["BeforeContent"]));
    }
    if (m.find("ChangeDate") != m.end() && !m["ChangeDate"].empty()) {
      changeDate = make_shared<string>(boost::any_cast<string>(m["ChangeDate"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetOcIcChangeRecordResponseBodyData() = default;
};
class GetOcIcChangeRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcChangeRecordResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcChangeRecordResponseBody() {}

  explicit GetOcIcChangeRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcChangeRecordResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcChangeRecordResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcChangeRecordResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcChangeRecordResponseBody() = default;
};
class GetOcIcChangeRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcChangeRecordResponseBody> body{};

  GetOcIcChangeRecordResponse() {}

  explicit GetOcIcChangeRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcChangeRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcChangeRecordResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcChangeRecordResponse() = default;
};
class GetOcIcCheckupRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcCheckupRequest() {}

  explicit GetOcIcCheckupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcCheckupRequest() = default;
};
class GetOcIcCheckupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> department{};
  shared_ptr<string> result{};
  shared_ptr<string> type{};

  GetOcIcCheckupResponseBodyData() {}

  explicit GetOcIcCheckupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetOcIcCheckupResponseBodyData() = default;
};
class GetOcIcCheckupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcCheckupResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcCheckupResponseBody() {}

  explicit GetOcIcCheckupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcCheckupResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcCheckupResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcCheckupResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcCheckupResponseBody() = default;
};
class GetOcIcCheckupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcCheckupResponseBody> body{};

  GetOcIcCheckupResponse() {}

  explicit GetOcIcCheckupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcCheckupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcCheckupResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcCheckupResponse() = default;
};
class GetOcIcClearAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcClearAccountRequest() {}

  explicit GetOcIcClearAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcClearAccountRequest() = default;
};
class GetOcIcClearAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> leader{};
  shared_ptr<string> member{};

  GetOcIcClearAccountResponseBodyData() {}

  explicit GetOcIcClearAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (leader) {
      res["Leader"] = boost::any(*leader);
    }
    if (member) {
      res["Member"] = boost::any(*member);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Leader") != m.end() && !m["Leader"].empty()) {
      leader = make_shared<string>(boost::any_cast<string>(m["Leader"]));
    }
    if (m.find("Member") != m.end() && !m["Member"].empty()) {
      member = make_shared<string>(boost::any_cast<string>(m["Member"]));
    }
  }


  virtual ~GetOcIcClearAccountResponseBodyData() = default;
};
class GetOcIcClearAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcClearAccountResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcClearAccountResponseBody() {}

  explicit GetOcIcClearAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcClearAccountResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcClearAccountResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcClearAccountResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcClearAccountResponseBody() = default;
};
class GetOcIcClearAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcClearAccountResponseBody> body{};

  GetOcIcClearAccountResponse() {}

  explicit GetOcIcClearAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcClearAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcClearAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcClearAccountResponse() = default;
};
class GetOcIcDoubleCheckupRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcDoubleCheckupRequest() {}

  explicit GetOcIcDoubleCheckupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcDoubleCheckupRequest() = default;
};
class GetOcIcDoubleCheckupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> inspectDate{};
  shared_ptr<string> inspectDepartment{};
  shared_ptr<string> inspectItem{};
  shared_ptr<string> inspectPlanId{};
  shared_ptr<string> inspectPlanName{};
  shared_ptr<string> inspectResult{};
  shared_ptr<string> inspectTaskId{};
  shared_ptr<string> inspectTaskName{};
  shared_ptr<string> inspectTypeName{};

  GetOcIcDoubleCheckupResponseBodyData() {}

  explicit GetOcIcDoubleCheckupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inspectDate) {
      res["InspectDate"] = boost::any(*inspectDate);
    }
    if (inspectDepartment) {
      res["InspectDepartment"] = boost::any(*inspectDepartment);
    }
    if (inspectItem) {
      res["InspectItem"] = boost::any(*inspectItem);
    }
    if (inspectPlanId) {
      res["InspectPlanId"] = boost::any(*inspectPlanId);
    }
    if (inspectPlanName) {
      res["InspectPlanName"] = boost::any(*inspectPlanName);
    }
    if (inspectResult) {
      res["InspectResult"] = boost::any(*inspectResult);
    }
    if (inspectTaskId) {
      res["InspectTaskId"] = boost::any(*inspectTaskId);
    }
    if (inspectTaskName) {
      res["InspectTaskName"] = boost::any(*inspectTaskName);
    }
    if (inspectTypeName) {
      res["InspectTypeName"] = boost::any(*inspectTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InspectDate") != m.end() && !m["InspectDate"].empty()) {
      inspectDate = make_shared<string>(boost::any_cast<string>(m["InspectDate"]));
    }
    if (m.find("InspectDepartment") != m.end() && !m["InspectDepartment"].empty()) {
      inspectDepartment = make_shared<string>(boost::any_cast<string>(m["InspectDepartment"]));
    }
    if (m.find("InspectItem") != m.end() && !m["InspectItem"].empty()) {
      inspectItem = make_shared<string>(boost::any_cast<string>(m["InspectItem"]));
    }
    if (m.find("InspectPlanId") != m.end() && !m["InspectPlanId"].empty()) {
      inspectPlanId = make_shared<string>(boost::any_cast<string>(m["InspectPlanId"]));
    }
    if (m.find("InspectPlanName") != m.end() && !m["InspectPlanName"].empty()) {
      inspectPlanName = make_shared<string>(boost::any_cast<string>(m["InspectPlanName"]));
    }
    if (m.find("InspectResult") != m.end() && !m["InspectResult"].empty()) {
      inspectResult = make_shared<string>(boost::any_cast<string>(m["InspectResult"]));
    }
    if (m.find("InspectTaskId") != m.end() && !m["InspectTaskId"].empty()) {
      inspectTaskId = make_shared<string>(boost::any_cast<string>(m["InspectTaskId"]));
    }
    if (m.find("InspectTaskName") != m.end() && !m["InspectTaskName"].empty()) {
      inspectTaskName = make_shared<string>(boost::any_cast<string>(m["InspectTaskName"]));
    }
    if (m.find("InspectTypeName") != m.end() && !m["InspectTypeName"].empty()) {
      inspectTypeName = make_shared<string>(boost::any_cast<string>(m["InspectTypeName"]));
    }
  }


  virtual ~GetOcIcDoubleCheckupResponseBodyData() = default;
};
class GetOcIcDoubleCheckupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcDoubleCheckupResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcDoubleCheckupResponseBody() {}

  explicit GetOcIcDoubleCheckupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcDoubleCheckupResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcDoubleCheckupResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcDoubleCheckupResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcDoubleCheckupResponseBody() = default;
};
class GetOcIcDoubleCheckupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcDoubleCheckupResponseBody> body{};

  GetOcIcDoubleCheckupResponse() {}

  explicit GetOcIcDoubleCheckupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcDoubleCheckupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcDoubleCheckupResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcDoubleCheckupResponse() = default;
};
class GetOcIcEmployeeRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> searchKey{};

  GetOcIcEmployeeRequest() {}

  explicit GetOcIcEmployeeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcEmployeeRequest() = default;
};
class GetOcIcEmployeeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobTitle{};
  shared_ptr<string> name{};

  GetOcIcEmployeeResponseBodyData() {}

  explicit GetOcIcEmployeeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobTitle) {
      res["JobTitle"] = boost::any(*jobTitle);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobTitle") != m.end() && !m["JobTitle"].empty()) {
      jobTitle = make_shared<string>(boost::any_cast<string>(m["JobTitle"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetOcIcEmployeeResponseBodyData() = default;
};
class GetOcIcEmployeeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcEmployeeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcEmployeeResponseBody() {}

  explicit GetOcIcEmployeeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcEmployeeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcEmployeeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcEmployeeResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcEmployeeResponseBody() = default;
};
class GetOcIcEmployeeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcEmployeeResponseBody> body{};

  GetOcIcEmployeeResponse() {}

  explicit GetOcIcEmployeeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcEmployeeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcEmployeeResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcEmployeeResponse() = default;
};
class GetOcIcEquityFrozenRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcEquityFrozenRequest() {}

  explicit GetOcIcEquityFrozenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcEquityFrozenRequest() = default;
};
class GetOcIcEquityFrozenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> freezeAmount{};
  shared_ptr<string> freezeCardNum{};
  shared_ptr<string> freezeCardType{};
  shared_ptr<string> freezeCourt{};
  shared_ptr<string> freezeEndDate{};
  shared_ptr<string> freezeExecItem{};
  shared_ptr<string> freezeExecPerson{};
  shared_ptr<string> freezeNoticeNum{};
  shared_ptr<string> freezePublishDate{};
  shared_ptr<string> freezeStartDate{};
  shared_ptr<string> status{};
  shared_ptr<string> unfreezeAdjustNum{};
  shared_ptr<string> unfreezeCourt{};
  shared_ptr<string> unfreezeDate{};
  shared_ptr<string> unfreezeReason{};

  GetOcIcEquityFrozenResponseBodyData() {}

  explicit GetOcIcEquityFrozenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (freezeAmount) {
      res["FreezeAmount"] = boost::any(*freezeAmount);
    }
    if (freezeCardNum) {
      res["FreezeCardNum"] = boost::any(*freezeCardNum);
    }
    if (freezeCardType) {
      res["FreezeCardType"] = boost::any(*freezeCardType);
    }
    if (freezeCourt) {
      res["FreezeCourt"] = boost::any(*freezeCourt);
    }
    if (freezeEndDate) {
      res["FreezeEndDate"] = boost::any(*freezeEndDate);
    }
    if (freezeExecItem) {
      res["FreezeExecItem"] = boost::any(*freezeExecItem);
    }
    if (freezeExecPerson) {
      res["FreezeExecPerson"] = boost::any(*freezeExecPerson);
    }
    if (freezeNoticeNum) {
      res["FreezeNoticeNum"] = boost::any(*freezeNoticeNum);
    }
    if (freezePublishDate) {
      res["FreezePublishDate"] = boost::any(*freezePublishDate);
    }
    if (freezeStartDate) {
      res["FreezeStartDate"] = boost::any(*freezeStartDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unfreezeAdjustNum) {
      res["UnfreezeAdjustNum"] = boost::any(*unfreezeAdjustNum);
    }
    if (unfreezeCourt) {
      res["UnfreezeCourt"] = boost::any(*unfreezeCourt);
    }
    if (unfreezeDate) {
      res["UnfreezeDate"] = boost::any(*unfreezeDate);
    }
    if (unfreezeReason) {
      res["UnfreezeReason"] = boost::any(*unfreezeReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FreezeAmount") != m.end() && !m["FreezeAmount"].empty()) {
      freezeAmount = make_shared<string>(boost::any_cast<string>(m["FreezeAmount"]));
    }
    if (m.find("FreezeCardNum") != m.end() && !m["FreezeCardNum"].empty()) {
      freezeCardNum = make_shared<string>(boost::any_cast<string>(m["FreezeCardNum"]));
    }
    if (m.find("FreezeCardType") != m.end() && !m["FreezeCardType"].empty()) {
      freezeCardType = make_shared<string>(boost::any_cast<string>(m["FreezeCardType"]));
    }
    if (m.find("FreezeCourt") != m.end() && !m["FreezeCourt"].empty()) {
      freezeCourt = make_shared<string>(boost::any_cast<string>(m["FreezeCourt"]));
    }
    if (m.find("FreezeEndDate") != m.end() && !m["FreezeEndDate"].empty()) {
      freezeEndDate = make_shared<string>(boost::any_cast<string>(m["FreezeEndDate"]));
    }
    if (m.find("FreezeExecItem") != m.end() && !m["FreezeExecItem"].empty()) {
      freezeExecItem = make_shared<string>(boost::any_cast<string>(m["FreezeExecItem"]));
    }
    if (m.find("FreezeExecPerson") != m.end() && !m["FreezeExecPerson"].empty()) {
      freezeExecPerson = make_shared<string>(boost::any_cast<string>(m["FreezeExecPerson"]));
    }
    if (m.find("FreezeNoticeNum") != m.end() && !m["FreezeNoticeNum"].empty()) {
      freezeNoticeNum = make_shared<string>(boost::any_cast<string>(m["FreezeNoticeNum"]));
    }
    if (m.find("FreezePublishDate") != m.end() && !m["FreezePublishDate"].empty()) {
      freezePublishDate = make_shared<string>(boost::any_cast<string>(m["FreezePublishDate"]));
    }
    if (m.find("FreezeStartDate") != m.end() && !m["FreezeStartDate"].empty()) {
      freezeStartDate = make_shared<string>(boost::any_cast<string>(m["FreezeStartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnfreezeAdjustNum") != m.end() && !m["UnfreezeAdjustNum"].empty()) {
      unfreezeAdjustNum = make_shared<string>(boost::any_cast<string>(m["UnfreezeAdjustNum"]));
    }
    if (m.find("UnfreezeCourt") != m.end() && !m["UnfreezeCourt"].empty()) {
      unfreezeCourt = make_shared<string>(boost::any_cast<string>(m["UnfreezeCourt"]));
    }
    if (m.find("UnfreezeDate") != m.end() && !m["UnfreezeDate"].empty()) {
      unfreezeDate = make_shared<string>(boost::any_cast<string>(m["UnfreezeDate"]));
    }
    if (m.find("UnfreezeReason") != m.end() && !m["UnfreezeReason"].empty()) {
      unfreezeReason = make_shared<string>(boost::any_cast<string>(m["UnfreezeReason"]));
    }
  }


  virtual ~GetOcIcEquityFrozenResponseBodyData() = default;
};
class GetOcIcEquityFrozenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcEquityFrozenResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcEquityFrozenResponseBody() {}

  explicit GetOcIcEquityFrozenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcEquityFrozenResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcEquityFrozenResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcEquityFrozenResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcEquityFrozenResponseBody() = default;
};
class GetOcIcEquityFrozenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcEquityFrozenResponseBody> body{};

  GetOcIcEquityFrozenResponse() {}

  explicit GetOcIcEquityFrozenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcEquityFrozenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcEquityFrozenResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcEquityFrozenResponse() = default;
};
class GetOcIcEquityPledgeRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcEquityPledgeRequest() {}

  explicit GetOcIcEquityPledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcEquityPledgeRequest() = default;
};
class GetOcIcEquityPledgeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> number{};
  shared_ptr<string> pawnee{};
  shared_ptr<string> pawneeIdentifyNo{};
  shared_ptr<string> pledgor{};
  shared_ptr<string> pledgorAmount{};
  shared_ptr<string> pledgorIdentifyNo{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> regDate{};
  shared_ptr<string> relatedComp{};
  shared_ptr<string> status{};

  GetOcIcEquityPledgeResponseBodyData() {}

  explicit GetOcIcEquityPledgeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (pawnee) {
      res["Pawnee"] = boost::any(*pawnee);
    }
    if (pawneeIdentifyNo) {
      res["PawneeIdentifyNo"] = boost::any(*pawneeIdentifyNo);
    }
    if (pledgor) {
      res["Pledgor"] = boost::any(*pledgor);
    }
    if (pledgorAmount) {
      res["PledgorAmount"] = boost::any(*pledgorAmount);
    }
    if (pledgorIdentifyNo) {
      res["PledgorIdentifyNo"] = boost::any(*pledgorIdentifyNo);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (regDate) {
      res["RegDate"] = boost::any(*regDate);
    }
    if (relatedComp) {
      res["RelatedComp"] = boost::any(*relatedComp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Pawnee") != m.end() && !m["Pawnee"].empty()) {
      pawnee = make_shared<string>(boost::any_cast<string>(m["Pawnee"]));
    }
    if (m.find("PawneeIdentifyNo") != m.end() && !m["PawneeIdentifyNo"].empty()) {
      pawneeIdentifyNo = make_shared<string>(boost::any_cast<string>(m["PawneeIdentifyNo"]));
    }
    if (m.find("Pledgor") != m.end() && !m["Pledgor"].empty()) {
      pledgor = make_shared<string>(boost::any_cast<string>(m["Pledgor"]));
    }
    if (m.find("PledgorAmount") != m.end() && !m["PledgorAmount"].empty()) {
      pledgorAmount = make_shared<string>(boost::any_cast<string>(m["PledgorAmount"]));
    }
    if (m.find("PledgorIdentifyNo") != m.end() && !m["PledgorIdentifyNo"].empty()) {
      pledgorIdentifyNo = make_shared<string>(boost::any_cast<string>(m["PledgorIdentifyNo"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("RegDate") != m.end() && !m["RegDate"].empty()) {
      regDate = make_shared<string>(boost::any_cast<string>(m["RegDate"]));
    }
    if (m.find("RelatedComp") != m.end() && !m["RelatedComp"].empty()) {
      relatedComp = make_shared<string>(boost::any_cast<string>(m["RelatedComp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetOcIcEquityPledgeResponseBodyData() = default;
};
class GetOcIcEquityPledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcEquityPledgeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcEquityPledgeResponseBody() {}

  explicit GetOcIcEquityPledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcEquityPledgeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcEquityPledgeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcEquityPledgeResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcEquityPledgeResponseBody() = default;
};
class GetOcIcEquityPledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcEquityPledgeResponseBody> body{};

  GetOcIcEquityPledgeResponse() {}

  explicit GetOcIcEquityPledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcEquityPledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcEquityPledgeResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcEquityPledgeResponse() = default;
};
class GetOcIcInvestmentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcInvestmentRequest() {}

  explicit GetOcIcInvestmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcInvestmentRequest() = default;
};
class GetOcIcInvestmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> entName{};
  shared_ptr<string> investCreditCode{};
  shared_ptr<string> investEsDate{};
  shared_ptr<string> investLegalName{};
  shared_ptr<string> investLicenseNo{};
  shared_ptr<string> investName{};
  shared_ptr<string> investRegCap{};
  shared_ptr<string> investStatus{};
  shared_ptr<string> shouldCap{};
  shared_ptr<string> stockPercentage{};

  GetOcIcInvestmentResponseBodyData() {}

  explicit GetOcIcInvestmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (investCreditCode) {
      res["InvestCreditCode"] = boost::any(*investCreditCode);
    }
    if (investEsDate) {
      res["InvestEsDate"] = boost::any(*investEsDate);
    }
    if (investLegalName) {
      res["InvestLegalName"] = boost::any(*investLegalName);
    }
    if (investLicenseNo) {
      res["InvestLicenseNo"] = boost::any(*investLicenseNo);
    }
    if (investName) {
      res["InvestName"] = boost::any(*investName);
    }
    if (investRegCap) {
      res["InvestRegCap"] = boost::any(*investRegCap);
    }
    if (investStatus) {
      res["InvestStatus"] = boost::any(*investStatus);
    }
    if (shouldCap) {
      res["ShouldCap"] = boost::any(*shouldCap);
    }
    if (stockPercentage) {
      res["StockPercentage"] = boost::any(*stockPercentage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("InvestCreditCode") != m.end() && !m["InvestCreditCode"].empty()) {
      investCreditCode = make_shared<string>(boost::any_cast<string>(m["InvestCreditCode"]));
    }
    if (m.find("InvestEsDate") != m.end() && !m["InvestEsDate"].empty()) {
      investEsDate = make_shared<string>(boost::any_cast<string>(m["InvestEsDate"]));
    }
    if (m.find("InvestLegalName") != m.end() && !m["InvestLegalName"].empty()) {
      investLegalName = make_shared<string>(boost::any_cast<string>(m["InvestLegalName"]));
    }
    if (m.find("InvestLicenseNo") != m.end() && !m["InvestLicenseNo"].empty()) {
      investLicenseNo = make_shared<string>(boost::any_cast<string>(m["InvestLicenseNo"]));
    }
    if (m.find("InvestName") != m.end() && !m["InvestName"].empty()) {
      investName = make_shared<string>(boost::any_cast<string>(m["InvestName"]));
    }
    if (m.find("InvestRegCap") != m.end() && !m["InvestRegCap"].empty()) {
      investRegCap = make_shared<string>(boost::any_cast<string>(m["InvestRegCap"]));
    }
    if (m.find("InvestStatus") != m.end() && !m["InvestStatus"].empty()) {
      investStatus = make_shared<string>(boost::any_cast<string>(m["InvestStatus"]));
    }
    if (m.find("ShouldCap") != m.end() && !m["ShouldCap"].empty()) {
      shouldCap = make_shared<string>(boost::any_cast<string>(m["ShouldCap"]));
    }
    if (m.find("StockPercentage") != m.end() && !m["StockPercentage"].empty()) {
      stockPercentage = make_shared<string>(boost::any_cast<string>(m["StockPercentage"]));
    }
  }


  virtual ~GetOcIcInvestmentResponseBodyData() = default;
};
class GetOcIcInvestmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcInvestmentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcInvestmentResponseBody() {}

  explicit GetOcIcInvestmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcInvestmentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcInvestmentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcInvestmentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcInvestmentResponseBody() = default;
};
class GetOcIcInvestmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcInvestmentResponseBody> body{};

  GetOcIcInvestmentResponse() {}

  explicit GetOcIcInvestmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcInvestmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcInvestmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcInvestmentResponse() = default;
};
class GetOcIcKnowledgePropertyPledgeRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> searchKey{};

  GetOcIcKnowledgePropertyPledgeRequest() {}

  explicit GetOcIcKnowledgePropertyPledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcKnowledgePropertyPledgeRequest() = default;
};
class GetOcIcKnowledgePropertyPledgeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> number{};
  shared_ptr<string> pawnee{};
  shared_ptr<string> period{};
  shared_ptr<string> pledgor{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetOcIcKnowledgePropertyPledgeResponseBodyData() {}

  explicit GetOcIcKnowledgePropertyPledgeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (pawnee) {
      res["Pawnee"] = boost::any(*pawnee);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (pledgor) {
      res["Pledgor"] = boost::any(*pledgor);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Pawnee") != m.end() && !m["Pawnee"].empty()) {
      pawnee = make_shared<string>(boost::any_cast<string>(m["Pawnee"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("Pledgor") != m.end() && !m["Pledgor"].empty()) {
      pledgor = make_shared<string>(boost::any_cast<string>(m["Pledgor"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetOcIcKnowledgePropertyPledgeResponseBodyData() = default;
};
class GetOcIcKnowledgePropertyPledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcKnowledgePropertyPledgeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcKnowledgePropertyPledgeResponseBody() {}

  explicit GetOcIcKnowledgePropertyPledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcKnowledgePropertyPledgeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcKnowledgePropertyPledgeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcKnowledgePropertyPledgeResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcKnowledgePropertyPledgeResponseBody() = default;
};
class GetOcIcKnowledgePropertyPledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcKnowledgePropertyPledgeResponseBody> body{};

  GetOcIcKnowledgePropertyPledgeResponse() {}

  explicit GetOcIcKnowledgePropertyPledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcKnowledgePropertyPledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcKnowledgePropertyPledgeResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcKnowledgePropertyPledgeResponse() = default;
};
class GetOcIcMortgageRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcMortgageRequest() {}

  explicit GetOcIcMortgageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcMortgageRequest() = default;
};
class GetOcIcMortgageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> debitAmount{};
  shared_ptr<string> debitPeriod{};
  shared_ptr<string> debitScope{};
  shared_ptr<string> debitType{};
  shared_ptr<string> department{};
  shared_ptr<string> guarantees{};
  shared_ptr<string> identifyNo{};
  shared_ptr<string> identifyType{};
  shared_ptr<string> mortgageesName{};
  shared_ptr<string> number{};
  shared_ptr<string> onecompId{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> regDate{};
  shared_ptr<string> status{};

  GetOcIcMortgageResponseBodyData() {}

  explicit GetOcIcMortgageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debitAmount) {
      res["DebitAmount"] = boost::any(*debitAmount);
    }
    if (debitPeriod) {
      res["DebitPeriod"] = boost::any(*debitPeriod);
    }
    if (debitScope) {
      res["DebitScope"] = boost::any(*debitScope);
    }
    if (debitType) {
      res["DebitType"] = boost::any(*debitType);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (guarantees) {
      res["Guarantees"] = boost::any(*guarantees);
    }
    if (identifyNo) {
      res["IdentifyNo"] = boost::any(*identifyNo);
    }
    if (identifyType) {
      res["IdentifyType"] = boost::any(*identifyType);
    }
    if (mortgageesName) {
      res["MortgageesName"] = boost::any(*mortgageesName);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (onecompId) {
      res["OnecompId"] = boost::any(*onecompId);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (regDate) {
      res["RegDate"] = boost::any(*regDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebitAmount") != m.end() && !m["DebitAmount"].empty()) {
      debitAmount = make_shared<string>(boost::any_cast<string>(m["DebitAmount"]));
    }
    if (m.find("DebitPeriod") != m.end() && !m["DebitPeriod"].empty()) {
      debitPeriod = make_shared<string>(boost::any_cast<string>(m["DebitPeriod"]));
    }
    if (m.find("DebitScope") != m.end() && !m["DebitScope"].empty()) {
      debitScope = make_shared<string>(boost::any_cast<string>(m["DebitScope"]));
    }
    if (m.find("DebitType") != m.end() && !m["DebitType"].empty()) {
      debitType = make_shared<string>(boost::any_cast<string>(m["DebitType"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("Guarantees") != m.end() && !m["Guarantees"].empty()) {
      guarantees = make_shared<string>(boost::any_cast<string>(m["Guarantees"]));
    }
    if (m.find("IdentifyNo") != m.end() && !m["IdentifyNo"].empty()) {
      identifyNo = make_shared<string>(boost::any_cast<string>(m["IdentifyNo"]));
    }
    if (m.find("IdentifyType") != m.end() && !m["IdentifyType"].empty()) {
      identifyType = make_shared<string>(boost::any_cast<string>(m["IdentifyType"]));
    }
    if (m.find("MortgageesName") != m.end() && !m["MortgageesName"].empty()) {
      mortgageesName = make_shared<string>(boost::any_cast<string>(m["MortgageesName"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("OnecompId") != m.end() && !m["OnecompId"].empty()) {
      onecompId = make_shared<string>(boost::any_cast<string>(m["OnecompId"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("RegDate") != m.end() && !m["RegDate"].empty()) {
      regDate = make_shared<string>(boost::any_cast<string>(m["RegDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetOcIcMortgageResponseBodyData() = default;
};
class GetOcIcMortgageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcMortgageResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcMortgageResponseBody() {}

  explicit GetOcIcMortgageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcMortgageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcMortgageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcMortgageResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcMortgageResponseBody() = default;
};
class GetOcIcMortgageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcMortgageResponseBody> body{};

  GetOcIcMortgageResponse() {}

  explicit GetOcIcMortgageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcMortgageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcMortgageResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcMortgageResponse() = default;
};
class GetOcIcSeriousOffenseRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcSeriousOffenseRequest() {}

  explicit GetOcIcSeriousOffenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcSeriousOffenseRequest() = default;
};
class GetOcIcSeriousOffenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> entName{};
  shared_ptr<string> inDate{};
  shared_ptr<string> inDepartment{};
  shared_ptr<string> inReason{};
  shared_ptr<string> outDate{};
  shared_ptr<string> outDepartment{};
  shared_ptr<string> outReason{};

  GetOcIcSeriousOffenseResponseBodyData() {}

  explicit GetOcIcSeriousOffenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (inDate) {
      res["InDate"] = boost::any(*inDate);
    }
    if (inDepartment) {
      res["InDepartment"] = boost::any(*inDepartment);
    }
    if (inReason) {
      res["InReason"] = boost::any(*inReason);
    }
    if (outDate) {
      res["OutDate"] = boost::any(*outDate);
    }
    if (outDepartment) {
      res["OutDepartment"] = boost::any(*outDepartment);
    }
    if (outReason) {
      res["OutReason"] = boost::any(*outReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("InDate") != m.end() && !m["InDate"].empty()) {
      inDate = make_shared<string>(boost::any_cast<string>(m["InDate"]));
    }
    if (m.find("InDepartment") != m.end() && !m["InDepartment"].empty()) {
      inDepartment = make_shared<string>(boost::any_cast<string>(m["InDepartment"]));
    }
    if (m.find("InReason") != m.end() && !m["InReason"].empty()) {
      inReason = make_shared<string>(boost::any_cast<string>(m["InReason"]));
    }
    if (m.find("OutDate") != m.end() && !m["OutDate"].empty()) {
      outDate = make_shared<string>(boost::any_cast<string>(m["OutDate"]));
    }
    if (m.find("OutDepartment") != m.end() && !m["OutDepartment"].empty()) {
      outDepartment = make_shared<string>(boost::any_cast<string>(m["OutDepartment"]));
    }
    if (m.find("OutReason") != m.end() && !m["OutReason"].empty()) {
      outReason = make_shared<string>(boost::any_cast<string>(m["OutReason"]));
    }
  }


  virtual ~GetOcIcSeriousOffenseResponseBodyData() = default;
};
class GetOcIcSeriousOffenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcSeriousOffenseResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcSeriousOffenseResponseBody() {}

  explicit GetOcIcSeriousOffenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcSeriousOffenseResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcSeriousOffenseResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcSeriousOffenseResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcSeriousOffenseResponseBody() = default;
};
class GetOcIcSeriousOffenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcSeriousOffenseResponseBody> body{};

  GetOcIcSeriousOffenseResponse() {}

  explicit GetOcIcSeriousOffenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcSeriousOffenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcSeriousOffenseResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcSeriousOffenseResponse() = default;
};
class GetOcIcShareholderRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcShareholderRequest() {}

  explicit GetOcIcShareholderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcShareholderRequest() = default;
};
class GetOcIcShareholderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> shouldCap{};
  shared_ptr<string> shouldCapTime{};
  shared_ptr<string> stockName{};
  shared_ptr<string> stockPercent{};
  shared_ptr<string> stockType{};

  GetOcIcShareholderResponseBodyData() {}

  explicit GetOcIcShareholderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shouldCap) {
      res["ShouldCap"] = boost::any(*shouldCap);
    }
    if (shouldCapTime) {
      res["ShouldCapTime"] = boost::any(*shouldCapTime);
    }
    if (stockName) {
      res["StockName"] = boost::any(*stockName);
    }
    if (stockPercent) {
      res["StockPercent"] = boost::any(*stockPercent);
    }
    if (stockType) {
      res["StockType"] = boost::any(*stockType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShouldCap") != m.end() && !m["ShouldCap"].empty()) {
      shouldCap = make_shared<string>(boost::any_cast<string>(m["ShouldCap"]));
    }
    if (m.find("ShouldCapTime") != m.end() && !m["ShouldCapTime"].empty()) {
      shouldCapTime = make_shared<string>(boost::any_cast<string>(m["ShouldCapTime"]));
    }
    if (m.find("StockName") != m.end() && !m["StockName"].empty()) {
      stockName = make_shared<string>(boost::any_cast<string>(m["StockName"]));
    }
    if (m.find("StockPercent") != m.end() && !m["StockPercent"].empty()) {
      stockPercent = make_shared<string>(boost::any_cast<string>(m["StockPercent"]));
    }
    if (m.find("StockType") != m.end() && !m["StockType"].empty()) {
      stockType = make_shared<string>(boost::any_cast<string>(m["StockType"]));
    }
  }


  virtual ~GetOcIcShareholderResponseBodyData() = default;
};
class GetOcIcShareholderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcShareholderResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcShareholderResponseBody() {}

  explicit GetOcIcShareholderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcShareholderResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcShareholderResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcShareholderResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcShareholderResponseBody() = default;
};
class GetOcIcShareholderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcShareholderResponseBody> body{};

  GetOcIcShareholderResponse() {}

  explicit GetOcIcShareholderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcShareholderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcShareholderResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcShareholderResponse() = default;
};
class GetOcIcSimpleCancelRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIcSimpleCancelRequest() {}

  explicit GetOcIcSimpleCancelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIcSimpleCancelRequest() = default;
};
class GetOcIcSimpleCancelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> department{};
  shared_ptr<string> entName{};
  shared_ptr<string> noticePeriod{};
  shared_ptr<string> scaContent{};
  shared_ptr<string> scaDate{};
  shared_ptr<string> scaProposer{};
  shared_ptr<string> scaResult{};
  shared_ptr<string> scaResultDate{};
  shared_ptr<string> socialCreditCode{};

  GetOcIcSimpleCancelResponseBodyData() {}

  explicit GetOcIcSimpleCancelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (noticePeriod) {
      res["NoticePeriod"] = boost::any(*noticePeriod);
    }
    if (scaContent) {
      res["ScaContent"] = boost::any(*scaContent);
    }
    if (scaDate) {
      res["ScaDate"] = boost::any(*scaDate);
    }
    if (scaProposer) {
      res["ScaProposer"] = boost::any(*scaProposer);
    }
    if (scaResult) {
      res["ScaResult"] = boost::any(*scaResult);
    }
    if (scaResultDate) {
      res["ScaResultDate"] = boost::any(*scaResultDate);
    }
    if (socialCreditCode) {
      res["SocialCreditCode"] = boost::any(*socialCreditCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("NoticePeriod") != m.end() && !m["NoticePeriod"].empty()) {
      noticePeriod = make_shared<string>(boost::any_cast<string>(m["NoticePeriod"]));
    }
    if (m.find("ScaContent") != m.end() && !m["ScaContent"].empty()) {
      scaContent = make_shared<string>(boost::any_cast<string>(m["ScaContent"]));
    }
    if (m.find("ScaDate") != m.end() && !m["ScaDate"].empty()) {
      scaDate = make_shared<string>(boost::any_cast<string>(m["ScaDate"]));
    }
    if (m.find("ScaProposer") != m.end() && !m["ScaProposer"].empty()) {
      scaProposer = make_shared<string>(boost::any_cast<string>(m["ScaProposer"]));
    }
    if (m.find("ScaResult") != m.end() && !m["ScaResult"].empty()) {
      scaResult = make_shared<string>(boost::any_cast<string>(m["ScaResult"]));
    }
    if (m.find("ScaResultDate") != m.end() && !m["ScaResultDate"].empty()) {
      scaResultDate = make_shared<string>(boost::any_cast<string>(m["ScaResultDate"]));
    }
    if (m.find("SocialCreditCode") != m.end() && !m["SocialCreditCode"].empty()) {
      socialCreditCode = make_shared<string>(boost::any_cast<string>(m["SocialCreditCode"]));
    }
  }


  virtual ~GetOcIcSimpleCancelResponseBodyData() = default;
};
class GetOcIcSimpleCancelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIcSimpleCancelResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIcSimpleCancelResponseBody() {}

  explicit GetOcIcSimpleCancelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIcSimpleCancelResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIcSimpleCancelResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIcSimpleCancelResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIcSimpleCancelResponseBody() = default;
};
class GetOcIcSimpleCancelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIcSimpleCancelResponseBody> body{};

  GetOcIcSimpleCancelResponse() {}

  explicit GetOcIcSimpleCancelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIcSimpleCancelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIcSimpleCancelResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIcSimpleCancelResponse() = default;
};
class GetOcIpCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIpCertificateRequest() {}

  explicit GetOcIpCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIpCertificateRequest() = default;
};
class GetOcIpCertificateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authorizeDate{};
  shared_ptr<string> authorizeDepartment{};
  shared_ptr<string> certNum{};
  shared_ptr<string> certScope{};
  shared_ptr<string> certType{};
  shared_ptr<string> entName{};
  shared_ptr<string> province{};
  shared_ptr<string> pubDate{};
  shared_ptr<string> validEndDate{};
  shared_ptr<string> validStartDate{};

  GetOcIpCertificateResponseBodyData() {}

  explicit GetOcIpCertificateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizeDate) {
      res["AuthorizeDate"] = boost::any(*authorizeDate);
    }
    if (authorizeDepartment) {
      res["AuthorizeDepartment"] = boost::any(*authorizeDepartment);
    }
    if (certNum) {
      res["CertNum"] = boost::any(*certNum);
    }
    if (certScope) {
      res["CertScope"] = boost::any(*certScope);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (pubDate) {
      res["PubDate"] = boost::any(*pubDate);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizeDate") != m.end() && !m["AuthorizeDate"].empty()) {
      authorizeDate = make_shared<string>(boost::any_cast<string>(m["AuthorizeDate"]));
    }
    if (m.find("AuthorizeDepartment") != m.end() && !m["AuthorizeDepartment"].empty()) {
      authorizeDepartment = make_shared<string>(boost::any_cast<string>(m["AuthorizeDepartment"]));
    }
    if (m.find("CertNum") != m.end() && !m["CertNum"].empty()) {
      certNum = make_shared<string>(boost::any_cast<string>(m["CertNum"]));
    }
    if (m.find("CertScope") != m.end() && !m["CertScope"].empty()) {
      certScope = make_shared<string>(boost::any_cast<string>(m["CertScope"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("PubDate") != m.end() && !m["PubDate"].empty()) {
      pubDate = make_shared<string>(boost::any_cast<string>(m["PubDate"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<string>(boost::any_cast<string>(m["ValidEndDate"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<string>(boost::any_cast<string>(m["ValidStartDate"]));
    }
  }


  virtual ~GetOcIpCertificateResponseBodyData() = default;
};
class GetOcIpCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIpCertificateResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIpCertificateResponseBody() {}

  explicit GetOcIpCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIpCertificateResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIpCertificateResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIpCertificateResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIpCertificateResponseBody() = default;
};
class GetOcIpCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIpCertificateResponseBody> body{};

  GetOcIpCertificateResponse() {}

  explicit GetOcIpCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIpCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIpCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIpCertificateResponse() = default;
};
class GetOcIpDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIpDomainRequest() {}

  explicit GetOcIpDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIpDomainRequest() = default;
};
class GetOcIpDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> checkDate{};
  shared_ptr<string> domain{};
  shared_ptr<string> entName{};
  shared_ptr<string> homeUrl{};
  shared_ptr<string> number{};
  shared_ptr<string> siteName{};

  GetOcIpDomainResponseBodyData() {}

  explicit GetOcIpDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkDate) {
      res["CheckDate"] = boost::any(*checkDate);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (homeUrl) {
      res["HomeUrl"] = boost::any(*homeUrl);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (siteName) {
      res["SiteName"] = boost::any(*siteName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckDate") != m.end() && !m["CheckDate"].empty()) {
      checkDate = make_shared<string>(boost::any_cast<string>(m["CheckDate"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("HomeUrl") != m.end() && !m["HomeUrl"].empty()) {
      homeUrl = make_shared<string>(boost::any_cast<string>(m["HomeUrl"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("SiteName") != m.end() && !m["SiteName"].empty()) {
      siteName = make_shared<string>(boost::any_cast<string>(m["SiteName"]));
    }
  }


  virtual ~GetOcIpDomainResponseBodyData() = default;
};
class GetOcIpDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIpDomainResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIpDomainResponseBody() {}

  explicit GetOcIpDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIpDomainResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIpDomainResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIpDomainResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIpDomainResponseBody() = default;
};
class GetOcIpDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIpDomainResponseBody> body{};

  GetOcIpDomainResponse() {}

  explicit GetOcIpDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIpDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIpDomainResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIpDomainResponse() = default;
};
class GetOcIpPatentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIpPatentRequest() {}

  explicit GetOcIpPatentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIpPatentRequest() = default;
};
class GetOcIpPatentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> agency{};
  shared_ptr<string> agent{};
  shared_ptr<string> brief{};
  shared_ptr<string> cateNum{};
  shared_ptr<string> entName{};
  shared_ptr<string> inventorList{};
  shared_ptr<string> mainClaim{};
  shared_ptr<string> patentName{};
  shared_ptr<string> patentStatus{};
  shared_ptr<string> patentType{};
  shared_ptr<string> patenteeList{};
  shared_ptr<string> prioDate{};
  shared_ptr<string> prioNum{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> publicNum{};
  shared_ptr<string> requestDate{};
  shared_ptr<string> requestNum{};

  GetOcIpPatentResponseBodyData() {}

  explicit GetOcIpPatentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agency) {
      res["Agency"] = boost::any(*agency);
    }
    if (agent) {
      res["Agent"] = boost::any(*agent);
    }
    if (brief) {
      res["Brief"] = boost::any(*brief);
    }
    if (cateNum) {
      res["CateNum"] = boost::any(*cateNum);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (inventorList) {
      res["InventorList"] = boost::any(*inventorList);
    }
    if (mainClaim) {
      res["MainClaim"] = boost::any(*mainClaim);
    }
    if (patentName) {
      res["PatentName"] = boost::any(*patentName);
    }
    if (patentStatus) {
      res["PatentStatus"] = boost::any(*patentStatus);
    }
    if (patentType) {
      res["PatentType"] = boost::any(*patentType);
    }
    if (patenteeList) {
      res["PatenteeList"] = boost::any(*patenteeList);
    }
    if (prioDate) {
      res["PrioDate"] = boost::any(*prioDate);
    }
    if (prioNum) {
      res["PrioNum"] = boost::any(*prioNum);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (publicNum) {
      res["PublicNum"] = boost::any(*publicNum);
    }
    if (requestDate) {
      res["RequestDate"] = boost::any(*requestDate);
    }
    if (requestNum) {
      res["RequestNum"] = boost::any(*requestNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agency") != m.end() && !m["Agency"].empty()) {
      agency = make_shared<string>(boost::any_cast<string>(m["Agency"]));
    }
    if (m.find("Agent") != m.end() && !m["Agent"].empty()) {
      agent = make_shared<string>(boost::any_cast<string>(m["Agent"]));
    }
    if (m.find("Brief") != m.end() && !m["Brief"].empty()) {
      brief = make_shared<string>(boost::any_cast<string>(m["Brief"]));
    }
    if (m.find("CateNum") != m.end() && !m["CateNum"].empty()) {
      cateNum = make_shared<string>(boost::any_cast<string>(m["CateNum"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("InventorList") != m.end() && !m["InventorList"].empty()) {
      inventorList = make_shared<string>(boost::any_cast<string>(m["InventorList"]));
    }
    if (m.find("MainClaim") != m.end() && !m["MainClaim"].empty()) {
      mainClaim = make_shared<string>(boost::any_cast<string>(m["MainClaim"]));
    }
    if (m.find("PatentName") != m.end() && !m["PatentName"].empty()) {
      patentName = make_shared<string>(boost::any_cast<string>(m["PatentName"]));
    }
    if (m.find("PatentStatus") != m.end() && !m["PatentStatus"].empty()) {
      patentStatus = make_shared<string>(boost::any_cast<string>(m["PatentStatus"]));
    }
    if (m.find("PatentType") != m.end() && !m["PatentType"].empty()) {
      patentType = make_shared<string>(boost::any_cast<string>(m["PatentType"]));
    }
    if (m.find("PatenteeList") != m.end() && !m["PatenteeList"].empty()) {
      patenteeList = make_shared<string>(boost::any_cast<string>(m["PatenteeList"]));
    }
    if (m.find("PrioDate") != m.end() && !m["PrioDate"].empty()) {
      prioDate = make_shared<string>(boost::any_cast<string>(m["PrioDate"]));
    }
    if (m.find("PrioNum") != m.end() && !m["PrioNum"].empty()) {
      prioNum = make_shared<string>(boost::any_cast<string>(m["PrioNum"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("PublicNum") != m.end() && !m["PublicNum"].empty()) {
      publicNum = make_shared<string>(boost::any_cast<string>(m["PublicNum"]));
    }
    if (m.find("RequestDate") != m.end() && !m["RequestDate"].empty()) {
      requestDate = make_shared<string>(boost::any_cast<string>(m["RequestDate"]));
    }
    if (m.find("RequestNum") != m.end() && !m["RequestNum"].empty()) {
      requestNum = make_shared<string>(boost::any_cast<string>(m["RequestNum"]));
    }
  }


  virtual ~GetOcIpPatentResponseBodyData() = default;
};
class GetOcIpPatentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIpPatentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIpPatentResponseBody() {}

  explicit GetOcIpPatentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIpPatentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIpPatentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIpPatentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIpPatentResponseBody() = default;
};
class GetOcIpPatentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIpPatentResponseBody> body{};

  GetOcIpPatentResponse() {}

  explicit GetOcIpPatentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIpPatentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIpPatentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIpPatentResponse() = default;
};
class GetOcIpSoftwareCopyrightRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIpSoftwareCopyrightRequest() {}

  explicit GetOcIpSoftwareCopyrightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIpSoftwareCopyrightRequest() = default;
};
class GetOcIpSoftwareCopyrightResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approvalDate{};
  shared_ptr<string> copyName{};
  shared_ptr<string> copyNum{};
  shared_ptr<string> entName{};
  shared_ptr<string> firstDate{};
  shared_ptr<string> shortName{};
  shared_ptr<string> successDate{};
  shared_ptr<string> typeNum{};
  shared_ptr<string> version{};

  GetOcIpSoftwareCopyrightResponseBodyData() {}

  explicit GetOcIpSoftwareCopyrightResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalDate) {
      res["ApprovalDate"] = boost::any(*approvalDate);
    }
    if (copyName) {
      res["CopyName"] = boost::any(*copyName);
    }
    if (copyNum) {
      res["CopyNum"] = boost::any(*copyNum);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (firstDate) {
      res["FirstDate"] = boost::any(*firstDate);
    }
    if (shortName) {
      res["ShortName"] = boost::any(*shortName);
    }
    if (successDate) {
      res["SuccessDate"] = boost::any(*successDate);
    }
    if (typeNum) {
      res["TypeNum"] = boost::any(*typeNum);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalDate") != m.end() && !m["ApprovalDate"].empty()) {
      approvalDate = make_shared<string>(boost::any_cast<string>(m["ApprovalDate"]));
    }
    if (m.find("CopyName") != m.end() && !m["CopyName"].empty()) {
      copyName = make_shared<string>(boost::any_cast<string>(m["CopyName"]));
    }
    if (m.find("CopyNum") != m.end() && !m["CopyNum"].empty()) {
      copyNum = make_shared<string>(boost::any_cast<string>(m["CopyNum"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("FirstDate") != m.end() && !m["FirstDate"].empty()) {
      firstDate = make_shared<string>(boost::any_cast<string>(m["FirstDate"]));
    }
    if (m.find("ShortName") != m.end() && !m["ShortName"].empty()) {
      shortName = make_shared<string>(boost::any_cast<string>(m["ShortName"]));
    }
    if (m.find("SuccessDate") != m.end() && !m["SuccessDate"].empty()) {
      successDate = make_shared<string>(boost::any_cast<string>(m["SuccessDate"]));
    }
    if (m.find("TypeNum") != m.end() && !m["TypeNum"].empty()) {
      typeNum = make_shared<string>(boost::any_cast<string>(m["TypeNum"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetOcIpSoftwareCopyrightResponseBodyData() = default;
};
class GetOcIpSoftwareCopyrightResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIpSoftwareCopyrightResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIpSoftwareCopyrightResponseBody() {}

  explicit GetOcIpSoftwareCopyrightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIpSoftwareCopyrightResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIpSoftwareCopyrightResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIpSoftwareCopyrightResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIpSoftwareCopyrightResponseBody() = default;
};
class GetOcIpSoftwareCopyrightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIpSoftwareCopyrightResponseBody> body{};

  GetOcIpSoftwareCopyrightResponse() {}

  explicit GetOcIpSoftwareCopyrightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIpSoftwareCopyrightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIpSoftwareCopyrightResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIpSoftwareCopyrightResponse() = default;
};
class GetOcIpTrademarkRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIpTrademarkRequest() {}

  explicit GetOcIpTrademarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIpTrademarkRequest() = default;
};
class GetOcIpTrademarkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> agent{};
  shared_ptr<string> applyDate{};
  shared_ptr<string> entName{};
  shared_ptr<string> firstPubDate{};
  shared_ptr<string> firstPubNo{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> period{};
  shared_ptr<string> regNum{};
  shared_ptr<string> regPubDate{};
  shared_ptr<string> regPubNo{};
  shared_ptr<string> trademarkForm{};
  shared_ptr<string> trademarkName{};
  shared_ptr<string> trademarkStatus{};
  shared_ptr<string> trademarkType{};
  shared_ptr<string> typeName_{};

  GetOcIpTrademarkResponseBodyData() {}

  explicit GetOcIpTrademarkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agent) {
      res["Agent"] = boost::any(*agent);
    }
    if (applyDate) {
      res["ApplyDate"] = boost::any(*applyDate);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (firstPubDate) {
      res["FirstPubDate"] = boost::any(*firstPubDate);
    }
    if (firstPubNo) {
      res["FirstPubNo"] = boost::any(*firstPubNo);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regNum) {
      res["RegNum"] = boost::any(*regNum);
    }
    if (regPubDate) {
      res["RegPubDate"] = boost::any(*regPubDate);
    }
    if (regPubNo) {
      res["RegPubNo"] = boost::any(*regPubNo);
    }
    if (trademarkForm) {
      res["TrademarkForm"] = boost::any(*trademarkForm);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkStatus) {
      res["TrademarkStatus"] = boost::any(*trademarkStatus);
    }
    if (trademarkType) {
      res["TrademarkType"] = boost::any(*trademarkType);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agent") != m.end() && !m["Agent"].empty()) {
      agent = make_shared<string>(boost::any_cast<string>(m["Agent"]));
    }
    if (m.find("ApplyDate") != m.end() && !m["ApplyDate"].empty()) {
      applyDate = make_shared<string>(boost::any_cast<string>(m["ApplyDate"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("FirstPubDate") != m.end() && !m["FirstPubDate"].empty()) {
      firstPubDate = make_shared<string>(boost::any_cast<string>(m["FirstPubDate"]));
    }
    if (m.find("FirstPubNo") != m.end() && !m["FirstPubNo"].empty()) {
      firstPubNo = make_shared<string>(boost::any_cast<string>(m["FirstPubNo"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegNum") != m.end() && !m["RegNum"].empty()) {
      regNum = make_shared<string>(boost::any_cast<string>(m["RegNum"]));
    }
    if (m.find("RegPubDate") != m.end() && !m["RegPubDate"].empty()) {
      regPubDate = make_shared<string>(boost::any_cast<string>(m["RegPubDate"]));
    }
    if (m.find("RegPubNo") != m.end() && !m["RegPubNo"].empty()) {
      regPubNo = make_shared<string>(boost::any_cast<string>(m["RegPubNo"]));
    }
    if (m.find("TrademarkForm") != m.end() && !m["TrademarkForm"].empty()) {
      trademarkForm = make_shared<string>(boost::any_cast<string>(m["TrademarkForm"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkStatus") != m.end() && !m["TrademarkStatus"].empty()) {
      trademarkStatus = make_shared<string>(boost::any_cast<string>(m["TrademarkStatus"]));
    }
    if (m.find("TrademarkType") != m.end() && !m["TrademarkType"].empty()) {
      trademarkType = make_shared<string>(boost::any_cast<string>(m["TrademarkType"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~GetOcIpTrademarkResponseBodyData() = default;
};
class GetOcIpTrademarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIpTrademarkResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIpTrademarkResponseBody() {}

  explicit GetOcIpTrademarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIpTrademarkResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIpTrademarkResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIpTrademarkResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIpTrademarkResponseBody() = default;
};
class GetOcIpTrademarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIpTrademarkResponseBody> body{};

  GetOcIpTrademarkResponse() {}

  explicit GetOcIpTrademarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIpTrademarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIpTrademarkResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIpTrademarkResponse() = default;
};
class GetOcIpWorksCopyrightRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcIpWorksCopyrightRequest() {}

  explicit GetOcIpWorksCopyrightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcIpWorksCopyrightRequest() = default;
};
class GetOcIpWorksCopyrightResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approvalDate{};
  shared_ptr<string> copyName{};
  shared_ptr<string> copyNum{};
  shared_ptr<string> entName{};
  shared_ptr<string> firstDate{};
  shared_ptr<string> successDate{};
  shared_ptr<string> typeName_{};

  GetOcIpWorksCopyrightResponseBodyData() {}

  explicit GetOcIpWorksCopyrightResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalDate) {
      res["ApprovalDate"] = boost::any(*approvalDate);
    }
    if (copyName) {
      res["CopyName"] = boost::any(*copyName);
    }
    if (copyNum) {
      res["CopyNum"] = boost::any(*copyNum);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (firstDate) {
      res["FirstDate"] = boost::any(*firstDate);
    }
    if (successDate) {
      res["SuccessDate"] = boost::any(*successDate);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalDate") != m.end() && !m["ApprovalDate"].empty()) {
      approvalDate = make_shared<string>(boost::any_cast<string>(m["ApprovalDate"]));
    }
    if (m.find("CopyName") != m.end() && !m["CopyName"].empty()) {
      copyName = make_shared<string>(boost::any_cast<string>(m["CopyName"]));
    }
    if (m.find("CopyNum") != m.end() && !m["CopyNum"].empty()) {
      copyNum = make_shared<string>(boost::any_cast<string>(m["CopyNum"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("FirstDate") != m.end() && !m["FirstDate"].empty()) {
      firstDate = make_shared<string>(boost::any_cast<string>(m["FirstDate"]));
    }
    if (m.find("SuccessDate") != m.end() && !m["SuccessDate"].empty()) {
      successDate = make_shared<string>(boost::any_cast<string>(m["SuccessDate"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~GetOcIpWorksCopyrightResponseBodyData() = default;
};
class GetOcIpWorksCopyrightResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcIpWorksCopyrightResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcIpWorksCopyrightResponseBody() {}

  explicit GetOcIpWorksCopyrightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcIpWorksCopyrightResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcIpWorksCopyrightResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcIpWorksCopyrightResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcIpWorksCopyrightResponseBody() = default;
};
class GetOcIpWorksCopyrightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcIpWorksCopyrightResponseBody> body{};

  GetOcIpWorksCopyrightResponse() {}

  explicit GetOcIpWorksCopyrightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcIpWorksCopyrightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcIpWorksCopyrightResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcIpWorksCopyrightResponse() = default;
};
class GetOcJusticeAuctionRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcJusticeAuctionRequest() {}

  explicit GetOcJusticeAuctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeAuctionRequest() = default;
};
class GetOcJusticeAuctionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> auctionDate{};
  shared_ptr<string> auctionName{};
  shared_ptr<string> basis{};
  shared_ptr<string> certificate{};
  shared_ptr<string> court{};
  shared_ptr<string> description{};
  shared_ptr<string> document{};
  shared_ptr<string> entName{};
  shared_ptr<string> estPrice{};
  shared_ptr<string> owner{};
  shared_ptr<string> restrict{};
  shared_ptr<string> startPrice{};

  GetOcJusticeAuctionResponseBodyData() {}

  explicit GetOcJusticeAuctionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctionDate) {
      res["AuctionDate"] = boost::any(*auctionDate);
    }
    if (auctionName) {
      res["AuctionName"] = boost::any(*auctionName);
    }
    if (basis) {
      res["Basis"] = boost::any(*basis);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (court) {
      res["Court"] = boost::any(*court);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (document) {
      res["Document"] = boost::any(*document);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (estPrice) {
      res["EstPrice"] = boost::any(*estPrice);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (restrict) {
      res["Restrict"] = boost::any(*restrict);
    }
    if (startPrice) {
      res["StartPrice"] = boost::any(*startPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuctionDate") != m.end() && !m["AuctionDate"].empty()) {
      auctionDate = make_shared<string>(boost::any_cast<string>(m["AuctionDate"]));
    }
    if (m.find("AuctionName") != m.end() && !m["AuctionName"].empty()) {
      auctionName = make_shared<string>(boost::any_cast<string>(m["AuctionName"]));
    }
    if (m.find("Basis") != m.end() && !m["Basis"].empty()) {
      basis = make_shared<string>(boost::any_cast<string>(m["Basis"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("Court") != m.end() && !m["Court"].empty()) {
      court = make_shared<string>(boost::any_cast<string>(m["Court"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Document") != m.end() && !m["Document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["Document"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("EstPrice") != m.end() && !m["EstPrice"].empty()) {
      estPrice = make_shared<string>(boost::any_cast<string>(m["EstPrice"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Restrict") != m.end() && !m["Restrict"].empty()) {
      restrict = make_shared<string>(boost::any_cast<string>(m["Restrict"]));
    }
    if (m.find("StartPrice") != m.end() && !m["StartPrice"].empty()) {
      startPrice = make_shared<string>(boost::any_cast<string>(m["StartPrice"]));
    }
  }


  virtual ~GetOcJusticeAuctionResponseBodyData() = default;
};
class GetOcJusticeAuctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeAuctionResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeAuctionResponseBody() {}

  explicit GetOcJusticeAuctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeAuctionResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeAuctionResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeAuctionResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeAuctionResponseBody() = default;
};
class GetOcJusticeAuctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeAuctionResponseBody> body{};

  GetOcJusticeAuctionResponse() {}

  explicit GetOcJusticeAuctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeAuctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeAuctionResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeAuctionResponse() = default;
};
class GetOcJusticeCaseFilingRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcJusticeCaseFilingRequest() {}

  explicit GetOcJusticeCaseFilingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeCaseFilingRequest() = default;
};
class GetOcJusticeCaseFilingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> caseNum{};
  shared_ptr<string> caseStatus{};
  shared_ptr<string> causeAction{};
  shared_ptr<string> endDate{};
  shared_ptr<string> filingDate{};
  shared_ptr<string> hearingDate{};
  shared_ptr<string> judge{};
  shared_ptr<string> party{};
  shared_ptr<string> role{};

  GetOcJusticeCaseFilingResponseBodyData() {}

  explicit GetOcJusticeCaseFilingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["Assistant"] = boost::any(*assistant);
    }
    if (caseNum) {
      res["CaseNum"] = boost::any(*caseNum);
    }
    if (caseStatus) {
      res["CaseStatus"] = boost::any(*caseStatus);
    }
    if (causeAction) {
      res["CauseAction"] = boost::any(*causeAction);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (filingDate) {
      res["FilingDate"] = boost::any(*filingDate);
    }
    if (hearingDate) {
      res["HearingDate"] = boost::any(*hearingDate);
    }
    if (judge) {
      res["Judge"] = boost::any(*judge);
    }
    if (party) {
      res["Party"] = boost::any(*party);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Assistant") != m.end() && !m["Assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["Assistant"]));
    }
    if (m.find("CaseNum") != m.end() && !m["CaseNum"].empty()) {
      caseNum = make_shared<string>(boost::any_cast<string>(m["CaseNum"]));
    }
    if (m.find("CaseStatus") != m.end() && !m["CaseStatus"].empty()) {
      caseStatus = make_shared<string>(boost::any_cast<string>(m["CaseStatus"]));
    }
    if (m.find("CauseAction") != m.end() && !m["CauseAction"].empty()) {
      causeAction = make_shared<string>(boost::any_cast<string>(m["CauseAction"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("FilingDate") != m.end() && !m["FilingDate"].empty()) {
      filingDate = make_shared<string>(boost::any_cast<string>(m["FilingDate"]));
    }
    if (m.find("HearingDate") != m.end() && !m["HearingDate"].empty()) {
      hearingDate = make_shared<string>(boost::any_cast<string>(m["HearingDate"]));
    }
    if (m.find("Judge") != m.end() && !m["Judge"].empty()) {
      judge = make_shared<string>(boost::any_cast<string>(m["Judge"]));
    }
    if (m.find("Party") != m.end() && !m["Party"].empty()) {
      party = make_shared<string>(boost::any_cast<string>(m["Party"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~GetOcJusticeCaseFilingResponseBodyData() = default;
};
class GetOcJusticeCaseFilingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeCaseFilingResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeCaseFilingResponseBody() {}

  explicit GetOcJusticeCaseFilingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeCaseFilingResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeCaseFilingResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeCaseFilingResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeCaseFilingResponseBody() = default;
};
class GetOcJusticeCaseFilingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeCaseFilingResponseBody> body{};

  GetOcJusticeCaseFilingResponse() {}

  explicit GetOcJusticeCaseFilingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeCaseFilingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeCaseFilingResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeCaseFilingResponse() = default;
};
class GetOcJusticeCourtAnnouncementRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcJusticeCourtAnnouncementRequest() {}

  explicit GetOcJusticeCourtAnnouncementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeCourtAnnouncementRequest() = default;
};
class GetOcJusticeCourtAnnouncementResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> caseNum{};
  shared_ptr<string> causeAction{};
  shared_ptr<string> court{};
  shared_ptr<string> department{};
  shared_ptr<string> hearingDate{};
  shared_ptr<string> judge{};
  shared_ptr<string> party{};
  shared_ptr<string> title{};
  shared_ptr<string> tribunal{};

  GetOcJusticeCourtAnnouncementResponseBodyData() {}

  explicit GetOcJusticeCourtAnnouncementResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseNum) {
      res["CaseNum"] = boost::any(*caseNum);
    }
    if (causeAction) {
      res["CauseAction"] = boost::any(*causeAction);
    }
    if (court) {
      res["Court"] = boost::any(*court);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (hearingDate) {
      res["HearingDate"] = boost::any(*hearingDate);
    }
    if (judge) {
      res["Judge"] = boost::any(*judge);
    }
    if (party) {
      res["Party"] = boost::any(*party);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (tribunal) {
      res["Tribunal"] = boost::any(*tribunal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaseNum") != m.end() && !m["CaseNum"].empty()) {
      caseNum = make_shared<string>(boost::any_cast<string>(m["CaseNum"]));
    }
    if (m.find("CauseAction") != m.end() && !m["CauseAction"].empty()) {
      causeAction = make_shared<string>(boost::any_cast<string>(m["CauseAction"]));
    }
    if (m.find("Court") != m.end() && !m["Court"].empty()) {
      court = make_shared<string>(boost::any_cast<string>(m["Court"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("HearingDate") != m.end() && !m["HearingDate"].empty()) {
      hearingDate = make_shared<string>(boost::any_cast<string>(m["HearingDate"]));
    }
    if (m.find("Judge") != m.end() && !m["Judge"].empty()) {
      judge = make_shared<string>(boost::any_cast<string>(m["Judge"]));
    }
    if (m.find("Party") != m.end() && !m["Party"].empty()) {
      party = make_shared<string>(boost::any_cast<string>(m["Party"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Tribunal") != m.end() && !m["Tribunal"].empty()) {
      tribunal = make_shared<string>(boost::any_cast<string>(m["Tribunal"]));
    }
  }


  virtual ~GetOcJusticeCourtAnnouncementResponseBodyData() = default;
};
class GetOcJusticeCourtAnnouncementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeCourtAnnouncementResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeCourtAnnouncementResponseBody() {}

  explicit GetOcJusticeCourtAnnouncementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeCourtAnnouncementResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeCourtAnnouncementResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeCourtAnnouncementResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeCourtAnnouncementResponseBody() = default;
};
class GetOcJusticeCourtAnnouncementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeCourtAnnouncementResponseBody> body{};

  GetOcJusticeCourtAnnouncementResponse() {}

  explicit GetOcJusticeCourtAnnouncementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeCourtAnnouncementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeCourtAnnouncementResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeCourtAnnouncementResponse() = default;
};
class GetOcJusticeCourtNoticeRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> searchKey{};

  GetOcJusticeCourtNoticeRequest() {}

  explicit GetOcJusticeCourtNoticeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeCourtNoticeRequest() = default;
};
class GetOcJusticeCourtNoticeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> court{};
  shared_ptr<string> party{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> type{};

  GetOcJusticeCourtNoticeResponseBodyData() {}

  explicit GetOcJusticeCourtNoticeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (court) {
      res["Court"] = boost::any(*court);
    }
    if (party) {
      res["Party"] = boost::any(*party);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Court") != m.end() && !m["Court"].empty()) {
      court = make_shared<string>(boost::any_cast<string>(m["Court"]));
    }
    if (m.find("Party") != m.end() && !m["Party"].empty()) {
      party = make_shared<string>(boost::any_cast<string>(m["Party"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetOcJusticeCourtNoticeResponseBodyData() = default;
};
class GetOcJusticeCourtNoticeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeCourtNoticeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeCourtNoticeResponseBody() {}

  explicit GetOcJusticeCourtNoticeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeCourtNoticeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeCourtNoticeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeCourtNoticeResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeCourtNoticeResponseBody() = default;
};
class GetOcJusticeCourtNoticeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeCourtNoticeResponseBody> body{};

  GetOcJusticeCourtNoticeResponse() {}

  explicit GetOcJusticeCourtNoticeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeCourtNoticeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeCourtNoticeResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeCourtNoticeResponse() = default;
};
class GetOcJusticeDishonestyRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcJusticeDishonestyRequest() {}

  explicit GetOcJusticeDishonestyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeDishonestyRequest() = default;
};
class GetOcJusticeDishonestyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> caseNum{};
  shared_ptr<string> court{};
  shared_ptr<string> entName{};
  shared_ptr<string> executeDepartment{};
  shared_ptr<string> executionDesc{};
  shared_ptr<string> executionStatus{};
  shared_ptr<string> filingDate{};
  shared_ptr<string> finalDuty{};
  shared_ptr<string> fromCaseNum{};
  shared_ptr<string> legalName{};
  shared_ptr<string> province{};
  shared_ptr<string> publishDate{};
  shared_ptr<string> socialCreditCode{};

  GetOcJusticeDishonestyResponseBodyData() {}

  explicit GetOcJusticeDishonestyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (caseNum) {
      res["CaseNum"] = boost::any(*caseNum);
    }
    if (court) {
      res["Court"] = boost::any(*court);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (executeDepartment) {
      res["ExecuteDepartment"] = boost::any(*executeDepartment);
    }
    if (executionDesc) {
      res["ExecutionDesc"] = boost::any(*executionDesc);
    }
    if (executionStatus) {
      res["ExecutionStatus"] = boost::any(*executionStatus);
    }
    if (filingDate) {
      res["FilingDate"] = boost::any(*filingDate);
    }
    if (finalDuty) {
      res["FinalDuty"] = boost::any(*finalDuty);
    }
    if (fromCaseNum) {
      res["FromCaseNum"] = boost::any(*fromCaseNum);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (publishDate) {
      res["PublishDate"] = boost::any(*publishDate);
    }
    if (socialCreditCode) {
      res["SocialCreditCode"] = boost::any(*socialCreditCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("CaseNum") != m.end() && !m["CaseNum"].empty()) {
      caseNum = make_shared<string>(boost::any_cast<string>(m["CaseNum"]));
    }
    if (m.find("Court") != m.end() && !m["Court"].empty()) {
      court = make_shared<string>(boost::any_cast<string>(m["Court"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("ExecuteDepartment") != m.end() && !m["ExecuteDepartment"].empty()) {
      executeDepartment = make_shared<string>(boost::any_cast<string>(m["ExecuteDepartment"]));
    }
    if (m.find("ExecutionDesc") != m.end() && !m["ExecutionDesc"].empty()) {
      executionDesc = make_shared<string>(boost::any_cast<string>(m["ExecutionDesc"]));
    }
    if (m.find("ExecutionStatus") != m.end() && !m["ExecutionStatus"].empty()) {
      executionStatus = make_shared<string>(boost::any_cast<string>(m["ExecutionStatus"]));
    }
    if (m.find("FilingDate") != m.end() && !m["FilingDate"].empty()) {
      filingDate = make_shared<string>(boost::any_cast<string>(m["FilingDate"]));
    }
    if (m.find("FinalDuty") != m.end() && !m["FinalDuty"].empty()) {
      finalDuty = make_shared<string>(boost::any_cast<string>(m["FinalDuty"]));
    }
    if (m.find("FromCaseNum") != m.end() && !m["FromCaseNum"].empty()) {
      fromCaseNum = make_shared<string>(boost::any_cast<string>(m["FromCaseNum"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("PublishDate") != m.end() && !m["PublishDate"].empty()) {
      publishDate = make_shared<string>(boost::any_cast<string>(m["PublishDate"]));
    }
    if (m.find("SocialCreditCode") != m.end() && !m["SocialCreditCode"].empty()) {
      socialCreditCode = make_shared<string>(boost::any_cast<string>(m["SocialCreditCode"]));
    }
  }


  virtual ~GetOcJusticeDishonestyResponseBodyData() = default;
};
class GetOcJusticeDishonestyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeDishonestyResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeDishonestyResponseBody() {}

  explicit GetOcJusticeDishonestyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeDishonestyResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeDishonestyResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeDishonestyResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeDishonestyResponseBody() = default;
};
class GetOcJusticeDishonestyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeDishonestyResponseBody> body{};

  GetOcJusticeDishonestyResponse() {}

  explicit GetOcJusticeDishonestyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeDishonestyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeDishonestyResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeDishonestyResponse() = default;
};
class GetOcJusticeExecutedRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> searchKey{};

  GetOcJusticeExecutedRequest() {}

  explicit GetOcJusticeExecutedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeExecutedRequest() = default;
};
class GetOcJusticeExecutedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> caseNum{};
  shared_ptr<string> court{};
  shared_ptr<string> filingDate{};

  GetOcJusticeExecutedResponseBodyData() {}

  explicit GetOcJusticeExecutedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (caseNum) {
      res["CaseNum"] = boost::any(*caseNum);
    }
    if (court) {
      res["Court"] = boost::any(*court);
    }
    if (filingDate) {
      res["FilingDate"] = boost::any(*filingDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("CaseNum") != m.end() && !m["CaseNum"].empty()) {
      caseNum = make_shared<string>(boost::any_cast<string>(m["CaseNum"]));
    }
    if (m.find("Court") != m.end() && !m["Court"].empty()) {
      court = make_shared<string>(boost::any_cast<string>(m["Court"]));
    }
    if (m.find("FilingDate") != m.end() && !m["FilingDate"].empty()) {
      filingDate = make_shared<string>(boost::any_cast<string>(m["FilingDate"]));
    }
  }


  virtual ~GetOcJusticeExecutedResponseBodyData() = default;
};
class GetOcJusticeExecutedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeExecutedResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeExecutedResponseBody() {}

  explicit GetOcJusticeExecutedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeExecutedResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeExecutedResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeExecutedResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeExecutedResponseBody() = default;
};
class GetOcJusticeExecutedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeExecutedResponseBody> body{};

  GetOcJusticeExecutedResponse() {}

  explicit GetOcJusticeExecutedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeExecutedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeExecutedResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeExecutedResponse() = default;
};
class GetOcJusticeJudgementDocRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcJusticeJudgementDocRequest() {}

  explicit GetOcJusticeJudgementDocRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeJudgementDocRequest() = default;
};
class GetOcJusticeJudgementDocResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> caseFlow{};
  shared_ptr<string> caseNum{};
  shared_ptr<string> caseType{};
  shared_ptr<string> causeAction{};
  shared_ptr<string> court{};
  shared_ptr<string> defendant{};
  shared_ptr<string> judgeDate{};
  shared_ptr<string> judgeResult{};
  shared_ptr<string> judgeType{};
  shared_ptr<string> party{};
  shared_ptr<string> plaintiff{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> role{};
  shared_ptr<string> subAmount{};
  shared_ptr<string> title{};

  GetOcJusticeJudgementDocResponseBodyData() {}

  explicit GetOcJusticeJudgementDocResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseFlow) {
      res["CaseFlow"] = boost::any(*caseFlow);
    }
    if (caseNum) {
      res["CaseNum"] = boost::any(*caseNum);
    }
    if (caseType) {
      res["CaseType"] = boost::any(*caseType);
    }
    if (causeAction) {
      res["CauseAction"] = boost::any(*causeAction);
    }
    if (court) {
      res["Court"] = boost::any(*court);
    }
    if (defendant) {
      res["Defendant"] = boost::any(*defendant);
    }
    if (judgeDate) {
      res["JudgeDate"] = boost::any(*judgeDate);
    }
    if (judgeResult) {
      res["JudgeResult"] = boost::any(*judgeResult);
    }
    if (judgeType) {
      res["JudgeType"] = boost::any(*judgeType);
    }
    if (party) {
      res["Party"] = boost::any(*party);
    }
    if (plaintiff) {
      res["Plaintiff"] = boost::any(*plaintiff);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (subAmount) {
      res["SubAmount"] = boost::any(*subAmount);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaseFlow") != m.end() && !m["CaseFlow"].empty()) {
      caseFlow = make_shared<string>(boost::any_cast<string>(m["CaseFlow"]));
    }
    if (m.find("CaseNum") != m.end() && !m["CaseNum"].empty()) {
      caseNum = make_shared<string>(boost::any_cast<string>(m["CaseNum"]));
    }
    if (m.find("CaseType") != m.end() && !m["CaseType"].empty()) {
      caseType = make_shared<string>(boost::any_cast<string>(m["CaseType"]));
    }
    if (m.find("CauseAction") != m.end() && !m["CauseAction"].empty()) {
      causeAction = make_shared<string>(boost::any_cast<string>(m["CauseAction"]));
    }
    if (m.find("Court") != m.end() && !m["Court"].empty()) {
      court = make_shared<string>(boost::any_cast<string>(m["Court"]));
    }
    if (m.find("Defendant") != m.end() && !m["Defendant"].empty()) {
      defendant = make_shared<string>(boost::any_cast<string>(m["Defendant"]));
    }
    if (m.find("JudgeDate") != m.end() && !m["JudgeDate"].empty()) {
      judgeDate = make_shared<string>(boost::any_cast<string>(m["JudgeDate"]));
    }
    if (m.find("JudgeResult") != m.end() && !m["JudgeResult"].empty()) {
      judgeResult = make_shared<string>(boost::any_cast<string>(m["JudgeResult"]));
    }
    if (m.find("JudgeType") != m.end() && !m["JudgeType"].empty()) {
      judgeType = make_shared<string>(boost::any_cast<string>(m["JudgeType"]));
    }
    if (m.find("Party") != m.end() && !m["Party"].empty()) {
      party = make_shared<string>(boost::any_cast<string>(m["Party"]));
    }
    if (m.find("Plaintiff") != m.end() && !m["Plaintiff"].empty()) {
      plaintiff = make_shared<string>(boost::any_cast<string>(m["Plaintiff"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SubAmount") != m.end() && !m["SubAmount"].empty()) {
      subAmount = make_shared<string>(boost::any_cast<string>(m["SubAmount"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetOcJusticeJudgementDocResponseBodyData() = default;
};
class GetOcJusticeJudgementDocResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeJudgementDocResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeJudgementDocResponseBody() {}

  explicit GetOcJusticeJudgementDocResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeJudgementDocResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeJudgementDocResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeJudgementDocResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeJudgementDocResponseBody() = default;
};
class GetOcJusticeJudgementDocResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeJudgementDocResponseBody> body{};

  GetOcJusticeJudgementDocResponse() {}

  explicit GetOcJusticeJudgementDocResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeJudgementDocResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeJudgementDocResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeJudgementDocResponse() = default;
};
class GetOcJusticeLimitHighConsumeRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> searchKey{};

  GetOcJusticeLimitHighConsumeRequest() {}

  explicit GetOcJusticeLimitHighConsumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeLimitHighConsumeRequest() = default;
};
class GetOcJusticeLimitHighConsumeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> caseNum{};
  shared_ptr<string> causeAction{};
  shared_ptr<string> companyName{};
  shared_ptr<string> court{};
  shared_ptr<string> executionApplicant{};
  shared_ptr<string> filingDate{};
  shared_ptr<string> name{};
  shared_ptr<string> publishDate{};

  GetOcJusticeLimitHighConsumeResponseBodyData() {}

  explicit GetOcJusticeLimitHighConsumeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseNum) {
      res["CaseNum"] = boost::any(*caseNum);
    }
    if (causeAction) {
      res["CauseAction"] = boost::any(*causeAction);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (court) {
      res["Court"] = boost::any(*court);
    }
    if (executionApplicant) {
      res["ExecutionApplicant"] = boost::any(*executionApplicant);
    }
    if (filingDate) {
      res["FilingDate"] = boost::any(*filingDate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (publishDate) {
      res["PublishDate"] = boost::any(*publishDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaseNum") != m.end() && !m["CaseNum"].empty()) {
      caseNum = make_shared<string>(boost::any_cast<string>(m["CaseNum"]));
    }
    if (m.find("CauseAction") != m.end() && !m["CauseAction"].empty()) {
      causeAction = make_shared<string>(boost::any_cast<string>(m["CauseAction"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("Court") != m.end() && !m["Court"].empty()) {
      court = make_shared<string>(boost::any_cast<string>(m["Court"]));
    }
    if (m.find("ExecutionApplicant") != m.end() && !m["ExecutionApplicant"].empty()) {
      executionApplicant = make_shared<string>(boost::any_cast<string>(m["ExecutionApplicant"]));
    }
    if (m.find("FilingDate") != m.end() && !m["FilingDate"].empty()) {
      filingDate = make_shared<string>(boost::any_cast<string>(m["FilingDate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PublishDate") != m.end() && !m["PublishDate"].empty()) {
      publishDate = make_shared<string>(boost::any_cast<string>(m["PublishDate"]));
    }
  }


  virtual ~GetOcJusticeLimitHighConsumeResponseBodyData() = default;
};
class GetOcJusticeLimitHighConsumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeLimitHighConsumeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeLimitHighConsumeResponseBody() {}

  explicit GetOcJusticeLimitHighConsumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeLimitHighConsumeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeLimitHighConsumeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeLimitHighConsumeResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeLimitHighConsumeResponseBody() = default;
};
class GetOcJusticeLimitHighConsumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeLimitHighConsumeResponseBody> body{};

  GetOcJusticeLimitHighConsumeResponse() {}

  explicit GetOcJusticeLimitHighConsumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeLimitHighConsumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeLimitHighConsumeResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeLimitHighConsumeResponse() = default;
};
class GetOcJusticeTerminalCaseRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcJusticeTerminalCaseRequest() {}

  explicit GetOcJusticeTerminalCaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcJusticeTerminalCaseRequest() = default;
};
class GetOcJusticeTerminalCaseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> caseNum{};
  shared_ptr<string> court{};
  shared_ptr<string> entName{};
  shared_ptr<string> execAmount{};
  shared_ptr<string> failPerformAmount{};
  shared_ptr<string> filingDate{};
  shared_ptr<string> name{};
  shared_ptr<string> terminalNum{};
  shared_ptr<string> terminateDate{};

  GetOcJusticeTerminalCaseResponseBodyData() {}

  explicit GetOcJusticeTerminalCaseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseNum) {
      res["CaseNum"] = boost::any(*caseNum);
    }
    if (court) {
      res["Court"] = boost::any(*court);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (execAmount) {
      res["ExecAmount"] = boost::any(*execAmount);
    }
    if (failPerformAmount) {
      res["FailPerformAmount"] = boost::any(*failPerformAmount);
    }
    if (filingDate) {
      res["FilingDate"] = boost::any(*filingDate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (terminalNum) {
      res["TerminalNum"] = boost::any(*terminalNum);
    }
    if (terminateDate) {
      res["TerminateDate"] = boost::any(*terminateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaseNum") != m.end() && !m["CaseNum"].empty()) {
      caseNum = make_shared<string>(boost::any_cast<string>(m["CaseNum"]));
    }
    if (m.find("Court") != m.end() && !m["Court"].empty()) {
      court = make_shared<string>(boost::any_cast<string>(m["Court"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("ExecAmount") != m.end() && !m["ExecAmount"].empty()) {
      execAmount = make_shared<string>(boost::any_cast<string>(m["ExecAmount"]));
    }
    if (m.find("FailPerformAmount") != m.end() && !m["FailPerformAmount"].empty()) {
      failPerformAmount = make_shared<string>(boost::any_cast<string>(m["FailPerformAmount"]));
    }
    if (m.find("FilingDate") != m.end() && !m["FilingDate"].empty()) {
      filingDate = make_shared<string>(boost::any_cast<string>(m["FilingDate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TerminalNum") != m.end() && !m["TerminalNum"].empty()) {
      terminalNum = make_shared<string>(boost::any_cast<string>(m["TerminalNum"]));
    }
    if (m.find("TerminateDate") != m.end() && !m["TerminateDate"].empty()) {
      terminateDate = make_shared<string>(boost::any_cast<string>(m["TerminateDate"]));
    }
  }


  virtual ~GetOcJusticeTerminalCaseResponseBodyData() = default;
};
class GetOcJusticeTerminalCaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcJusticeTerminalCaseResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcJusticeTerminalCaseResponseBody() {}

  explicit GetOcJusticeTerminalCaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcJusticeTerminalCaseResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcJusticeTerminalCaseResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcJusticeTerminalCaseResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcJusticeTerminalCaseResponseBody() = default;
};
class GetOcJusticeTerminalCaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcJusticeTerminalCaseResponseBody> body{};

  GetOcJusticeTerminalCaseResponse() {}

  explicit GetOcJusticeTerminalCaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcJusticeTerminalCaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcJusticeTerminalCaseResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcJusticeTerminalCaseResponse() = default;
};
class GetOcListedCompanyRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcListedCompanyRequest() {}

  explicit GetOcListedCompanyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcListedCompanyRequest() = default;
};
class GetOcListedCompanyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> circulationMarketValue{};
  shared_ptr<string> entName{};
  shared_ptr<string> entNameEng{};
  shared_ptr<string> listDate{};
  shared_ptr<string> securitiesCode{};
  shared_ptr<string> securitiesMarket{};
  shared_ptr<string> securitiesName{};
  shared_ptr<string> totalFlowShares{};
  shared_ptr<string> totalShares{};

  GetOcListedCompanyResponseBodyData() {}

  explicit GetOcListedCompanyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (circulationMarketValue) {
      res["CirculationMarketValue"] = boost::any(*circulationMarketValue);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (entNameEng) {
      res["EntNameEng"] = boost::any(*entNameEng);
    }
    if (listDate) {
      res["ListDate"] = boost::any(*listDate);
    }
    if (securitiesCode) {
      res["SecuritiesCode"] = boost::any(*securitiesCode);
    }
    if (securitiesMarket) {
      res["SecuritiesMarket"] = boost::any(*securitiesMarket);
    }
    if (securitiesName) {
      res["SecuritiesName"] = boost::any(*securitiesName);
    }
    if (totalFlowShares) {
      res["TotalFlowShares"] = boost::any(*totalFlowShares);
    }
    if (totalShares) {
      res["TotalShares"] = boost::any(*totalShares);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CirculationMarketValue") != m.end() && !m["CirculationMarketValue"].empty()) {
      circulationMarketValue = make_shared<string>(boost::any_cast<string>(m["CirculationMarketValue"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("EntNameEng") != m.end() && !m["EntNameEng"].empty()) {
      entNameEng = make_shared<string>(boost::any_cast<string>(m["EntNameEng"]));
    }
    if (m.find("ListDate") != m.end() && !m["ListDate"].empty()) {
      listDate = make_shared<string>(boost::any_cast<string>(m["ListDate"]));
    }
    if (m.find("SecuritiesCode") != m.end() && !m["SecuritiesCode"].empty()) {
      securitiesCode = make_shared<string>(boost::any_cast<string>(m["SecuritiesCode"]));
    }
    if (m.find("SecuritiesMarket") != m.end() && !m["SecuritiesMarket"].empty()) {
      securitiesMarket = make_shared<string>(boost::any_cast<string>(m["SecuritiesMarket"]));
    }
    if (m.find("SecuritiesName") != m.end() && !m["SecuritiesName"].empty()) {
      securitiesName = make_shared<string>(boost::any_cast<string>(m["SecuritiesName"]));
    }
    if (m.find("TotalFlowShares") != m.end() && !m["TotalFlowShares"].empty()) {
      totalFlowShares = make_shared<string>(boost::any_cast<string>(m["TotalFlowShares"]));
    }
    if (m.find("TotalShares") != m.end() && !m["TotalShares"].empty()) {
      totalShares = make_shared<string>(boost::any_cast<string>(m["TotalShares"]));
    }
  }


  virtual ~GetOcListedCompanyResponseBodyData() = default;
};
class GetOcListedCompanyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcListedCompanyResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcListedCompanyResponseBody() {}

  explicit GetOcListedCompanyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcListedCompanyResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcListedCompanyResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcListedCompanyResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcListedCompanyResponseBody() = default;
};
class GetOcListedCompanyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcListedCompanyResponseBody> body{};

  GetOcListedCompanyResponse() {}

  explicit GetOcListedCompanyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcListedCompanyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcListedCompanyResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcListedCompanyResponse() = default;
};
class GetOcNegativeAdminPunishmentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcNegativeAdminPunishmentRequest() {}

  explicit GetOcNegativeAdminPunishmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcNegativeAdminPunishmentRequest() = default;
};
class GetOcNegativeAdminPunishmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> department{};
  shared_ptr<string> entName{};
  shared_ptr<string> illegalType{};
  shared_ptr<string> lawBasis{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> punishDate{};
  shared_ptr<string> punishNum{};
  shared_ptr<string> punishResult{};

  GetOcNegativeAdminPunishmentResponseBodyData() {}

  explicit GetOcNegativeAdminPunishmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (illegalType) {
      res["IllegalType"] = boost::any(*illegalType);
    }
    if (lawBasis) {
      res["LawBasis"] = boost::any(*lawBasis);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (punishDate) {
      res["PunishDate"] = boost::any(*punishDate);
    }
    if (punishNum) {
      res["PunishNum"] = boost::any(*punishNum);
    }
    if (punishResult) {
      res["PunishResult"] = boost::any(*punishResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("IllegalType") != m.end() && !m["IllegalType"].empty()) {
      illegalType = make_shared<string>(boost::any_cast<string>(m["IllegalType"]));
    }
    if (m.find("LawBasis") != m.end() && !m["LawBasis"].empty()) {
      lawBasis = make_shared<string>(boost::any_cast<string>(m["LawBasis"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("PunishDate") != m.end() && !m["PunishDate"].empty()) {
      punishDate = make_shared<string>(boost::any_cast<string>(m["PunishDate"]));
    }
    if (m.find("PunishNum") != m.end() && !m["PunishNum"].empty()) {
      punishNum = make_shared<string>(boost::any_cast<string>(m["PunishNum"]));
    }
    if (m.find("PunishResult") != m.end() && !m["PunishResult"].empty()) {
      punishResult = make_shared<string>(boost::any_cast<string>(m["PunishResult"]));
    }
  }


  virtual ~GetOcNegativeAdminPunishmentResponseBodyData() = default;
};
class GetOcNegativeAdminPunishmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcNegativeAdminPunishmentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcNegativeAdminPunishmentResponseBody() {}

  explicit GetOcNegativeAdminPunishmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcNegativeAdminPunishmentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcNegativeAdminPunishmentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcNegativeAdminPunishmentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcNegativeAdminPunishmentResponseBody() = default;
};
class GetOcNegativeAdminPunishmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcNegativeAdminPunishmentResponseBody> body{};

  GetOcNegativeAdminPunishmentResponse() {}

  explicit GetOcNegativeAdminPunishmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcNegativeAdminPunishmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcNegativeAdminPunishmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcNegativeAdminPunishmentResponse() = default;
};
class GetOcNegativeCustomsPunishmentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcNegativeCustomsPunishmentRequest() {}

  explicit GetOcNegativeCustomsPunishmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcNegativeCustomsPunishmentRequest() = default;
};
class GetOcNegativeCustomsPunishmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basis{};
  shared_ptr<string> caseNo{};
  shared_ptr<string> customs{};
  shared_ptr<string> customsNo{};
  shared_ptr<string> legalName{};
  shared_ptr<string> punishDate{};
  shared_ptr<string> punishType{};
  shared_ptr<string> title{};

  GetOcNegativeCustomsPunishmentResponseBodyData() {}

  explicit GetOcNegativeCustomsPunishmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basis) {
      res["Basis"] = boost::any(*basis);
    }
    if (caseNo) {
      res["CaseNo"] = boost::any(*caseNo);
    }
    if (customs) {
      res["Customs"] = boost::any(*customs);
    }
    if (customsNo) {
      res["CustomsNo"] = boost::any(*customsNo);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (punishDate) {
      res["PunishDate"] = boost::any(*punishDate);
    }
    if (punishType) {
      res["PunishType"] = boost::any(*punishType);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Basis") != m.end() && !m["Basis"].empty()) {
      basis = make_shared<string>(boost::any_cast<string>(m["Basis"]));
    }
    if (m.find("CaseNo") != m.end() && !m["CaseNo"].empty()) {
      caseNo = make_shared<string>(boost::any_cast<string>(m["CaseNo"]));
    }
    if (m.find("Customs") != m.end() && !m["Customs"].empty()) {
      customs = make_shared<string>(boost::any_cast<string>(m["Customs"]));
    }
    if (m.find("CustomsNo") != m.end() && !m["CustomsNo"].empty()) {
      customsNo = make_shared<string>(boost::any_cast<string>(m["CustomsNo"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("PunishDate") != m.end() && !m["PunishDate"].empty()) {
      punishDate = make_shared<string>(boost::any_cast<string>(m["PunishDate"]));
    }
    if (m.find("PunishType") != m.end() && !m["PunishType"].empty()) {
      punishType = make_shared<string>(boost::any_cast<string>(m["PunishType"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetOcNegativeCustomsPunishmentResponseBodyData() = default;
};
class GetOcNegativeCustomsPunishmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcNegativeCustomsPunishmentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcNegativeCustomsPunishmentResponseBody() {}

  explicit GetOcNegativeCustomsPunishmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcNegativeCustomsPunishmentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcNegativeCustomsPunishmentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcNegativeCustomsPunishmentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcNegativeCustomsPunishmentResponseBody() = default;
};
class GetOcNegativeCustomsPunishmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcNegativeCustomsPunishmentResponseBody> body{};

  GetOcNegativeCustomsPunishmentResponse() {}

  explicit GetOcNegativeCustomsPunishmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcNegativeCustomsPunishmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcNegativeCustomsPunishmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcNegativeCustomsPunishmentResponse() = default;
};
class GetOcNegativeEnvironmentPunishmentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcNegativeEnvironmentPunishmentRequest() {}

  explicit GetOcNegativeEnvironmentPunishmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcNegativeEnvironmentPunishmentRequest() = default;
};
class GetOcNegativeEnvironmentPunishmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> department{};
  shared_ptr<string> entName{};
  shared_ptr<string> execStatus{};
  shared_ptr<string> punishBasis{};
  shared_ptr<string> punishContent{};
  shared_ptr<string> punishDate{};
  shared_ptr<string> punishLaw{};
  shared_ptr<string> punishNum{};
  shared_ptr<string> punishRes{};

  GetOcNegativeEnvironmentPunishmentResponseBodyData() {}

  explicit GetOcNegativeEnvironmentPunishmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (execStatus) {
      res["ExecStatus"] = boost::any(*execStatus);
    }
    if (punishBasis) {
      res["PunishBasis"] = boost::any(*punishBasis);
    }
    if (punishContent) {
      res["PunishContent"] = boost::any(*punishContent);
    }
    if (punishDate) {
      res["PunishDate"] = boost::any(*punishDate);
    }
    if (punishLaw) {
      res["PunishLaw"] = boost::any(*punishLaw);
    }
    if (punishNum) {
      res["PunishNum"] = boost::any(*punishNum);
    }
    if (punishRes) {
      res["PunishRes"] = boost::any(*punishRes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("ExecStatus") != m.end() && !m["ExecStatus"].empty()) {
      execStatus = make_shared<string>(boost::any_cast<string>(m["ExecStatus"]));
    }
    if (m.find("PunishBasis") != m.end() && !m["PunishBasis"].empty()) {
      punishBasis = make_shared<string>(boost::any_cast<string>(m["PunishBasis"]));
    }
    if (m.find("PunishContent") != m.end() && !m["PunishContent"].empty()) {
      punishContent = make_shared<string>(boost::any_cast<string>(m["PunishContent"]));
    }
    if (m.find("PunishDate") != m.end() && !m["PunishDate"].empty()) {
      punishDate = make_shared<string>(boost::any_cast<string>(m["PunishDate"]));
    }
    if (m.find("PunishLaw") != m.end() && !m["PunishLaw"].empty()) {
      punishLaw = make_shared<string>(boost::any_cast<string>(m["PunishLaw"]));
    }
    if (m.find("PunishNum") != m.end() && !m["PunishNum"].empty()) {
      punishNum = make_shared<string>(boost::any_cast<string>(m["PunishNum"]));
    }
    if (m.find("PunishRes") != m.end() && !m["PunishRes"].empty()) {
      punishRes = make_shared<string>(boost::any_cast<string>(m["PunishRes"]));
    }
  }


  virtual ~GetOcNegativeEnvironmentPunishmentResponseBodyData() = default;
};
class GetOcNegativeEnvironmentPunishmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcNegativeEnvironmentPunishmentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcNegativeEnvironmentPunishmentResponseBody() {}

  explicit GetOcNegativeEnvironmentPunishmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcNegativeEnvironmentPunishmentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcNegativeEnvironmentPunishmentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcNegativeEnvironmentPunishmentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcNegativeEnvironmentPunishmentResponseBody() = default;
};
class GetOcNegativeEnvironmentPunishmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcNegativeEnvironmentPunishmentResponseBody> body{};

  GetOcNegativeEnvironmentPunishmentResponse() {}

  explicit GetOcNegativeEnvironmentPunishmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcNegativeEnvironmentPunishmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcNegativeEnvironmentPunishmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcNegativeEnvironmentPunishmentResponse() = default;
};
class GetOcNegativeFoodDrugPunishmentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcNegativeFoodDrugPunishmentRequest() {}

  explicit GetOcNegativeFoodDrugPunishmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcNegativeFoodDrugPunishmentRequest() = default;
};
class GetOcNegativeFoodDrugPunishmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> department{};
  shared_ptr<string> entName{};
  shared_ptr<string> illegalType{};
  shared_ptr<string> lawBasis{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> punishDate{};
  shared_ptr<string> punishNum{};
  shared_ptr<string> punishResult{};

  GetOcNegativeFoodDrugPunishmentResponseBodyData() {}

  explicit GetOcNegativeFoodDrugPunishmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (illegalType) {
      res["IllegalType"] = boost::any(*illegalType);
    }
    if (lawBasis) {
      res["LawBasis"] = boost::any(*lawBasis);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (punishDate) {
      res["PunishDate"] = boost::any(*punishDate);
    }
    if (punishNum) {
      res["PunishNum"] = boost::any(*punishNum);
    }
    if (punishResult) {
      res["PunishResult"] = boost::any(*punishResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("IllegalType") != m.end() && !m["IllegalType"].empty()) {
      illegalType = make_shared<string>(boost::any_cast<string>(m["IllegalType"]));
    }
    if (m.find("LawBasis") != m.end() && !m["LawBasis"].empty()) {
      lawBasis = make_shared<string>(boost::any_cast<string>(m["LawBasis"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("PunishDate") != m.end() && !m["PunishDate"].empty()) {
      punishDate = make_shared<string>(boost::any_cast<string>(m["PunishDate"]));
    }
    if (m.find("PunishNum") != m.end() && !m["PunishNum"].empty()) {
      punishNum = make_shared<string>(boost::any_cast<string>(m["PunishNum"]));
    }
    if (m.find("PunishResult") != m.end() && !m["PunishResult"].empty()) {
      punishResult = make_shared<string>(boost::any_cast<string>(m["PunishResult"]));
    }
  }


  virtual ~GetOcNegativeFoodDrugPunishmentResponseBodyData() = default;
};
class GetOcNegativeFoodDrugPunishmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcNegativeFoodDrugPunishmentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcNegativeFoodDrugPunishmentResponseBody() {}

  explicit GetOcNegativeFoodDrugPunishmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcNegativeFoodDrugPunishmentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcNegativeFoodDrugPunishmentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcNegativeFoodDrugPunishmentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcNegativeFoodDrugPunishmentResponseBody() = default;
};
class GetOcNegativeFoodDrugPunishmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcNegativeFoodDrugPunishmentResponseBody> body{};

  GetOcNegativeFoodDrugPunishmentResponse() {}

  explicit GetOcNegativeFoodDrugPunishmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcNegativeFoodDrugPunishmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcNegativeFoodDrugPunishmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcNegativeFoodDrugPunishmentResponse() = default;
};
class GetOcNegativeQualityPunishmentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcNegativeQualityPunishmentRequest() {}

  explicit GetOcNegativeQualityPunishmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcNegativeQualityPunishmentRequest() = default;
};
class GetOcNegativeQualityPunishmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> department{};
  shared_ptr<string> entName{};
  shared_ptr<string> eventDate{};
  shared_ptr<string> eventResult{};
  shared_ptr<string> pubDate{};
  shared_ptr<string> title{};

  GetOcNegativeQualityPunishmentResponseBodyData() {}

  explicit GetOcNegativeQualityPunishmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (eventDate) {
      res["EventDate"] = boost::any(*eventDate);
    }
    if (eventResult) {
      res["EventResult"] = boost::any(*eventResult);
    }
    if (pubDate) {
      res["PubDate"] = boost::any(*pubDate);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("EventDate") != m.end() && !m["EventDate"].empty()) {
      eventDate = make_shared<string>(boost::any_cast<string>(m["EventDate"]));
    }
    if (m.find("EventResult") != m.end() && !m["EventResult"].empty()) {
      eventResult = make_shared<string>(boost::any_cast<string>(m["EventResult"]));
    }
    if (m.find("PubDate") != m.end() && !m["PubDate"].empty()) {
      pubDate = make_shared<string>(boost::any_cast<string>(m["PubDate"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetOcNegativeQualityPunishmentResponseBodyData() = default;
};
class GetOcNegativeQualityPunishmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcNegativeQualityPunishmentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcNegativeQualityPunishmentResponseBody() {}

  explicit GetOcNegativeQualityPunishmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcNegativeQualityPunishmentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcNegativeQualityPunishmentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcNegativeQualityPunishmentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcNegativeQualityPunishmentResponseBody() = default;
};
class GetOcNegativeQualityPunishmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcNegativeQualityPunishmentResponseBody> body{};

  GetOcNegativeQualityPunishmentResponse() {}

  explicit GetOcNegativeQualityPunishmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcNegativeQualityPunishmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcNegativeQualityPunishmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcNegativeQualityPunishmentResponse() = default;
};
class GetOcOperationBiddingRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcOperationBiddingRequest() {}

  explicit GetOcOperationBiddingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcOperationBiddingRequest() = default;
};
class GetOcOperationBiddingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> agentEntName{};
  shared_ptr<string> bidIndustry{};
  shared_ptr<string> bidTitle{};
  shared_ptr<string> bidType{};
  shared_ptr<string> content{};
  shared_ptr<string> entName{};
  shared_ptr<string> infoType{};
  shared_ptr<string> openingTime{};
  shared_ptr<string> projectAmount{};
  shared_ptr<string> projectName{};
  shared_ptr<string> projectNum{};
  shared_ptr<string> publicDate{};
  shared_ptr<string> regionName{};
  shared_ptr<string> subType{};
  shared_ptr<string> tenderEntName{};
  shared_ptr<string> winnerEntName{};

  GetOcOperationBiddingResponseBodyData() {}

  explicit GetOcOperationBiddingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentEntName) {
      res["AgentEntName"] = boost::any(*agentEntName);
    }
    if (bidIndustry) {
      res["BidIndustry"] = boost::any(*bidIndustry);
    }
    if (bidTitle) {
      res["BidTitle"] = boost::any(*bidTitle);
    }
    if (bidType) {
      res["BidType"] = boost::any(*bidType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (infoType) {
      res["InfoType"] = boost::any(*infoType);
    }
    if (openingTime) {
      res["OpeningTime"] = boost::any(*openingTime);
    }
    if (projectAmount) {
      res["ProjectAmount"] = boost::any(*projectAmount);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectNum) {
      res["ProjectNum"] = boost::any(*projectNum);
    }
    if (publicDate) {
      res["PublicDate"] = boost::any(*publicDate);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (tenderEntName) {
      res["TenderEntName"] = boost::any(*tenderEntName);
    }
    if (winnerEntName) {
      res["WinnerEntName"] = boost::any(*winnerEntName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentEntName") != m.end() && !m["AgentEntName"].empty()) {
      agentEntName = make_shared<string>(boost::any_cast<string>(m["AgentEntName"]));
    }
    if (m.find("BidIndustry") != m.end() && !m["BidIndustry"].empty()) {
      bidIndustry = make_shared<string>(boost::any_cast<string>(m["BidIndustry"]));
    }
    if (m.find("BidTitle") != m.end() && !m["BidTitle"].empty()) {
      bidTitle = make_shared<string>(boost::any_cast<string>(m["BidTitle"]));
    }
    if (m.find("BidType") != m.end() && !m["BidType"].empty()) {
      bidType = make_shared<string>(boost::any_cast<string>(m["BidType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("InfoType") != m.end() && !m["InfoType"].empty()) {
      infoType = make_shared<string>(boost::any_cast<string>(m["InfoType"]));
    }
    if (m.find("OpeningTime") != m.end() && !m["OpeningTime"].empty()) {
      openingTime = make_shared<string>(boost::any_cast<string>(m["OpeningTime"]));
    }
    if (m.find("ProjectAmount") != m.end() && !m["ProjectAmount"].empty()) {
      projectAmount = make_shared<string>(boost::any_cast<string>(m["ProjectAmount"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectNum") != m.end() && !m["ProjectNum"].empty()) {
      projectNum = make_shared<string>(boost::any_cast<string>(m["ProjectNum"]));
    }
    if (m.find("PublicDate") != m.end() && !m["PublicDate"].empty()) {
      publicDate = make_shared<string>(boost::any_cast<string>(m["PublicDate"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("TenderEntName") != m.end() && !m["TenderEntName"].empty()) {
      tenderEntName = make_shared<string>(boost::any_cast<string>(m["TenderEntName"]));
    }
    if (m.find("WinnerEntName") != m.end() && !m["WinnerEntName"].empty()) {
      winnerEntName = make_shared<string>(boost::any_cast<string>(m["WinnerEntName"]));
    }
  }


  virtual ~GetOcOperationBiddingResponseBodyData() = default;
};
class GetOcOperationBiddingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcOperationBiddingResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcOperationBiddingResponseBody() {}

  explicit GetOcOperationBiddingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcOperationBiddingResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcOperationBiddingResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcOperationBiddingResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcOperationBiddingResponseBody() = default;
};
class GetOcOperationBiddingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcOperationBiddingResponseBody> body{};

  GetOcOperationBiddingResponse() {}

  explicit GetOcOperationBiddingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcOperationBiddingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcOperationBiddingResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcOperationBiddingResponse() = default;
};
class GetOcOperationCustomsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcOperationCustomsRequest() {}

  explicit GetOcOperationCustomsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcOperationCustomsRequest() = default;
};
class GetOcOperationCustomsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> adminRegionName{};
  shared_ptr<string> annualReport{};
  shared_ptr<string> businessCate{};
  shared_ptr<string> cancelFlag{};
  shared_ptr<string> creditLevelsNew{};
  shared_ptr<string> customsNum{};
  shared_ptr<string> customsReg{};
  shared_ptr<string> ecoRegionName{};
  shared_ptr<string> electType{};
  shared_ptr<string> entName{};
  shared_ptr<string> identCode{};
  shared_ptr<string> identDate{};
  shared_ptr<string> industryType{};
  shared_ptr<string> regDate{};
  shared_ptr<string> specialArea{};
  shared_ptr<string> validDate{};

  GetOcOperationCustomsResponseBodyData() {}

  explicit GetOcOperationCustomsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminRegionName) {
      res["AdminRegionName"] = boost::any(*adminRegionName);
    }
    if (annualReport) {
      res["AnnualReport"] = boost::any(*annualReport);
    }
    if (businessCate) {
      res["BusinessCate"] = boost::any(*businessCate);
    }
    if (cancelFlag) {
      res["CancelFlag"] = boost::any(*cancelFlag);
    }
    if (creditLevelsNew) {
      res["CreditLevelsNew"] = boost::any(*creditLevelsNew);
    }
    if (customsNum) {
      res["CustomsNum"] = boost::any(*customsNum);
    }
    if (customsReg) {
      res["CustomsReg"] = boost::any(*customsReg);
    }
    if (ecoRegionName) {
      res["EcoRegionName"] = boost::any(*ecoRegionName);
    }
    if (electType) {
      res["ElectType"] = boost::any(*electType);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (identCode) {
      res["IdentCode"] = boost::any(*identCode);
    }
    if (identDate) {
      res["IdentDate"] = boost::any(*identDate);
    }
    if (industryType) {
      res["IndustryType"] = boost::any(*industryType);
    }
    if (regDate) {
      res["RegDate"] = boost::any(*regDate);
    }
    if (specialArea) {
      res["SpecialArea"] = boost::any(*specialArea);
    }
    if (validDate) {
      res["ValidDate"] = boost::any(*validDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminRegionName") != m.end() && !m["AdminRegionName"].empty()) {
      adminRegionName = make_shared<string>(boost::any_cast<string>(m["AdminRegionName"]));
    }
    if (m.find("AnnualReport") != m.end() && !m["AnnualReport"].empty()) {
      annualReport = make_shared<string>(boost::any_cast<string>(m["AnnualReport"]));
    }
    if (m.find("BusinessCate") != m.end() && !m["BusinessCate"].empty()) {
      businessCate = make_shared<string>(boost::any_cast<string>(m["BusinessCate"]));
    }
    if (m.find("CancelFlag") != m.end() && !m["CancelFlag"].empty()) {
      cancelFlag = make_shared<string>(boost::any_cast<string>(m["CancelFlag"]));
    }
    if (m.find("CreditLevelsNew") != m.end() && !m["CreditLevelsNew"].empty()) {
      creditLevelsNew = make_shared<string>(boost::any_cast<string>(m["CreditLevelsNew"]));
    }
    if (m.find("CustomsNum") != m.end() && !m["CustomsNum"].empty()) {
      customsNum = make_shared<string>(boost::any_cast<string>(m["CustomsNum"]));
    }
    if (m.find("CustomsReg") != m.end() && !m["CustomsReg"].empty()) {
      customsReg = make_shared<string>(boost::any_cast<string>(m["CustomsReg"]));
    }
    if (m.find("EcoRegionName") != m.end() && !m["EcoRegionName"].empty()) {
      ecoRegionName = make_shared<string>(boost::any_cast<string>(m["EcoRegionName"]));
    }
    if (m.find("ElectType") != m.end() && !m["ElectType"].empty()) {
      electType = make_shared<string>(boost::any_cast<string>(m["ElectType"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("IdentCode") != m.end() && !m["IdentCode"].empty()) {
      identCode = make_shared<string>(boost::any_cast<string>(m["IdentCode"]));
    }
    if (m.find("IdentDate") != m.end() && !m["IdentDate"].empty()) {
      identDate = make_shared<string>(boost::any_cast<string>(m["IdentDate"]));
    }
    if (m.find("IndustryType") != m.end() && !m["IndustryType"].empty()) {
      industryType = make_shared<string>(boost::any_cast<string>(m["IndustryType"]));
    }
    if (m.find("RegDate") != m.end() && !m["RegDate"].empty()) {
      regDate = make_shared<string>(boost::any_cast<string>(m["RegDate"]));
    }
    if (m.find("SpecialArea") != m.end() && !m["SpecialArea"].empty()) {
      specialArea = make_shared<string>(boost::any_cast<string>(m["SpecialArea"]));
    }
    if (m.find("ValidDate") != m.end() && !m["ValidDate"].empty()) {
      validDate = make_shared<string>(boost::any_cast<string>(m["ValidDate"]));
    }
  }


  virtual ~GetOcOperationCustomsResponseBodyData() = default;
};
class GetOcOperationCustomsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcOperationCustomsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcOperationCustomsResponseBody() {}

  explicit GetOcOperationCustomsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcOperationCustomsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcOperationCustomsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcOperationCustomsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcOperationCustomsResponseBody() = default;
};
class GetOcOperationCustomsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcOperationCustomsResponseBody> body{};

  GetOcOperationCustomsResponse() {}

  explicit GetOcOperationCustomsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcOperationCustomsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcOperationCustomsResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcOperationCustomsResponse() = default;
};
class GetOcOperationPurchaseLandRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcOperationPurchaseLandRequest() {}

  explicit GetOcOperationPurchaseLandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcOperationPurchaseLandRequest() = default;
};
class GetOcOperationPurchaseLandResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> area{};
  shared_ptr<string> department{};
  shared_ptr<string> electronicNo{};
  shared_ptr<string> entName{};
  shared_ptr<string> industry{};
  shared_ptr<string> landLevel{};
  shared_ptr<string> landSource{};
  shared_ptr<string> landUse{};
  shared_ptr<string> location{};
  shared_ptr<string> price{};
  shared_ptr<string> projectName{};
  shared_ptr<string> promiseDeliveryDate{};
  shared_ptr<string> promiseEndDate{};
  shared_ptr<string> promiseStartDate{};
  shared_ptr<string> regionName{};
  shared_ptr<string> releaseDate{};
  shared_ptr<string> signingMode{};
  shared_ptr<string> useYear{};
  shared_ptr<string> volumeFractionLowerBound{};
  shared_ptr<string> volumeFractionUpperBound{};

  GetOcOperationPurchaseLandResponseBodyData() {}

  explicit GetOcOperationPurchaseLandResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (electronicNo) {
      res["ElectronicNo"] = boost::any(*electronicNo);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (industry) {
      res["Industry"] = boost::any(*industry);
    }
    if (landLevel) {
      res["LandLevel"] = boost::any(*landLevel);
    }
    if (landSource) {
      res["LandSource"] = boost::any(*landSource);
    }
    if (landUse) {
      res["LandUse"] = boost::any(*landUse);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (promiseDeliveryDate) {
      res["PromiseDeliveryDate"] = boost::any(*promiseDeliveryDate);
    }
    if (promiseEndDate) {
      res["PromiseEndDate"] = boost::any(*promiseEndDate);
    }
    if (promiseStartDate) {
      res["PromiseStartDate"] = boost::any(*promiseStartDate);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (releaseDate) {
      res["ReleaseDate"] = boost::any(*releaseDate);
    }
    if (signingMode) {
      res["SigningMode"] = boost::any(*signingMode);
    }
    if (useYear) {
      res["UseYear"] = boost::any(*useYear);
    }
    if (volumeFractionLowerBound) {
      res["VolumeFractionLowerBound"] = boost::any(*volumeFractionLowerBound);
    }
    if (volumeFractionUpperBound) {
      res["VolumeFractionUpperBound"] = boost::any(*volumeFractionUpperBound);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      area = make_shared<string>(boost::any_cast<string>(m["Area"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("ElectronicNo") != m.end() && !m["ElectronicNo"].empty()) {
      electronicNo = make_shared<string>(boost::any_cast<string>(m["ElectronicNo"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("Industry") != m.end() && !m["Industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["Industry"]));
    }
    if (m.find("LandLevel") != m.end() && !m["LandLevel"].empty()) {
      landLevel = make_shared<string>(boost::any_cast<string>(m["LandLevel"]));
    }
    if (m.find("LandSource") != m.end() && !m["LandSource"].empty()) {
      landSource = make_shared<string>(boost::any_cast<string>(m["LandSource"]));
    }
    if (m.find("LandUse") != m.end() && !m["LandUse"].empty()) {
      landUse = make_shared<string>(boost::any_cast<string>(m["LandUse"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<string>(boost::any_cast<string>(m["Price"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("PromiseDeliveryDate") != m.end() && !m["PromiseDeliveryDate"].empty()) {
      promiseDeliveryDate = make_shared<string>(boost::any_cast<string>(m["PromiseDeliveryDate"]));
    }
    if (m.find("PromiseEndDate") != m.end() && !m["PromiseEndDate"].empty()) {
      promiseEndDate = make_shared<string>(boost::any_cast<string>(m["PromiseEndDate"]));
    }
    if (m.find("PromiseStartDate") != m.end() && !m["PromiseStartDate"].empty()) {
      promiseStartDate = make_shared<string>(boost::any_cast<string>(m["PromiseStartDate"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("ReleaseDate") != m.end() && !m["ReleaseDate"].empty()) {
      releaseDate = make_shared<string>(boost::any_cast<string>(m["ReleaseDate"]));
    }
    if (m.find("SigningMode") != m.end() && !m["SigningMode"].empty()) {
      signingMode = make_shared<string>(boost::any_cast<string>(m["SigningMode"]));
    }
    if (m.find("UseYear") != m.end() && !m["UseYear"].empty()) {
      useYear = make_shared<string>(boost::any_cast<string>(m["UseYear"]));
    }
    if (m.find("VolumeFractionLowerBound") != m.end() && !m["VolumeFractionLowerBound"].empty()) {
      volumeFractionLowerBound = make_shared<string>(boost::any_cast<string>(m["VolumeFractionLowerBound"]));
    }
    if (m.find("VolumeFractionUpperBound") != m.end() && !m["VolumeFractionUpperBound"].empty()) {
      volumeFractionUpperBound = make_shared<string>(boost::any_cast<string>(m["VolumeFractionUpperBound"]));
    }
  }


  virtual ~GetOcOperationPurchaseLandResponseBodyData() = default;
};
class GetOcOperationPurchaseLandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcOperationPurchaseLandResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcOperationPurchaseLandResponseBody() {}

  explicit GetOcOperationPurchaseLandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcOperationPurchaseLandResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcOperationPurchaseLandResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcOperationPurchaseLandResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcOperationPurchaseLandResponseBody() = default;
};
class GetOcOperationPurchaseLandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcOperationPurchaseLandResponseBody> body{};

  GetOcOperationPurchaseLandResponse() {}

  explicit GetOcOperationPurchaseLandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcOperationPurchaseLandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcOperationPurchaseLandResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcOperationPurchaseLandResponse() = default;
};
class GetOcOperationRecruitmentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcOperationRecruitmentRequest() {}

  explicit GetOcOperationRecruitmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcOperationRecruitmentRequest() = default;
};
class GetOcOperationRecruitmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> benefitList{};
  shared_ptr<string> description{};
  shared_ptr<string> education{};
  shared_ptr<string> endDate{};
  shared_ptr<string> entName{};
  shared_ptr<string> experience{};
  shared_ptr<string> pageUrl{};
  shared_ptr<string> publishDate{};
  shared_ptr<string> recruitingAddress{};
  shared_ptr<string> recruitingName{};
  shared_ptr<string> salary{};
  shared_ptr<string> startDate{};

  GetOcOperationRecruitmentResponseBodyData() {}

  explicit GetOcOperationRecruitmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (benefitList) {
      res["BenefitList"] = boost::any(*benefitList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (education) {
      res["Education"] = boost::any(*education);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (experience) {
      res["Experience"] = boost::any(*experience);
    }
    if (pageUrl) {
      res["PageUrl"] = boost::any(*pageUrl);
    }
    if (publishDate) {
      res["PublishDate"] = boost::any(*publishDate);
    }
    if (recruitingAddress) {
      res["RecruitingAddress"] = boost::any(*recruitingAddress);
    }
    if (recruitingName) {
      res["RecruitingName"] = boost::any(*recruitingName);
    }
    if (salary) {
      res["Salary"] = boost::any(*salary);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BenefitList") != m.end() && !m["BenefitList"].empty()) {
      benefitList = make_shared<string>(boost::any_cast<string>(m["BenefitList"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Education") != m.end() && !m["Education"].empty()) {
      education = make_shared<string>(boost::any_cast<string>(m["Education"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("Experience") != m.end() && !m["Experience"].empty()) {
      experience = make_shared<string>(boost::any_cast<string>(m["Experience"]));
    }
    if (m.find("PageUrl") != m.end() && !m["PageUrl"].empty()) {
      pageUrl = make_shared<string>(boost::any_cast<string>(m["PageUrl"]));
    }
    if (m.find("PublishDate") != m.end() && !m["PublishDate"].empty()) {
      publishDate = make_shared<string>(boost::any_cast<string>(m["PublishDate"]));
    }
    if (m.find("RecruitingAddress") != m.end() && !m["RecruitingAddress"].empty()) {
      recruitingAddress = make_shared<string>(boost::any_cast<string>(m["RecruitingAddress"]));
    }
    if (m.find("RecruitingName") != m.end() && !m["RecruitingName"].empty()) {
      recruitingName = make_shared<string>(boost::any_cast<string>(m["RecruitingName"]));
    }
    if (m.find("Salary") != m.end() && !m["Salary"].empty()) {
      salary = make_shared<string>(boost::any_cast<string>(m["Salary"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetOcOperationRecruitmentResponseBodyData() = default;
};
class GetOcOperationRecruitmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcOperationRecruitmentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcOperationRecruitmentResponseBody() {}

  explicit GetOcOperationRecruitmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcOperationRecruitmentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcOperationRecruitmentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcOperationRecruitmentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcOperationRecruitmentResponseBody() = default;
};
class GetOcOperationRecruitmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcOperationRecruitmentResponseBody> body{};

  GetOcOperationRecruitmentResponse() {}

  explicit GetOcOperationRecruitmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcOperationRecruitmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcOperationRecruitmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcOperationRecruitmentResponse() = default;
};
class GetOcProductBandRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcProductBandRequest() {}

  explicit GetOcProductBandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcProductBandRequest() = default;
};
class GetOcProductBandResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> brandIntroduction{};
  shared_ptr<string> device{};
  shared_ptr<string> entName{};
  shared_ptr<string> productIntroduction{};
  shared_ptr<string> productLogo{};
  shared_ptr<string> productName{};
  shared_ptr<string> productTag{};
  shared_ptr<string> productWebsite{};

  GetOcProductBandResponseBodyData() {}

  explicit GetOcProductBandResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brandIntroduction) {
      res["BrandIntroduction"] = boost::any(*brandIntroduction);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (productIntroduction) {
      res["ProductIntroduction"] = boost::any(*productIntroduction);
    }
    if (productLogo) {
      res["ProductLogo"] = boost::any(*productLogo);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productTag) {
      res["ProductTag"] = boost::any(*productTag);
    }
    if (productWebsite) {
      res["ProductWebsite"] = boost::any(*productWebsite);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrandIntroduction") != m.end() && !m["BrandIntroduction"].empty()) {
      brandIntroduction = make_shared<string>(boost::any_cast<string>(m["BrandIntroduction"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("ProductIntroduction") != m.end() && !m["ProductIntroduction"].empty()) {
      productIntroduction = make_shared<string>(boost::any_cast<string>(m["ProductIntroduction"]));
    }
    if (m.find("ProductLogo") != m.end() && !m["ProductLogo"].empty()) {
      productLogo = make_shared<string>(boost::any_cast<string>(m["ProductLogo"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductTag") != m.end() && !m["ProductTag"].empty()) {
      productTag = make_shared<string>(boost::any_cast<string>(m["ProductTag"]));
    }
    if (m.find("ProductWebsite") != m.end() && !m["ProductWebsite"].empty()) {
      productWebsite = make_shared<string>(boost::any_cast<string>(m["ProductWebsite"]));
    }
  }


  virtual ~GetOcProductBandResponseBodyData() = default;
};
class GetOcProductBandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcProductBandResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcProductBandResponseBody() {}

  explicit GetOcProductBandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcProductBandResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcProductBandResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcProductBandResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcProductBandResponseBody() = default;
};
class GetOcProductBandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcProductBandResponseBody> body{};

  GetOcProductBandResponse() {}

  explicit GetOcProductBandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcProductBandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcProductBandResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcProductBandResponse() = default;
};
class GetOcTaxAbnormalRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcTaxAbnormalRequest() {}

  explicit GetOcTaxAbnormalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcTaxAbnormalRequest() = default;
};
class GetOcTaxAbnormalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cardNum{};
  shared_ptr<string> cardType{};
  shared_ptr<string> entName{};
  shared_ptr<string> judgeDate{};
  shared_ptr<string> judgeDepartment{};
  shared_ptr<string> judgeReason{};
  shared_ptr<string> legalName{};
  shared_ptr<string> overdueAmount{};
  shared_ptr<string> overdueType{};
  shared_ptr<string> status{};
  shared_ptr<string> taxpayerNum{};

  GetOcTaxAbnormalResponseBodyData() {}

  explicit GetOcTaxAbnormalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardNum) {
      res["CardNum"] = boost::any(*cardNum);
    }
    if (cardType) {
      res["CardType"] = boost::any(*cardType);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (judgeDate) {
      res["JudgeDate"] = boost::any(*judgeDate);
    }
    if (judgeDepartment) {
      res["JudgeDepartment"] = boost::any(*judgeDepartment);
    }
    if (judgeReason) {
      res["JudgeReason"] = boost::any(*judgeReason);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (overdueAmount) {
      res["OverdueAmount"] = boost::any(*overdueAmount);
    }
    if (overdueType) {
      res["OverdueType"] = boost::any(*overdueType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taxpayerNum) {
      res["TaxpayerNum"] = boost::any(*taxpayerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardNum") != m.end() && !m["CardNum"].empty()) {
      cardNum = make_shared<string>(boost::any_cast<string>(m["CardNum"]));
    }
    if (m.find("CardType") != m.end() && !m["CardType"].empty()) {
      cardType = make_shared<string>(boost::any_cast<string>(m["CardType"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("JudgeDate") != m.end() && !m["JudgeDate"].empty()) {
      judgeDate = make_shared<string>(boost::any_cast<string>(m["JudgeDate"]));
    }
    if (m.find("JudgeDepartment") != m.end() && !m["JudgeDepartment"].empty()) {
      judgeDepartment = make_shared<string>(boost::any_cast<string>(m["JudgeDepartment"]));
    }
    if (m.find("JudgeReason") != m.end() && !m["JudgeReason"].empty()) {
      judgeReason = make_shared<string>(boost::any_cast<string>(m["JudgeReason"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("OverdueAmount") != m.end() && !m["OverdueAmount"].empty()) {
      overdueAmount = make_shared<string>(boost::any_cast<string>(m["OverdueAmount"]));
    }
    if (m.find("OverdueType") != m.end() && !m["OverdueType"].empty()) {
      overdueType = make_shared<string>(boost::any_cast<string>(m["OverdueType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaxpayerNum") != m.end() && !m["TaxpayerNum"].empty()) {
      taxpayerNum = make_shared<string>(boost::any_cast<string>(m["TaxpayerNum"]));
    }
  }


  virtual ~GetOcTaxAbnormalResponseBodyData() = default;
};
class GetOcTaxAbnormalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcTaxAbnormalResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcTaxAbnormalResponseBody() {}

  explicit GetOcTaxAbnormalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcTaxAbnormalResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcTaxAbnormalResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcTaxAbnormalResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcTaxAbnormalResponseBody() = default;
};
class GetOcTaxAbnormalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcTaxAbnormalResponseBody> body{};

  GetOcTaxAbnormalResponse() {}

  explicit GetOcTaxAbnormalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcTaxAbnormalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcTaxAbnormalResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcTaxAbnormalResponse() = default;
};
class GetOcTaxClassARequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcTaxClassARequest() {}

  explicit GetOcTaxClassARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcTaxClassARequest() = default;
};
class GetOcTaxClassAResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> entName{};
  shared_ptr<string> taxLevel{};
  shared_ptr<string> taxpayerNum{};
  shared_ptr<string> year{};

  GetOcTaxClassAResponseBodyData() {}

  explicit GetOcTaxClassAResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (taxLevel) {
      res["TaxLevel"] = boost::any(*taxLevel);
    }
    if (taxpayerNum) {
      res["TaxpayerNum"] = boost::any(*taxpayerNum);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("TaxLevel") != m.end() && !m["TaxLevel"].empty()) {
      taxLevel = make_shared<string>(boost::any_cast<string>(m["TaxLevel"]));
    }
    if (m.find("TaxpayerNum") != m.end() && !m["TaxpayerNum"].empty()) {
      taxpayerNum = make_shared<string>(boost::any_cast<string>(m["TaxpayerNum"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["Year"]));
    }
  }


  virtual ~GetOcTaxClassAResponseBodyData() = default;
};
class GetOcTaxClassAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcTaxClassAResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcTaxClassAResponseBody() {}

  explicit GetOcTaxClassAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcTaxClassAResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcTaxClassAResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcTaxClassAResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcTaxClassAResponseBody() = default;
};
class GetOcTaxClassAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcTaxClassAResponseBody> body{};

  GetOcTaxClassAResponse() {}

  explicit GetOcTaxClassAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcTaxClassAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcTaxClassAResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcTaxClassAResponse() = default;
};
class GetOcTaxGeneralTaxpayerRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcTaxGeneralTaxpayerRequest() {}

  explicit GetOcTaxGeneralTaxpayerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcTaxGeneralTaxpayerRequest() = default;
};
class GetOcTaxGeneralTaxpayerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> department{};
  shared_ptr<string> endDate{};
  shared_ptr<string> entName{};
  shared_ptr<string> judgeDate{};
  shared_ptr<string> qualification{};
  shared_ptr<string> startDate{};
  shared_ptr<string> taxpayerNum{};

  GetOcTaxGeneralTaxpayerResponseBodyData() {}

  explicit GetOcTaxGeneralTaxpayerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (judgeDate) {
      res["JudgeDate"] = boost::any(*judgeDate);
    }
    if (qualification) {
      res["Qualification"] = boost::any(*qualification);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (taxpayerNum) {
      res["TaxpayerNum"] = boost::any(*taxpayerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("JudgeDate") != m.end() && !m["JudgeDate"].empty()) {
      judgeDate = make_shared<string>(boost::any_cast<string>(m["JudgeDate"]));
    }
    if (m.find("Qualification") != m.end() && !m["Qualification"].empty()) {
      qualification = make_shared<string>(boost::any_cast<string>(m["Qualification"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TaxpayerNum") != m.end() && !m["TaxpayerNum"].empty()) {
      taxpayerNum = make_shared<string>(boost::any_cast<string>(m["TaxpayerNum"]));
    }
  }


  virtual ~GetOcTaxGeneralTaxpayerResponseBodyData() = default;
};
class GetOcTaxGeneralTaxpayerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcTaxGeneralTaxpayerResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcTaxGeneralTaxpayerResponseBody() {}

  explicit GetOcTaxGeneralTaxpayerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcTaxGeneralTaxpayerResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcTaxGeneralTaxpayerResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcTaxGeneralTaxpayerResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcTaxGeneralTaxpayerResponseBody() = default;
};
class GetOcTaxGeneralTaxpayerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcTaxGeneralTaxpayerResponseBody> body{};

  GetOcTaxGeneralTaxpayerResponse() {}

  explicit GetOcTaxGeneralTaxpayerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcTaxGeneralTaxpayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcTaxGeneralTaxpayerResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcTaxGeneralTaxpayerResponse() = default;
};
class GetOcTaxIllegalRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcTaxIllegalRequest() {}

  explicit GetOcTaxIllegalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcTaxIllegalRequest() = default;
};
class GetOcTaxIllegalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> agencyCardNum{};
  shared_ptr<string> agencyCardType{};
  shared_ptr<string> agencyEnt{};
  shared_ptr<string> agencyName{};
  shared_ptr<string> agencySex{};
  shared_ptr<string> caseType{};
  shared_ptr<string> department{};
  shared_ptr<string> entAddress{};
  shared_ptr<string> entName{};
  shared_ptr<string> financialCardNum{};
  shared_ptr<string> financialCardType{};
  shared_ptr<string> financialName{};
  shared_ptr<string> financialSex{};
  shared_ptr<string> illegalTruth{};
  shared_ptr<string> lawBasis{};
  shared_ptr<string> legalCardNum{};
  shared_ptr<string> legalCardType{};
  shared_ptr<string> legalName{};
  shared_ptr<string> legalSex{};
  shared_ptr<string> orgCode{};
  shared_ptr<string> publishDate{};
  shared_ptr<string> taxpayerNum{};

  GetOcTaxIllegalResponseBodyData() {}

  explicit GetOcTaxIllegalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agencyCardNum) {
      res["AgencyCardNum"] = boost::any(*agencyCardNum);
    }
    if (agencyCardType) {
      res["AgencyCardType"] = boost::any(*agencyCardType);
    }
    if (agencyEnt) {
      res["AgencyEnt"] = boost::any(*agencyEnt);
    }
    if (agencyName) {
      res["AgencyName"] = boost::any(*agencyName);
    }
    if (agencySex) {
      res["AgencySex"] = boost::any(*agencySex);
    }
    if (caseType) {
      res["CaseType"] = boost::any(*caseType);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (entAddress) {
      res["EntAddress"] = boost::any(*entAddress);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (financialCardNum) {
      res["FinancialCardNum"] = boost::any(*financialCardNum);
    }
    if (financialCardType) {
      res["FinancialCardType"] = boost::any(*financialCardType);
    }
    if (financialName) {
      res["FinancialName"] = boost::any(*financialName);
    }
    if (financialSex) {
      res["FinancialSex"] = boost::any(*financialSex);
    }
    if (illegalTruth) {
      res["IllegalTruth"] = boost::any(*illegalTruth);
    }
    if (lawBasis) {
      res["LawBasis"] = boost::any(*lawBasis);
    }
    if (legalCardNum) {
      res["LegalCardNum"] = boost::any(*legalCardNum);
    }
    if (legalCardType) {
      res["LegalCardType"] = boost::any(*legalCardType);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (legalSex) {
      res["LegalSex"] = boost::any(*legalSex);
    }
    if (orgCode) {
      res["OrgCode"] = boost::any(*orgCode);
    }
    if (publishDate) {
      res["PublishDate"] = boost::any(*publishDate);
    }
    if (taxpayerNum) {
      res["TaxpayerNum"] = boost::any(*taxpayerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgencyCardNum") != m.end() && !m["AgencyCardNum"].empty()) {
      agencyCardNum = make_shared<string>(boost::any_cast<string>(m["AgencyCardNum"]));
    }
    if (m.find("AgencyCardType") != m.end() && !m["AgencyCardType"].empty()) {
      agencyCardType = make_shared<string>(boost::any_cast<string>(m["AgencyCardType"]));
    }
    if (m.find("AgencyEnt") != m.end() && !m["AgencyEnt"].empty()) {
      agencyEnt = make_shared<string>(boost::any_cast<string>(m["AgencyEnt"]));
    }
    if (m.find("AgencyName") != m.end() && !m["AgencyName"].empty()) {
      agencyName = make_shared<string>(boost::any_cast<string>(m["AgencyName"]));
    }
    if (m.find("AgencySex") != m.end() && !m["AgencySex"].empty()) {
      agencySex = make_shared<string>(boost::any_cast<string>(m["AgencySex"]));
    }
    if (m.find("CaseType") != m.end() && !m["CaseType"].empty()) {
      caseType = make_shared<string>(boost::any_cast<string>(m["CaseType"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EntAddress") != m.end() && !m["EntAddress"].empty()) {
      entAddress = make_shared<string>(boost::any_cast<string>(m["EntAddress"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("FinancialCardNum") != m.end() && !m["FinancialCardNum"].empty()) {
      financialCardNum = make_shared<string>(boost::any_cast<string>(m["FinancialCardNum"]));
    }
    if (m.find("FinancialCardType") != m.end() && !m["FinancialCardType"].empty()) {
      financialCardType = make_shared<string>(boost::any_cast<string>(m["FinancialCardType"]));
    }
    if (m.find("FinancialName") != m.end() && !m["FinancialName"].empty()) {
      financialName = make_shared<string>(boost::any_cast<string>(m["FinancialName"]));
    }
    if (m.find("FinancialSex") != m.end() && !m["FinancialSex"].empty()) {
      financialSex = make_shared<string>(boost::any_cast<string>(m["FinancialSex"]));
    }
    if (m.find("IllegalTruth") != m.end() && !m["IllegalTruth"].empty()) {
      illegalTruth = make_shared<string>(boost::any_cast<string>(m["IllegalTruth"]));
    }
    if (m.find("LawBasis") != m.end() && !m["LawBasis"].empty()) {
      lawBasis = make_shared<string>(boost::any_cast<string>(m["LawBasis"]));
    }
    if (m.find("LegalCardNum") != m.end() && !m["LegalCardNum"].empty()) {
      legalCardNum = make_shared<string>(boost::any_cast<string>(m["LegalCardNum"]));
    }
    if (m.find("LegalCardType") != m.end() && !m["LegalCardType"].empty()) {
      legalCardType = make_shared<string>(boost::any_cast<string>(m["LegalCardType"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("LegalSex") != m.end() && !m["LegalSex"].empty()) {
      legalSex = make_shared<string>(boost::any_cast<string>(m["LegalSex"]));
    }
    if (m.find("OrgCode") != m.end() && !m["OrgCode"].empty()) {
      orgCode = make_shared<string>(boost::any_cast<string>(m["OrgCode"]));
    }
    if (m.find("PublishDate") != m.end() && !m["PublishDate"].empty()) {
      publishDate = make_shared<string>(boost::any_cast<string>(m["PublishDate"]));
    }
    if (m.find("TaxpayerNum") != m.end() && !m["TaxpayerNum"].empty()) {
      taxpayerNum = make_shared<string>(boost::any_cast<string>(m["TaxpayerNum"]));
    }
  }


  virtual ~GetOcTaxIllegalResponseBodyData() = default;
};
class GetOcTaxIllegalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcTaxIllegalResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcTaxIllegalResponseBody() {}

  explicit GetOcTaxIllegalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcTaxIllegalResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcTaxIllegalResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcTaxIllegalResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcTaxIllegalResponseBody() = default;
};
class GetOcTaxIllegalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcTaxIllegalResponseBody> body{};

  GetOcTaxIllegalResponse() {}

  explicit GetOcTaxIllegalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcTaxIllegalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcTaxIllegalResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcTaxIllegalResponse() = default;
};
class GetOcTaxOverdueRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcTaxOverdueRequest() {}

  explicit GetOcTaxOverdueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcTaxOverdueRequest() = default;
};
class GetOcTaxOverdueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currOverdueAmount{};
  shared_ptr<string> department{};
  shared_ptr<string> entAddress{};
  shared_ptr<string> entName{};
  shared_ptr<string> legalName{};
  shared_ptr<string> overdueAmount{};
  shared_ptr<string> overdueType{};
  shared_ptr<string> publishDate{};
  shared_ptr<string> taxpayerNum{};
  shared_ptr<string> taxpayerType{};

  GetOcTaxOverdueResponseBodyData() {}

  explicit GetOcTaxOverdueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currOverdueAmount) {
      res["CurrOverdueAmount"] = boost::any(*currOverdueAmount);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (entAddress) {
      res["EntAddress"] = boost::any(*entAddress);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (overdueAmount) {
      res["OverdueAmount"] = boost::any(*overdueAmount);
    }
    if (overdueType) {
      res["OverdueType"] = boost::any(*overdueType);
    }
    if (publishDate) {
      res["PublishDate"] = boost::any(*publishDate);
    }
    if (taxpayerNum) {
      res["TaxpayerNum"] = boost::any(*taxpayerNum);
    }
    if (taxpayerType) {
      res["TaxpayerType"] = boost::any(*taxpayerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrOverdueAmount") != m.end() && !m["CurrOverdueAmount"].empty()) {
      currOverdueAmount = make_shared<string>(boost::any_cast<string>(m["CurrOverdueAmount"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EntAddress") != m.end() && !m["EntAddress"].empty()) {
      entAddress = make_shared<string>(boost::any_cast<string>(m["EntAddress"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("OverdueAmount") != m.end() && !m["OverdueAmount"].empty()) {
      overdueAmount = make_shared<string>(boost::any_cast<string>(m["OverdueAmount"]));
    }
    if (m.find("OverdueType") != m.end() && !m["OverdueType"].empty()) {
      overdueType = make_shared<string>(boost::any_cast<string>(m["OverdueType"]));
    }
    if (m.find("PublishDate") != m.end() && !m["PublishDate"].empty()) {
      publishDate = make_shared<string>(boost::any_cast<string>(m["PublishDate"]));
    }
    if (m.find("TaxpayerNum") != m.end() && !m["TaxpayerNum"].empty()) {
      taxpayerNum = make_shared<string>(boost::any_cast<string>(m["TaxpayerNum"]));
    }
    if (m.find("TaxpayerType") != m.end() && !m["TaxpayerType"].empty()) {
      taxpayerType = make_shared<string>(boost::any_cast<string>(m["TaxpayerType"]));
    }
  }


  virtual ~GetOcTaxOverdueResponseBodyData() = default;
};
class GetOcTaxOverdueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcTaxOverdueResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcTaxOverdueResponseBody() {}

  explicit GetOcTaxOverdueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcTaxOverdueResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcTaxOverdueResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcTaxOverdueResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcTaxOverdueResponseBody() = default;
};
class GetOcTaxOverdueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcTaxOverdueResponseBody> body{};

  GetOcTaxOverdueResponse() {}

  explicit GetOcTaxOverdueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcTaxOverdueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcTaxOverdueResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcTaxOverdueResponse() = default;
};
class GetOcTaxPunishmentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};

  GetOcTaxPunishmentRequest() {}

  explicit GetOcTaxPunishmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetOcTaxPunishmentRequest() = default;
};
class GetOcTaxPunishmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> department{};
  shared_ptr<string> entName{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<string> legalName{};
  shared_ptr<string> punishDate{};
  shared_ptr<string> taxpayerNum{};
  shared_ptr<string> title{};

  GetOcTaxPunishmentResponseBodyData() {}

  explicit GetOcTaxPunishmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (punishDate) {
      res["PunishDate"] = boost::any(*punishDate);
    }
    if (taxpayerNum) {
      res["TaxpayerNum"] = boost::any(*taxpayerNum);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("PunishDate") != m.end() && !m["PunishDate"].empty()) {
      punishDate = make_shared<string>(boost::any_cast<string>(m["PunishDate"]));
    }
    if (m.find("TaxpayerNum") != m.end() && !m["TaxpayerNum"].empty()) {
      taxpayerNum = make_shared<string>(boost::any_cast<string>(m["TaxpayerNum"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetOcTaxPunishmentResponseBodyData() = default;
};
class GetOcTaxPunishmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOcTaxPunishmentResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetOcTaxPunishmentResponseBody() {}

  explicit GetOcTaxPunishmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOcTaxPunishmentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOcTaxPunishmentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOcTaxPunishmentResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetOcTaxPunishmentResponseBody() = default;
};
class GetOcTaxPunishmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOcTaxPunishmentResponseBody> body{};

  GetOcTaxPunishmentResponse() {}

  explicit GetOcTaxPunishmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetOcTaxPunishmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOcTaxPunishmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOcTaxPunishmentResponse() = default;
};
class GetQccCertificationDetailByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> certId{};

  GetQccCertificationDetailByIdRequest() {}

  explicit GetQccCertificationDetailByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
  }


  virtual ~GetQccCertificationDetailByIdRequest() = default;
};
class GetQccCertificationDetailByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetQccCertificationDetailByIdResponseBody() {}

  explicit GetQccCertificationDetailByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetQccCertificationDetailByIdResponseBody() = default;
};
class GetQccCertificationDetailByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQccCertificationDetailByIdResponseBody> body{};

  GetQccCertificationDetailByIdResponse() {}

  explicit GetQccCertificationDetailByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetQccCertificationDetailByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQccCertificationDetailByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetQccCertificationDetailByIdResponse() = default;
};
class GetQccSearchCertificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> certCategory{};
  shared_ptr<string> entName{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  GetQccSearchCertificationRequest() {}

  explicit GetQccSearchCertificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certCategory) {
      res["CertCategory"] = boost::any(*certCategory);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertCategory") != m.end() && !m["CertCategory"].empty()) {
      certCategory = make_shared<string>(boost::any_cast<string>(m["CertCategory"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetQccSearchCertificationRequest() = default;
};
class GetQccSearchCertificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalNum{};

  GetQccSearchCertificationResponseBody() {}

  explicit GetQccSearchCertificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetQccSearchCertificationResponseBody() = default;
};
class GetQccSearchCertificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQccSearchCertificationResponseBody> body{};

  GetQccSearchCertificationResponse() {}

  explicit GetQccSearchCertificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetQccSearchCertificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQccSearchCertificationResponseBody>(model1);
      }
    }
  }


  virtual ~GetQccSearchCertificationResponse() = default;
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
  GetOcCompetitorsResponse getOcCompetitorsWithOptions(shared_ptr<GetOcCompetitorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcCompetitorsResponse getOcCompetitors(shared_ptr<GetOcCompetitorsRequest> request);
  GetOcCoreTeamsResponse getOcCoreTeamsWithOptions(shared_ptr<GetOcCoreTeamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcCoreTeamsResponse getOcCoreTeams(shared_ptr<GetOcCoreTeamsRequest> request);
  GetOcFinancingResponse getOcFinancingWithOptions(shared_ptr<GetOcFinancingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcFinancingResponse getOcFinancing(shared_ptr<GetOcFinancingRequest> request);
  GetOcFuzzSearchResponse getOcFuzzSearchWithOptions(shared_ptr<GetOcFuzzSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcFuzzSearchResponse getOcFuzzSearch(shared_ptr<GetOcFuzzSearchRequest> request);
  GetOcIcAbnormalOperationResponse getOcIcAbnormalOperationWithOptions(shared_ptr<GetOcIcAbnormalOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcAbnormalOperationResponse getOcIcAbnormalOperation(shared_ptr<GetOcIcAbnormalOperationRequest> request);
  GetOcIcAdminLicenseResponse getOcIcAdminLicenseWithOptions(shared_ptr<GetOcIcAdminLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcAdminLicenseResponse getOcIcAdminLicense(shared_ptr<GetOcIcAdminLicenseRequest> request);
  GetOcIcBasicResponse getOcIcBasicWithOptions(shared_ptr<GetOcIcBasicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcBasicResponse getOcIcBasic(shared_ptr<GetOcIcBasicRequest> request);
  GetOcIcBranchResponse getOcIcBranchWithOptions(shared_ptr<GetOcIcBranchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcBranchResponse getOcIcBranch(shared_ptr<GetOcIcBranchRequest> request);
  GetOcIcChangeRecordResponse getOcIcChangeRecordWithOptions(shared_ptr<GetOcIcChangeRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcChangeRecordResponse getOcIcChangeRecord(shared_ptr<GetOcIcChangeRecordRequest> request);
  GetOcIcCheckupResponse getOcIcCheckupWithOptions(shared_ptr<GetOcIcCheckupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcCheckupResponse getOcIcCheckup(shared_ptr<GetOcIcCheckupRequest> request);
  GetOcIcClearAccountResponse getOcIcClearAccountWithOptions(shared_ptr<GetOcIcClearAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcClearAccountResponse getOcIcClearAccount(shared_ptr<GetOcIcClearAccountRequest> request);
  GetOcIcDoubleCheckupResponse getOcIcDoubleCheckupWithOptions(shared_ptr<GetOcIcDoubleCheckupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcDoubleCheckupResponse getOcIcDoubleCheckup(shared_ptr<GetOcIcDoubleCheckupRequest> request);
  GetOcIcEmployeeResponse getOcIcEmployeeWithOptions(shared_ptr<GetOcIcEmployeeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcEmployeeResponse getOcIcEmployee(shared_ptr<GetOcIcEmployeeRequest> request);
  GetOcIcEquityFrozenResponse getOcIcEquityFrozenWithOptions(shared_ptr<GetOcIcEquityFrozenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcEquityFrozenResponse getOcIcEquityFrozen(shared_ptr<GetOcIcEquityFrozenRequest> request);
  GetOcIcEquityPledgeResponse getOcIcEquityPledgeWithOptions(shared_ptr<GetOcIcEquityPledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcEquityPledgeResponse getOcIcEquityPledge(shared_ptr<GetOcIcEquityPledgeRequest> request);
  GetOcIcInvestmentResponse getOcIcInvestmentWithOptions(shared_ptr<GetOcIcInvestmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcInvestmentResponse getOcIcInvestment(shared_ptr<GetOcIcInvestmentRequest> request);
  GetOcIcKnowledgePropertyPledgeResponse getOcIcKnowledgePropertyPledgeWithOptions(shared_ptr<GetOcIcKnowledgePropertyPledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcKnowledgePropertyPledgeResponse getOcIcKnowledgePropertyPledge(shared_ptr<GetOcIcKnowledgePropertyPledgeRequest> request);
  GetOcIcMortgageResponse getOcIcMortgageWithOptions(shared_ptr<GetOcIcMortgageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcMortgageResponse getOcIcMortgage(shared_ptr<GetOcIcMortgageRequest> request);
  GetOcIcSeriousOffenseResponse getOcIcSeriousOffenseWithOptions(shared_ptr<GetOcIcSeriousOffenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcSeriousOffenseResponse getOcIcSeriousOffense(shared_ptr<GetOcIcSeriousOffenseRequest> request);
  GetOcIcShareholderResponse getOcIcShareholderWithOptions(shared_ptr<GetOcIcShareholderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcShareholderResponse getOcIcShareholder(shared_ptr<GetOcIcShareholderRequest> request);
  GetOcIcSimpleCancelResponse getOcIcSimpleCancelWithOptions(shared_ptr<GetOcIcSimpleCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIcSimpleCancelResponse getOcIcSimpleCancel(shared_ptr<GetOcIcSimpleCancelRequest> request);
  GetOcIpCertificateResponse getOcIpCertificateWithOptions(shared_ptr<GetOcIpCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIpCertificateResponse getOcIpCertificate(shared_ptr<GetOcIpCertificateRequest> request);
  GetOcIpDomainResponse getOcIpDomainWithOptions(shared_ptr<GetOcIpDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIpDomainResponse getOcIpDomain(shared_ptr<GetOcIpDomainRequest> request);
  GetOcIpPatentResponse getOcIpPatentWithOptions(shared_ptr<GetOcIpPatentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIpPatentResponse getOcIpPatent(shared_ptr<GetOcIpPatentRequest> request);
  GetOcIpSoftwareCopyrightResponse getOcIpSoftwareCopyrightWithOptions(shared_ptr<GetOcIpSoftwareCopyrightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIpSoftwareCopyrightResponse getOcIpSoftwareCopyright(shared_ptr<GetOcIpSoftwareCopyrightRequest> request);
  GetOcIpTrademarkResponse getOcIpTrademarkWithOptions(shared_ptr<GetOcIpTrademarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIpTrademarkResponse getOcIpTrademark(shared_ptr<GetOcIpTrademarkRequest> request);
  GetOcIpWorksCopyrightResponse getOcIpWorksCopyrightWithOptions(shared_ptr<GetOcIpWorksCopyrightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcIpWorksCopyrightResponse getOcIpWorksCopyright(shared_ptr<GetOcIpWorksCopyrightRequest> request);
  GetOcJusticeAuctionResponse getOcJusticeAuctionWithOptions(shared_ptr<GetOcJusticeAuctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeAuctionResponse getOcJusticeAuction(shared_ptr<GetOcJusticeAuctionRequest> request);
  GetOcJusticeCaseFilingResponse getOcJusticeCaseFilingWithOptions(shared_ptr<GetOcJusticeCaseFilingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeCaseFilingResponse getOcJusticeCaseFiling(shared_ptr<GetOcJusticeCaseFilingRequest> request);
  GetOcJusticeCourtAnnouncementResponse getOcJusticeCourtAnnouncementWithOptions(shared_ptr<GetOcJusticeCourtAnnouncementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeCourtAnnouncementResponse getOcJusticeCourtAnnouncement(shared_ptr<GetOcJusticeCourtAnnouncementRequest> request);
  GetOcJusticeCourtNoticeResponse getOcJusticeCourtNoticeWithOptions(shared_ptr<GetOcJusticeCourtNoticeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeCourtNoticeResponse getOcJusticeCourtNotice(shared_ptr<GetOcJusticeCourtNoticeRequest> request);
  GetOcJusticeDishonestyResponse getOcJusticeDishonestyWithOptions(shared_ptr<GetOcJusticeDishonestyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeDishonestyResponse getOcJusticeDishonesty(shared_ptr<GetOcJusticeDishonestyRequest> request);
  GetOcJusticeExecutedResponse getOcJusticeExecutedWithOptions(shared_ptr<GetOcJusticeExecutedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeExecutedResponse getOcJusticeExecuted(shared_ptr<GetOcJusticeExecutedRequest> request);
  GetOcJusticeJudgementDocResponse getOcJusticeJudgementDocWithOptions(shared_ptr<GetOcJusticeJudgementDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeJudgementDocResponse getOcJusticeJudgementDoc(shared_ptr<GetOcJusticeJudgementDocRequest> request);
  GetOcJusticeLimitHighConsumeResponse getOcJusticeLimitHighConsumeWithOptions(shared_ptr<GetOcJusticeLimitHighConsumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeLimitHighConsumeResponse getOcJusticeLimitHighConsume(shared_ptr<GetOcJusticeLimitHighConsumeRequest> request);
  GetOcJusticeTerminalCaseResponse getOcJusticeTerminalCaseWithOptions(shared_ptr<GetOcJusticeTerminalCaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcJusticeTerminalCaseResponse getOcJusticeTerminalCase(shared_ptr<GetOcJusticeTerminalCaseRequest> request);
  GetOcListedCompanyResponse getOcListedCompanyWithOptions(shared_ptr<GetOcListedCompanyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcListedCompanyResponse getOcListedCompany(shared_ptr<GetOcListedCompanyRequest> request);
  GetOcNegativeAdminPunishmentResponse getOcNegativeAdminPunishmentWithOptions(shared_ptr<GetOcNegativeAdminPunishmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcNegativeAdminPunishmentResponse getOcNegativeAdminPunishment(shared_ptr<GetOcNegativeAdminPunishmentRequest> request);
  GetOcNegativeCustomsPunishmentResponse getOcNegativeCustomsPunishmentWithOptions(shared_ptr<GetOcNegativeCustomsPunishmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcNegativeCustomsPunishmentResponse getOcNegativeCustomsPunishment(shared_ptr<GetOcNegativeCustomsPunishmentRequest> request);
  GetOcNegativeEnvironmentPunishmentResponse getOcNegativeEnvironmentPunishmentWithOptions(shared_ptr<GetOcNegativeEnvironmentPunishmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcNegativeEnvironmentPunishmentResponse getOcNegativeEnvironmentPunishment(shared_ptr<GetOcNegativeEnvironmentPunishmentRequest> request);
  GetOcNegativeFoodDrugPunishmentResponse getOcNegativeFoodDrugPunishmentWithOptions(shared_ptr<GetOcNegativeFoodDrugPunishmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcNegativeFoodDrugPunishmentResponse getOcNegativeFoodDrugPunishment(shared_ptr<GetOcNegativeFoodDrugPunishmentRequest> request);
  GetOcNegativeQualityPunishmentResponse getOcNegativeQualityPunishmentWithOptions(shared_ptr<GetOcNegativeQualityPunishmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcNegativeQualityPunishmentResponse getOcNegativeQualityPunishment(shared_ptr<GetOcNegativeQualityPunishmentRequest> request);
  GetOcOperationBiddingResponse getOcOperationBiddingWithOptions(shared_ptr<GetOcOperationBiddingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcOperationBiddingResponse getOcOperationBidding(shared_ptr<GetOcOperationBiddingRequest> request);
  GetOcOperationCustomsResponse getOcOperationCustomsWithOptions(shared_ptr<GetOcOperationCustomsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcOperationCustomsResponse getOcOperationCustoms(shared_ptr<GetOcOperationCustomsRequest> request);
  GetOcOperationPurchaseLandResponse getOcOperationPurchaseLandWithOptions(shared_ptr<GetOcOperationPurchaseLandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcOperationPurchaseLandResponse getOcOperationPurchaseLand(shared_ptr<GetOcOperationPurchaseLandRequest> request);
  GetOcOperationRecruitmentResponse getOcOperationRecruitmentWithOptions(shared_ptr<GetOcOperationRecruitmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcOperationRecruitmentResponse getOcOperationRecruitment(shared_ptr<GetOcOperationRecruitmentRequest> request);
  GetOcProductBandResponse getOcProductBandWithOptions(shared_ptr<GetOcProductBandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcProductBandResponse getOcProductBand(shared_ptr<GetOcProductBandRequest> request);
  GetOcTaxAbnormalResponse getOcTaxAbnormalWithOptions(shared_ptr<GetOcTaxAbnormalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcTaxAbnormalResponse getOcTaxAbnormal(shared_ptr<GetOcTaxAbnormalRequest> request);
  GetOcTaxClassAResponse getOcTaxClassAWithOptions(shared_ptr<GetOcTaxClassARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcTaxClassAResponse getOcTaxClassA(shared_ptr<GetOcTaxClassARequest> request);
  GetOcTaxGeneralTaxpayerResponse getOcTaxGeneralTaxpayerWithOptions(shared_ptr<GetOcTaxGeneralTaxpayerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcTaxGeneralTaxpayerResponse getOcTaxGeneralTaxpayer(shared_ptr<GetOcTaxGeneralTaxpayerRequest> request);
  GetOcTaxIllegalResponse getOcTaxIllegalWithOptions(shared_ptr<GetOcTaxIllegalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcTaxIllegalResponse getOcTaxIllegal(shared_ptr<GetOcTaxIllegalRequest> request);
  GetOcTaxOverdueResponse getOcTaxOverdueWithOptions(shared_ptr<GetOcTaxOverdueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcTaxOverdueResponse getOcTaxOverdue(shared_ptr<GetOcTaxOverdueRequest> request);
  GetOcTaxPunishmentResponse getOcTaxPunishmentWithOptions(shared_ptr<GetOcTaxPunishmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOcTaxPunishmentResponse getOcTaxPunishment(shared_ptr<GetOcTaxPunishmentRequest> request);
  GetQccCertificationDetailByIdResponse getQccCertificationDetailByIdWithOptions(shared_ptr<GetQccCertificationDetailByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQccCertificationDetailByIdResponse getQccCertificationDetailById(shared_ptr<GetQccCertificationDetailByIdRequest> request);
  GetQccSearchCertificationResponse getQccSearchCertificationWithOptions(shared_ptr<GetQccSearchCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQccSearchCertificationResponse getQccSearchCertification(shared_ptr<GetQccSearchCertificationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dt-oc-info20220829

#endif
