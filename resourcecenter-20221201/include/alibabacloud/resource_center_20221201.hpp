// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RESOURCECENTER20221201_H_
#define ALIBABACLOUD_RESOURCECENTER20221201_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ResourceCenter20221201 {
class AssociateDefaultFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterName{};

  AssociateDefaultFilterRequest() {}

  explicit AssociateDefaultFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterName) {
      res["FilterName"] = boost::any(*filterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterName") != m.end() && !m["FilterName"].empty()) {
      filterName = make_shared<string>(boost::any_cast<string>(m["FilterName"]));
    }
  }


  virtual ~AssociateDefaultFilterRequest() = default;
};
class AssociateDefaultFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateDefaultFilterResponseBody() {}

  explicit AssociateDefaultFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateDefaultFilterResponseBody() = default;
};
class AssociateDefaultFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateDefaultFilterResponseBody> body{};

  AssociateDefaultFilterResponse() {}

  explicit AssociateDefaultFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateDefaultFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateDefaultFilterResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateDefaultFilterResponse() = default;
};
class CreateDeliveryChannelRequestDeliveryChannelFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceTypes{};

  CreateDeliveryChannelRequestDeliveryChannelFilter() {}

  explicit CreateDeliveryChannelRequestDeliveryChannelFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDeliveryChannelRequestDeliveryChannelFilter() = default;
};
class CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties() {}

  explicit CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties() = default;
};
class CreateDeliveryChannelRequestResourceChangeDelivery : public Darabonba::Model {
public:
  shared_ptr<CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  CreateDeliveryChannelRequestResourceChangeDelivery() {}

  explicit CreateDeliveryChannelRequestResourceChangeDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateDeliveryChannelRequestResourceChangeDelivery() = default;
};
class CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() {}

  explicit CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() = default;
};
class CreateDeliveryChannelRequestResourceSnapshotDelivery : public Darabonba::Model {
public:
  shared_ptr<string> customExpression{};
  shared_ptr<string> deliveryTime{};
  shared_ptr<CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  CreateDeliveryChannelRequestResourceSnapshotDelivery() {}

  explicit CreateDeliveryChannelRequestResourceSnapshotDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customExpression) {
      res["CustomExpression"] = boost::any(*customExpression);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomExpression") != m.end() && !m["CustomExpression"].empty()) {
      customExpression = make_shared<string>(boost::any_cast<string>(m["CustomExpression"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<string>(boost::any_cast<string>(m["DeliveryTime"]));
    }
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateDeliveryChannelRequestResourceSnapshotDelivery() = default;
};
class CreateDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelDescription{};
  shared_ptr<CreateDeliveryChannelRequestDeliveryChannelFilter> deliveryChannelFilter{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<CreateDeliveryChannelRequestResourceChangeDelivery> resourceChangeDelivery{};
  shared_ptr<CreateDeliveryChannelRequestResourceSnapshotDelivery> resourceSnapshotDelivery{};

  CreateDeliveryChannelRequest() {}

  explicit CreateDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelDescription) {
      res["DeliveryChannelDescription"] = boost::any(*deliveryChannelDescription);
    }
    if (deliveryChannelFilter) {
      res["DeliveryChannelFilter"] = deliveryChannelFilter ? boost::any(deliveryChannelFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (resourceChangeDelivery) {
      res["ResourceChangeDelivery"] = resourceChangeDelivery ? boost::any(resourceChangeDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceSnapshotDelivery) {
      res["ResourceSnapshotDelivery"] = resourceSnapshotDelivery ? boost::any(resourceSnapshotDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelDescription") != m.end() && !m["DeliveryChannelDescription"].empty()) {
      deliveryChannelDescription = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelDescription"]));
    }
    if (m.find("DeliveryChannelFilter") != m.end() && !m["DeliveryChannelFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryChannelFilter"].type()) {
        CreateDeliveryChannelRequestDeliveryChannelFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryChannelFilter"]));
        deliveryChannelFilter = make_shared<CreateDeliveryChannelRequestDeliveryChannelFilter>(model1);
      }
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("ResourceChangeDelivery") != m.end() && !m["ResourceChangeDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceChangeDelivery"].type()) {
        CreateDeliveryChannelRequestResourceChangeDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceChangeDelivery"]));
        resourceChangeDelivery = make_shared<CreateDeliveryChannelRequestResourceChangeDelivery>(model1);
      }
    }
    if (m.find("ResourceSnapshotDelivery") != m.end() && !m["ResourceSnapshotDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSnapshotDelivery"].type()) {
        CreateDeliveryChannelRequestResourceSnapshotDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSnapshotDelivery"]));
        resourceSnapshotDelivery = make_shared<CreateDeliveryChannelRequestResourceSnapshotDelivery>(model1);
      }
    }
  }


  virtual ~CreateDeliveryChannelRequest() = default;
};
class CreateDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> requestId{};

  CreateDeliveryChannelResponseBody() {}

  explicit CreateDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDeliveryChannelResponseBody() = default;
};
class CreateDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeliveryChannelResponseBody> body{};

  CreateDeliveryChannelResponse() {}

  explicit CreateDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeliveryChannelResponse() = default;
};
class CreateFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterConfiguration{};
  shared_ptr<string> filterName{};

  CreateFilterRequest() {}

  explicit CreateFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterConfiguration) {
      res["FilterConfiguration"] = boost::any(*filterConfiguration);
    }
    if (filterName) {
      res["FilterName"] = boost::any(*filterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterConfiguration") != m.end() && !m["FilterConfiguration"].empty()) {
      filterConfiguration = make_shared<string>(boost::any_cast<string>(m["FilterConfiguration"]));
    }
    if (m.find("FilterName") != m.end() && !m["FilterName"].empty()) {
      filterName = make_shared<string>(boost::any_cast<string>(m["FilterName"]));
    }
  }


  virtual ~CreateFilterRequest() = default;
};
class CreateFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateFilterResponseBody() {}

  explicit CreateFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateFilterResponseBody() = default;
};
class CreateFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFilterResponseBody> body{};

  CreateFilterResponse() {}

  explicit CreateFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFilterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFilterResponse() = default;
};
class CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountScopes{};
  shared_ptr<vector<string>> resourceTypes{};

  CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter() {}

  explicit CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountScopes) {
      res["AccountScopes"] = boost::any(*accountScopes);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountScopes") != m.end() && !m["AccountScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountScopes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter() = default;
};
class CreateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  CreateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties() {}

  explicit CreateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~CreateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties() = default;
};
class CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery : public Darabonba::Model {
public:
  shared_ptr<CreateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery() {}

  explicit CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        CreateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<CreateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery() = default;
};
class CreateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  CreateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() {}

  explicit CreateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~CreateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() = default;
};
class CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery : public Darabonba::Model {
public:
  shared_ptr<string> customExpression{};
  shared_ptr<string> deliveryTime{};
  shared_ptr<CreateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery() {}

  explicit CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customExpression) {
      res["CustomExpression"] = boost::any(*customExpression);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomExpression") != m.end() && !m["CustomExpression"].empty()) {
      customExpression = make_shared<string>(boost::any_cast<string>(m["CustomExpression"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<string>(boost::any_cast<string>(m["DeliveryTime"]));
    }
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        CreateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<CreateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery() = default;
};
class CreateMultiAccountDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelDescription{};
  shared_ptr<CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter> deliveryChannelFilter{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery> resourceChangeDelivery{};
  shared_ptr<CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery> resourceSnapshotDelivery{};

  CreateMultiAccountDeliveryChannelRequest() {}

  explicit CreateMultiAccountDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelDescription) {
      res["DeliveryChannelDescription"] = boost::any(*deliveryChannelDescription);
    }
    if (deliveryChannelFilter) {
      res["DeliveryChannelFilter"] = deliveryChannelFilter ? boost::any(deliveryChannelFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (resourceChangeDelivery) {
      res["ResourceChangeDelivery"] = resourceChangeDelivery ? boost::any(resourceChangeDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceSnapshotDelivery) {
      res["ResourceSnapshotDelivery"] = resourceSnapshotDelivery ? boost::any(resourceSnapshotDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelDescription") != m.end() && !m["DeliveryChannelDescription"].empty()) {
      deliveryChannelDescription = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelDescription"]));
    }
    if (m.find("DeliveryChannelFilter") != m.end() && !m["DeliveryChannelFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryChannelFilter"].type()) {
        CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryChannelFilter"]));
        deliveryChannelFilter = make_shared<CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter>(model1);
      }
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("ResourceChangeDelivery") != m.end() && !m["ResourceChangeDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceChangeDelivery"].type()) {
        CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceChangeDelivery"]));
        resourceChangeDelivery = make_shared<CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery>(model1);
      }
    }
    if (m.find("ResourceSnapshotDelivery") != m.end() && !m["ResourceSnapshotDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSnapshotDelivery"].type()) {
        CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSnapshotDelivery"]));
        resourceSnapshotDelivery = make_shared<CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery>(model1);
      }
    }
  }


  virtual ~CreateMultiAccountDeliveryChannelRequest() = default;
};
class CreateMultiAccountDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> requestId{};

  CreateMultiAccountDeliveryChannelResponseBody() {}

  explicit CreateMultiAccountDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMultiAccountDeliveryChannelResponseBody() = default;
};
class CreateMultiAccountDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMultiAccountDeliveryChannelResponseBody> body{};

  CreateMultiAccountDeliveryChannelResponse() {}

  explicit CreateMultiAccountDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMultiAccountDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMultiAccountDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMultiAccountDeliveryChannelResponse() = default;
};
class CreateSavedQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> expression{};
  shared_ptr<string> name{};

  CreateSavedQueryRequest() {}

  explicit CreateSavedQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateSavedQueryRequest() = default;
};
class CreateSavedQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> queryId{};
  shared_ptr<string> requestId{};

  CreateSavedQueryResponseBody() {}

  explicit CreateSavedQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSavedQueryResponseBody() = default;
};
class CreateSavedQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSavedQueryResponseBody> body{};

  CreateSavedQueryResponse() {}

  explicit CreateSavedQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSavedQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSavedQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSavedQueryResponse() = default;
};
class DeleteDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};

  DeleteDeliveryChannelRequest() {}

  explicit DeleteDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
  }


  virtual ~DeleteDeliveryChannelRequest() = default;
};
class DeleteDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDeliveryChannelResponseBody() {}

  explicit DeleteDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDeliveryChannelResponseBody() = default;
};
class DeleteDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDeliveryChannelResponseBody> body{};

  DeleteDeliveryChannelResponse() {}

  explicit DeleteDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeliveryChannelResponse() = default;
};
class DeleteFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterName{};

  DeleteFilterRequest() {}

  explicit DeleteFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterName) {
      res["FilterName"] = boost::any(*filterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterName") != m.end() && !m["FilterName"].empty()) {
      filterName = make_shared<string>(boost::any_cast<string>(m["FilterName"]));
    }
  }


  virtual ~DeleteFilterRequest() = default;
};
class DeleteFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFilterResponseBody() {}

  explicit DeleteFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFilterResponseBody() = default;
};
class DeleteFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFilterResponseBody> body{};

  DeleteFilterResponse() {}

  explicit DeleteFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFilterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFilterResponse() = default;
};
class DeleteMultiAccountDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};

  DeleteMultiAccountDeliveryChannelRequest() {}

  explicit DeleteMultiAccountDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
  }


  virtual ~DeleteMultiAccountDeliveryChannelRequest() = default;
};
class DeleteMultiAccountDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMultiAccountDeliveryChannelResponseBody() {}

  explicit DeleteMultiAccountDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMultiAccountDeliveryChannelResponseBody() = default;
};
class DeleteMultiAccountDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMultiAccountDeliveryChannelResponseBody> body{};

  DeleteMultiAccountDeliveryChannelResponse() {}

  explicit DeleteMultiAccountDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMultiAccountDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMultiAccountDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMultiAccountDeliveryChannelResponse() = default;
};
class DeleteSavedQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> queryId{};

  DeleteSavedQueryRequest() {}

  explicit DeleteSavedQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~DeleteSavedQueryRequest() = default;
};
class DeleteSavedQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSavedQueryResponseBody() {}

  explicit DeleteSavedQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSavedQueryResponseBody() = default;
};
class DeleteSavedQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSavedQueryResponseBody> body{};

  DeleteSavedQueryResponse() {}

  explicit DeleteSavedQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSavedQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSavedQueryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSavedQueryResponse() = default;
};
class DisableMultiAccountResourceCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableMultiAccountResourceCenterResponseBody() {}

  explicit DisableMultiAccountResourceCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableMultiAccountResourceCenterResponseBody() = default;
};
class DisableMultiAccountResourceCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableMultiAccountResourceCenterResponseBody> body{};

  DisableMultiAccountResourceCenterResponse() {}

  explicit DisableMultiAccountResourceCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableMultiAccountResourceCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableMultiAccountResourceCenterResponseBody>(model1);
      }
    }
  }


  virtual ~DisableMultiAccountResourceCenterResponse() = default;
};
class DisableResourceCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableResourceCenterResponseBody() {}

  explicit DisableResourceCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableResourceCenterResponseBody() = default;
};
class DisableResourceCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableResourceCenterResponseBody> body{};

  DisableResourceCenterResponse() {}

  explicit DisableResourceCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableResourceCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableResourceCenterResponseBody>(model1);
      }
    }
  }


  virtual ~DisableResourceCenterResponse() = default;
};
class DisassociateDefaultFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisassociateDefaultFilterResponseBody() {}

  explicit DisassociateDefaultFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisassociateDefaultFilterResponseBody() = default;
};
class DisassociateDefaultFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisassociateDefaultFilterResponseBody> body{};

  DisassociateDefaultFilterResponse() {}

  explicit DisassociateDefaultFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisassociateDefaultFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisassociateDefaultFilterResponseBody>(model1);
      }
    }
  }


  virtual ~DisassociateDefaultFilterResponse() = default;
};
class EnableMultiAccountResourceCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  EnableMultiAccountResourceCenterResponseBody() {}

  explicit EnableMultiAccountResourceCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EnableMultiAccountResourceCenterResponseBody() = default;
};
class EnableMultiAccountResourceCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableMultiAccountResourceCenterResponseBody> body{};

  EnableMultiAccountResourceCenterResponse() {}

  explicit EnableMultiAccountResourceCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableMultiAccountResourceCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableMultiAccountResourceCenterResponseBody>(model1);
      }
    }
  }


  virtual ~EnableMultiAccountResourceCenterResponse() = default;
};
class EnableResourceCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  EnableResourceCenterResponseBody() {}

  explicit EnableResourceCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EnableResourceCenterResponseBody() = default;
};
class EnableResourceCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableResourceCenterResponseBody> body{};

  EnableResourceCenterResponse() {}

  explicit EnableResourceCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableResourceCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableResourceCenterResponseBody>(model1);
      }
    }
  }


  virtual ~EnableResourceCenterResponse() = default;
};
class ExecuteMultiAccountSQLQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> expression{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> scope{};

