// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EFLO20220530_H_
#define ALIBABACLOUD_EFLO20220530_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eflo20220530 {
class CreateSubnetRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  CreateSubnetRequest() {}

  explicit CreateSubnetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateSubnetRequest() = default;
};
class CreateSubnetResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> subnetId{};

  CreateSubnetResponseBodyContent() {}

  explicit CreateSubnetResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~CreateSubnetResponseBodyContent() = default;
};
class CreateSubnetResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateSubnetResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateSubnetResponseBody() {}

  explicit CreateSubnetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateSubnetResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateSubnetResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSubnetResponseBody() = default;
};
class CreateSubnetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubnetResponseBody> body{};

  CreateSubnetResponse() {}

  explicit CreateSubnetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSubnetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubnetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubnetResponse() = default;
};
class CreateVccRequest : public Darabonba::Model {
public:
  shared_ptr<bool> accessCouldService{};
  shared_ptr<string> bgpCidr{};
  shared_ptr<string> cenId{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpdId{};

  CreateVccRequest() {}

  explicit CreateVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessCouldService) {
      res["AccessCouldService"] = boost::any(*accessCouldService);
    }
    if (bgpCidr) {
      res["BgpCidr"] = boost::any(*bgpCidr);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessCouldService") != m.end() && !m["AccessCouldService"].empty()) {
      accessCouldService = make_shared<bool>(boost::any_cast<bool>(m["AccessCouldService"]));
    }
    if (m.find("BgpCidr") != m.end() && !m["BgpCidr"].empty()) {
      bgpCidr = make_shared<string>(boost::any_cast<string>(m["BgpCidr"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~CreateVccRequest() = default;
};
class CreateVccResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vccId{};

  CreateVccResponseBodyContent() {}

  explicit CreateVccResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~CreateVccResponseBodyContent() = default;
};
class CreateVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateVccResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateVccResponseBody() {}

  explicit CreateVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateVccResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateVccResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVccResponseBody() = default;
};
class CreateVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVccResponseBody> body{};

  CreateVccResponse() {}

  explicit CreateVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVccResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVccResponse() = default;
};
class CreateVpdRequestSubnets : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> zoneId{};

  CreateVpdRequestSubnets() {}

  explicit CreateVpdRequestSubnets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateVpdRequestSubnets() = default;
};
class CreateVpdRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<CreateVpdRequestSubnets>> subnets{};

  CreateVpdRequest() {}

  explicit CreateVpdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnets) {
      vector<boost::any> temp1;
      for(auto item1:*subnets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subnets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Subnets") != m.end() && !m["Subnets"].empty()) {
      if (typeid(vector<boost::any>) == m["Subnets"].type()) {
        vector<CreateVpdRequestSubnets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Subnets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVpdRequestSubnets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subnets = make_shared<vector<CreateVpdRequestSubnets>>(expect1);
      }
    }
  }


  virtual ~CreateVpdRequest() = default;
};
class CreateVpdResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<string>> subnetIds{};
  shared_ptr<string> vpdId{};

  CreateVpdResponseBodyContent() {}

  explicit CreateVpdResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subnetIds) {
      res["SubnetIds"] = boost::any(*subnetIds);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubnetIds") != m.end() && !m["SubnetIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubnetIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubnetIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subnetIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~CreateVpdResponseBodyContent() = default;
};
class CreateVpdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateVpdResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateVpdResponseBody() {}

  explicit CreateVpdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateVpdResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateVpdResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVpdResponseBody() = default;
};
class CreateVpdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVpdResponseBody> body{};

  CreateVpdResponse() {}

  explicit CreateVpdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVpdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVpdResponse() = default;
};
class DeleteSubnetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  DeleteSubnetRequest() {}

  explicit DeleteSubnetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DeleteSubnetRequest() = default;
};
class DeleteSubnetResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteSubnetResponseBody() {}

  explicit DeleteSubnetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSubnetResponseBody() = default;
};
class DeleteSubnetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSubnetResponseBody> body{};

  DeleteSubnetResponse() {}

  explicit DeleteSubnetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSubnetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSubnetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSubnetResponse() = default;
};
class DeleteVpdRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpdId{};

  DeleteVpdRequest() {}

  explicit DeleteVpdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~DeleteVpdRequest() = default;
};
class DeleteVpdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteVpdResponseBody() {}

  explicit DeleteVpdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVpdResponseBody() = default;
};
class DeleteVpdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVpdResponseBody> body{};

  DeleteVpdResponse() {}

  explicit DeleteVpdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVpdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVpdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVpdResponse() = default;
};
class GetSubnetRequest : public Darabonba::Model {
public:
  shared_ptr<string> subnetId{};

