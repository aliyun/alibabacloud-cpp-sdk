// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_UMENG-FINPLUS20211130_H_
#define ALIBABACLOUD_UMENG-FINPLUS20211130_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Umeng-finplus20211130 {
class CancelComputeTaskByBcIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> bcId{};

  CancelComputeTaskByBcIdRequest() {}

  explicit CancelComputeTaskByBcIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bcId) {
      res["bcId"] = boost::any(*bcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bcId") != m.end() && !m["bcId"].empty()) {
      bcId = make_shared<long>(boost::any_cast<long>(m["bcId"]));
    }
  }


  virtual ~CancelComputeTaskByBcIdRequest() = default;
};
class CancelComputeTaskByBcIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelComputeTaskByBcIdResponseBody() {}

  explicit CancelComputeTaskByBcIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelComputeTaskByBcIdResponseBody() = default;
};
class CancelComputeTaskByBcIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelComputeTaskByBcIdResponseBody> body{};

  CancelComputeTaskByBcIdResponse() {}

  explicit CancelComputeTaskByBcIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelComputeTaskByBcIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelComputeTaskByBcIdResponseBody>(model1);
      }
    }
  }


  virtual ~CancelComputeTaskByBcIdResponse() = default;
};
class CreateComputeTaskByDataSetIdRequestBatchInfoFormCuVersions : public Darabonba::Model {
public:
  shared_ptr<string> cuId{};
  shared_ptr<string> cuVersion{};

  CreateComputeTaskByDataSetIdRequestBatchInfoFormCuVersions() {}