  ExecuteMultiAccountSQLQueryRequest() {}

  explicit ExecuteMultiAccountSQLQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ExecuteMultiAccountSQLQueryRequest() = default;
};
class ExecuteMultiAccountSQLQueryResponseBodyColumns : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ExecuteMultiAccountSQLQueryResponseBodyColumns() {}

  explicit ExecuteMultiAccountSQLQueryResponseBodyColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ExecuteMultiAccountSQLQueryResponseBodyColumns() = default;
};
class ExecuteMultiAccountSQLQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ExecuteMultiAccountSQLQueryResponseBodyColumns>> columns{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<boost::any>> rows{};

  ExecuteMultiAccountSQLQueryResponseBody() {}

  explicit ExecuteMultiAccountSQLQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<ExecuteMultiAccountSQLQueryResponseBodyColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteMultiAccountSQLQueryResponseBodyColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<ExecuteMultiAccountSQLQueryResponseBodyColumns>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rows"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      rows = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~ExecuteMultiAccountSQLQueryResponseBody() = default;
};
class ExecuteMultiAccountSQLQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteMultiAccountSQLQueryResponseBody> body{};

  ExecuteMultiAccountSQLQueryResponse() {}

  explicit ExecuteMultiAccountSQLQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteMultiAccountSQLQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteMultiAccountSQLQueryResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteMultiAccountSQLQueryResponse() = default;
};
class ExecuteSQLQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> expression{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> scope{};

  ExecuteSQLQueryRequest() {}

  explicit ExecuteSQLQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ExecuteSQLQueryRequest() = default;
};
class ExecuteSQLQueryResponseBodyColumns : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ExecuteSQLQueryResponseBodyColumns() {}

  explicit ExecuteSQLQueryResponseBodyColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ExecuteSQLQueryResponseBodyColumns() = default;
};
class ExecuteSQLQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ExecuteSQLQueryResponseBodyColumns>> columns{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<boost::any>> rows{};

  ExecuteSQLQueryResponseBody() {}

  explicit ExecuteSQLQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<ExecuteSQLQueryResponseBodyColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteSQLQueryResponseBodyColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<ExecuteSQLQueryResponseBodyColumns>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rows"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      rows = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~ExecuteSQLQueryResponseBody() = default;
};
class ExecuteSQLQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteSQLQueryResponseBody> body{};

  ExecuteSQLQueryResponse() {}

  explicit ExecuteSQLQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteSQLQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteSQLQueryResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteSQLQueryResponse() = default;
};
class GetDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};

  GetDeliveryChannelRequest() {}

  explicit GetDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
  }


  virtual ~GetDeliveryChannelRequest() = default;
};
class GetDeliveryChannelResponseBodyDeliveryChannelFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceTypes{};

  GetDeliveryChannelResponseBodyDeliveryChannelFilter() {}

  explicit GetDeliveryChannelResponseBodyDeliveryChannelFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDeliveryChannelResponseBodyDeliveryChannelFilter() = default;
};
class GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties() {}

  explicit GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties() = default;
};
class GetDeliveryChannelResponseBodyResourceChangeDelivery : public Darabonba::Model {
public:
  shared_ptr<GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  GetDeliveryChannelResponseBodyResourceChangeDelivery() {}

  explicit GetDeliveryChannelResponseBodyResourceChangeDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~GetDeliveryChannelResponseBodyResourceChangeDelivery() = default;
};
class GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties() {}

  explicit GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties() = default;
};
class GetDeliveryChannelResponseBodyResourceSnapshotDelivery : public Darabonba::Model {
public:
  shared_ptr<string> customExpression{};
  shared_ptr<string> deliveryTime{};
  shared_ptr<GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  GetDeliveryChannelResponseBodyResourceSnapshotDelivery() {}

  explicit GetDeliveryChannelResponseBodyResourceSnapshotDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customExpression) {
      res["CustomExpression"] = boost::any(*customExpression);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomExpression") != m.end() && !m["CustomExpression"].empty()) {
      customExpression = make_shared<string>(boost::any_cast<string>(m["CustomExpression"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<string>(boost::any_cast<string>(m["DeliveryTime"]));
    }
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~GetDeliveryChannelResponseBodyResourceSnapshotDelivery() = default;
};
class GetDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelDescription{};
  shared_ptr<GetDeliveryChannelResponseBodyDeliveryChannelFilter> deliveryChannelFilter{};
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<string> requestId{};
  shared_ptr<GetDeliveryChannelResponseBodyResourceChangeDelivery> resourceChangeDelivery{};
  shared_ptr<GetDeliveryChannelResponseBodyResourceSnapshotDelivery> resourceSnapshotDelivery{};

  GetDeliveryChannelResponseBody() {}

  explicit GetDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelDescription) {
      res["DeliveryChannelDescription"] = boost::any(*deliveryChannelDescription);
    }
    if (deliveryChannelFilter) {
      res["DeliveryChannelFilter"] = deliveryChannelFilter ? boost::any(deliveryChannelFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceChangeDelivery) {
      res["ResourceChangeDelivery"] = resourceChangeDelivery ? boost::any(resourceChangeDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceSnapshotDelivery) {
      res["ResourceSnapshotDelivery"] = resourceSnapshotDelivery ? boost::any(resourceSnapshotDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelDescription") != m.end() && !m["DeliveryChannelDescription"].empty()) {
      deliveryChannelDescription = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelDescription"]));
    }
    if (m.find("DeliveryChannelFilter") != m.end() && !m["DeliveryChannelFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryChannelFilter"].type()) {
        GetDeliveryChannelResponseBodyDeliveryChannelFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryChannelFilter"]));
        deliveryChannelFilter = make_shared<GetDeliveryChannelResponseBodyDeliveryChannelFilter>(model1);
      }
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceChangeDelivery") != m.end() && !m["ResourceChangeDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceChangeDelivery"].type()) {
        GetDeliveryChannelResponseBodyResourceChangeDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceChangeDelivery"]));
        resourceChangeDelivery = make_shared<GetDeliveryChannelResponseBodyResourceChangeDelivery>(model1);
      }
    }
    if (m.find("ResourceSnapshotDelivery") != m.end() && !m["ResourceSnapshotDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSnapshotDelivery"].type()) {
        GetDeliveryChannelResponseBodyResourceSnapshotDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSnapshotDelivery"]));
        resourceSnapshotDelivery = make_shared<GetDeliveryChannelResponseBodyResourceSnapshotDelivery>(model1);
      }
    }
  }


  virtual ~GetDeliveryChannelResponseBody() = default;
};
class GetDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeliveryChannelResponseBody> body{};

  GetDeliveryChannelResponse() {}

  explicit GetDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeliveryChannelResponse() = default;
};
class GetDeliveryChannelStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};

  GetDeliveryChannelStatisticsRequest() {}

  explicit GetDeliveryChannelStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
  }


  virtual ~GetDeliveryChannelStatisticsRequest() = default;
};
class GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<string> latestChangeDeliveryTime{};
  shared_ptr<string> latestSnapshotDeliveryTime{};

  GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics() {}

  explicit GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (latestChangeDeliveryTime) {
      res["LatestChangeDeliveryTime"] = boost::any(*latestChangeDeliveryTime);
    }
    if (latestSnapshotDeliveryTime) {
      res["LatestSnapshotDeliveryTime"] = boost::any(*latestSnapshotDeliveryTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("LatestChangeDeliveryTime") != m.end() && !m["LatestChangeDeliveryTime"].empty()) {
      latestChangeDeliveryTime = make_shared<string>(boost::any_cast<string>(m["LatestChangeDeliveryTime"]));
    }
    if (m.find("LatestSnapshotDeliveryTime") != m.end() && !m["LatestSnapshotDeliveryTime"].empty()) {
      latestSnapshotDeliveryTime = make_shared<string>(boost::any_cast<string>(m["LatestSnapshotDeliveryTime"]));
    }
  }


  virtual ~GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics() = default;
};
class GetDeliveryChannelStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics> deliveryChannelStatistics{};
  shared_ptr<string> requestId{};

  GetDeliveryChannelStatisticsResponseBody() {}

  explicit GetDeliveryChannelStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelStatistics) {
      res["DeliveryChannelStatistics"] = deliveryChannelStatistics ? boost::any(deliveryChannelStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelStatistics") != m.end() && !m["DeliveryChannelStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryChannelStatistics"].type()) {
        GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryChannelStatistics"]));
        deliveryChannelStatistics = make_shared<GetDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeliveryChannelStatisticsResponseBody() = default;
};
class GetDeliveryChannelStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeliveryChannelStatisticsResponseBody> body{};

  GetDeliveryChannelStatisticsResponse() {}

  explicit GetDeliveryChannelStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeliveryChannelStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeliveryChannelStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeliveryChannelStatisticsResponse() = default;
};
class GetExampleQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> queryId{};

  GetExampleQueryRequest() {}

  explicit GetExampleQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~GetExampleQueryRequest() = default;
};
class GetExampleQueryResponseBodyExampleQuery : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> expression{};
  shared_ptr<string> name{};
  shared_ptr<string> queryId{};

  GetExampleQueryResponseBodyExampleQuery() {}

  explicit GetExampleQueryResponseBodyExampleQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~GetExampleQueryResponseBodyExampleQuery() = default;
};
class GetExampleQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetExampleQueryResponseBodyExampleQuery> exampleQuery{};
  shared_ptr<string> requestId{};

  GetExampleQueryResponseBody() {}

  explicit GetExampleQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exampleQuery) {
      res["ExampleQuery"] = exampleQuery ? boost::any(exampleQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExampleQuery") != m.end() && !m["ExampleQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExampleQuery"].type()) {
        GetExampleQueryResponseBodyExampleQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExampleQuery"]));
        exampleQuery = make_shared<GetExampleQueryResponseBodyExampleQuery>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetExampleQueryResponseBody() = default;
};
class GetExampleQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExampleQueryResponseBody> body{};

  GetExampleQueryResponse() {}

  explicit GetExampleQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExampleQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExampleQueryResponseBody>(model1);
      }
    }
  }


  virtual ~GetExampleQueryResponse() = default;
};
class GetMultiAccountDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};

  GetMultiAccountDeliveryChannelRequest() {}

  explicit GetMultiAccountDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
  }


  virtual ~GetMultiAccountDeliveryChannelRequest() = default;
};
class GetMultiAccountDeliveryChannelResponseBodyDeliveryChannelFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountScopes{};
  shared_ptr<vector<string>> resourceTypes{};

  GetMultiAccountDeliveryChannelResponseBodyDeliveryChannelFilter() {}

  explicit GetMultiAccountDeliveryChannelResponseBodyDeliveryChannelFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountScopes) {
      res["AccountScopes"] = boost::any(*accountScopes);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountScopes") != m.end() && !m["AccountScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountScopes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMultiAccountDeliveryChannelResponseBodyDeliveryChannelFilter() = default;
};
class GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties() {}

  explicit GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties() = default;
};
class GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery : public Darabonba::Model {
public:
  shared_ptr<GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery() {}

