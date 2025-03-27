// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIYUNID-AG20180912_H_
#define ALIBABACLOUD_ALIYUNID-AG20180912_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Aliyunid-ag20180912 {
class CreateAgAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> loginEmail{};
  shared_ptr<string> type{};

  CreateAgAccountRequest() {}

  explicit CreateAgAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginEmail) {
      res["LoginEmail"] = boost::any(*loginEmail);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginEmail") != m.end() && !m["LoginEmail"].empty()) {
      loginEmail = make_shared<string>(boost::any_cast<string>(m["LoginEmail"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateAgAccountRequest() = default;
};
class CreateAgAccountResponseBodyAgRelationDto : public Darabonba::Model {
public:
  shared_ptr<string> mpk{};
  shared_ptr<string> pk{};
  shared_ptr<string> type{};

  CreateAgAccountResponseBodyAgRelationDto() {}

  explicit CreateAgAccountResponseBodyAgRelationDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mpk) {
      res["Mpk"] = boost::any(*mpk);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mpk") != m.end() && !m["Mpk"].empty()) {
      mpk = make_shared<string>(boost::any_cast<string>(m["Mpk"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateAgAccountResponseBodyAgRelationDto() = default;
};
class CreateAgAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAgAccountResponseBodyAgRelationDto> agRelationDto{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAgAccountResponseBody() {}

  explicit CreateAgAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agRelationDto) {
      res["AgRelationDto"] = agRelationDto ? boost::any(agRelationDto->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AgRelationDto") != m.end() && !m["AgRelationDto"].empty()) {
      if (typeid(map<string, boost::any>) == m["AgRelationDto"].type()) {
        CreateAgAccountResponseBodyAgRelationDto model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AgRelationDto"]));
        agRelationDto = make_shared<CreateAgAccountResponseBodyAgRelationDto>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateAgAccountResponseBody() = default;
};
class CreateAgAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAgAccountResponseBody> body{};

  CreateAgAccountResponse() {}

  explicit CreateAgAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAgAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAgAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAgAccountResponse() = default;
};
class GetAgRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> pk{};

  GetAgRelationRequest() {}

  explicit GetAgRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
  }


  virtual ~GetAgRelationRequest() = default;
};
class GetAgRelationResponseBodyAgRelationDto : public Darabonba::Model {
public:
  shared_ptr<string> mpk{};
  shared_ptr<string> pk{};
  shared_ptr<string> type{};

  GetAgRelationResponseBodyAgRelationDto() {}

  explicit GetAgRelationResponseBodyAgRelationDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mpk) {
      res["Mpk"] = boost::any(*mpk);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mpk") != m.end() && !m["Mpk"].empty()) {
      mpk = make_shared<string>(boost::any_cast<string>(m["Mpk"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetAgRelationResponseBodyAgRelationDto() = default;
};
class GetAgRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAgRelationResponseBodyAgRelationDto> agRelationDto{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAgRelationResponseBody() {}

  explicit GetAgRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agRelationDto) {
      res["AgRelationDto"] = agRelationDto ? boost::any(agRelationDto->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AgRelationDto") != m.end() && !m["AgRelationDto"].empty()) {
      if (typeid(map<string, boost::any>) == m["AgRelationDto"].type()) {
        GetAgRelationResponseBodyAgRelationDto model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AgRelationDto"]));
        agRelationDto = make_shared<GetAgRelationResponseBodyAgRelationDto>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAgRelationResponseBody() = default;
};
class GetAgRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAgRelationResponseBody> body{};

  GetAgRelationResponse() {}

  explicit GetAgRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAgRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgRelationResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgRelationResponse() = default;
};
class GetRamBindRequest : public Darabonba::Model {
public:
  shared_ptr<string> pk{};

  GetRamBindRequest() {}

  explicit GetRamBindRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
  }


  virtual ~GetRamBindRequest() = default;
};
class GetRamBindResponseBodyRamBindDto : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  GetRamBindResponseBodyRamBindDto() {}

  explicit GetRamBindResponseBodyRamBindDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~GetRamBindResponseBodyRamBindDto() = default;
};
class GetRamBindResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetRamBindResponseBodyRamBindDto> ramBindDto{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRamBindResponseBody() {}

  explicit GetRamBindResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ramBindDto) {
      res["RamBindDto"] = ramBindDto ? boost::any(ramBindDto->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RamBindDto") != m.end() && !m["RamBindDto"].empty()) {
      if (typeid(map<string, boost::any>) == m["RamBindDto"].type()) {
        GetRamBindResponseBodyRamBindDto model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RamBindDto"]));
        ramBindDto = make_shared<GetRamBindResponseBodyRamBindDto>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetRamBindResponseBody() = default;
};
class GetRamBindResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRamBindResponseBody> body{};

  GetRamBindResponse() {}

  explicit GetRamBindResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRamBindResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRamBindResponseBody>(model1);
      }
    }
  }


  virtual ~GetRamBindResponse() = default;
};
class PaginateAgRelationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> queryCount{};

  PaginateAgRelationsRequest() {}

  explicit PaginateAgRelationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
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
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<bool>(boost::any_cast<bool>(m["QueryCount"]));
    }
  }


  virtual ~PaginateAgRelationsRequest() = default;
};
class PaginateAgRelationsResponseBodyAgRelationDtosAgRelationDto : public Darabonba::Model {
public:
  shared_ptr<string> mpk{};
  shared_ptr<string> pk{};
  shared_ptr<string> type{};

  PaginateAgRelationsResponseBodyAgRelationDtosAgRelationDto() {}

  explicit PaginateAgRelationsResponseBodyAgRelationDtosAgRelationDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mpk) {
      res["Mpk"] = boost::any(*mpk);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mpk") != m.end() && !m["Mpk"].empty()) {
      mpk = make_shared<string>(boost::any_cast<string>(m["Mpk"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PaginateAgRelationsResponseBodyAgRelationDtosAgRelationDto() = default;
};
class PaginateAgRelationsResponseBodyAgRelationDtos : public Darabonba::Model {
public:
  shared_ptr<vector<PaginateAgRelationsResponseBodyAgRelationDtosAgRelationDto>> agRelationDto{};

  PaginateAgRelationsResponseBodyAgRelationDtos() {}

  explicit PaginateAgRelationsResponseBodyAgRelationDtos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agRelationDto) {
      vector<boost::any> temp1;
      for(auto item1:*agRelationDto){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AgRelationDto"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgRelationDto") != m.end() && !m["AgRelationDto"].empty()) {
      if (typeid(vector<boost::any>) == m["AgRelationDto"].type()) {
        vector<PaginateAgRelationsResponseBodyAgRelationDtosAgRelationDto> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AgRelationDto"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaginateAgRelationsResponseBodyAgRelationDtosAgRelationDto model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agRelationDto = make_shared<vector<PaginateAgRelationsResponseBodyAgRelationDtosAgRelationDto>>(expect1);
      }
    }
  }


  virtual ~PaginateAgRelationsResponseBodyAgRelationDtos() = default;
};
class PaginateAgRelationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<PaginateAgRelationsResponseBodyAgRelationDtos> agRelationDtos{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  PaginateAgRelationsResponseBody() {}

  explicit PaginateAgRelationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agRelationDtos) {
      res["AgRelationDtos"] = agRelationDtos ? boost::any(agRelationDtos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgRelationDtos") != m.end() && !m["AgRelationDtos"].empty()) {
      if (typeid(map<string, boost::any>) == m["AgRelationDtos"].type()) {
        PaginateAgRelationsResponseBodyAgRelationDtos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AgRelationDtos"]));
        agRelationDtos = make_shared<PaginateAgRelationsResponseBodyAgRelationDtos>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~PaginateAgRelationsResponseBody() = default;
};
class PaginateAgRelationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PaginateAgRelationsResponseBody> body{};

  PaginateAgRelationsResponse() {}

  explicit PaginateAgRelationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PaginateAgRelationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PaginateAgRelationsResponseBody>(model1);
      }
    }
  }


  virtual ~PaginateAgRelationsResponse() = default;
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
  CreateAgAccountResponse createAgAccountWithOptions(shared_ptr<CreateAgAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAgAccountResponse createAgAccount(shared_ptr<CreateAgAccountRequest> request);
  GetAgRelationResponse getAgRelationWithOptions(shared_ptr<GetAgRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgRelationResponse getAgRelation(shared_ptr<GetAgRelationRequest> request);
  GetRamBindResponse getRamBindWithOptions(shared_ptr<GetRamBindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRamBindResponse getRamBind(shared_ptr<GetRamBindRequest> request);
  PaginateAgRelationsResponse paginateAgRelationsWithOptions(shared_ptr<PaginateAgRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PaginateAgRelationsResponse paginateAgRelations(shared_ptr<PaginateAgRelationsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aliyunid-ag20180912

#endif
