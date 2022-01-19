// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_JARVIS-PUBLIC20180621_H_
#define ALIBABACLOUD_JARVIS-PUBLIC20180621_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Jarvis-public20180621 {
class CreateConsoleAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<long> dstPort{};
  shared_ptr<string> instanceIdList{};
  shared_ptr<string> instanceInfoList{};
  shared_ptr<string> lang{};
  shared_ptr<long> liveTime{};
  shared_ptr<string> note{};
  shared_ptr<string> productName{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> srcIP{};
  shared_ptr<long> whiteListType{};

  CreateConsoleAccessWhiteListRequest() {}

  explicit CreateConsoleAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstPort) {
      res["DstPort"] = boost::any(*dstPort);
    }
    if (instanceIdList) {
      res["InstanceIdList"] = boost::any(*instanceIdList);
    }
    if (instanceInfoList) {
      res["InstanceInfoList"] = boost::any(*instanceInfoList);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (liveTime) {
      res["LiveTime"] = boost::any(*liveTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (whiteListType) {
      res["WhiteListType"] = boost::any(*whiteListType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstPort") != m.end() && !m["DstPort"].empty()) {
      dstPort = make_shared<long>(boost::any_cast<long>(m["DstPort"]));
    }
    if (m.find("InstanceIdList") != m.end() && !m["InstanceIdList"].empty()) {
      instanceIdList = make_shared<string>(boost::any_cast<string>(m["InstanceIdList"]));
    }
    if (m.find("InstanceInfoList") != m.end() && !m["InstanceInfoList"].empty()) {
      instanceInfoList = make_shared<string>(boost::any_cast<string>(m["InstanceInfoList"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LiveTime") != m.end() && !m["LiveTime"].empty()) {
      liveTime = make_shared<long>(boost::any_cast<long>(m["LiveTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("WhiteListType") != m.end() && !m["WhiteListType"].empty()) {
      whiteListType = make_shared<long>(boost::any_cast<long>(m["WhiteListType"]));
    }
  }


  virtual ~CreateConsoleAccessWhiteListRequest() = default;
};
class CreateConsoleAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  CreateConsoleAccessWhiteListResponseBody() {}

  explicit CreateConsoleAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateConsoleAccessWhiteListResponseBody() = default;
};
class CreateConsoleAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateConsoleAccessWhiteListResponseBody> body{};

  CreateConsoleAccessWhiteListResponse() {}

  explicit CreateConsoleAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateConsoleAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConsoleAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConsoleAccessWhiteListResponse() = default;
};
class DeleteConsoleAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> disableWhitelist{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> sourceIp{};

  DeleteConsoleAccessWhiteListRequest() {}

  explicit DeleteConsoleAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableWhitelist) {
      res["DisableWhitelist"] = boost::any(*disableWhitelist);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableWhitelist") != m.end() && !m["DisableWhitelist"].empty()) {
      disableWhitelist = make_shared<string>(boost::any_cast<string>(m["DisableWhitelist"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteConsoleAccessWhiteListRequest() = default;
};
class DeleteConsoleAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  DeleteConsoleAccessWhiteListResponseBody() {}

  explicit DeleteConsoleAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteConsoleAccessWhiteListResponseBody() = default;
};
class DeleteConsoleAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteConsoleAccessWhiteListResponseBody> body{};

  DeleteConsoleAccessWhiteListResponse() {}

  explicit DeleteConsoleAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteConsoleAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConsoleAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConsoleAccessWhiteListResponse() = default;
};
class DescribeAccessWhiteListSlbListRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> sourceIp{};

  DescribeAccessWhiteListSlbListRequest() {}

  explicit DescribeAccessWhiteListSlbListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeAccessWhiteListSlbListRequest() = default;
};
class DescribeAccessWhiteListSlbListResponseBodySlbList : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> itemSign{};
  shared_ptr<string> region{};

  DescribeAccessWhiteListSlbListResponseBodySlbList() {}

  explicit DescribeAccessWhiteListSlbListResponseBodySlbList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (itemSign) {
      res["ItemSign"] = boost::any(*itemSign);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ItemSign") != m.end() && !m["ItemSign"].empty()) {
      itemSign = make_shared<string>(boost::any_cast<string>(m["ItemSign"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeAccessWhiteListSlbListResponseBodySlbList() = default;
};
class DescribeAccessWhiteListSlbListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAccessWhiteListSlbListResponseBodySlbList>> slbList{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> module{};

  DescribeAccessWhiteListSlbListResponseBody() {}

  explicit DescribeAccessWhiteListSlbListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slbList) {
      vector<boost::any> temp1;
      for(auto item1:*slbList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlbList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (module) {
      res["module"] = boost::any(*module);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlbList") != m.end() && !m["SlbList"].empty()) {
      if (typeid(vector<boost::any>) == m["SlbList"].type()) {
        vector<DescribeAccessWhiteListSlbListResponseBodySlbList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlbList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccessWhiteListSlbListResponseBodySlbList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slbList = make_shared<vector<DescribeAccessWhiteListSlbListResponseBodySlbList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["module"]));
    }
  }


  virtual ~DescribeAccessWhiteListSlbListResponseBody() = default;
};
class DescribeAccessWhiteListSlbListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccessWhiteListSlbListResponseBody> body{};

  DescribeAccessWhiteListSlbListResponse() {}

  explicit DescribeAccessWhiteListSlbListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccessWhiteListSlbListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessWhiteListSlbListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessWhiteListSlbListResponse() = default;
};
class DescribeAccessWhitelistEcsListRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> sourceIp{};

  DescribeAccessWhitelistEcsListRequest() {}

  explicit DescribeAccessWhitelistEcsListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeAccessWhitelistEcsListRequest() = default;
};
class DescribeAccessWhitelistEcsListResponseBodyEcsList : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};

  DescribeAccessWhitelistEcsListResponseBodyEcsList() {}

  explicit DescribeAccessWhitelistEcsListResponseBodyEcsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~DescribeAccessWhitelistEcsListResponseBodyEcsList() = default;
};
class DescribeAccessWhitelistEcsListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccessWhitelistEcsListResponseBodyEcsList>> ecsList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> module{};

  DescribeAccessWhitelistEcsListResponseBody() {}

  explicit DescribeAccessWhitelistEcsListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsList) {
      vector<boost::any> temp1;
      for(auto item1:*ecsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (module) {
      res["module"] = boost::any(*module);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsList") != m.end() && !m["EcsList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsList"].type()) {
        vector<DescribeAccessWhitelistEcsListResponseBodyEcsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccessWhitelistEcsListResponseBodyEcsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsList = make_shared<vector<DescribeAccessWhitelistEcsListResponseBodyEcsList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["module"]));
    }
  }


  virtual ~DescribeAccessWhitelistEcsListResponseBody() = default;
};
class DescribeAccessWhitelistEcsListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccessWhitelistEcsListResponseBody> body{};

  DescribeAccessWhitelistEcsListResponse() {}

  explicit DescribeAccessWhitelistEcsListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccessWhitelistEcsListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessWhitelistEcsListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessWhitelistEcsListResponse() = default;
};
class DescribeAttackEventRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};
  shared_ptr<string> region{};
  shared_ptr<string> serverIpList{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> startTime{};

  DescribeAttackEventRequest() {}

  explicit DescribeAttackEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serverIpList) {
      res["ServerIpList"] = boost::any(*serverIpList);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ServerIpList") != m.end() && !m["ServerIpList"].empty()) {
      serverIpList = make_shared<string>(boost::any_cast<string>(m["ServerIpList"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeAttackEventRequest() = default;
};
class DescribeAttackEventResponseBodyEventList : public Darabonba::Model {
public:
  shared_ptr<string> attackType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<long> gmtCreateStamp{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> url{};
  shared_ptr<string> vmIp{};

  DescribeAttackEventResponseBodyEventList() {}

  explicit DescribeAttackEventResponseBodyEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackType) {
      res["AttackType"] = boost::any(*attackType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtCreateStamp) {
      res["GmtCreateStamp"] = boost::any(*gmtCreateStamp);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (vmIp) {
      res["VmIp"] = boost::any(*vmIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackType") != m.end() && !m["AttackType"].empty()) {
      attackType = make_shared<string>(boost::any_cast<string>(m["AttackType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtCreateStamp") != m.end() && !m["GmtCreateStamp"].empty()) {
      gmtCreateStamp = make_shared<long>(boost::any_cast<long>(m["GmtCreateStamp"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("VmIp") != m.end() && !m["VmIp"].empty()) {
      vmIp = make_shared<string>(boost::any_cast<string>(m["VmIp"]));
    }
  }


  virtual ~DescribeAttackEventResponseBodyEventList() = default;
};
class DescribeAttackEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAttackEventResponseBodyEventList>> eventList{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  DescribeAttackEventResponseBody() {}

  explicit DescribeAttackEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventList) {
      vector<boost::any> temp1;
      for(auto item1:*eventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventList"] = boost::any(temp1);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventList") != m.end() && !m["EventList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventList"].type()) {
        vector<DescribeAttackEventResponseBodyEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAttackEventResponseBodyEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventList = make_shared<vector<DescribeAttackEventResponseBodyEventList>>(expect1);
      }
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAttackEventResponseBody() = default;
};
class DescribeAttackEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAttackEventResponseBody> body{};

  DescribeAttackEventResponse() {}

  explicit DescribeAttackEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAttackEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAttackEventResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAttackEventResponse() = default;
};
class DescribeAttackedIpRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};
  shared_ptr<string> region{};
  shared_ptr<string> serverIpList{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> startTime{};

  DescribeAttackedIpRequest() {}

  explicit DescribeAttackedIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serverIpList) {
      res["ServerIpList"] = boost::any(*serverIpList);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ServerIpList") != m.end() && !m["ServerIpList"].empty()) {
      serverIpList = make_shared<string>(boost::any_cast<string>(m["ServerIpList"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeAttackedIpRequest() = default;
};
class DescribeAttackedIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipList{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  DescribeAttackedIpResponseBody() {}

  explicit DescribeAttackedIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAttackedIpResponseBody() = default;
};
class DescribeAttackedIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAttackedIpResponseBody> body{};

  DescribeAttackedIpResponse() {}

  explicit DescribeAttackedIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAttackedIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAttackedIpResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAttackedIpResponse() = default;
};
class DescribeConsoleAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> dstIP{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> srcIP{};
  shared_ptr<string> status{};
  shared_ptr<long> whiteListType{};
  shared_ptr<string> queryProduct{};

  DescribeConsoleAccessWhiteListRequest() {}

  explicit DescribeConsoleAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dstIP) {
      res["DstIP"] = boost::any(*dstIP);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (whiteListType) {
      res["WhiteListType"] = boost::any(*whiteListType);
    }
    if (queryProduct) {
      res["queryProduct"] = boost::any(*queryProduct);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DstIP") != m.end() && !m["DstIP"].empty()) {
      dstIP = make_shared<string>(boost::any_cast<string>(m["DstIP"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WhiteListType") != m.end() && !m["WhiteListType"].empty()) {
      whiteListType = make_shared<long>(boost::any_cast<long>(m["WhiteListType"]));
    }
    if (m.find("queryProduct") != m.end() && !m["queryProduct"].empty()) {
      queryProduct = make_shared<string>(boost::any_cast<string>(m["queryProduct"]));
    }
  }


  virtual ~DescribeConsoleAccessWhiteListRequest() = default;
};
class DescribeConsoleAccessWhiteListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> dstIp{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtRealExpire{};
  shared_ptr<long> id{};
  shared_ptr<string> insProduct{};
  shared_ptr<string> regionId{};
  shared_ptr<string> srcIp{};
  shared_ptr<string> status{};

  DescribeConsoleAccessWhiteListResponseBodyDataList() {}

  explicit DescribeConsoleAccessWhiteListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstIp) {
      res["DstIp"] = boost::any(*dstIp);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtRealExpire) {
      res["GmtRealExpire"] = boost::any(*gmtRealExpire);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (insProduct) {
      res["InsProduct"] = boost::any(*insProduct);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (srcIp) {
      res["SrcIp"] = boost::any(*srcIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstIp") != m.end() && !m["DstIp"].empty()) {
      dstIp = make_shared<string>(boost::any_cast<string>(m["DstIp"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtRealExpire") != m.end() && !m["GmtRealExpire"].empty()) {
      gmtRealExpire = make_shared<string>(boost::any_cast<string>(m["GmtRealExpire"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InsProduct") != m.end() && !m["InsProduct"].empty()) {
      insProduct = make_shared<string>(boost::any_cast<string>(m["InsProduct"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SrcIp") != m.end() && !m["SrcIp"].empty()) {
      srcIp = make_shared<string>(boost::any_cast<string>(m["SrcIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeConsoleAccessWhiteListResponseBodyDataList() = default;
};
class DescribeConsoleAccessWhiteListResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  DescribeConsoleAccessWhiteListResponseBodyPageInfo() {}

  explicit DescribeConsoleAccessWhiteListResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~DescribeConsoleAccessWhiteListResponseBodyPageInfo() = default;
};
class DescribeConsoleAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConsoleAccessWhiteListResponseBodyDataList>> dataList{};
  shared_ptr<DescribeConsoleAccessWhiteListResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> module{};

  DescribeConsoleAccessWhiteListResponseBody() {}

  explicit DescribeConsoleAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (module) {
      res["module"] = boost::any(*module);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<DescribeConsoleAccessWhiteListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConsoleAccessWhiteListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeConsoleAccessWhiteListResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeConsoleAccessWhiteListResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeConsoleAccessWhiteListResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["module"]));
    }
  }


  virtual ~DescribeConsoleAccessWhiteListResponseBody() = default;
};
class DescribeConsoleAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeConsoleAccessWhiteListResponseBody> body{};

  DescribeConsoleAccessWhiteListResponse() {}

  explicit DescribeConsoleAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeConsoleAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConsoleAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConsoleAccessWhiteListResponse() = default;
};
class DescribeCountAttackEventRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};
  shared_ptr<string> region{};
  shared_ptr<string> serverIpList{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> startTime{};

  DescribeCountAttackEventRequest() {}

  explicit DescribeCountAttackEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serverIpList) {
      res["ServerIpList"] = boost::any(*serverIpList);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ServerIpList") != m.end() && !m["ServerIpList"].empty()) {
      serverIpList = make_shared<string>(boost::any_cast<string>(m["ServerIpList"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeCountAttackEventRequest() = default;
};
class DescribeCountAttackEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  DescribeCountAttackEventResponseBody() {}

  explicit DescribeCountAttackEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCountAttackEventResponseBody() = default;
};
class DescribeCountAttackEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCountAttackEventResponseBody> body{};

  DescribeCountAttackEventResponse() {}

  explicit DescribeCountAttackEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCountAttackEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCountAttackEventResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCountAttackEventResponse() = default;
};
class DescribePhoneInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> phoneNum{};
  shared_ptr<string> sourceCode{};

  DescribePhoneInfoRequest() {}

  explicit DescribePhoneInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (phoneNum) {
      res["phoneNum"] = boost::any(*phoneNum);
    }
    if (sourceCode) {
      res["sourceCode"] = boost::any(*sourceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("phoneNum") != m.end() && !m["phoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["phoneNum"]));
    }
    if (m.find("sourceCode") != m.end() && !m["sourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["sourceCode"]));
    }
  }


  virtual ~DescribePhoneInfoRequest() = default;
};
class DescribePhoneInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<string> detectTime{};
  shared_ptr<long> phoneNum{};
  shared_ptr<long> riskLevel{};

  DescribePhoneInfoResponseBody() {}

  explicit DescribePhoneInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (detectTime) {
      res["detectTime"] = boost::any(*detectTime);
    }
    if (phoneNum) {
      res["phoneNum"] = boost::any(*phoneNum);
    }
    if (riskLevel) {
      res["riskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("detectTime") != m.end() && !m["detectTime"].empty()) {
      detectTime = make_shared<string>(boost::any_cast<string>(m["detectTime"]));
    }
    if (m.find("phoneNum") != m.end() && !m["phoneNum"].empty()) {
      phoneNum = make_shared<long>(boost::any_cast<long>(m["phoneNum"]));
    }
    if (m.find("riskLevel") != m.end() && !m["riskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["riskLevel"]));
    }
  }


  virtual ~DescribePhoneInfoResponseBody() = default;
};
class DescribePhoneInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePhoneInfoResponseBody> body{};

  DescribePhoneInfoResponse() {}

  explicit DescribePhoneInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePhoneInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneInfoResponse() = default;
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
  CreateConsoleAccessWhiteListResponse createConsoleAccessWhiteListWithOptions(shared_ptr<CreateConsoleAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConsoleAccessWhiteListResponse createConsoleAccessWhiteList(shared_ptr<CreateConsoleAccessWhiteListRequest> request);
  DeleteConsoleAccessWhiteListResponse deleteConsoleAccessWhiteListWithOptions(shared_ptr<DeleteConsoleAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConsoleAccessWhiteListResponse deleteConsoleAccessWhiteList(shared_ptr<DeleteConsoleAccessWhiteListRequest> request);
  DescribeAccessWhiteListSlbListResponse describeAccessWhiteListSlbListWithOptions(shared_ptr<DescribeAccessWhiteListSlbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessWhiteListSlbListResponse describeAccessWhiteListSlbList(shared_ptr<DescribeAccessWhiteListSlbListRequest> request);
  DescribeAccessWhitelistEcsListResponse describeAccessWhitelistEcsListWithOptions(shared_ptr<DescribeAccessWhitelistEcsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessWhitelistEcsListResponse describeAccessWhitelistEcsList(shared_ptr<DescribeAccessWhitelistEcsListRequest> request);
  DescribeAttackEventResponse describeAttackEventWithOptions(shared_ptr<DescribeAttackEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAttackEventResponse describeAttackEvent(shared_ptr<DescribeAttackEventRequest> request);
  DescribeAttackedIpResponse describeAttackedIpWithOptions(shared_ptr<DescribeAttackedIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAttackedIpResponse describeAttackedIp(shared_ptr<DescribeAttackedIpRequest> request);
  DescribeConsoleAccessWhiteListResponse describeConsoleAccessWhiteListWithOptions(shared_ptr<DescribeConsoleAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConsoleAccessWhiteListResponse describeConsoleAccessWhiteList(shared_ptr<DescribeConsoleAccessWhiteListRequest> request);
  DescribeCountAttackEventResponse describeCountAttackEventWithOptions(shared_ptr<DescribeCountAttackEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCountAttackEventResponse describeCountAttackEvent(shared_ptr<DescribeCountAttackEventRequest> request);
  DescribePhoneInfoResponse describePhoneInfoWithOptions(shared_ptr<DescribePhoneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneInfoResponse describePhoneInfo(shared_ptr<DescribePhoneInfoRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Jarvis-public20180621

#endif