  explicit GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery() = default;
};
class GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties() {}

  explicit GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties() = default;
};
class GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery : public Darabonba::Model {
public:
  shared_ptr<string> customExpression{};
  shared_ptr<string> deliveryTime{};
  shared_ptr<GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery() {}

  explicit GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customExpression) {
      res["CustomExpression"] = boost::any(*customExpression);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomExpression") != m.end() && !m["CustomExpression"].empty()) {
      customExpression = make_shared<string>(boost::any_cast<string>(m["CustomExpression"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<string>(boost::any_cast<string>(m["DeliveryTime"]));
    }
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery() = default;
};
class GetMultiAccountDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelDescription{};
  shared_ptr<GetMultiAccountDeliveryChannelResponseBodyDeliveryChannelFilter> deliveryChannelFilter{};
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<string> requestId{};
  shared_ptr<GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery> resourceChangeDelivery{};
  shared_ptr<GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery> resourceSnapshotDelivery{};

  GetMultiAccountDeliveryChannelResponseBody() {}

  explicit GetMultiAccountDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelDescription) {
      res["DeliveryChannelDescription"] = boost::any(*deliveryChannelDescription);
    }
    if (deliveryChannelFilter) {
      res["DeliveryChannelFilter"] = deliveryChannelFilter ? boost::any(deliveryChannelFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceChangeDelivery) {
      res["ResourceChangeDelivery"] = resourceChangeDelivery ? boost::any(resourceChangeDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceSnapshotDelivery) {
      res["ResourceSnapshotDelivery"] = resourceSnapshotDelivery ? boost::any(resourceSnapshotDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelDescription") != m.end() && !m["DeliveryChannelDescription"].empty()) {
      deliveryChannelDescription = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelDescription"]));
    }
    if (m.find("DeliveryChannelFilter") != m.end() && !m["DeliveryChannelFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryChannelFilter"].type()) {
        GetMultiAccountDeliveryChannelResponseBodyDeliveryChannelFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryChannelFilter"]));
        deliveryChannelFilter = make_shared<GetMultiAccountDeliveryChannelResponseBodyDeliveryChannelFilter>(model1);
      }
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceChangeDelivery") != m.end() && !m["ResourceChangeDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceChangeDelivery"].type()) {
        GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceChangeDelivery"]));
        resourceChangeDelivery = make_shared<GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery>(model1);
      }
    }
    if (m.find("ResourceSnapshotDelivery") != m.end() && !m["ResourceSnapshotDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSnapshotDelivery"].type()) {
        GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSnapshotDelivery"]));
        resourceSnapshotDelivery = make_shared<GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery>(model1);
      }
    }
  }


  virtual ~GetMultiAccountDeliveryChannelResponseBody() = default;
};
class GetMultiAccountDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMultiAccountDeliveryChannelResponseBody> body{};

  GetMultiAccountDeliveryChannelResponse() {}

  explicit GetMultiAccountDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMultiAccountDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMultiAccountDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~GetMultiAccountDeliveryChannelResponse() = default;
};
class GetMultiAccountDeliveryChannelStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};

  GetMultiAccountDeliveryChannelStatisticsRequest() {}

  explicit GetMultiAccountDeliveryChannelStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
  }


  virtual ~GetMultiAccountDeliveryChannelStatisticsRequest() = default;
};
class GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<string> latestChangeDeliveryTime{};
  shared_ptr<string> latestSnapshotDeliveryTime{};

  GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics() {}

  explicit GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (latestChangeDeliveryTime) {
      res["LatestChangeDeliveryTime"] = boost::any(*latestChangeDeliveryTime);
    }
    if (latestSnapshotDeliveryTime) {
      res["LatestSnapshotDeliveryTime"] = boost::any(*latestSnapshotDeliveryTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("LatestChangeDeliveryTime") != m.end() && !m["LatestChangeDeliveryTime"].empty()) {
      latestChangeDeliveryTime = make_shared<string>(boost::any_cast<string>(m["LatestChangeDeliveryTime"]));
    }
    if (m.find("LatestSnapshotDeliveryTime") != m.end() && !m["LatestSnapshotDeliveryTime"].empty()) {
      latestSnapshotDeliveryTime = make_shared<string>(boost::any_cast<string>(m["LatestSnapshotDeliveryTime"]));
    }
  }


  virtual ~GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics() = default;
};
class GetMultiAccountDeliveryChannelStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics> deliveryChannelStatistics{};
  shared_ptr<string> requestId{};

  GetMultiAccountDeliveryChannelStatisticsResponseBody() {}

  explicit GetMultiAccountDeliveryChannelStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelStatistics) {
      res["DeliveryChannelStatistics"] = deliveryChannelStatistics ? boost::any(deliveryChannelStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelStatistics") != m.end() && !m["DeliveryChannelStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryChannelStatistics"].type()) {
        GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryChannelStatistics"]));
        deliveryChannelStatistics = make_shared<GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMultiAccountDeliveryChannelStatisticsResponseBody() = default;
};
class GetMultiAccountDeliveryChannelStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMultiAccountDeliveryChannelStatisticsResponseBody> body{};

  GetMultiAccountDeliveryChannelStatisticsResponse() {}

  explicit GetMultiAccountDeliveryChannelStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMultiAccountDeliveryChannelStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMultiAccountDeliveryChannelStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetMultiAccountDeliveryChannelStatisticsResponse() = default;
};
class GetMultiAccountResourceCenterServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> initialStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceStatus{};

  GetMultiAccountResourceCenterServiceStatusResponseBody() {}

  explicit GetMultiAccountResourceCenterServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initialStatus) {
      res["InitialStatus"] = boost::any(*initialStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InitialStatus") != m.end() && !m["InitialStatus"].empty()) {
      initialStatus = make_shared<string>(boost::any_cast<string>(m["InitialStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
  }


  virtual ~GetMultiAccountResourceCenterServiceStatusResponseBody() = default;
};
class GetMultiAccountResourceCenterServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMultiAccountResourceCenterServiceStatusResponseBody> body{};

  GetMultiAccountResourceCenterServiceStatusResponse() {}

  explicit GetMultiAccountResourceCenterServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMultiAccountResourceCenterServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMultiAccountResourceCenterServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetMultiAccountResourceCenterServiceStatusResponse() = default;
};
class GetMultiAccountResourceConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};

  GetMultiAccountResourceConfigurationRequest() {}

  explicit GetMultiAccountResourceConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetMultiAccountResourceConfigurationRequest() = default;
};
class GetMultiAccountResourceConfigurationResponseBodyIpAddressAttributes : public Darabonba::Model {
public:
  shared_ptr<string> ipAddress{};
  shared_ptr<string> networkType{};
  shared_ptr<string> version{};

  GetMultiAccountResourceConfigurationResponseBodyIpAddressAttributes() {}