  GetSubnetRequest() {}

  explicit GetSubnetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~GetSubnetRequest() = default;
};
class GetSubnetResponseBodyContentVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> name{};
  shared_ptr<string> vpdId{};

  GetSubnetResponseBodyContentVpdBaseInfo() {}

  explicit GetSubnetResponseBodyContentVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetSubnetResponseBodyContentVpdBaseInfo() = default;
};
class GetSubnetResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<long> lbCount{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> ncCount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<GetSubnetResponseBodyContentVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  GetSubnetResponseBodyContent() {}

  explicit GetSubnetResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lbCount) {
      res["LbCount"] = boost::any(*lbCount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ncCount) {
      res["NcCount"] = boost::any(*ncCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LbCount") != m.end() && !m["LbCount"].empty()) {
      lbCount = make_shared<long>(boost::any_cast<long>(m["LbCount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NcCount") != m.end() && !m["NcCount"].empty()) {
      ncCount = make_shared<long>(boost::any_cast<long>(m["NcCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        GetSubnetResponseBodyContentVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<GetSubnetResponseBodyContentVpdBaseInfo>(model1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetSubnetResponseBodyContent() = default;
};
class GetSubnetResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetSubnetResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetSubnetResponseBody() {}

  explicit GetSubnetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetSubnetResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetSubnetResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSubnetResponseBody() = default;
};
class GetSubnetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubnetResponseBody> body{};

  GetSubnetResponse() {}

  explicit GetSubnetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubnetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubnetResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubnetResponse() = default;
};
class GetVccRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};

  GetVccRequest() {}

  explicit GetVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~GetVccRequest() = default;
};
class GetVccResponseBodyContentAliyunRouterInfo : public Darabonba::Model {
public:
  shared_ptr<string> localGatewayIp{};
  shared_ptr<string> mask{};
  shared_ptr<string> pcId{};
  shared_ptr<string> peerGatewayIp{};
  shared_ptr<string> vbrId{};
  shared_ptr<string> vlanId{};

  GetVccResponseBodyContentAliyunRouterInfo() {}

  explicit GetVccResponseBodyContentAliyunRouterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localGatewayIp) {
      res["LocalGatewayIp"] = boost::any(*localGatewayIp);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (pcId) {
      res["PcId"] = boost::any(*pcId);
    }
    if (peerGatewayIp) {
      res["PeerGatewayIp"] = boost::any(*peerGatewayIp);
    }
    if (vbrId) {
      res["VbrId"] = boost::any(*vbrId);
    }
    if (vlanId) {
      res["VlanId"] = boost::any(*vlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalGatewayIp") != m.end() && !m["LocalGatewayIp"].empty()) {
      localGatewayIp = make_shared<string>(boost::any_cast<string>(m["LocalGatewayIp"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("PcId") != m.end() && !m["PcId"].empty()) {
      pcId = make_shared<string>(boost::any_cast<string>(m["PcId"]));
    }
    if (m.find("PeerGatewayIp") != m.end() && !m["PeerGatewayIp"].empty()) {
      peerGatewayIp = make_shared<string>(boost::any_cast<string>(m["PeerGatewayIp"]));
    }
    if (m.find("VbrId") != m.end() && !m["VbrId"].empty()) {
      vbrId = make_shared<string>(boost::any_cast<string>(m["VbrId"]));
    }
    if (m.find("VlanId") != m.end() && !m["VlanId"].empty()) {
      vlanId = make_shared<string>(boost::any_cast<string>(m["VlanId"]));
    }
  }


  virtual ~GetVccResponseBodyContentAliyunRouterInfo() = default;
};
class GetVccResponseBodyContentCisRouterInfoCcInfos : public Darabonba::Model {
public:
  shared_ptr<string> ccId{};
  shared_ptr<string> localGatewayIp{};
  shared_ptr<string> remoteGatewayIp{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetMask{};
  shared_ptr<string> vlanId{};

  GetVccResponseBodyContentCisRouterInfoCcInfos() {}

  explicit GetVccResponseBodyContentCisRouterInfoCcInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ccId) {
      res["CcId"] = boost::any(*ccId);
    }
    if (localGatewayIp) {
      res["LocalGatewayIp"] = boost::any(*localGatewayIp);
    }
    if (remoteGatewayIp) {
      res["RemoteGatewayIp"] = boost::any(*remoteGatewayIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetMask) {
      res["SubnetMask"] = boost::any(*subnetMask);
    }
    if (vlanId) {
      res["VlanId"] = boost::any(*vlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CcId") != m.end() && !m["CcId"].empty()) {
      ccId = make_shared<string>(boost::any_cast<string>(m["CcId"]));
    }
    if (m.find("LocalGatewayIp") != m.end() && !m["LocalGatewayIp"].empty()) {
      localGatewayIp = make_shared<string>(boost::any_cast<string>(m["LocalGatewayIp"]));
    }
    if (m.find("RemoteGatewayIp") != m.end() && !m["RemoteGatewayIp"].empty()) {
      remoteGatewayIp = make_shared<string>(boost::any_cast<string>(m["RemoteGatewayIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetMask") != m.end() && !m["SubnetMask"].empty()) {
      subnetMask = make_shared<string>(boost::any_cast<string>(m["SubnetMask"]));
    }
    if (m.find("VlanId") != m.end() && !m["VlanId"].empty()) {
      vlanId = make_shared<string>(boost::any_cast<string>(m["VlanId"]));
    }
  }


  virtual ~GetVccResponseBodyContentCisRouterInfoCcInfos() = default;
};
class GetVccResponseBodyContentCisRouterInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetVccResponseBodyContentCisRouterInfoCcInfos>> ccInfos{};
  shared_ptr<string> ccrId{};

  GetVccResponseBodyContentCisRouterInfo() {}

  explicit GetVccResponseBodyContentCisRouterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ccInfos) {
      vector<boost::any> temp1;
      for(auto item1:*ccInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CcInfos"] = boost::any(temp1);
    }
    if (ccrId) {
      res["CcrId"] = boost::any(*ccrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CcInfos") != m.end() && !m["CcInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CcInfos"].type()) {
        vector<GetVccResponseBodyContentCisRouterInfoCcInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CcInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentCisRouterInfoCcInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ccInfos = make_shared<vector<GetVccResponseBodyContentCisRouterInfoCcInfos>>(expect1);
      }
    }
    if (m.find("CcrId") != m.end() && !m["CcrId"].empty()) {
      ccrId = make_shared<string>(boost::any_cast<string>(m["CcrId"]));
    }
  }


  virtual ~GetVccResponseBodyContentCisRouterInfo() = default;
};
class GetVccResponseBodyContentVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> name{};
  shared_ptr<string> vpdId{};

  GetVccResponseBodyContentVpdBaseInfo() {}

  explicit GetVccResponseBodyContentVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetVccResponseBodyContentVpdBaseInfo() = default;
};
class GetVccResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> accessPointId{};
  shared_ptr<vector<GetVccResponseBodyContentAliyunRouterInfo>> aliyunRouterInfo{};
  shared_ptr<string> bandwidthStr{};
  shared_ptr<string> bgpCidr{};
  shared_ptr<string> cenId{};
  shared_ptr<vector<GetVccResponseBodyContentCisRouterInfo>> cisRouterInfo{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentNode{};
  shared_ptr<string> duration{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> lineOperator{};
  shared_ptr<string> message{};
  shared_ptr<string> payType{};
  shared_ptr<string> portType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> regionId{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccName{};
  shared_ptr<string> vpcId{};
  shared_ptr<GetVccResponseBodyContentVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> vpdId{};

  GetVccResponseBodyContent() {}

  explicit GetVccResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (aliyunRouterInfo) {
      vector<boost::any> temp1;
      for(auto item1:*aliyunRouterInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AliyunRouterInfo"] = boost::any(temp1);
    }
    if (bandwidthStr) {
      res["BandwidthStr"] = boost::any(*bandwidthStr);
    }
    if (bgpCidr) {
      res["BgpCidr"] = boost::any(*bgpCidr);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cisRouterInfo) {
      vector<boost::any> temp1;
      for(auto item1:*cisRouterInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CisRouterInfo"] = boost::any(temp1);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentNode) {
      res["CurrentNode"] = boost::any(*currentNode);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (lineOperator) {
      res["LineOperator"] = boost::any(*lineOperator);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (portType) {
      res["PortType"] = boost::any(*portType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccName) {
      res["VccName"] = boost::any(*vccName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("AliyunRouterInfo") != m.end() && !m["AliyunRouterInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AliyunRouterInfo"].type()) {
        vector<GetVccResponseBodyContentAliyunRouterInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AliyunRouterInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentAliyunRouterInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliyunRouterInfo = make_shared<vector<GetVccResponseBodyContentAliyunRouterInfo>>(expect1);
      }
    }
    if (m.find("BandwidthStr") != m.end() && !m["BandwidthStr"].empty()) {
      bandwidthStr = make_shared<string>(boost::any_cast<string>(m["BandwidthStr"]));
    }
    if (m.find("BgpCidr") != m.end() && !m["BgpCidr"].empty()) {
      bgpCidr = make_shared<string>(boost::any_cast<string>(m["BgpCidr"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CisRouterInfo") != m.end() && !m["CisRouterInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CisRouterInfo"].type()) {
        vector<GetVccResponseBodyContentCisRouterInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CisRouterInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentCisRouterInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cisRouterInfo = make_shared<vector<GetVccResponseBodyContentCisRouterInfo>>(expect1);
      }
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentNode") != m.end() && !m["CurrentNode"].empty()) {
      currentNode = make_shared<string>(boost::any_cast<string>(m["CurrentNode"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("LineOperator") != m.end() && !m["LineOperator"].empty()) {
      lineOperator = make_shared<string>(boost::any_cast<string>(m["LineOperator"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PortType") != m.end() && !m["PortType"].empty()) {
      portType = make_shared<string>(boost::any_cast<string>(m["PortType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccName") != m.end() && !m["VccName"].empty()) {
      vccName = make_shared<string>(boost::any_cast<string>(m["VccName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        GetVccResponseBodyContentVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<GetVccResponseBodyContentVpdBaseInfo>(model1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetVccResponseBodyContent() = default;
};
class GetVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetVccResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVccResponseBody() {}

  explicit GetVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetVccResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetVccResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVccResponseBody() = default;
};
class GetVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVccResponseBody> body{};

  GetVccResponse() {}

  explicit GetVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVccResponseBody>(model1);
      }
    }
  }


  virtual ~GetVccResponse() = default;
};
class GetVpdRequest : public Darabonba::Model {
public:
  shared_ptr<string> vpdId{};

  GetVpdRequest() {}

  explicit GetVpdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetVpdRequest() = default;
};
class GetVpdResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> lbCount{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> ncCount{};
  shared_ptr<string> regionId{};
  shared_ptr<long> route{};
  shared_ptr<string> serviceCidr{};
  shared_ptr<string> status{};
  shared_ptr<long> subnetCount{};
  shared_ptr<long> vccCount{};
  shared_ptr<string> vpdId{};

  GetVpdResponseBodyContent() {}

  explicit GetVpdResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (lbCount) {
      res["LbCount"] = boost::any(*lbCount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ncCount) {
      res["NcCount"] = boost::any(*ncCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (route) {
      res["Route"] = boost::any(*route);
    }
    if (serviceCidr) {
      res["ServiceCidr"] = boost::any(*serviceCidr);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetCount) {
      res["SubnetCount"] = boost::any(*subnetCount);
    }
    if (vccCount) {
      res["VccCount"] = boost::any(*vccCount);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LbCount") != m.end() && !m["LbCount"].empty()) {
      lbCount = make_shared<long>(boost::any_cast<long>(m["LbCount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NcCount") != m.end() && !m["NcCount"].empty()) {
      ncCount = make_shared<long>(boost::any_cast<long>(m["NcCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Route") != m.end() && !m["Route"].empty()) {
      route = make_shared<long>(boost::any_cast<long>(m["Route"]));
    }
    if (m.find("ServiceCidr") != m.end() && !m["ServiceCidr"].empty()) {
      serviceCidr = make_shared<string>(boost::any_cast<string>(m["ServiceCidr"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetCount") != m.end() && !m["SubnetCount"].empty()) {
      subnetCount = make_shared<long>(boost::any_cast<long>(m["SubnetCount"]));
    }
    if (m.find("VccCount") != m.end() && !m["VccCount"].empty()) {
      vccCount = make_shared<long>(boost::any_cast<long>(m["VccCount"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetVpdResponseBodyContent() = default;
};
class GetVpdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetVpdResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVpdResponseBody() {}

  explicit GetVpdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetVpdResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetVpdResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVpdResponseBody() = default;
};
class GetVpdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVpdResponseBody> body{};

  GetVpdResponse() {}

  explicit GetVpdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVpdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVpdResponseBody>(model1);
      }
    }
  }


  virtual ~GetVpdResponse() = default;
};
class InitializeVccResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> roleName{};

  InitializeVccResponseBodyContent() {}

  explicit InitializeVccResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~InitializeVccResponseBodyContent() = default;
};
class InitializeVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<InitializeVccResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  InitializeVccResponseBody() {}

  explicit InitializeVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        InitializeVccResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<InitializeVccResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InitializeVccResponseBody() = default;
};
class InitializeVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitializeVccResponseBody> body{};

  InitializeVccResponse() {}

  explicit InitializeVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeVccResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeVccResponse() = default;
};
class ListSubnetsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enablePage{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> type{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  ListSubnetsRequest() {}

  explicit ListSubnetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListSubnetsRequest() = default;
};
class ListSubnetsResponseBodyContentDataVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> name{};
  shared_ptr<string> vpdId{};

  ListSubnetsResponseBodyContentDataVpdBaseInfo() {}

  explicit ListSubnetsResponseBodyContentDataVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~ListSubnetsResponseBodyContentDataVpdBaseInfo() = default;
};
class ListSubnetsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> ncCount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<ListSubnetsResponseBodyContentDataVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  ListSubnetsResponseBodyContentData() {}

  explicit ListSubnetsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ncCount) {
      res["NcCount"] = boost::any(*ncCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NcCount") != m.end() && !m["NcCount"].empty()) {
      ncCount = make_shared<long>(boost::any_cast<long>(m["NcCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        ListSubnetsResponseBodyContentDataVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<ListSubnetsResponseBodyContentDataVpdBaseInfo>(model1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListSubnetsResponseBodyContentData() = default;
};
class ListSubnetsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListSubnetsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListSubnetsResponseBodyContent() {}

  explicit ListSubnetsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListSubnetsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubnetsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSubnetsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListSubnetsResponseBodyContent() = default;
};
class ListSubnetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListSubnetsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListSubnetsResponseBody() {}

  explicit ListSubnetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListSubnetsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListSubnetsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSubnetsResponseBody() = default;
};
class ListSubnetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubnetsResponseBody> body{};

  ListSubnetsResponse() {}

  explicit ListSubnetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubnetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubnetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubnetsResponse() = default;
};
class ListVccsRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> cenId{};
  shared_ptr<bool> enablePage{};
  shared_ptr<string> exStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpdId{};

  ListVccsRequest() {}

  explicit ListVccsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (exStatus) {
      res["ExStatus"] = boost::any(*exStatus);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("ExStatus") != m.end() && !m["ExStatus"].empty()) {
      exStatus = make_shared<string>(boost::any_cast<string>(m["ExStatus"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~ListVccsRequest() = default;
};
class ListVccsResponseBodyContentDataVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> name{};
  shared_ptr<string> vpdId{};

  ListVccsResponseBodyContentDataVpdBaseInfo() {}

  explicit ListVccsResponseBodyContentDataVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~ListVccsResponseBodyContentDataVpdBaseInfo() = default;
};
class ListVccsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> accessPointId{};
  shared_ptr<string> bandwidthStr{};
  shared_ptr<string> bgpCidr{};
  shared_ptr<string> cenId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> lineOperator{};
  shared_ptr<string> message{};
  shared_ptr<string> portType{};
  shared_ptr<double> rate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccName{};
  shared_ptr<string> vpcId{};
  shared_ptr<ListVccsResponseBodyContentDataVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> vpdId{};

  ListVccsResponseBodyContentData() {}

  explicit ListVccsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (bandwidthStr) {
      res["BandwidthStr"] = boost::any(*bandwidthStr);
    }
    if (bgpCidr) {
      res["BgpCidr"] = boost::any(*bgpCidr);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (lineOperator) {
      res["LineOperator"] = boost::any(*lineOperator);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (portType) {
      res["PortType"] = boost::any(*portType);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccName) {
      res["VccName"] = boost::any(*vccName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("BandwidthStr") != m.end() && !m["BandwidthStr"].empty()) {
      bandwidthStr = make_shared<string>(boost::any_cast<string>(m["BandwidthStr"]));
    }
    if (m.find("BgpCidr") != m.end() && !m["BgpCidr"].empty()) {
      bgpCidr = make_shared<string>(boost::any_cast<string>(m["BgpCidr"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LineOperator") != m.end() && !m["LineOperator"].empty()) {
      lineOperator = make_shared<string>(boost::any_cast<string>(m["LineOperator"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PortType") != m.end() && !m["PortType"].empty()) {
      portType = make_shared<string>(boost::any_cast<string>(m["PortType"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccName") != m.end() && !m["VccName"].empty()) {
      vccName = make_shared<string>(boost::any_cast<string>(m["VccName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        ListVccsResponseBodyContentDataVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<ListVccsResponseBodyContentDataVpdBaseInfo>(model1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~ListVccsResponseBodyContentData() = default;
};
class ListVccsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVccsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVccsResponseBodyContent() {}

  explicit ListVccsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVccsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVccsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVccsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVccsResponseBodyContent() = default;
};
class ListVccsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListVccsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVccsResponseBody() {}

  explicit ListVccsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVccsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVccsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVccsResponseBody() = default;
};
class ListVccsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVccsResponseBody> body{};

  ListVccsResponse() {}

  explicit ListVccsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVccsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVccsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVccsResponse() = default;
};
class ListVpdsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enablePage{};
  shared_ptr<string> filterErId{};
  shared_ptr<bool> forSelect{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> vpdId{};
  shared_ptr<bool> withDependence{};
  shared_ptr<bool> withoutVcc{};

  ListVpdsRequest() {}

  explicit ListVpdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (filterErId) {
      res["FilterErId"] = boost::any(*filterErId);
    }
    if (forSelect) {
      res["ForSelect"] = boost::any(*forSelect);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (withDependence) {
      res["WithDependence"] = boost::any(*withDependence);
    }
    if (withoutVcc) {
      res["WithoutVcc"] = boost::any(*withoutVcc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("FilterErId") != m.end() && !m["FilterErId"].empty()) {
      filterErId = make_shared<string>(boost::any_cast<string>(m["FilterErId"]));
    }
    if (m.find("ForSelect") != m.end() && !m["ForSelect"].empty()) {
      forSelect = make_shared<bool>(boost::any_cast<bool>(m["ForSelect"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("WithDependence") != m.end() && !m["WithDependence"].empty()) {
      withDependence = make_shared<bool>(boost::any_cast<bool>(m["WithDependence"]));
    }
    if (m.find("WithoutVcc") != m.end() && !m["WithoutVcc"].empty()) {
      withoutVcc = make_shared<bool>(boost::any_cast<bool>(m["WithoutVcc"]));
    }
  }


  virtual ~ListVpdsRequest() = default;
};
class ListVpdsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<map<string, boost::any>> dependence{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> ncCount{};
  shared_ptr<string> regionId{};
  shared_ptr<long> route{};
  shared_ptr<string> serviceCidr{};
  shared_ptr<string> status{};
  shared_ptr<long> subnetCount{};
  shared_ptr<string> vpdId{};

  ListVpdsResponseBodyContentData() {}

  explicit ListVpdsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (dependence) {
      res["Dependence"] = boost::any(*dependence);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ncCount) {
      res["NcCount"] = boost::any(*ncCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (route) {
      res["Route"] = boost::any(*route);
    }
    if (serviceCidr) {
      res["ServiceCidr"] = boost::any(*serviceCidr);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetCount) {
      res["SubnetCount"] = boost::any(*subnetCount);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("Dependence") != m.end() && !m["Dependence"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dependence"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dependence = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NcCount") != m.end() && !m["NcCount"].empty()) {
      ncCount = make_shared<long>(boost::any_cast<long>(m["NcCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Route") != m.end() && !m["Route"].empty()) {
      route = make_shared<long>(boost::any_cast<long>(m["Route"]));
    }
    if (m.find("ServiceCidr") != m.end() && !m["ServiceCidr"].empty()) {
      serviceCidr = make_shared<string>(boost::any_cast<string>(m["ServiceCidr"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetCount") != m.end() && !m["SubnetCount"].empty()) {
      subnetCount = make_shared<long>(boost::any_cast<long>(m["SubnetCount"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~ListVpdsResponseBodyContentData() = default;
};
class ListVpdsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVpdsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVpdsResponseBodyContent() {}

  explicit ListVpdsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVpdsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpdsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVpdsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVpdsResponseBodyContent() = default;
};
class ListVpdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListVpdsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVpdsResponseBody() {}

  explicit ListVpdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVpdsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVpdsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVpdsResponseBody() = default;
};
class ListVpdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVpdsResponseBody> body{};

  ListVpdsResponse() {}

  explicit ListVpdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVpdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpdsResponse() = default;
};
class UpdateSubnetRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  UpdateSubnetRequest() {}

  explicit UpdateSubnetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateSubnetRequest() = default;
};
class UpdateSubnetResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> subnetId{};

  UpdateSubnetResponseBodyContent() {}

  explicit UpdateSubnetResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~UpdateSubnetResponseBodyContent() = default;
};
class UpdateSubnetResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<UpdateSubnetResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateSubnetResponseBody() {}

  explicit UpdateSubnetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UpdateSubnetResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UpdateSubnetResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateSubnetResponseBody() = default;
};
class UpdateSubnetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSubnetResponseBody> body{};

  UpdateSubnetResponse() {}

  explicit UpdateSubnetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSubnetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSubnetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSubnetResponse() = default;
};
class UpdateVccRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> orderId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccName{};

  UpdateVccRequest() {}

  explicit UpdateVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccName) {
      res["VccName"] = boost::any(*vccName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccName") != m.end() && !m["VccName"].empty()) {
      vccName = make_shared<string>(boost::any_cast<string>(m["VccName"]));
    }
  }


  virtual ~UpdateVccRequest() = default;
};
class UpdateVccResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vccId{};

  UpdateVccResponseBodyContent() {}

  explicit UpdateVccResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~UpdateVccResponseBodyContent() = default;
};
class UpdateVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<UpdateVccResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateVccResponseBody() {}

  explicit UpdateVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UpdateVccResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UpdateVccResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateVccResponseBody() = default;
};
class UpdateVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVccResponseBody> body{};

  UpdateVccResponse() {}

  explicit UpdateVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVccResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVccResponse() = default;
};
class UpdateVpdRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpdId{};

  UpdateVpdRequest() {}

  explicit UpdateVpdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~UpdateVpdRequest() = default;
};
class UpdateVpdResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vpdId{};

  UpdateVpdResponseBodyContent() {}

  explicit UpdateVpdResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~UpdateVpdResponseBodyContent() = default;
};
class UpdateVpdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<UpdateVpdResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateVpdResponseBody() {}

  explicit UpdateVpdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UpdateVpdResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UpdateVpdResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateVpdResponseBody() = default;
};
class UpdateVpdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVpdResponseBody> body{};

  UpdateVpdResponse() {}

  explicit UpdateVpdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVpdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVpdResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVpdResponse() = default;
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
  CreateSubnetResponse createSubnetWithOptions(shared_ptr<CreateSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubnetResponse createSubnet(shared_ptr<CreateSubnetRequest> request);
  CreateVccResponse createVccWithOptions(shared_ptr<CreateVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVccResponse createVcc(shared_ptr<CreateVccRequest> request);
  CreateVpdResponse createVpdWithOptions(shared_ptr<CreateVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpdResponse createVpd(shared_ptr<CreateVpdRequest> request);
  DeleteSubnetResponse deleteSubnetWithOptions(shared_ptr<DeleteSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSubnetResponse deleteSubnet(shared_ptr<DeleteSubnetRequest> request);
  DeleteVpdResponse deleteVpdWithOptions(shared_ptr<DeleteVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpdResponse deleteVpd(shared_ptr<DeleteVpdRequest> request);
  GetSubnetResponse getSubnetWithOptions(shared_ptr<GetSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubnetResponse getSubnet(shared_ptr<GetSubnetRequest> request);
  GetVccResponse getVccWithOptions(shared_ptr<GetVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVccResponse getVcc(shared_ptr<GetVccRequest> request);
  GetVpdResponse getVpdWithOptions(shared_ptr<GetVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVpdResponse getVpd(shared_ptr<GetVpdRequest> request);
  InitializeVccResponse initializeVccWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeVccResponse initializeVcc();
  ListSubnetsResponse listSubnetsWithOptions(shared_ptr<ListSubnetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubnetsResponse listSubnets(shared_ptr<ListSubnetsRequest> request);
  ListVccsResponse listVccsWithOptions(shared_ptr<ListVccsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVccsResponse listVccs(shared_ptr<ListVccsRequest> request);
  ListVpdsResponse listVpdsWithOptions(shared_ptr<ListVpdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpdsResponse listVpds(shared_ptr<ListVpdsRequest> request);
  UpdateSubnetResponse updateSubnetWithOptions(shared_ptr<UpdateSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSubnetResponse updateSubnet(shared_ptr<UpdateSubnetRequest> request);
  UpdateVccResponse updateVccWithOptions(shared_ptr<UpdateVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVccResponse updateVcc(shared_ptr<UpdateVccRequest> request);
  UpdateVpdResponse updateVpdWithOptions(shared_ptr<UpdateVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVpdResponse updateVpd(shared_ptr<UpdateVpdRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eflo20220530

#endif