  explicit CreateComputeTaskByDataSetIdRequestBatchInfoFormCuVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cuId) {
      res["CuId"] = boost::any(*cuId);
    }
    if (cuVersion) {
      res["CuVersion"] = boost::any(*cuVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CuId") != m.end() && !m["CuId"].empty()) {
      cuId = make_shared<string>(boost::any_cast<string>(m["CuId"]));
    }
    if (m.find("CuVersion") != m.end() && !m["CuVersion"].empty()) {
      cuVersion = make_shared<string>(boost::any_cast<string>(m["CuVersion"]));
    }
  }


  virtual ~CreateComputeTaskByDataSetIdRequestBatchInfoFormCuVersions() = default;
};
class CreateComputeTaskByDataSetIdRequestBatchInfoForm : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<vector<CreateComputeTaskByDataSetIdRequestBatchInfoFormCuVersions>> cuVersions{};

  CreateComputeTaskByDataSetIdRequestBatchInfoForm() {}

  explicit CreateComputeTaskByDataSetIdRequestBatchInfoForm(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (cuVersions) {
      vector<boost::any> temp1;
      for(auto item1:*cuVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CuVersions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("CuVersions") != m.end() && !m["CuVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["CuVersions"].type()) {
        vector<CreateComputeTaskByDataSetIdRequestBatchInfoFormCuVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CuVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateComputeTaskByDataSetIdRequestBatchInfoFormCuVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cuVersions = make_shared<vector<CreateComputeTaskByDataSetIdRequestBatchInfoFormCuVersions>>(expect1);
      }
    }
  }


  virtual ~CreateComputeTaskByDataSetIdRequestBatchInfoForm() = default;
};
class CreateComputeTaskByDataSetIdRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateComputeTaskByDataSetIdRequestBatchInfoForm>> batchInfoForm{};
  shared_ptr<long> datasetId{};
  shared_ptr<string> name{};
  shared_ptr<string> remarks{};

  CreateComputeTaskByDataSetIdRequest() {}

  explicit CreateComputeTaskByDataSetIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchInfoForm) {
      vector<boost::any> temp1;
      for(auto item1:*batchInfoForm){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BatchInfoForm"] = boost::any(temp1);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remarks) {
      res["Remarks"] = boost::any(*remarks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchInfoForm") != m.end() && !m["BatchInfoForm"].empty()) {
      if (typeid(vector<boost::any>) == m["BatchInfoForm"].type()) {
        vector<CreateComputeTaskByDataSetIdRequestBatchInfoForm> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BatchInfoForm"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateComputeTaskByDataSetIdRequestBatchInfoForm model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        batchInfoForm = make_shared<vector<CreateComputeTaskByDataSetIdRequestBatchInfoForm>>(expect1);
      }
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<long>(boost::any_cast<long>(m["DatasetId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remarks") != m.end() && !m["Remarks"].empty()) {
      remarks = make_shared<string>(boost::any_cast<string>(m["Remarks"]));
    }
  }


  virtual ~CreateComputeTaskByDataSetIdRequest() = default;
};
class CreateComputeTaskByDataSetIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<long>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateComputeTaskByDataSetIdResponseBody() {}

  explicit CreateComputeTaskByDataSetIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateComputeTaskByDataSetIdResponseBody() = default;
};
class CreateComputeTaskByDataSetIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateComputeTaskByDataSetIdResponseBody> body{};

  CreateComputeTaskByDataSetIdResponse() {}

  explicit CreateComputeTaskByDataSetIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateComputeTaskByDataSetIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateComputeTaskByDataSetIdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateComputeTaskByDataSetIdResponse() = default;
};
class CreateComputeTaskByMultiDataSetIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> dataSetIds{};
  shared_ptr<string> name{};
  shared_ptr<string> remarks{};

  CreateComputeTaskByMultiDataSetIdRequest() {}

  explicit CreateComputeTaskByMultiDataSetIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (dataSetIds) {
      res["dataSetIds"] = boost::any(*dataSetIds);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (remarks) {
      res["remarks"] = boost::any(*remarks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["appId"]));
    }
    if (m.find("dataSetIds") != m.end() && !m["dataSetIds"].empty()) {
      dataSetIds = make_shared<string>(boost::any_cast<string>(m["dataSetIds"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("remarks") != m.end() && !m["remarks"].empty()) {
      remarks = make_shared<string>(boost::any_cast<string>(m["remarks"]));
    }
  }


  virtual ~CreateComputeTaskByMultiDataSetIdRequest() = default;
};
class CreateComputeTaskByMultiDataSetIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateComputeTaskByMultiDataSetIdResponseBody() {}

  explicit CreateComputeTaskByMultiDataSetIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateComputeTaskByMultiDataSetIdResponseBody() = default;
};
class CreateComputeTaskByMultiDataSetIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateComputeTaskByMultiDataSetIdResponseBody> body{};

  CreateComputeTaskByMultiDataSetIdResponse() {}

  explicit CreateComputeTaskByMultiDataSetIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateComputeTaskByMultiDataSetIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateComputeTaskByMultiDataSetIdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateComputeTaskByMultiDataSetIdResponse() = default;
};
class GetAvailableDataSetListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> dataSetType{};
  shared_ptr<long> datasetId{};
  shared_ptr<string> idTypeDesc{};
  shared_ptr<string> name{};
  shared_ptr<string> statusDesc{};

  GetAvailableDataSetListResponseBodyData() {}

  explicit GetAvailableDataSetListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataSetType) {
      res["dataSetType"] = boost::any(*dataSetType);
    }
    if (datasetId) {
      res["datasetId"] = boost::any(*datasetId);
    }
    if (idTypeDesc) {
      res["idTypeDesc"] = boost::any(*idTypeDesc);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (statusDesc) {
      res["statusDesc"] = boost::any(*statusDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dataSetType") != m.end() && !m["dataSetType"].empty()) {
      dataSetType = make_shared<long>(boost::any_cast<long>(m["dataSetType"]));
    }
    if (m.find("datasetId") != m.end() && !m["datasetId"].empty()) {
      datasetId = make_shared<long>(boost::any_cast<long>(m["datasetId"]));
    }
    if (m.find("idTypeDesc") != m.end() && !m["idTypeDesc"].empty()) {
      idTypeDesc = make_shared<string>(boost::any_cast<string>(m["idTypeDesc"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("statusDesc") != m.end() && !m["statusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["statusDesc"]));
    }
  }


  virtual ~GetAvailableDataSetListResponseBodyData() = default;
};
class GetAvailableDataSetListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetAvailableDataSetListResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetAvailableDataSetListResponseBody() {}

  explicit GetAvailableDataSetListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetAvailableDataSetListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAvailableDataSetListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetAvailableDataSetListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetAvailableDataSetListResponseBody() = default;
};
class GetAvailableDataSetListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAvailableDataSetListResponseBody> body{};

  GetAvailableDataSetListResponse() {}

  explicit GetAvailableDataSetListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAvailableDataSetListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAvailableDataSetListResponseBody>(model1);
      }
    }
  }


  virtual ~GetAvailableDataSetListResponse() = default;
};
class GetComputeResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> bcId{};

  GetComputeResultRequest() {}

  explicit GetComputeResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bcId) {
      res["bcId"] = boost::any(*bcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bcId") != m.end() && !m["bcId"].empty()) {
      bcId = make_shared<long>(boost::any_cast<long>(m["bcId"]));
    }
  }


  virtual ~GetComputeResultRequest() = default;
};
class GetComputeResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bcId{};
  shared_ptr<long> billedNum{};
  shared_ptr<long> code10000Num{};
  shared_ptr<long> code108Num{};
  shared_ptr<long> code109Num{};
  shared_ptr<string> exportFileName{};
  shared_ptr<long> fileLineNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> password{};
  shared_ptr<string> state{};

  GetComputeResultResponseBodyData() {}

  explicit GetComputeResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bcId) {
      res["bcId"] = boost::any(*bcId);
    }
    if (billedNum) {
      res["billedNum"] = boost::any(*billedNum);
    }
    if (code10000Num) {
      res["code10000Num"] = boost::any(*code10000Num);
    }
    if (code108Num) {
      res["code108Num"] = boost::any(*code108Num);
    }
    if (code109Num) {
      res["code109Num"] = boost::any(*code109Num);
    }
    if (exportFileName) {
      res["exportFileName"] = boost::any(*exportFileName);
    }
    if (fileLineNumber) {
      res["fileLineNumber"] = boost::any(*fileLineNumber);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bcId") != m.end() && !m["bcId"].empty()) {
      bcId = make_shared<long>(boost::any_cast<long>(m["bcId"]));
    }
    if (m.find("billedNum") != m.end() && !m["billedNum"].empty()) {
      billedNum = make_shared<long>(boost::any_cast<long>(m["billedNum"]));
    }
    if (m.find("code10000Num") != m.end() && !m["code10000Num"].empty()) {
      code10000Num = make_shared<long>(boost::any_cast<long>(m["code10000Num"]));
    }
    if (m.find("code108Num") != m.end() && !m["code108Num"].empty()) {
      code108Num = make_shared<long>(boost::any_cast<long>(m["code108Num"]));
    }
    if (m.find("code109Num") != m.end() && !m["code109Num"].empty()) {
      code109Num = make_shared<long>(boost::any_cast<long>(m["code109Num"]));
    }
    if (m.find("exportFileName") != m.end() && !m["exportFileName"].empty()) {
      exportFileName = make_shared<string>(boost::any_cast<string>(m["exportFileName"]));
    }
    if (m.find("fileLineNumber") != m.end() && !m["fileLineNumber"].empty()) {
      fileLineNumber = make_shared<long>(boost::any_cast<long>(m["fileLineNumber"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~GetComputeResultResponseBodyData() = default;
};
class GetComputeResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetComputeResultResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetComputeResultResponseBody() {}

  explicit GetComputeResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetComputeResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetComputeResultResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetComputeResultResponseBody() = default;
};
class GetComputeResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetComputeResultResponseBody> body{};

  GetComputeResultResponse() {}

  explicit GetComputeResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetComputeResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetComputeResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetComputeResultResponse() = default;
};
class GetDataSetStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataSetId{};

  GetDataSetStatusRequest() {}

  explicit GetDataSetStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSetId) {
      res["dataSetId"] = boost::any(*dataSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSetId") != m.end() && !m["dataSetId"].empty()) {
      dataSetId = make_shared<long>(boost::any_cast<long>(m["dataSetId"]));
    }
  }


  virtual ~GetDataSetStatusRequest() = default;
};
class GetDataSetStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> dataSetType{};
  shared_ptr<long> datasetId{};
  shared_ptr<string> idTypeDesc{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> statusDesc{};

  GetDataSetStatusResponseBodyData() {}

  explicit GetDataSetStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataSetType) {
      res["dataSetType"] = boost::any(*dataSetType);
    }
    if (datasetId) {
      res["datasetId"] = boost::any(*datasetId);
    }
    if (idTypeDesc) {
      res["idTypeDesc"] = boost::any(*idTypeDesc);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (statusDesc) {
      res["statusDesc"] = boost::any(*statusDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dataSetType") != m.end() && !m["dataSetType"].empty()) {
      dataSetType = make_shared<long>(boost::any_cast<long>(m["dataSetType"]));
    }
    if (m.find("datasetId") != m.end() && !m["datasetId"].empty()) {
      datasetId = make_shared<long>(boost::any_cast<long>(m["datasetId"]));
    }
    if (m.find("idTypeDesc") != m.end() && !m["idTypeDesc"].empty()) {
      idTypeDesc = make_shared<string>(boost::any_cast<string>(m["idTypeDesc"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("statusDesc") != m.end() && !m["statusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["statusDesc"]));
    }
  }


  virtual ~GetDataSetStatusResponseBodyData() = default;
};
class GetDataSetStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDataSetStatusResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  GetDataSetStatusResponseBody() {}

  explicit GetDataSetStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDataSetStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDataSetStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDataSetStatusResponseBody() = default;
};
class GetDataSetStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataSetStatusResponseBody> body{};

  GetDataSetStatusResponse() {}

  explicit GetDataSetStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataSetStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataSetStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataSetStatusResponse() = default;
};
class GetDataSetStsAKResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> secret{};
  shared_ptr<string> token{};

  GetDataSetStsAKResponseBodyData() {}

  explicit GetDataSetStsAKResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetDataSetStsAKResponseBodyData() = default;
};
class GetDataSetStsAKResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDataSetStsAKResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDataSetStsAKResponseBody() {}

  explicit GetDataSetStsAKResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDataSetStsAKResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDataSetStsAKResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDataSetStsAKResponseBody() = default;
};
class GetDataSetStsAKResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataSetStsAKResponseBody> body{};

  GetDataSetStsAKResponse() {}

  explicit GetDataSetStsAKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataSetStsAKResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataSetStsAKResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataSetStsAKResponse() = default;
};
class SubmitDataSetTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataSetType{};
  shared_ptr<long> idType{};
  shared_ptr<string> name{};
  shared_ptr<string> ossFileName{};

  SubmitDataSetTaskRequest() {}

  explicit SubmitDataSetTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSetType) {
      res["dataSetType"] = boost::any(*dataSetType);
    }
    if (idType) {
      res["idType"] = boost::any(*idType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ossFileName) {
      res["ossFileName"] = boost::any(*ossFileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSetType") != m.end() && !m["dataSetType"].empty()) {
      dataSetType = make_shared<long>(boost::any_cast<long>(m["dataSetType"]));
    }
    if (m.find("idType") != m.end() && !m["idType"].empty()) {
      idType = make_shared<long>(boost::any_cast<long>(m["idType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ossFileName") != m.end() && !m["ossFileName"].empty()) {
      ossFileName = make_shared<string>(boost::any_cast<string>(m["ossFileName"]));
    }
  }


  virtual ~SubmitDataSetTaskRequest() = default;
};
class SubmitDataSetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  SubmitDataSetTaskResponseBody() {}

  explicit SubmitDataSetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~SubmitDataSetTaskResponseBody() = default;
};
class SubmitDataSetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDataSetTaskResponseBody> body{};

  SubmitDataSetTaskResponse() {}

  explicit SubmitDataSetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDataSetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDataSetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDataSetTaskResponse() = default;
};
class CancelYydTaskByBcIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> bcId{};

  CancelYydTaskByBcIdRequest() {}

  explicit CancelYydTaskByBcIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bcId) {
      res["bcId"] = boost::any(*bcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bcId") != m.end() && !m["bcId"].empty()) {
      bcId = make_shared<long>(boost::any_cast<long>(m["bcId"]));
    }
  }


  virtual ~CancelYydTaskByBcIdRequest() = default;
};
class CancelYydTaskByBcIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelYydTaskByBcIdResponseBody() {}

  explicit CancelYydTaskByBcIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelYydTaskByBcIdResponseBody() = default;
};
class CancelYydTaskByBcIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelYydTaskByBcIdResponseBody> body{};

  CancelYydTaskByBcIdResponse() {}

  explicit CancelYydTaskByBcIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelYydTaskByBcIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelYydTaskByBcIdResponseBody>(model1);
      }
    }
  }


  virtual ~CancelYydTaskByBcIdResponse() = default;
};
class CreateYydComputeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> datasetId{};
  shared_ptr<string> name{};
  shared_ptr<string> remarks{};
  shared_ptr<long> appId{};

  CreateYydComputeTaskRequest() {}

  explicit CreateYydComputeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remarks) {
      res["Remarks"] = boost::any(*remarks);
    }
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<long>(boost::any_cast<long>(m["DatasetId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remarks") != m.end() && !m["Remarks"].empty()) {
      remarks = make_shared<string>(boost::any_cast<string>(m["Remarks"]));
    }
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["appId"]));
    }
  }


  virtual ~CreateYydComputeTaskRequest() = default;
};
class CreateYydComputeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateYydComputeTaskResponseBody() {}

  explicit CreateYydComputeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateYydComputeTaskResponseBody() = default;
};
class CreateYydComputeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateYydComputeTaskResponseBody> body{};

  CreateYydComputeTaskResponse() {}

  explicit CreateYydComputeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateYydComputeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateYydComputeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateYydComputeTaskResponse() = default;
};
class CreateYydDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> ossFileName{};

  CreateYydDataSetRequest() {}

  explicit CreateYydDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ossFileName) {
      res["ossFileName"] = boost::any(*ossFileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ossFileName") != m.end() && !m["ossFileName"].empty()) {
      ossFileName = make_shared<string>(boost::any_cast<string>(m["ossFileName"]));
    }
  }


  virtual ~CreateYydDataSetRequest() = default;
};
class CreateYydDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  CreateYydDataSetResponseBody() {}

  explicit CreateYydDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateYydDataSetResponseBody() = default;
};
class CreateYydDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateYydDataSetResponseBody> body{};

  CreateYydDataSetResponse() {}

  explicit CreateYydDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateYydDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateYydDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateYydDataSetResponse() = default;
};
class ListYydComputeTaskListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<long> bcId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> name{};
  shared_ptr<string> remarks{};
  shared_ptr<string> state{};

  ListYydComputeTaskListResponseBodyData() {}

  explicit ListYydComputeTaskListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (bcId) {
      res["bcId"] = boost::any(*bcId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (remarks) {
      res["remarks"] = boost::any(*remarks);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["appId"]));
    }
    if (m.find("bcId") != m.end() && !m["bcId"].empty()) {
      bcId = make_shared<long>(boost::any_cast<long>(m["bcId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("remarks") != m.end() && !m["remarks"].empty()) {
      remarks = make_shared<string>(boost::any_cast<string>(m["remarks"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~ListYydComputeTaskListResponseBodyData() = default;
};
class ListYydComputeTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListYydComputeTaskListResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListYydComputeTaskListResponseBody() {}

  explicit ListYydComputeTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListYydComputeTaskListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListYydComputeTaskListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListYydComputeTaskListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListYydComputeTaskListResponseBody() = default;
};
class ListYydComputeTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListYydComputeTaskListResponseBody> body{};

  ListYydComputeTaskListResponse() {}

  explicit ListYydComputeTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListYydComputeTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListYydComputeTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~ListYydComputeTaskListResponse() = default;
};
class ListYydDataSetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> dataSetType{};
  shared_ptr<long> datasetId{};
  shared_ptr<string> idTypeDesc{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> statusDesc{};

  ListYydDataSetResponseBodyData() {}

  explicit ListYydDataSetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataSetType) {
      res["dataSetType"] = boost::any(*dataSetType);
    }
    if (datasetId) {
      res["datasetId"] = boost::any(*datasetId);
    }
    if (idTypeDesc) {
      res["idTypeDesc"] = boost::any(*idTypeDesc);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (statusDesc) {
      res["statusDesc"] = boost::any(*statusDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dataSetType") != m.end() && !m["dataSetType"].empty()) {
      dataSetType = make_shared<long>(boost::any_cast<long>(m["dataSetType"]));
    }
    if (m.find("datasetId") != m.end() && !m["datasetId"].empty()) {
      datasetId = make_shared<long>(boost::any_cast<long>(m["datasetId"]));
    }
    if (m.find("idTypeDesc") != m.end() && !m["idTypeDesc"].empty()) {
      idTypeDesc = make_shared<string>(boost::any_cast<string>(m["idTypeDesc"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("statusDesc") != m.end() && !m["statusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["statusDesc"]));
    }
  }


  virtual ~ListYydDataSetResponseBodyData() = default;
};
class ListYydDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListYydDataSetResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  ListYydDataSetResponseBody() {}

  explicit ListYydDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListYydDataSetResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListYydDataSetResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListYydDataSetResponseBodyData>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListYydDataSetResponseBody() = default;
};
class ListYydDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListYydDataSetResponseBody> body{};

  ListYydDataSetResponse() {}

  explicit ListYydDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListYydDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListYydDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~ListYydDataSetResponse() = default;
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
  CancelComputeTaskByBcIdResponse cancelComputeTaskByBcIdWithOptions(shared_ptr<CancelComputeTaskByBcIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelComputeTaskByBcIdResponse cancelComputeTaskByBcId(shared_ptr<CancelComputeTaskByBcIdRequest> request);
  CreateComputeTaskByDataSetIdResponse createComputeTaskByDataSetIdWithOptions(shared_ptr<CreateComputeTaskByDataSetIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateComputeTaskByDataSetIdResponse createComputeTaskByDataSetId(shared_ptr<CreateComputeTaskByDataSetIdRequest> request);
  CreateComputeTaskByMultiDataSetIdResponse createComputeTaskByMultiDataSetIdWithOptions(shared_ptr<CreateComputeTaskByMultiDataSetIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateComputeTaskByMultiDataSetIdResponse createComputeTaskByMultiDataSetId(shared_ptr<CreateComputeTaskByMultiDataSetIdRequest> request);
  GetAvailableDataSetListResponse getAvailableDataSetListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAvailableDataSetListResponse getAvailableDataSetList();
  GetComputeResultResponse getComputeResultWithOptions(shared_ptr<GetComputeResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetComputeResultResponse getComputeResult(shared_ptr<GetComputeResultRequest> request);
  GetDataSetStatusResponse getDataSetStatusWithOptions(shared_ptr<GetDataSetStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataSetStatusResponse getDataSetStatus(shared_ptr<GetDataSetStatusRequest> request);
  GetDataSetStsAKResponse getDataSetStsAKWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataSetStsAKResponse getDataSetStsAK();
  SubmitDataSetTaskResponse submitDataSetTaskWithOptions(shared_ptr<SubmitDataSetTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDataSetTaskResponse submitDataSetTask(shared_ptr<SubmitDataSetTaskRequest> request);
  CancelYydTaskByBcIdResponse cancelYydTaskByBcIdWithOptions(shared_ptr<CancelYydTaskByBcIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelYydTaskByBcIdResponse cancelYydTaskByBcId(shared_ptr<CancelYydTaskByBcIdRequest> request);
  CreateYydComputeTaskResponse createYydComputeTaskWithOptions(shared_ptr<CreateYydComputeTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateYydComputeTaskResponse createYydComputeTask(shared_ptr<CreateYydComputeTaskRequest> request);
  CreateYydDataSetResponse createYydDataSetWithOptions(shared_ptr<CreateYydDataSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateYydDataSetResponse createYydDataSet(shared_ptr<CreateYydDataSetRequest> request);
  ListYydComputeTaskListResponse listYydComputeTaskListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListYydComputeTaskListResponse listYydComputeTaskList();
  ListYydDataSetResponse listYydDataSetWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListYydDataSetResponse listYydDataSet();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Umeng-finplus20211130

#endif