  explicit GetMultiAccountResourceConfigurationResponseBodyIpAddressAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetMultiAccountResourceConfigurationResponseBodyIpAddressAttributes() = default;
};
class GetMultiAccountResourceConfigurationResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetMultiAccountResourceConfigurationResponseBodyTags() {}

  explicit GetMultiAccountResourceConfigurationResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetMultiAccountResourceConfigurationResponseBodyTags() = default;
};
class GetMultiAccountResourceConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<map<string, boost::any>> configuration{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<vector<GetMultiAccountResourceConfigurationResponseBodyIpAddressAttributes>> ipAddressAttributes{};
  shared_ptr<vector<string>> ipAddresses{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<GetMultiAccountResourceConfigurationResponseBodyTags>> tags{};
  shared_ptr<string> zoneId{};

  GetMultiAccountResourceConfigurationResponseBody() {}

  explicit GetMultiAccountResourceConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ipAddressAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*ipAddressAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpAddressAttributes"] = boost::any(temp1);
    }
    if (ipAddresses) {
      res["IpAddresses"] = boost::any(*ipAddresses);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Configuration"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configuration = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("IpAddressAttributes") != m.end() && !m["IpAddressAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["IpAddressAttributes"].type()) {
        vector<GetMultiAccountResourceConfigurationResponseBodyIpAddressAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpAddressAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultiAccountResourceConfigurationResponseBodyIpAddressAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipAddressAttributes = make_shared<vector<GetMultiAccountResourceConfigurationResponseBodyIpAddressAttributes>>(expect1);
      }
    }
    if (m.find("IpAddresses") != m.end() && !m["IpAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetMultiAccountResourceConfigurationResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultiAccountResourceConfigurationResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetMultiAccountResourceConfigurationResponseBodyTags>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetMultiAccountResourceConfigurationResponseBody() = default;
};
class GetMultiAccountResourceConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMultiAccountResourceConfigurationResponseBody> body{};

  GetMultiAccountResourceConfigurationResponse() {}

  explicit GetMultiAccountResourceConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMultiAccountResourceConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMultiAccountResourceConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetMultiAccountResourceConfigurationResponse() = default;
};
class GetMultiAccountResourceCountsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> value{};

  GetMultiAccountResourceCountsRequestFilter() {}

  explicit GetMultiAccountResourceCountsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMultiAccountResourceCountsRequestFilter() = default;
};
class GetMultiAccountResourceCountsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetMultiAccountResourceCountsRequestFilter>> filter{};
  shared_ptr<string> groupByKey{};
  shared_ptr<string> scope{};

  GetMultiAccountResourceCountsRequest() {}

  explicit GetMultiAccountResourceCountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (groupByKey) {
      res["GroupByKey"] = boost::any(*groupByKey);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<GetMultiAccountResourceCountsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultiAccountResourceCountsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<GetMultiAccountResourceCountsRequestFilter>>(expect1);
      }
    }
    if (m.find("GroupByKey") != m.end() && !m["GroupByKey"].empty()) {
      groupByKey = make_shared<string>(boost::any_cast<string>(m["GroupByKey"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~GetMultiAccountResourceCountsRequest() = default;
};
class GetMultiAccountResourceCountsResponseBodyFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  GetMultiAccountResourceCountsResponseBodyFilters() {}

  explicit GetMultiAccountResourceCountsResponseBodyFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMultiAccountResourceCountsResponseBodyFilters() = default;
};
class GetMultiAccountResourceCountsResponseBodyResourceCounts : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> groupName{};

  GetMultiAccountResourceCountsResponseBodyResourceCounts() {}

  explicit GetMultiAccountResourceCountsResponseBodyResourceCounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetMultiAccountResourceCountsResponseBodyResourceCounts() = default;
};
class GetMultiAccountResourceCountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetMultiAccountResourceCountsResponseBodyFilters>> filters{};
  shared_ptr<string> groupByKey{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetMultiAccountResourceCountsResponseBodyResourceCounts>> resourceCounts{};
  shared_ptr<string> scope{};

  GetMultiAccountResourceCountsResponseBody() {}

  explicit GetMultiAccountResourceCountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (groupByKey) {
      res["GroupByKey"] = boost::any(*groupByKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceCounts) {
      vector<boost::any> temp1;
      for(auto item1:*resourceCounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceCounts"] = boost::any(temp1);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<GetMultiAccountResourceCountsResponseBodyFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultiAccountResourceCountsResponseBodyFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<GetMultiAccountResourceCountsResponseBodyFilters>>(expect1);
      }
    }
    if (m.find("GroupByKey") != m.end() && !m["GroupByKey"].empty()) {
      groupByKey = make_shared<string>(boost::any_cast<string>(m["GroupByKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceCounts") != m.end() && !m["ResourceCounts"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceCounts"].type()) {
        vector<GetMultiAccountResourceCountsResponseBodyResourceCounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceCounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultiAccountResourceCountsResponseBodyResourceCounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceCounts = make_shared<vector<GetMultiAccountResourceCountsResponseBodyResourceCounts>>(expect1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~GetMultiAccountResourceCountsResponseBody() = default;
};
class GetMultiAccountResourceCountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMultiAccountResourceCountsResponseBody> body{};

  GetMultiAccountResourceCountsResponse() {}

  explicit GetMultiAccountResourceCountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMultiAccountResourceCountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMultiAccountResourceCountsResponseBody>(model1);
      }
    }
  }


  virtual ~GetMultiAccountResourceCountsResponse() = default;
};
class GetResourceCenterServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> initialStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceStatus{};

  GetResourceCenterServiceStatusResponseBody() {}

  explicit GetResourceCenterServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initialStatus) {
      res["InitialStatus"] = boost::any(*initialStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InitialStatus") != m.end() && !m["InitialStatus"].empty()) {
      initialStatus = make_shared<string>(boost::any_cast<string>(m["InitialStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
  }


  virtual ~GetResourceCenterServiceStatusResponseBody() = default;
};
class GetResourceCenterServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceCenterServiceStatusResponseBody> body{};

  GetResourceCenterServiceStatusResponse() {}

  explicit GetResourceCenterServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceCenterServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceCenterServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceCenterServiceStatusResponse() = default;
};
class GetResourceConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};

  GetResourceConfigurationRequest() {}

  explicit GetResourceConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetResourceConfigurationRequest() = default;
};
class GetResourceConfigurationResponseBodyIpAddressAttributes : public Darabonba::Model {
public:
  shared_ptr<string> ipAddress{};
  shared_ptr<string> networkType{};
  shared_ptr<string> version{};

  GetResourceConfigurationResponseBodyIpAddressAttributes() {}

  explicit GetResourceConfigurationResponseBodyIpAddressAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetResourceConfigurationResponseBodyIpAddressAttributes() = default;
};
class GetResourceConfigurationResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetResourceConfigurationResponseBodyTags() {}

  explicit GetResourceConfigurationResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetResourceConfigurationResponseBodyTags() = default;
};
class GetResourceConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<map<string, boost::any>> configuration{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<vector<GetResourceConfigurationResponseBodyIpAddressAttributes>> ipAddressAttributes{};
  shared_ptr<vector<string>> ipAddresses{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<GetResourceConfigurationResponseBodyTags>> tags{};
  shared_ptr<string> zoneId{};

  GetResourceConfigurationResponseBody() {}

  explicit GetResourceConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ipAddressAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*ipAddressAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpAddressAttributes"] = boost::any(temp1);
    }
    if (ipAddresses) {
      res["IpAddresses"] = boost::any(*ipAddresses);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Configuration"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configuration = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("IpAddressAttributes") != m.end() && !m["IpAddressAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["IpAddressAttributes"].type()) {
        vector<GetResourceConfigurationResponseBodyIpAddressAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpAddressAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceConfigurationResponseBodyIpAddressAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipAddressAttributes = make_shared<vector<GetResourceConfigurationResponseBodyIpAddressAttributes>>(expect1);
      }
    }
    if (m.find("IpAddresses") != m.end() && !m["IpAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetResourceConfigurationResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceConfigurationResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetResourceConfigurationResponseBodyTags>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetResourceConfigurationResponseBody() = default;
};
class GetResourceConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceConfigurationResponseBody> body{};

  GetResourceConfigurationResponse() {}

  explicit GetResourceConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceConfigurationResponse() = default;
};
class GetResourceCountsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> value{};

  GetResourceCountsRequestFilter() {}

  explicit GetResourceCountsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceCountsRequestFilter() = default;
};
class GetResourceCountsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceCountsRequestFilter>> filter{};
  shared_ptr<string> groupByKey{};

  GetResourceCountsRequest() {}

  explicit GetResourceCountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (groupByKey) {
      res["GroupByKey"] = boost::any(*groupByKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<GetResourceCountsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceCountsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<GetResourceCountsRequestFilter>>(expect1);
      }
    }
    if (m.find("GroupByKey") != m.end() && !m["GroupByKey"].empty()) {
      groupByKey = make_shared<string>(boost::any_cast<string>(m["GroupByKey"]));
    }
  }


  virtual ~GetResourceCountsRequest() = default;
};
class GetResourceCountsResponseBodyFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  GetResourceCountsResponseBodyFilters() {}

  explicit GetResourceCountsResponseBodyFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceCountsResponseBodyFilters() = default;
};
class GetResourceCountsResponseBodyResourceCounts : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> groupName{};

  GetResourceCountsResponseBodyResourceCounts() {}

  explicit GetResourceCountsResponseBodyResourceCounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetResourceCountsResponseBodyResourceCounts() = default;
};
class GetResourceCountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceCountsResponseBodyFilters>> filters{};
  shared_ptr<string> groupByKey{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetResourceCountsResponseBodyResourceCounts>> resourceCounts{};

  GetResourceCountsResponseBody() {}

  explicit GetResourceCountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (groupByKey) {
      res["GroupByKey"] = boost::any(*groupByKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceCounts) {
      vector<boost::any> temp1;
      for(auto item1:*resourceCounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceCounts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<GetResourceCountsResponseBodyFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceCountsResponseBodyFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<GetResourceCountsResponseBodyFilters>>(expect1);
      }
    }
    if (m.find("GroupByKey") != m.end() && !m["GroupByKey"].empty()) {
      groupByKey = make_shared<string>(boost::any_cast<string>(m["GroupByKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceCounts") != m.end() && !m["ResourceCounts"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceCounts"].type()) {
        vector<GetResourceCountsResponseBodyResourceCounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceCounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceCountsResponseBodyResourceCounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceCounts = make_shared<vector<GetResourceCountsResponseBodyResourceCounts>>(expect1);
      }
    }
  }


  virtual ~GetResourceCountsResponseBody() = default;
};
class GetResourceCountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceCountsResponseBody> body{};

  GetResourceCountsResponse() {}

  explicit GetResourceCountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceCountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceCountsResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceCountsResponse() = default;
};
class GetSavedQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> queryId{};

  GetSavedQueryRequest() {}

  explicit GetSavedQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~GetSavedQueryRequest() = default;
};
class GetSavedQueryResponseBodySavedQuery : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> expression{};
  shared_ptr<string> name{};
  shared_ptr<string> queryId{};
  shared_ptr<string> updateTime{};

  GetSavedQueryResponseBodySavedQuery() {}

  explicit GetSavedQueryResponseBodySavedQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetSavedQueryResponseBodySavedQuery() = default;
};
class GetSavedQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSavedQueryResponseBodySavedQuery> savedQuery{};

  GetSavedQueryResponseBody() {}

  explicit GetSavedQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (savedQuery) {
      res["SavedQuery"] = savedQuery ? boost::any(savedQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SavedQuery") != m.end() && !m["SavedQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["SavedQuery"].type()) {
        GetSavedQueryResponseBodySavedQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SavedQuery"]));
        savedQuery = make_shared<GetSavedQueryResponseBodySavedQuery>(model1);
      }
    }
  }


  virtual ~GetSavedQueryResponseBody() = default;
};
class GetSavedQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSavedQueryResponseBody> body{};

  GetSavedQueryResponse() {}

  explicit GetSavedQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSavedQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSavedQueryResponseBody>(model1);
      }
    }
  }


  virtual ~GetSavedQueryResponse() = default;
};
class ListDeliveryChannelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListDeliveryChannelsRequest() {}

  explicit ListDeliveryChannelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListDeliveryChannelsRequest() = default;
};
class ListDeliveryChannelsResponseBodyDeliveryChannels : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deliveryChannelDescription{};
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};

  ListDeliveryChannelsResponseBodyDeliveryChannels() {}

  explicit ListDeliveryChannelsResponseBodyDeliveryChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deliveryChannelDescription) {
      res["DeliveryChannelDescription"] = boost::any(*deliveryChannelDescription);
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeliveryChannelDescription") != m.end() && !m["DeliveryChannelDescription"].empty()) {
      deliveryChannelDescription = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelDescription"]));
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
  }


  virtual ~ListDeliveryChannelsResponseBodyDeliveryChannels() = default;
};
class ListDeliveryChannelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeliveryChannelsResponseBodyDeliveryChannels>> deliveryChannels{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListDeliveryChannelsResponseBody() {}

