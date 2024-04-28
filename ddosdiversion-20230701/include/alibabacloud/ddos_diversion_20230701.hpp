// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DDOSDIVERSION20230701_H_
#define ALIBABACLOUD_DDOSDIVERSION20230701_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_DdosDiversion20230701 {
class ConfigNetStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> net{};
  shared_ptr<vector<string>> regions{};
  shared_ptr<string> saleId{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> subNets{};

  ConfigNetStatusRequest() {}

  explicit ConfigNetStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (net) {
      res["Net"] = boost::any(*net);
    }
    if (regions) {
      res["Regions"] = boost::any(*regions);
    }
    if (saleId) {
      res["SaleId"] = boost::any(*saleId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subNets) {
      res["SubNets"] = boost::any(*subNets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Net") != m.end() && !m["Net"].empty()) {
      net = make_shared<string>(boost::any_cast<string>(m["Net"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Regions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SaleId") != m.end() && !m["SaleId"].empty()) {
      saleId = make_shared<string>(boost::any_cast<string>(m["SaleId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubNets") != m.end() && !m["SubNets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubNets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubNets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subNets = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfigNetStatusRequest() = default;
};
class ConfigNetStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ConfigNetStatusResponseBody() {}

  explicit ConfigNetStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ConfigNetStatusResponseBody() = default;
};
class ConfigNetStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigNetStatusResponseBody> body{};

  ConfigNetStatusResponse() {}

  explicit ConfigNetStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigNetStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigNetStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigNetStatusResponse() = default;
};
class ListInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> num{};
  shared_ptr<long> page{};
  shared_ptr<string> saleId{};
  shared_ptr<string> status{};

  ListInstanceRequest() {}

  explicit ListInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (saleId) {
      res["SaleId"] = boost::any(*saleId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("SaleId") != m.end() && !m["SaleId"].empty()) {
      saleId = make_shared<string>(boost::any_cast<string>(m["SaleId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstanceRequest() = default;
};
class ListInstanceResponseBodyDataInstancesSpec : public Darabonba::Model {
public:
  shared_ptr<string> coverage{};
  shared_ptr<string> diversionType{};
  shared_ptr<string> edition{};
  shared_ptr<string> idcNumbers{};
  shared_ptr<string> initialInstallation{};
  shared_ptr<string> initialQty{};
  shared_ptr<string> ipSubnetNums{};
  shared_ptr<string> mitigationAnalysis{};
  shared_ptr<string> mitigationAnalysisCapacity{};
  shared_ptr<string> mitigationCapacity{};
  shared_ptr<string> mitigationNums{};
  shared_ptr<string> normalBandwidth{};

  ListInstanceResponseBodyDataInstancesSpec() {}

  explicit ListInstanceResponseBodyDataInstancesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverage) {
      res["Coverage"] = boost::any(*coverage);
    }
    if (diversionType) {
      res["DiversionType"] = boost::any(*diversionType);
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (idcNumbers) {
      res["IdcNumbers"] = boost::any(*idcNumbers);
    }
    if (initialInstallation) {
      res["InitialInstallation"] = boost::any(*initialInstallation);
    }
    if (initialQty) {
      res["InitialQty"] = boost::any(*initialQty);
    }
    if (ipSubnetNums) {
      res["IpSubnetNums"] = boost::any(*ipSubnetNums);
    }
    if (mitigationAnalysis) {
      res["MitigationAnalysis"] = boost::any(*mitigationAnalysis);
    }
    if (mitigationAnalysisCapacity) {
      res["MitigationAnalysisCapacity"] = boost::any(*mitigationAnalysisCapacity);
    }
    if (mitigationCapacity) {
      res["MitigationCapacity"] = boost::any(*mitigationCapacity);
    }
    if (mitigationNums) {
      res["MitigationNums"] = boost::any(*mitigationNums);
    }
    if (normalBandwidth) {
      res["NormalBandwidth"] = boost::any(*normalBandwidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coverage") != m.end() && !m["Coverage"].empty()) {
      coverage = make_shared<string>(boost::any_cast<string>(m["Coverage"]));
    }
    if (m.find("DiversionType") != m.end() && !m["DiversionType"].empty()) {
      diversionType = make_shared<string>(boost::any_cast<string>(m["DiversionType"]));
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("IdcNumbers") != m.end() && !m["IdcNumbers"].empty()) {
      idcNumbers = make_shared<string>(boost::any_cast<string>(m["IdcNumbers"]));
    }
    if (m.find("InitialInstallation") != m.end() && !m["InitialInstallation"].empty()) {
      initialInstallation = make_shared<string>(boost::any_cast<string>(m["InitialInstallation"]));
    }
    if (m.find("InitialQty") != m.end() && !m["InitialQty"].empty()) {
      initialQty = make_shared<string>(boost::any_cast<string>(m["InitialQty"]));
    }
    if (m.find("IpSubnetNums") != m.end() && !m["IpSubnetNums"].empty()) {
      ipSubnetNums = make_shared<string>(boost::any_cast<string>(m["IpSubnetNums"]));
    }
    if (m.find("MitigationAnalysis") != m.end() && !m["MitigationAnalysis"].empty()) {
      mitigationAnalysis = make_shared<string>(boost::any_cast<string>(m["MitigationAnalysis"]));
    }
    if (m.find("MitigationAnalysisCapacity") != m.end() && !m["MitigationAnalysisCapacity"].empty()) {
      mitigationAnalysisCapacity = make_shared<string>(boost::any_cast<string>(m["MitigationAnalysisCapacity"]));
    }
    if (m.find("MitigationCapacity") != m.end() && !m["MitigationCapacity"].empty()) {
      mitigationCapacity = make_shared<string>(boost::any_cast<string>(m["MitigationCapacity"]));
    }
    if (m.find("MitigationNums") != m.end() && !m["MitigationNums"].empty()) {
      mitigationNums = make_shared<string>(boost::any_cast<string>(m["MitigationNums"]));
    }
    if (m.find("NormalBandwidth") != m.end() && !m["NormalBandwidth"].empty()) {
      normalBandwidth = make_shared<string>(boost::any_cast<string>(m["NormalBandwidth"]));
    }
  }


  virtual ~ListInstanceResponseBodyDataInstancesSpec() = default;
};
class ListInstanceResponseBodyDataInstances : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtExpire{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> saleId{};
  shared_ptr<ListInstanceResponseBodyDataInstancesSpec> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};

  ListInstanceResponseBodyDataInstances() {}

  explicit ListInstanceResponseBodyDataInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtExpire) {
      res["GmtExpire"] = boost::any(*gmtExpire);
    }
    if (gmtModify) {
      res["GmtModify"] = boost::any(*gmtModify);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (saleId) {
      res["SaleId"] = boost::any(*saleId);
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtExpire") != m.end() && !m["GmtExpire"].empty()) {
      gmtExpire = make_shared<string>(boost::any_cast<string>(m["GmtExpire"]));
    }
    if (m.find("GmtModify") != m.end() && !m["GmtModify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["GmtModify"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SaleId") != m.end() && !m["SaleId"].empty()) {
      saleId = make_shared<string>(boost::any_cast<string>(m["SaleId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        ListInstanceResponseBodyDataInstancesSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<ListInstanceResponseBodyDataInstancesSpec>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListInstanceResponseBodyDataInstances() = default;
};
class ListInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstanceResponseBodyDataInstances>> instances{};
  shared_ptr<long> num{};
  shared_ptr<long> page{};
  shared_ptr<long> total{};

  ListInstanceResponseBodyData() {}

  explicit ListInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstanceResponseBodyDataInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceResponseBodyDataInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstanceResponseBodyDataInstances>>(expect1);
      }
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListInstanceResponseBodyData() = default;
};
class ListInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListInstanceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListInstanceResponseBody() {}

  explicit ListInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstanceResponseBody() = default;
};
class ListInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceResponseBody> body{};

  ListInstanceResponse() {}

  explicit ListInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceResponse() = default;
};
class QueryNetListRequest : public Darabonba::Model {
public:
  shared_ptr<string> mainNet{};
  shared_ptr<string> mode{};
  shared_ptr<string> net{};
  shared_ptr<long> num{};
  shared_ptr<long> page{};
  shared_ptr<string> saleId{};

  QueryNetListRequest() {}

  explicit QueryNetListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mainNet) {
      res["MainNet"] = boost::any(*mainNet);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (net) {
      res["Net"] = boost::any(*net);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (saleId) {
      res["SaleId"] = boost::any(*saleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MainNet") != m.end() && !m["MainNet"].empty()) {
      mainNet = make_shared<string>(boost::any_cast<string>(m["MainNet"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Net") != m.end() && !m["Net"].empty()) {
      net = make_shared<string>(boost::any_cast<string>(m["Net"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("SaleId") != m.end() && !m["SaleId"].empty()) {
      saleId = make_shared<string>(boost::any_cast<string>(m["SaleId"]));
    }
  }


  virtual ~QueryNetListRequest() = default;
};
class QueryNetListResponseBodyDataNetsDDoSDefenseCleanTh : public Darabonba::Model {
public:
  shared_ptr<long> mbps{};
  shared_ptr<long> pps{};

  QueryNetListResponseBodyDataNetsDDoSDefenseCleanTh() {}

  explicit QueryNetListResponseBodyDataNetsDDoSDefenseCleanTh(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mbps) {
      res["Mbps"] = boost::any(*mbps);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mbps") != m.end() && !m["Mbps"].empty()) {
      mbps = make_shared<long>(boost::any_cast<long>(m["Mbps"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
  }


  virtual ~QueryNetListResponseBodyDataNetsDDoSDefenseCleanTh() = default;
};
class QueryNetListResponseBodyDataNetsDDoSDefenseDjPolicy : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};

  QueryNetListResponseBodyDataNetsDDoSDefenseDjPolicy() {}

  explicit QueryNetListResponseBodyDataNetsDDoSDefenseDjPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~QueryNetListResponseBodyDataNetsDDoSDefenseDjPolicy() = default;
};
class QueryNetListResponseBodyDataNetsDDoSDefenseHoleTh : public Darabonba::Model {
public:
  shared_ptr<long> threshMbps{};

  QueryNetListResponseBodyDataNetsDDoSDefenseHoleTh() {}

  explicit QueryNetListResponseBodyDataNetsDDoSDefenseHoleTh(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (threshMbps) {
      res["ThreshMbps"] = boost::any(*threshMbps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ThreshMbps") != m.end() && !m["ThreshMbps"].empty()) {
      threshMbps = make_shared<long>(boost::any_cast<long>(m["ThreshMbps"]));
    }
  }


  virtual ~QueryNetListResponseBodyDataNetsDDoSDefenseHoleTh() = default;
};
class QueryNetListResponseBodyDataNetsDDoSDefense : public Darabonba::Model {
public:
  shared_ptr<QueryNetListResponseBodyDataNetsDDoSDefenseCleanTh> cleanTh{};
  shared_ptr<QueryNetListResponseBodyDataNetsDDoSDefenseDjPolicy> djPolicy{};
  shared_ptr<QueryNetListResponseBodyDataNetsDDoSDefenseHoleTh> holeTh{};

  QueryNetListResponseBodyDataNetsDDoSDefense() {}

  explicit QueryNetListResponseBodyDataNetsDDoSDefense(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cleanTh) {
      res["CleanTh"] = cleanTh ? boost::any(cleanTh->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (djPolicy) {
      res["DjPolicy"] = djPolicy ? boost::any(djPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (holeTh) {
      res["HoleTh"] = holeTh ? boost::any(holeTh->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CleanTh") != m.end() && !m["CleanTh"].empty()) {
      if (typeid(map<string, boost::any>) == m["CleanTh"].type()) {
        QueryNetListResponseBodyDataNetsDDoSDefenseCleanTh model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CleanTh"]));
        cleanTh = make_shared<QueryNetListResponseBodyDataNetsDDoSDefenseCleanTh>(model1);
      }
    }
    if (m.find("DjPolicy") != m.end() && !m["DjPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["DjPolicy"].type()) {
        QueryNetListResponseBodyDataNetsDDoSDefenseDjPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DjPolicy"]));
        djPolicy = make_shared<QueryNetListResponseBodyDataNetsDDoSDefenseDjPolicy>(model1);
      }
    }
    if (m.find("HoleTh") != m.end() && !m["HoleTh"].empty()) {
      if (typeid(map<string, boost::any>) == m["HoleTh"].type()) {
        QueryNetListResponseBodyDataNetsDDoSDefenseHoleTh model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HoleTh"]));
        holeTh = make_shared<QueryNetListResponseBodyDataNetsDDoSDefenseHoleTh>(model1);
      }
    }
  }


  virtual ~QueryNetListResponseBodyDataNetsDDoSDefense() = default;
};
class QueryNetListResponseBodyDataNetsDeclared : public Darabonba::Model {
public:
  shared_ptr<string> declared{};
  shared_ptr<string> region{};

  QueryNetListResponseBodyDataNetsDeclared() {}

  explicit QueryNetListResponseBodyDataNetsDeclared(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (declared) {
      res["Declared"] = boost::any(*declared);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Declared") != m.end() && !m["Declared"].empty()) {
      declared = make_shared<string>(boost::any_cast<string>(m["Declared"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~QueryNetListResponseBodyDataNetsDeclared() = default;
};
class QueryNetListResponseBodyDataNets : public Darabonba::Model {
public:
  shared_ptr<QueryNetListResponseBodyDataNetsDDoSDefense> DDoSDefense{};
  shared_ptr<vector<QueryNetListResponseBodyDataNetsDeclared>> declared{};
  shared_ptr<long> declaredState{};
  shared_ptr<long> fwdEffect{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> mode{};
  shared_ptr<string> net{};
  shared_ptr<string> netExtend{};
  shared_ptr<long> netMain{};
  shared_ptr<string> netType{};
  shared_ptr<string> saleId{};
  shared_ptr<string> upstreamType{};
  shared_ptr<string> userId{};

  QueryNetListResponseBodyDataNets() {}

  explicit QueryNetListResponseBodyDataNets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DDoSDefense) {
      res["DDoSDefense"] = DDoSDefense ? boost::any(DDoSDefense->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (declared) {
      vector<boost::any> temp1;
      for(auto item1:*declared){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Declared"] = boost::any(temp1);
    }
    if (declaredState) {
      res["DeclaredState"] = boost::any(*declaredState);
    }
    if (fwdEffect) {
      res["FwdEffect"] = boost::any(*fwdEffect);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["GmtModify"] = boost::any(*gmtModify);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (net) {
      res["Net"] = boost::any(*net);
    }
    if (netExtend) {
      res["NetExtend"] = boost::any(*netExtend);
    }
    if (netMain) {
      res["NetMain"] = boost::any(*netMain);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (saleId) {
      res["SaleId"] = boost::any(*saleId);
    }
    if (upstreamType) {
      res["UpstreamType"] = boost::any(*upstreamType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DDoSDefense") != m.end() && !m["DDoSDefense"].empty()) {
      if (typeid(map<string, boost::any>) == m["DDoSDefense"].type()) {
        QueryNetListResponseBodyDataNetsDDoSDefense model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DDoSDefense"]));
        DDoSDefense = make_shared<QueryNetListResponseBodyDataNetsDDoSDefense>(model1);
      }
    }
    if (m.find("Declared") != m.end() && !m["Declared"].empty()) {
      if (typeid(vector<boost::any>) == m["Declared"].type()) {
        vector<QueryNetListResponseBodyDataNetsDeclared> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Declared"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryNetListResponseBodyDataNetsDeclared model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        declared = make_shared<vector<QueryNetListResponseBodyDataNetsDeclared>>(expect1);
      }
    }
    if (m.find("DeclaredState") != m.end() && !m["DeclaredState"].empty()) {
      declaredState = make_shared<long>(boost::any_cast<long>(m["DeclaredState"]));
    }
    if (m.find("FwdEffect") != m.end() && !m["FwdEffect"].empty()) {
      fwdEffect = make_shared<long>(boost::any_cast<long>(m["FwdEffect"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModify") != m.end() && !m["GmtModify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["GmtModify"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Net") != m.end() && !m["Net"].empty()) {
      net = make_shared<string>(boost::any_cast<string>(m["Net"]));
    }
    if (m.find("NetExtend") != m.end() && !m["NetExtend"].empty()) {
      netExtend = make_shared<string>(boost::any_cast<string>(m["NetExtend"]));
    }
    if (m.find("NetMain") != m.end() && !m["NetMain"].empty()) {
      netMain = make_shared<long>(boost::any_cast<long>(m["NetMain"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("SaleId") != m.end() && !m["SaleId"].empty()) {
      saleId = make_shared<string>(boost::any_cast<string>(m["SaleId"]));
    }
    if (m.find("UpstreamType") != m.end() && !m["UpstreamType"].empty()) {
      upstreamType = make_shared<string>(boost::any_cast<string>(m["UpstreamType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryNetListResponseBodyDataNets() = default;
};
class QueryNetListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryNetListResponseBodyDataNets>> nets{};
  shared_ptr<long> num{};
  shared_ptr<long> page{};
  shared_ptr<long> total{};

  QueryNetListResponseBodyData() {}

  explicit QueryNetListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nets) {
      vector<boost::any> temp1;
      for(auto item1:*nets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nets"] = boost::any(temp1);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nets") != m.end() && !m["Nets"].empty()) {
      if (typeid(vector<boost::any>) == m["Nets"].type()) {
        vector<QueryNetListResponseBodyDataNets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryNetListResponseBodyDataNets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nets = make_shared<vector<QueryNetListResponseBodyDataNets>>(expect1);
      }
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryNetListResponseBodyData() = default;
};
class QueryNetListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryNetListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryNetListResponseBody() {}

  explicit QueryNetListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryNetListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryNetListResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryNetListResponseBody() = default;
};
class QueryNetListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryNetListResponseBody> body{};

  QueryNetListResponse() {}

  explicit QueryNetListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryNetListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryNetListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryNetListResponse() = default;
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
  ConfigNetStatusResponse configNetStatusWithOptions(shared_ptr<ConfigNetStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigNetStatusResponse configNetStatus(shared_ptr<ConfigNetStatusRequest> request);
  ListInstanceResponse listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceResponse listInstance(shared_ptr<ListInstanceRequest> request);
  QueryNetListResponse queryNetListWithOptions(shared_ptr<QueryNetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryNetListResponse queryNetList(shared_ptr<QueryNetListRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_DdosDiversion20230701

#endif