  explicit ListDeliveryChannelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannels) {
      vector<boost::any> temp1;
      for(auto item1:*deliveryChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeliveryChannels"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannels") != m.end() && !m["DeliveryChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["DeliveryChannels"].type()) {
        vector<ListDeliveryChannelsResponseBodyDeliveryChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeliveryChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeliveryChannelsResponseBodyDeliveryChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deliveryChannels = make_shared<vector<ListDeliveryChannelsResponseBodyDeliveryChannels>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeliveryChannelsResponseBody() = default;
};
class ListDeliveryChannelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeliveryChannelsResponseBody> body{};

  ListDeliveryChannelsResponse() {}

  explicit ListDeliveryChannelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeliveryChannelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeliveryChannelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeliveryChannelsResponse() = default;
};
class ListExampleQueriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};

  ListExampleQueriesRequest() {}

  explicit ListExampleQueriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListExampleQueriesRequest() = default;
};
class ListExampleQueriesResponseBodyExampleQueries : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> queryId{};

  ListExampleQueriesResponseBodyExampleQueries() {}

  explicit ListExampleQueriesResponseBodyExampleQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
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
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~ListExampleQueriesResponseBodyExampleQueries() = default;
};
class ListExampleQueriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExampleQueriesResponseBodyExampleQueries>> exampleQueries{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListExampleQueriesResponseBody() {}

  explicit ListExampleQueriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exampleQueries) {
      vector<boost::any> temp1;
      for(auto item1:*exampleQueries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExampleQueries"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExampleQueries") != m.end() && !m["ExampleQueries"].empty()) {
      if (typeid(vector<boost::any>) == m["ExampleQueries"].type()) {
        vector<ListExampleQueriesResponseBodyExampleQueries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExampleQueries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExampleQueriesResponseBodyExampleQueries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        exampleQueries = make_shared<vector<ListExampleQueriesResponseBodyExampleQueries>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListExampleQueriesResponseBody() = default;
};
class ListExampleQueriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExampleQueriesResponseBody> body{};

  ListExampleQueriesResponse() {}

  explicit ListExampleQueriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExampleQueriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExampleQueriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListExampleQueriesResponse() = default;
};
class ListFiltersResponseBodyFilters : public Darabonba::Model {
public:
  shared_ptr<string> filterConfiguration{};
  shared_ptr<string> filterName{};

  ListFiltersResponseBodyFilters() {}

  explicit ListFiltersResponseBodyFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterConfiguration) {
      res["FilterConfiguration"] = boost::any(*filterConfiguration);
    }
    if (filterName) {
      res["FilterName"] = boost::any(*filterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterConfiguration") != m.end() && !m["FilterConfiguration"].empty()) {
      filterConfiguration = make_shared<string>(boost::any_cast<string>(m["FilterConfiguration"]));
    }
    if (m.find("FilterName") != m.end() && !m["FilterName"].empty()) {
      filterName = make_shared<string>(boost::any_cast<string>(m["FilterName"]));
    }
  }


  virtual ~ListFiltersResponseBodyFilters() = default;
};
class ListFiltersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> defaultFilterName{};
  shared_ptr<vector<ListFiltersResponseBodyFilters>> filters{};
  shared_ptr<string> requestId{};

  ListFiltersResponseBody() {}

  explicit ListFiltersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultFilterName) {
      res["DefaultFilterName"] = boost::any(*defaultFilterName);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultFilterName") != m.end() && !m["DefaultFilterName"].empty()) {
      defaultFilterName = make_shared<string>(boost::any_cast<string>(m["DefaultFilterName"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListFiltersResponseBodyFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFiltersResponseBodyFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListFiltersResponseBodyFilters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFiltersResponseBody() = default;
};
class ListFiltersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFiltersResponseBody> body{};

  ListFiltersResponse() {}

  explicit ListFiltersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFiltersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFiltersResponseBody>(model1);
      }
    }
  }


  virtual ~ListFiltersResponse() = default;
};
class ListMultiAccountDeliveryChannelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListMultiAccountDeliveryChannelsRequest() {}

  explicit ListMultiAccountDeliveryChannelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListMultiAccountDeliveryChannelsRequest() = default;
};
class ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deliveryChannelDescription{};
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};

  ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels() {}

  explicit ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deliveryChannelDescription) {
      res["DeliveryChannelDescription"] = boost::any(*deliveryChannelDescription);
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeliveryChannelDescription") != m.end() && !m["DeliveryChannelDescription"].empty()) {
      deliveryChannelDescription = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelDescription"]));
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
  }


  virtual ~ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels() = default;
};
class ListMultiAccountDeliveryChannelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels>> deliveryChannels{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListMultiAccountDeliveryChannelsResponseBody() {}

  explicit ListMultiAccountDeliveryChannelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannels) {
      vector<boost::any> temp1;
      for(auto item1:*deliveryChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeliveryChannels"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannels") != m.end() && !m["DeliveryChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["DeliveryChannels"].type()) {
        vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeliveryChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deliveryChannels = make_shared<vector<ListMultiAccountDeliveryChannelsResponseBodyDeliveryChannels>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListMultiAccountDeliveryChannelsResponseBody() = default;
};
class ListMultiAccountDeliveryChannelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMultiAccountDeliveryChannelsResponseBody> body{};

  ListMultiAccountDeliveryChannelsResponse() {}

  explicit ListMultiAccountDeliveryChannelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMultiAccountDeliveryChannelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMultiAccountDeliveryChannelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMultiAccountDeliveryChannelsResponse() = default;
};
class ListMultiAccountResourceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceGroupIds{};

  ListMultiAccountResourceGroupsRequest() {}

  explicit ListMultiAccountResourceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupIds) {
      res["ResourceGroupIds"] = boost::any(*resourceGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupIds") != m.end() && !m["ResourceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListMultiAccountResourceGroupsRequest() = default;
};
class ListMultiAccountResourceGroupsResponseBodyResourceGroups : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  ListMultiAccountResourceGroupsResponseBodyResourceGroups() {}

  explicit ListMultiAccountResourceGroupsResponseBodyResourceGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListMultiAccountResourceGroupsResponseBodyResourceGroups() = default;
};
class ListMultiAccountResourceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups>> resourceGroups{};

  ListMultiAccountResourceGroupsResponseBody() {}

  explicit ListMultiAccountResourceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroups) {
      vector<boost::any> temp1;
      for(auto item1:*resourceGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroups") != m.end() && !m["ResourceGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceGroups"].type()) {
        vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMultiAccountResourceGroupsResponseBodyResourceGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceGroups = make_shared<vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups>>(expect1);
      }
    }
  }


  virtual ~ListMultiAccountResourceGroupsResponseBody() = default;
};
class ListMultiAccountResourceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMultiAccountResourceGroupsResponseBody> body{};

  ListMultiAccountResourceGroupsResponse() {}

  explicit ListMultiAccountResourceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMultiAccountResourceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMultiAccountResourceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMultiAccountResourceGroupsResponse() = default;
};
class ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> value{};

  ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter() {}

  explicit ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter() = default;
};
class ListMultiAccountResourceRelationshipsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter>> relatedResourceFilter{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scope{};

  ListMultiAccountResourceRelationshipsRequest() {}

  explicit ListMultiAccountResourceRelationshipsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relatedResourceFilter) {
      vector<boost::any> temp1;
      for(auto item1:*relatedResourceFilter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedResourceFilter"] = boost::any(temp1);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelatedResourceFilter") != m.end() && !m["RelatedResourceFilter"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedResourceFilter"].type()) {
        vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedResourceFilter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedResourceFilter = make_shared<vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter>>(expect1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ListMultiAccountResourceRelationshipsRequest() = default;
};
class ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> relatedResourceId{};
  shared_ptr<string> relatedResourceRegionId{};
  shared_ptr<string> relatedResourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships() {}

  explicit ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relatedResourceId) {
      res["RelatedResourceId"] = boost::any(*relatedResourceId);
    }
    if (relatedResourceRegionId) {
      res["RelatedResourceRegionId"] = boost::any(*relatedResourceRegionId);
    }
    if (relatedResourceType) {
      res["RelatedResourceType"] = boost::any(*relatedResourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelatedResourceId") != m.end() && !m["RelatedResourceId"].empty()) {
      relatedResourceId = make_shared<string>(boost::any_cast<string>(m["RelatedResourceId"]));
    }
    if (m.find("RelatedResourceRegionId") != m.end() && !m["RelatedResourceRegionId"].empty()) {
      relatedResourceRegionId = make_shared<string>(boost::any_cast<string>(m["RelatedResourceRegionId"]));
    }
    if (m.find("RelatedResourceType") != m.end() && !m["RelatedResourceType"].empty()) {
      relatedResourceType = make_shared<string>(boost::any_cast<string>(m["RelatedResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships() = default;
};
class ListMultiAccountResourceRelationshipsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships>> resourceRelationships{};
  shared_ptr<string> scope{};

  ListMultiAccountResourceRelationshipsResponseBody() {}

  explicit ListMultiAccountResourceRelationshipsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceRelationships) {
      vector<boost::any> temp1;
      for(auto item1:*resourceRelationships){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceRelationships"] = boost::any(temp1);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceRelationships") != m.end() && !m["ResourceRelationships"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceRelationships"].type()) {
        vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceRelationships"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceRelationships = make_shared<vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships>>(expect1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ListMultiAccountResourceRelationshipsResponseBody() = default;
};
class ListMultiAccountResourceRelationshipsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMultiAccountResourceRelationshipsResponseBody> body{};

  ListMultiAccountResourceRelationshipsResponse() {}

  explicit ListMultiAccountResourceRelationshipsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMultiAccountResourceRelationshipsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMultiAccountResourceRelationshipsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMultiAccountResourceRelationshipsResponse() = default;
};
class ListMultiAccountTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> matchType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> scope{};
  shared_ptr<string> tagKey{};

  ListMultiAccountTagKeysRequest() {}

  explicit ListMultiAccountTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListMultiAccountTagKeysRequest() = default;
};
class ListMultiAccountTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tagKeys{};

  ListMultiAccountTagKeysResponseBody() {}

  explicit ListMultiAccountTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListMultiAccountTagKeysResponseBody() = default;
};
class ListMultiAccountTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMultiAccountTagKeysResponseBody> body{};

  ListMultiAccountTagKeysResponse() {}

  explicit ListMultiAccountTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMultiAccountTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMultiAccountTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListMultiAccountTagKeysResponse() = default;
};
class ListMultiAccountTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> matchType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> scope{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListMultiAccountTagValuesRequest() {}

  explicit ListMultiAccountTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListMultiAccountTagValuesRequest() = default;
};
class ListMultiAccountTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tagValues{};

  ListMultiAccountTagValuesResponseBody() {}

  explicit ListMultiAccountTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagValues) {
      res["TagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListMultiAccountTagValuesResponseBody() = default;
};
class ListMultiAccountTagValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMultiAccountTagValuesResponseBody> body{};

  ListMultiAccountTagValuesResponse() {}

  explicit ListMultiAccountTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMultiAccountTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMultiAccountTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMultiAccountTagValuesResponse() = default;
};
class ListResourceRelationshipsRequestRelatedResourceFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> value{};

  ListResourceRelationshipsRequestRelatedResourceFilter() {}

  explicit ListResourceRelationshipsRequestRelatedResourceFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceRelationshipsRequestRelatedResourceFilter() = default;
};
class ListResourceRelationshipsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<ListResourceRelationshipsRequestRelatedResourceFilter>> relatedResourceFilter{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListResourceRelationshipsRequest() {}

  explicit ListResourceRelationshipsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relatedResourceFilter) {
      vector<boost::any> temp1;
      for(auto item1:*relatedResourceFilter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedResourceFilter"] = boost::any(temp1);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelatedResourceFilter") != m.end() && !m["RelatedResourceFilter"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedResourceFilter"].type()) {
        vector<ListResourceRelationshipsRequestRelatedResourceFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedResourceFilter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceRelationshipsRequestRelatedResourceFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedResourceFilter = make_shared<vector<ListResourceRelationshipsRequestRelatedResourceFilter>>(expect1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListResourceRelationshipsRequest() = default;
};
class ListResourceRelationshipsResponseBodyResourceRelationships : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> relatedResourceId{};
  shared_ptr<string> relatedResourceRegionId{};
  shared_ptr<string> relatedResourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListResourceRelationshipsResponseBodyResourceRelationships() {}

  explicit ListResourceRelationshipsResponseBodyResourceRelationships(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relatedResourceId) {
      res["RelatedResourceId"] = boost::any(*relatedResourceId);
    }
    if (relatedResourceRegionId) {
      res["RelatedResourceRegionId"] = boost::any(*relatedResourceRegionId);
    }
    if (relatedResourceType) {
      res["RelatedResourceType"] = boost::any(*relatedResourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelatedResourceId") != m.end() && !m["RelatedResourceId"].empty()) {
      relatedResourceId = make_shared<string>(boost::any_cast<string>(m["RelatedResourceId"]));
    }
    if (m.find("RelatedResourceRegionId") != m.end() && !m["RelatedResourceRegionId"].empty()) {
      relatedResourceRegionId = make_shared<string>(boost::any_cast<string>(m["RelatedResourceRegionId"]));
    }
    if (m.find("RelatedResourceType") != m.end() && !m["RelatedResourceType"].empty()) {
      relatedResourceType = make_shared<string>(boost::any_cast<string>(m["RelatedResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListResourceRelationshipsResponseBodyResourceRelationships() = default;
};
class ListResourceRelationshipsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceRelationshipsResponseBodyResourceRelationships>> resourceRelationships{};

  ListResourceRelationshipsResponseBody() {}

  explicit ListResourceRelationshipsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceRelationships) {
      vector<boost::any> temp1;
      for(auto item1:*resourceRelationships){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceRelationships"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceRelationships") != m.end() && !m["ResourceRelationships"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceRelationships"].type()) {
        vector<ListResourceRelationshipsResponseBodyResourceRelationships> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceRelationships"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceRelationshipsResponseBodyResourceRelationships model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceRelationships = make_shared<vector<ListResourceRelationshipsResponseBodyResourceRelationships>>(expect1);
      }
    }
  }


  virtual ~ListResourceRelationshipsResponseBody() = default;
};
class ListResourceRelationshipsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceRelationshipsResponseBody> body{};

  ListResourceRelationshipsResponse() {}

  explicit ListResourceRelationshipsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceRelationshipsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceRelationshipsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceRelationshipsResponse() = default;
};
class ListResourceTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<vector<string>> query{};
  shared_ptr<string> resourceType{};

  ListResourceTypesRequest() {}

  explicit ListResourceTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Query"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Query"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      query = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListResourceTypesRequest() = default;
};
class ListResourceTypesResponseBodyResourceTypesCodeMapping : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> tag{};

  ListResourceTypesResponseBodyResourceTypesCodeMapping() {}

  explicit ListResourceTypesResponseBodyResourceTypesCodeMapping(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypesCodeMapping() = default;
};
class ListResourceTypesResponseBodyResourceTypes : public Darabonba::Model {
public:
  shared_ptr<ListResourceTypesResponseBodyResourceTypesCodeMapping> codeMapping{};
  shared_ptr<vector<string>> filterKeys{};
  shared_ptr<string> productName{};
  shared_ptr<vector<string>> relatedResourceTypes{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceTypeName{};

  ListResourceTypesResponseBodyResourceTypes() {}

  explicit ListResourceTypesResponseBodyResourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeMapping) {
      res["CodeMapping"] = codeMapping ? boost::any(codeMapping->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filterKeys) {
      res["FilterKeys"] = boost::any(*filterKeys);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (relatedResourceTypes) {
      res["RelatedResourceTypes"] = boost::any(*relatedResourceTypes);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceTypeName) {
      res["ResourceTypeName"] = boost::any(*resourceTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeMapping") != m.end() && !m["CodeMapping"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeMapping"].type()) {
        ListResourceTypesResponseBodyResourceTypesCodeMapping model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeMapping"]));
        codeMapping = make_shared<ListResourceTypesResponseBodyResourceTypesCodeMapping>(model1);
      }
    }
    if (m.find("FilterKeys") != m.end() && !m["FilterKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FilterKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FilterKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      filterKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("RelatedResourceTypes") != m.end() && !m["RelatedResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relatedResourceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceTypeName") != m.end() && !m["ResourceTypeName"].empty()) {
      resourceTypeName = make_shared<string>(boost::any_cast<string>(m["ResourceTypeName"]));
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypes() = default;
};
class ListResourceTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceTypesResponseBodyResourceTypes>> resourceTypes{};

  ListResourceTypesResponseBody() {}

  explicit ListResourceTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<ListResourceTypesResponseBodyResourceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceTypesResponseBodyResourceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceTypes = make_shared<vector<ListResourceTypesResponseBodyResourceTypes>>(expect1);
      }
    }
  }


  virtual ~ListResourceTypesResponseBody() = default;
};
class ListResourceTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceTypesResponseBody> body{};

  ListResourceTypesResponse() {}

  explicit ListResourceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceTypesResponse() = default;
};
class ListSavedQueriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};

  ListSavedQueriesRequest() {}

  explicit ListSavedQueriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListSavedQueriesRequest() = default;
};
class ListSavedQueriesResponseBodySavedQueries : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> queryId{};
  shared_ptr<string> updateTime{};

  ListSavedQueriesResponseBodySavedQueries() {}

  explicit ListSavedQueriesResponseBodySavedQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListSavedQueriesResponseBodySavedQueries() = default;
};
class ListSavedQueriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSavedQueriesResponseBodySavedQueries>> savedQueries{};

  ListSavedQueriesResponseBody() {}

  explicit ListSavedQueriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (savedQueries) {
      vector<boost::any> temp1;
      for(auto item1:*savedQueries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SavedQueries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SavedQueries") != m.end() && !m["SavedQueries"].empty()) {
      if (typeid(vector<boost::any>) == m["SavedQueries"].type()) {
        vector<ListSavedQueriesResponseBodySavedQueries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SavedQueries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSavedQueriesResponseBodySavedQueries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        savedQueries = make_shared<vector<ListSavedQueriesResponseBodySavedQueries>>(expect1);
      }
    }
  }


  virtual ~ListSavedQueriesResponseBody() = default;
};
class ListSavedQueriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSavedQueriesResponseBody> body{};

  ListSavedQueriesResponse() {}

  explicit ListSavedQueriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSavedQueriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSavedQueriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSavedQueriesResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> matchType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> tagKey{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tagKeys{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
};
class ListTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> matchType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagValuesRequest() = default;
};
class ListTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tagValues{};

  ListTagValuesResponseBody() {}

  explicit ListTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagValues) {
      res["TagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagValuesResponseBody() = default;
};
class ListTagValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagValuesResponseBody> body{};

  ListTagValuesResponse() {}

  explicit ListTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponse() = default;
};
class SearchMultiAccountResourcesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> value{};

  SearchMultiAccountResourcesRequestFilter() {}

  explicit SearchMultiAccountResourcesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchMultiAccountResourcesRequestFilter() = default;
};
class SearchMultiAccountResourcesRequestSortCriterion : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> order{};

  SearchMultiAccountResourcesRequestSortCriterion() {}

  explicit SearchMultiAccountResourcesRequestSortCriterion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
  }


  virtual ~SearchMultiAccountResourcesRequestSortCriterion() = default;
};
class SearchMultiAccountResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SearchMultiAccountResourcesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> scope{};
  shared_ptr<SearchMultiAccountResourcesRequestSortCriterion> sortCriterion{};

  SearchMultiAccountResourcesRequest() {}

  explicit SearchMultiAccountResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (sortCriterion) {
      res["SortCriterion"] = sortCriterion ? boost::any(sortCriterion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<SearchMultiAccountResourcesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchMultiAccountResourcesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<SearchMultiAccountResourcesRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("SortCriterion") != m.end() && !m["SortCriterion"].empty()) {
      if (typeid(map<string, boost::any>) == m["SortCriterion"].type()) {
        SearchMultiAccountResourcesRequestSortCriterion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SortCriterion"]));
        sortCriterion = make_shared<SearchMultiAccountResourcesRequestSortCriterion>(model1);
      }
    }
  }


  virtual ~SearchMultiAccountResourcesRequest() = default;
};
class SearchMultiAccountResourcesResponseBodyFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> values{};

  SearchMultiAccountResourcesResponseBodyFilters() {}

  explicit SearchMultiAccountResourcesResponseBodyFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchMultiAccountResourcesResponseBodyFilters() = default;
};
class SearchMultiAccountResourcesResponseBodyResourcesIpAddressAttributes : public Darabonba::Model {
public:
  shared_ptr<string> ipAddress{};
  shared_ptr<string> networkType{};
  shared_ptr<string> version{};

  SearchMultiAccountResourcesResponseBodyResourcesIpAddressAttributes() {}

  explicit SearchMultiAccountResourcesResponseBodyResourcesIpAddressAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~SearchMultiAccountResourcesResponseBodyResourcesIpAddressAttributes() = default;
};
class SearchMultiAccountResourcesResponseBodyResourcesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SearchMultiAccountResourcesResponseBodyResourcesTags() {}

  explicit SearchMultiAccountResourcesResponseBodyResourcesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SearchMultiAccountResourcesResponseBodyResourcesTags() = default;
};
class SearchMultiAccountResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<vector<SearchMultiAccountResourcesResponseBodyResourcesIpAddressAttributes>> ipAddressAttributes{};
  shared_ptr<vector<string>> ipAddresses{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<SearchMultiAccountResourcesResponseBodyResourcesTags>> tags{};
  shared_ptr<string> zoneId{};

  SearchMultiAccountResourcesResponseBodyResources() {}

  explicit SearchMultiAccountResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ipAddressAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*ipAddressAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpAddressAttributes"] = boost::any(temp1);
    }
    if (ipAddresses) {
      res["IpAddresses"] = boost::any(*ipAddresses);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("IpAddressAttributes") != m.end() && !m["IpAddressAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["IpAddressAttributes"].type()) {
        vector<SearchMultiAccountResourcesResponseBodyResourcesIpAddressAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpAddressAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchMultiAccountResourcesResponseBodyResourcesIpAddressAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipAddressAttributes = make_shared<vector<SearchMultiAccountResourcesResponseBodyResourcesIpAddressAttributes>>(expect1);
      }
    }
    if (m.find("IpAddresses") != m.end() && !m["IpAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<SearchMultiAccountResourcesResponseBodyResourcesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchMultiAccountResourcesResponseBodyResourcesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<SearchMultiAccountResourcesResponseBodyResourcesTags>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~SearchMultiAccountResourcesResponseBodyResources() = default;
};
class SearchMultiAccountResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchMultiAccountResourcesResponseBodyFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<SearchMultiAccountResourcesResponseBodyResources>> resources{};
  shared_ptr<string> scope{};

  SearchMultiAccountResourcesResponseBody() {}

  explicit SearchMultiAccountResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<SearchMultiAccountResourcesResponseBodyFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchMultiAccountResourcesResponseBodyFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<SearchMultiAccountResourcesResponseBodyFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<SearchMultiAccountResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchMultiAccountResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<SearchMultiAccountResourcesResponseBodyResources>>(expect1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~SearchMultiAccountResourcesResponseBody() = default;
};
class SearchMultiAccountResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchMultiAccountResourcesResponseBody> body{};

  SearchMultiAccountResourcesResponse() {}

  explicit SearchMultiAccountResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchMultiAccountResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchMultiAccountResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchMultiAccountResourcesResponse() = default;
};
class SearchResourcesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> value{};

  SearchResourcesRequestFilter() {}

  explicit SearchResourcesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchResourcesRequestFilter() = default;
};
class SearchResourcesRequestSortCriterion : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> order{};

  SearchResourcesRequestSortCriterion() {}

  explicit SearchResourcesRequestSortCriterion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
  }


  virtual ~SearchResourcesRequestSortCriterion() = default;
};
class SearchResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SearchResourcesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<SearchResourcesRequestSortCriterion> sortCriterion{};

  SearchResourcesRequest() {}

  explicit SearchResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sortCriterion) {
      res["SortCriterion"] = sortCriterion ? boost::any(sortCriterion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<SearchResourcesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<SearchResourcesRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SortCriterion") != m.end() && !m["SortCriterion"].empty()) {
      if (typeid(map<string, boost::any>) == m["SortCriterion"].type()) {
        SearchResourcesRequestSortCriterion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SortCriterion"]));
        sortCriterion = make_shared<SearchResourcesRequestSortCriterion>(model1);
      }
    }
  }


  virtual ~SearchResourcesRequest() = default;
};
class SearchResourcesResponseBodyFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> values{};

  SearchResourcesResponseBodyFilters() {}

  explicit SearchResourcesResponseBodyFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchResourcesResponseBodyFilters() = default;
};
class SearchResourcesResponseBodyResourcesIpAddressAttributes : public Darabonba::Model {
public:
  shared_ptr<string> ipAddress{};
  shared_ptr<string> networkType{};
  shared_ptr<string> version{};

  SearchResourcesResponseBodyResourcesIpAddressAttributes() {}

  explicit SearchResourcesResponseBodyResourcesIpAddressAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~SearchResourcesResponseBodyResourcesIpAddressAttributes() = default;
};
class SearchResourcesResponseBodyResourcesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SearchResourcesResponseBodyResourcesTags() {}

  explicit SearchResourcesResponseBodyResourcesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SearchResourcesResponseBodyResourcesTags() = default;
};
class SearchResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<vector<SearchResourcesResponseBodyResourcesIpAddressAttributes>> ipAddressAttributes{};
  shared_ptr<vector<string>> ipAddresses{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<SearchResourcesResponseBodyResourcesTags>> tags{};
  shared_ptr<string> zoneId{};

  SearchResourcesResponseBodyResources() {}

  explicit SearchResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ipAddressAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*ipAddressAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpAddressAttributes"] = boost::any(temp1);
    }
    if (ipAddresses) {
      res["IpAddresses"] = boost::any(*ipAddresses);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("IpAddressAttributes") != m.end() && !m["IpAddressAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["IpAddressAttributes"].type()) {
        vector<SearchResourcesResponseBodyResourcesIpAddressAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpAddressAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesResponseBodyResourcesIpAddressAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipAddressAttributes = make_shared<vector<SearchResourcesResponseBodyResourcesIpAddressAttributes>>(expect1);
      }
    }
    if (m.find("IpAddresses") != m.end() && !m["IpAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<SearchResourcesResponseBodyResourcesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesResponseBodyResourcesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<SearchResourcesResponseBodyResourcesTags>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~SearchResourcesResponseBodyResources() = default;
};
class SearchResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchResourcesResponseBodyFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<SearchResourcesResponseBodyResources>> resources{};

  SearchResourcesResponseBody() {}

  explicit SearchResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<SearchResourcesResponseBodyFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesResponseBodyFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<SearchResourcesResponseBodyFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<SearchResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<SearchResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~SearchResourcesResponseBody() = default;
};
class SearchResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchResourcesResponseBody> body{};

  SearchResourcesResponse() {}

  explicit SearchResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchResourcesResponse() = default;
};
class UpdateDeliveryChannelRequestDeliveryChannelFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceTypes{};

  UpdateDeliveryChannelRequestDeliveryChannelFilter() {}

  explicit UpdateDeliveryChannelRequestDeliveryChannelFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateDeliveryChannelRequestDeliveryChannelFilter() = default;
};
class UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties() {}

  explicit UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties() = default;
};
class UpdateDeliveryChannelRequestResourceChangeDelivery : public Darabonba::Model {
public:
  shared_ptr<string> enabled{};
  shared_ptr<UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  UpdateDeliveryChannelRequestResourceChangeDelivery() {}

  explicit UpdateDeliveryChannelRequestResourceChangeDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~UpdateDeliveryChannelRequestResourceChangeDelivery() = default;
};
class UpdateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  UpdateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() {}

  explicit UpdateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~UpdateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() = default;
};
class UpdateDeliveryChannelRequestResourceSnapshotDelivery : public Darabonba::Model {
public:
  shared_ptr<string> customExpression{};
  shared_ptr<string> deliveryTime{};
  shared_ptr<string> enabled{};
  shared_ptr<UpdateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  UpdateDeliveryChannelRequestResourceSnapshotDelivery() {}

  explicit UpdateDeliveryChannelRequestResourceSnapshotDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customExpression) {
      res["CustomExpression"] = boost::any(*customExpression);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomExpression") != m.end() && !m["CustomExpression"].empty()) {
      customExpression = make_shared<string>(boost::any_cast<string>(m["CustomExpression"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<string>(boost::any_cast<string>(m["DeliveryTime"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        UpdateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<UpdateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~UpdateDeliveryChannelRequestResourceSnapshotDelivery() = default;
};
class UpdateDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelDescription{};
  shared_ptr<UpdateDeliveryChannelRequestDeliveryChannelFilter> deliveryChannelFilter{};
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<UpdateDeliveryChannelRequestResourceChangeDelivery> resourceChangeDelivery{};
  shared_ptr<UpdateDeliveryChannelRequestResourceSnapshotDelivery> resourceSnapshotDelivery{};

  UpdateDeliveryChannelRequest() {}

  explicit UpdateDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelDescription) {
      res["DeliveryChannelDescription"] = boost::any(*deliveryChannelDescription);
    }
    if (deliveryChannelFilter) {
      res["DeliveryChannelFilter"] = deliveryChannelFilter ? boost::any(deliveryChannelFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (resourceChangeDelivery) {
      res["ResourceChangeDelivery"] = resourceChangeDelivery ? boost::any(resourceChangeDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceSnapshotDelivery) {
      res["ResourceSnapshotDelivery"] = resourceSnapshotDelivery ? boost::any(resourceSnapshotDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelDescription") != m.end() && !m["DeliveryChannelDescription"].empty()) {
      deliveryChannelDescription = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelDescription"]));
    }
    if (m.find("DeliveryChannelFilter") != m.end() && !m["DeliveryChannelFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryChannelFilter"].type()) {
        UpdateDeliveryChannelRequestDeliveryChannelFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryChannelFilter"]));
        deliveryChannelFilter = make_shared<UpdateDeliveryChannelRequestDeliveryChannelFilter>(model1);
      }
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("ResourceChangeDelivery") != m.end() && !m["ResourceChangeDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceChangeDelivery"].type()) {
        UpdateDeliveryChannelRequestResourceChangeDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceChangeDelivery"]));
        resourceChangeDelivery = make_shared<UpdateDeliveryChannelRequestResourceChangeDelivery>(model1);
      }
    }
    if (m.find("ResourceSnapshotDelivery") != m.end() && !m["ResourceSnapshotDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSnapshotDelivery"].type()) {
        UpdateDeliveryChannelRequestResourceSnapshotDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSnapshotDelivery"]));
        resourceSnapshotDelivery = make_shared<UpdateDeliveryChannelRequestResourceSnapshotDelivery>(model1);
      }
    }
  }


  virtual ~UpdateDeliveryChannelRequest() = default;
};
class UpdateDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDeliveryChannelResponseBody() {}

  explicit UpdateDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDeliveryChannelResponseBody() = default;
};
class UpdateDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeliveryChannelResponseBody> body{};

  UpdateDeliveryChannelResponse() {}

  explicit UpdateDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeliveryChannelResponse() = default;
};
class UpdateFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterConfiguration{};
  shared_ptr<string> filterName{};

  UpdateFilterRequest() {}

  explicit UpdateFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterConfiguration) {
      res["FilterConfiguration"] = boost::any(*filterConfiguration);
    }
    if (filterName) {
      res["FilterName"] = boost::any(*filterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterConfiguration") != m.end() && !m["FilterConfiguration"].empty()) {
      filterConfiguration = make_shared<string>(boost::any_cast<string>(m["FilterConfiguration"]));
    }
    if (m.find("FilterName") != m.end() && !m["FilterName"].empty()) {
      filterName = make_shared<string>(boost::any_cast<string>(m["FilterName"]));
    }
  }


  virtual ~UpdateFilterRequest() = default;
};
class UpdateFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFilterResponseBody() {}

  explicit UpdateFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFilterResponseBody() = default;
};
class UpdateFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFilterResponseBody> body{};

  UpdateFilterResponse() {}

  explicit UpdateFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFilterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFilterResponse() = default;
};
class UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountScopes{};
  shared_ptr<vector<string>> resourceTypes{};

  UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter() {}

  explicit UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountScopes) {
      res["AccountScopes"] = boost::any(*accountScopes);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountScopes") != m.end() && !m["AccountScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountScopes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter() = default;
};
class UpdateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  UpdateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties() {}

  explicit UpdateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~UpdateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties() = default;
};
class UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery : public Darabonba::Model {
public:
  shared_ptr<string> enabled{};
  shared_ptr<UpdateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery() {}

  explicit UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        UpdateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<UpdateMultiAccountDeliveryChannelRequestResourceChangeDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery() = default;
};
class UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties : public Darabonba::Model {
public:
  shared_ptr<string> oversizedDataOssTargetArn{};

  UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() {}

  explicit UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oversizedDataOssTargetArn) {
      res["OversizedDataOssTargetArn"] = boost::any(*oversizedDataOssTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OversizedDataOssTargetArn") != m.end() && !m["OversizedDataOssTargetArn"].empty()) {
      oversizedDataOssTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOssTargetArn"]));
    }
  }


  virtual ~UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() = default;
};
class UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery : public Darabonba::Model {
public:
  shared_ptr<string> customExpression{};
  shared_ptr<string> deliveryTime{};
  shared_ptr<string> enabled{};
  shared_ptr<UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties> slsProperties{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> targetType{};

  UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery() {}

  explicit UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customExpression) {
      res["CustomExpression"] = boost::any(*customExpression);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (slsProperties) {
      res["SlsProperties"] = slsProperties ? boost::any(slsProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetArn) {
      res["TargetArn"] = boost::any(*targetArn);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomExpression") != m.end() && !m["CustomExpression"].empty()) {
      customExpression = make_shared<string>(boost::any_cast<string>(m["CustomExpression"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<string>(boost::any_cast<string>(m["DeliveryTime"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("SlsProperties") != m.end() && !m["SlsProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlsProperties"].type()) {
        UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlsProperties"]));
        slsProperties = make_shared<UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDeliverySlsProperties>(model1);
      }
    }
    if (m.find("TargetArn") != m.end() && !m["TargetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["TargetArn"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery() = default;
};
class UpdateMultiAccountDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelDescription{};
  shared_ptr<UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter> deliveryChannelFilter{};
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery> resourceChangeDelivery{};
  shared_ptr<UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery> resourceSnapshotDelivery{};

  UpdateMultiAccountDeliveryChannelRequest() {}

  explicit UpdateMultiAccountDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelDescription) {
      res["DeliveryChannelDescription"] = boost::any(*deliveryChannelDescription);
    }
    if (deliveryChannelFilter) {
      res["DeliveryChannelFilter"] = deliveryChannelFilter ? boost::any(deliveryChannelFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (resourceChangeDelivery) {
      res["ResourceChangeDelivery"] = resourceChangeDelivery ? boost::any(resourceChangeDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceSnapshotDelivery) {
      res["ResourceSnapshotDelivery"] = resourceSnapshotDelivery ? boost::any(resourceSnapshotDelivery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelDescription") != m.end() && !m["DeliveryChannelDescription"].empty()) {
      deliveryChannelDescription = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelDescription"]));
    }
    if (m.find("DeliveryChannelFilter") != m.end() && !m["DeliveryChannelFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryChannelFilter"].type()) {
        UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryChannelFilter"]));
        deliveryChannelFilter = make_shared<UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter>(model1);
      }
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("ResourceChangeDelivery") != m.end() && !m["ResourceChangeDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceChangeDelivery"].type()) {
        UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceChangeDelivery"]));
        resourceChangeDelivery = make_shared<UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery>(model1);
      }
    }
    if (m.find("ResourceSnapshotDelivery") != m.end() && !m["ResourceSnapshotDelivery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSnapshotDelivery"].type()) {
        UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSnapshotDelivery"]));
        resourceSnapshotDelivery = make_shared<UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery>(model1);
      }
    }
  }


  virtual ~UpdateMultiAccountDeliveryChannelRequest() = default;
};
class UpdateMultiAccountDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMultiAccountDeliveryChannelResponseBody() {}

  explicit UpdateMultiAccountDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateMultiAccountDeliveryChannelResponseBody() = default;
};
class UpdateMultiAccountDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMultiAccountDeliveryChannelResponseBody> body{};

  UpdateMultiAccountDeliveryChannelResponse() {}

  explicit UpdateMultiAccountDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMultiAccountDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMultiAccountDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMultiAccountDeliveryChannelResponse() = default;
};
class UpdateSavedQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> expression{};
  shared_ptr<string> name{};
  shared_ptr<string> queryId{};

  UpdateSavedQueryRequest() {}

  explicit UpdateSavedQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~UpdateSavedQueryRequest() = default;
};
class UpdateSavedQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSavedQueryResponseBody() {}

  explicit UpdateSavedQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSavedQueryResponseBody() = default;
};
class UpdateSavedQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSavedQueryResponseBody> body{};

  UpdateSavedQueryResponse() {}

  explicit UpdateSavedQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSavedQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSavedQueryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSavedQueryResponse() = default;
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
  AssociateDefaultFilterResponse associateDefaultFilterWithOptions(shared_ptr<AssociateDefaultFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateDefaultFilterResponse associateDefaultFilter(shared_ptr<AssociateDefaultFilterRequest> request);
  CreateDeliveryChannelResponse createDeliveryChannelWithOptions(shared_ptr<CreateDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeliveryChannelResponse createDeliveryChannel(shared_ptr<CreateDeliveryChannelRequest> request);
  CreateFilterResponse createFilterWithOptions(shared_ptr<CreateFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFilterResponse createFilter(shared_ptr<CreateFilterRequest> request);
  CreateMultiAccountDeliveryChannelResponse createMultiAccountDeliveryChannelWithOptions(shared_ptr<CreateMultiAccountDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMultiAccountDeliveryChannelResponse createMultiAccountDeliveryChannel(shared_ptr<CreateMultiAccountDeliveryChannelRequest> request);
  CreateSavedQueryResponse createSavedQueryWithOptions(shared_ptr<CreateSavedQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSavedQueryResponse createSavedQuery(shared_ptr<CreateSavedQueryRequest> request);
  DeleteDeliveryChannelResponse deleteDeliveryChannelWithOptions(shared_ptr<DeleteDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeliveryChannelResponse deleteDeliveryChannel(shared_ptr<DeleteDeliveryChannelRequest> request);
  DeleteFilterResponse deleteFilterWithOptions(shared_ptr<DeleteFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFilterResponse deleteFilter(shared_ptr<DeleteFilterRequest> request);
  DeleteMultiAccountDeliveryChannelResponse deleteMultiAccountDeliveryChannelWithOptions(shared_ptr<DeleteMultiAccountDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMultiAccountDeliveryChannelResponse deleteMultiAccountDeliveryChannel(shared_ptr<DeleteMultiAccountDeliveryChannelRequest> request);
  DeleteSavedQueryResponse deleteSavedQueryWithOptions(shared_ptr<DeleteSavedQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSavedQueryResponse deleteSavedQuery(shared_ptr<DeleteSavedQueryRequest> request);
  DisableMultiAccountResourceCenterResponse disableMultiAccountResourceCenterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableMultiAccountResourceCenterResponse disableMultiAccountResourceCenter();
  DisableResourceCenterResponse disableResourceCenterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableResourceCenterResponse disableResourceCenter();
  DisassociateDefaultFilterResponse disassociateDefaultFilterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisassociateDefaultFilterResponse disassociateDefaultFilter();
  EnableMultiAccountResourceCenterResponse enableMultiAccountResourceCenterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableMultiAccountResourceCenterResponse enableMultiAccountResourceCenter();
  EnableResourceCenterResponse enableResourceCenterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableResourceCenterResponse enableResourceCenter();
  ExecuteMultiAccountSQLQueryResponse executeMultiAccountSQLQueryWithOptions(shared_ptr<ExecuteMultiAccountSQLQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteMultiAccountSQLQueryResponse executeMultiAccountSQLQuery(shared_ptr<ExecuteMultiAccountSQLQueryRequest> request);
  ExecuteSQLQueryResponse executeSQLQueryWithOptions(shared_ptr<ExecuteSQLQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteSQLQueryResponse executeSQLQuery(shared_ptr<ExecuteSQLQueryRequest> request);
  GetDeliveryChannelResponse getDeliveryChannelWithOptions(shared_ptr<GetDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeliveryChannelResponse getDeliveryChannel(shared_ptr<GetDeliveryChannelRequest> request);
  GetDeliveryChannelStatisticsResponse getDeliveryChannelStatisticsWithOptions(shared_ptr<GetDeliveryChannelStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeliveryChannelStatisticsResponse getDeliveryChannelStatistics(shared_ptr<GetDeliveryChannelStatisticsRequest> request);
  GetExampleQueryResponse getExampleQueryWithOptions(shared_ptr<GetExampleQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExampleQueryResponse getExampleQuery(shared_ptr<GetExampleQueryRequest> request);
  GetMultiAccountDeliveryChannelResponse getMultiAccountDeliveryChannelWithOptions(shared_ptr<GetMultiAccountDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMultiAccountDeliveryChannelResponse getMultiAccountDeliveryChannel(shared_ptr<GetMultiAccountDeliveryChannelRequest> request);
  GetMultiAccountDeliveryChannelStatisticsResponse getMultiAccountDeliveryChannelStatisticsWithOptions(shared_ptr<GetMultiAccountDeliveryChannelStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMultiAccountDeliveryChannelStatisticsResponse getMultiAccountDeliveryChannelStatistics(shared_ptr<GetMultiAccountDeliveryChannelStatisticsRequest> request);
  GetMultiAccountResourceCenterServiceStatusResponse getMultiAccountResourceCenterServiceStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMultiAccountResourceCenterServiceStatusResponse getMultiAccountResourceCenterServiceStatus();
  GetMultiAccountResourceConfigurationResponse getMultiAccountResourceConfigurationWithOptions(shared_ptr<GetMultiAccountResourceConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMultiAccountResourceConfigurationResponse getMultiAccountResourceConfiguration(shared_ptr<GetMultiAccountResourceConfigurationRequest> request);
  GetMultiAccountResourceCountsResponse getMultiAccountResourceCountsWithOptions(shared_ptr<GetMultiAccountResourceCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMultiAccountResourceCountsResponse getMultiAccountResourceCounts(shared_ptr<GetMultiAccountResourceCountsRequest> request);
  GetResourceCenterServiceStatusResponse getResourceCenterServiceStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceCenterServiceStatusResponse getResourceCenterServiceStatus();
  GetResourceConfigurationResponse getResourceConfigurationWithOptions(shared_ptr<GetResourceConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceConfigurationResponse getResourceConfiguration(shared_ptr<GetResourceConfigurationRequest> request);
  GetResourceCountsResponse getResourceCountsWithOptions(shared_ptr<GetResourceCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceCountsResponse getResourceCounts(shared_ptr<GetResourceCountsRequest> request);
  GetSavedQueryResponse getSavedQueryWithOptions(shared_ptr<GetSavedQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSavedQueryResponse getSavedQuery(shared_ptr<GetSavedQueryRequest> request);
  ListDeliveryChannelsResponse listDeliveryChannelsWithOptions(shared_ptr<ListDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeliveryChannelsResponse listDeliveryChannels(shared_ptr<ListDeliveryChannelsRequest> request);
  ListExampleQueriesResponse listExampleQueriesWithOptions(shared_ptr<ListExampleQueriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExampleQueriesResponse listExampleQueries(shared_ptr<ListExampleQueriesRequest> request);
  ListFiltersResponse listFiltersWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFiltersResponse listFilters();
  ListMultiAccountDeliveryChannelsResponse listMultiAccountDeliveryChannelsWithOptions(shared_ptr<ListMultiAccountDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMultiAccountDeliveryChannelsResponse listMultiAccountDeliveryChannels(shared_ptr<ListMultiAccountDeliveryChannelsRequest> request);
  ListMultiAccountResourceGroupsResponse listMultiAccountResourceGroupsWithOptions(shared_ptr<ListMultiAccountResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMultiAccountResourceGroupsResponse listMultiAccountResourceGroups(shared_ptr<ListMultiAccountResourceGroupsRequest> request);
  ListMultiAccountResourceRelationshipsResponse listMultiAccountResourceRelationshipsWithOptions(shared_ptr<ListMultiAccountResourceRelationshipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMultiAccountResourceRelationshipsResponse listMultiAccountResourceRelationships(shared_ptr<ListMultiAccountResourceRelationshipsRequest> request);
  ListMultiAccountTagKeysResponse listMultiAccountTagKeysWithOptions(shared_ptr<ListMultiAccountTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMultiAccountTagKeysResponse listMultiAccountTagKeys(shared_ptr<ListMultiAccountTagKeysRequest> request);
  ListMultiAccountTagValuesResponse listMultiAccountTagValuesWithOptions(shared_ptr<ListMultiAccountTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMultiAccountTagValuesResponse listMultiAccountTagValues(shared_ptr<ListMultiAccountTagValuesRequest> request);
  ListResourceRelationshipsResponse listResourceRelationshipsWithOptions(shared_ptr<ListResourceRelationshipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceRelationshipsResponse listResourceRelationships(shared_ptr<ListResourceRelationshipsRequest> request);
  ListResourceTypesResponse listResourceTypesWithOptions(shared_ptr<ListResourceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceTypesResponse listResourceTypes(shared_ptr<ListResourceTypesRequest> request);
  ListSavedQueriesResponse listSavedQueriesWithOptions(shared_ptr<ListSavedQueriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSavedQueriesResponse listSavedQueries(shared_ptr<ListSavedQueriesRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  SearchMultiAccountResourcesResponse searchMultiAccountResourcesWithOptions(shared_ptr<SearchMultiAccountResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchMultiAccountResourcesResponse searchMultiAccountResources(shared_ptr<SearchMultiAccountResourcesRequest> request);
  SearchResourcesResponse searchResourcesWithOptions(shared_ptr<SearchResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchResourcesResponse searchResources(shared_ptr<SearchResourcesRequest> request);
  UpdateDeliveryChannelResponse updateDeliveryChannelWithOptions(shared_ptr<UpdateDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeliveryChannelResponse updateDeliveryChannel(shared_ptr<UpdateDeliveryChannelRequest> request);
  UpdateFilterResponse updateFilterWithOptions(shared_ptr<UpdateFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFilterResponse updateFilter(shared_ptr<UpdateFilterRequest> request);
  UpdateMultiAccountDeliveryChannelResponse updateMultiAccountDeliveryChannelWithOptions(shared_ptr<UpdateMultiAccountDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMultiAccountDeliveryChannelResponse updateMultiAccountDeliveryChannel(shared_ptr<UpdateMultiAccountDeliveryChannelRequest> request);
  UpdateSavedQueryResponse updateSavedQueryWithOptions(shared_ptr<UpdateSavedQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSavedQueryResponse updateSavedQuery(shared_ptr<UpdateSavedQueryRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ResourceCenter20221201

#endif
