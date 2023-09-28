// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SERVICECATALOG20210901_H_
#define ALIBABACLOUD_SERVICECATALOG20210901_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Servicecatalog20210901 {
class ApproveProvisionedProductPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalAction{};
  shared_ptr<string> comment{};
  shared_ptr<string> planId{};

  ApproveProvisionedProductPlanRequest() {}

  explicit ApproveProvisionedProductPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalAction) {
      res["ApprovalAction"] = boost::any(*approvalAction);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalAction") != m.end() && !m["ApprovalAction"].empty()) {
      approvalAction = make_shared<string>(boost::any_cast<string>(m["ApprovalAction"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~ApproveProvisionedProductPlanRequest() = default;
};
class ApproveProvisionedProductPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ApproveProvisionedProductPlanResponseBody() {}

  explicit ApproveProvisionedProductPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApproveProvisionedProductPlanResponseBody() = default;
};
class ApproveProvisionedProductPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApproveProvisionedProductPlanResponseBody> body{};

  ApproveProvisionedProductPlanResponse() {}

  explicit ApproveProvisionedProductPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApproveProvisionedProductPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApproveProvisionedProductPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ApproveProvisionedProductPlanResponse() = default;
};
class AssociatePrincipalWithPortfolioRequest : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};

  AssociatePrincipalWithPortfolioRequest() {}

  explicit AssociatePrincipalWithPortfolioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~AssociatePrincipalWithPortfolioRequest() = default;
};
class AssociatePrincipalWithPortfolioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociatePrincipalWithPortfolioResponseBody() {}

  explicit AssociatePrincipalWithPortfolioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociatePrincipalWithPortfolioResponseBody() = default;
};
class AssociatePrincipalWithPortfolioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociatePrincipalWithPortfolioResponseBody> body{};

  AssociatePrincipalWithPortfolioResponse() {}

  explicit AssociatePrincipalWithPortfolioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociatePrincipalWithPortfolioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociatePrincipalWithPortfolioResponseBody>(model1);
      }
    }
  }


  virtual ~AssociatePrincipalWithPortfolioResponse() = default;
};
class AssociateProductWithPortfolioRequest : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};

  AssociateProductWithPortfolioRequest() {}

  explicit AssociateProductWithPortfolioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~AssociateProductWithPortfolioRequest() = default;
};
class AssociateProductWithPortfolioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateProductWithPortfolioResponseBody() {}

  explicit AssociateProductWithPortfolioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateProductWithPortfolioResponseBody() = default;
};
class AssociateProductWithPortfolioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateProductWithPortfolioResponseBody> body{};

  AssociateProductWithPortfolioResponse() {}

  explicit AssociateProductWithPortfolioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateProductWithPortfolioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateProductWithPortfolioResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateProductWithPortfolioResponse() = default;
};
class AssociateTagOptionWithResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagOptionId{};

  AssociateTagOptionWithResourceRequest() {}

  explicit AssociateTagOptionWithResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
  }


  virtual ~AssociateTagOptionWithResourceRequest() = default;
};
class AssociateTagOptionWithResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateTagOptionWithResourceResponseBody() {}

  explicit AssociateTagOptionWithResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateTagOptionWithResourceResponseBody() = default;
};
class AssociateTagOptionWithResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateTagOptionWithResourceResponseBody> body{};

  AssociateTagOptionWithResourceResponse() {}

  explicit AssociateTagOptionWithResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateTagOptionWithResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateTagOptionWithResourceResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateTagOptionWithResourceResponse() = default;
};
class CancelProvisionedProductPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  CancelProvisionedProductPlanRequest() {}

  explicit CancelProvisionedProductPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~CancelProvisionedProductPlanRequest() = default;
};
class CancelProvisionedProductPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelProvisionedProductPlanResponseBody() {}

  explicit CancelProvisionedProductPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelProvisionedProductPlanResponseBody() = default;
};
class CancelProvisionedProductPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelProvisionedProductPlanResponseBody> body{};

  CancelProvisionedProductPlanResponse() {}

  explicit CancelProvisionedProductPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelProvisionedProductPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelProvisionedProductPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CancelProvisionedProductPlanResponse() = default;
};
class CopyProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceProductArn{};
  shared_ptr<string> targetProductName{};

  CopyProductRequest() {}

  explicit CopyProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceProductArn) {
      res["SourceProductArn"] = boost::any(*sourceProductArn);
    }
    if (targetProductName) {
      res["TargetProductName"] = boost::any(*targetProductName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceProductArn") != m.end() && !m["SourceProductArn"].empty()) {
      sourceProductArn = make_shared<string>(boost::any_cast<string>(m["SourceProductArn"]));
    }
    if (m.find("TargetProductName") != m.end() && !m["TargetProductName"].empty()) {
      targetProductName = make_shared<string>(boost::any_cast<string>(m["TargetProductName"]));
    }
  }


  virtual ~CopyProductRequest() = default;
};
class CopyProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CopyProductResponseBody() {}

  explicit CopyProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CopyProductResponseBody() = default;
};
class CopyProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CopyProductResponseBody> body{};

  CopyProductResponse() {}

  explicit CopyProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CopyProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CopyProductResponseBody>(model1);
      }
    }
  }


  virtual ~CopyProductResponse() = default;
};
class CreateConstraintRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> constraintType{};
  shared_ptr<string> description{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};

  CreateConstraintRequest() {}

  explicit CreateConstraintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (constraintType) {
      res["ConstraintType"] = boost::any(*constraintType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ConstraintType") != m.end() && !m["ConstraintType"].empty()) {
      constraintType = make_shared<string>(boost::any_cast<string>(m["ConstraintType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~CreateConstraintRequest() = default;
};
class CreateConstraintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> constraintId{};
  shared_ptr<string> requestId{};

  CreateConstraintResponseBody() {}

  explicit CreateConstraintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraintId) {
      res["ConstraintId"] = boost::any(*constraintId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstraintId") != m.end() && !m["ConstraintId"].empty()) {
      constraintId = make_shared<string>(boost::any_cast<string>(m["ConstraintId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateConstraintResponseBody() = default;
};
class CreateConstraintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConstraintResponseBody> body{};

  CreateConstraintResponse() {}

  explicit CreateConstraintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConstraintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConstraintResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConstraintResponse() = default;
};
class CreatePortfolioRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> portfolioName{};
  shared_ptr<string> providerName{};

  CreatePortfolioRequest() {}

  explicit CreatePortfolioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (portfolioName) {
      res["PortfolioName"] = boost::any(*portfolioName);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PortfolioName") != m.end() && !m["PortfolioName"].empty()) {
      portfolioName = make_shared<string>(boost::any_cast<string>(m["PortfolioName"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~CreatePortfolioRequest() = default;
};
class CreatePortfolioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};
  shared_ptr<string> requestId{};

  CreatePortfolioResponseBody() {}

  explicit CreatePortfolioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePortfolioResponseBody() = default;
};
class CreatePortfolioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePortfolioResponseBody> body{};

  CreatePortfolioResponse() {}

  explicit CreatePortfolioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePortfolioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePortfolioResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePortfolioResponse() = default;
};
class CreateProductRequestProductVersionParameters : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<string> guidance{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> templateType{};
  shared_ptr<string> templateUrl{};

  CreateProductRequestProductVersionParameters() {}

  explicit CreateProductRequestProductVersionParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (guidance) {
      res["Guidance"] = boost::any(*guidance);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (templateUrl) {
      res["TemplateUrl"] = boost::any(*templateUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Guidance") != m.end() && !m["Guidance"].empty()) {
      guidance = make_shared<string>(boost::any_cast<string>(m["Guidance"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TemplateUrl") != m.end() && !m["TemplateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["TemplateUrl"]));
    }
  }


  virtual ~CreateProductRequestProductVersionParameters() = default;
};
class CreateProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<CreateProductRequestProductVersionParameters> productVersionParameters{};
  shared_ptr<string> providerName{};

  CreateProductRequest() {}

  explicit CreateProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (productVersionParameters) {
      res["ProductVersionParameters"] = productVersionParameters ? boost::any(productVersionParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProductVersionParameters") != m.end() && !m["ProductVersionParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductVersionParameters"].type()) {
        CreateProductRequestProductVersionParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductVersionParameters"]));
        productVersionParameters = make_shared<CreateProductRequestProductVersionParameters>(model1);
      }
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~CreateProductRequest() = default;
};
class CreateProductShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> productVersionParametersShrink{};
  shared_ptr<string> providerName{};

  CreateProductShrinkRequest() {}

  explicit CreateProductShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (productVersionParametersShrink) {
      res["ProductVersionParameters"] = boost::any(*productVersionParametersShrink);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProductVersionParameters") != m.end() && !m["ProductVersionParameters"].empty()) {
      productVersionParametersShrink = make_shared<string>(boost::any_cast<string>(m["ProductVersionParameters"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~CreateProductShrinkRequest() = default;
};
class CreateProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> requestId{};

  CreateProductResponseBody() {}

  explicit CreateProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProductResponseBody() = default;
};
class CreateProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductResponseBody> body{};

  CreateProductResponse() {}

  explicit CreateProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductResponse() = default;
};
class CreateProductVersionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<string> guidance{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> templateType{};
  shared_ptr<string> templateUrl{};

  CreateProductVersionRequest() {}

  explicit CreateProductVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (guidance) {
      res["Guidance"] = boost::any(*guidance);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (templateUrl) {
      res["TemplateUrl"] = boost::any(*templateUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Guidance") != m.end() && !m["Guidance"].empty()) {
      guidance = make_shared<string>(boost::any_cast<string>(m["Guidance"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TemplateUrl") != m.end() && !m["TemplateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["TemplateUrl"]));
    }
  }


  virtual ~CreateProductVersionRequest() = default;
};
class CreateProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> productVersionId{};
  shared_ptr<string> requestId{};

  CreateProductVersionResponseBody() {}

  explicit CreateProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProductVersionResponseBody() = default;
};
class CreateProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductVersionResponseBody> body{};

  CreateProductVersionResponse() {}

  explicit CreateProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductVersionResponse() = default;
};
class CreateProvisionedProductPlanRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  CreateProvisionedProductPlanRequestParameters() {}

  explicit CreateProvisionedProductPlanRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateProvisionedProductPlanRequestParameters() = default;
};
class CreateProvisionedProductPlanRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateProvisionedProductPlanRequestTags() {}

  explicit CreateProvisionedProductPlanRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateProvisionedProductPlanRequestTags() = default;
};
class CreateProvisionedProductPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> operationType{};
  shared_ptr<vector<CreateProvisionedProductPlanRequestParameters>> parameters{};
  shared_ptr<string> planName{};
  shared_ptr<string> planType{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> provisionedProductName{};
  shared_ptr<string> stackRegionId{};
  shared_ptr<vector<CreateProvisionedProductPlanRequestTags>> tags{};

  CreateProvisionedProductPlanRequest() {}

  explicit CreateProvisionedProductPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (planType) {
      res["PlanType"] = boost::any(*planType);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (provisionedProductName) {
      res["ProvisionedProductName"] = boost::any(*provisionedProductName);
    }
    if (stackRegionId) {
      res["StackRegionId"] = boost::any(*stackRegionId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<CreateProvisionedProductPlanRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProvisionedProductPlanRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<CreateProvisionedProductPlanRequestParameters>>(expect1);
      }
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("PlanType") != m.end() && !m["PlanType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["PlanType"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProvisionedProductName") != m.end() && !m["ProvisionedProductName"].empty()) {
      provisionedProductName = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductName"]));
    }
    if (m.find("StackRegionId") != m.end() && !m["StackRegionId"].empty()) {
      stackRegionId = make_shared<string>(boost::any_cast<string>(m["StackRegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateProvisionedProductPlanRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProvisionedProductPlanRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateProvisionedProductPlanRequestTags>>(expect1);
      }
    }
  }


  virtual ~CreateProvisionedProductPlanRequest() = default;
};
class CreateProvisionedProductPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> requestId{};

  CreateProvisionedProductPlanResponseBody() {}

  explicit CreateProvisionedProductPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProvisionedProductPlanResponseBody() = default;
};
class CreateProvisionedProductPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProvisionedProductPlanResponseBody> body{};

  CreateProvisionedProductPlanResponse() {}

  explicit CreateProvisionedProductPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProvisionedProductPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProvisionedProductPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProvisionedProductPlanResponse() = default;
};
class CreateTagOptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateTagOptionRequest() {}

  explicit CreateTagOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTagOptionRequest() = default;
};
class CreateTagOptionResponseBodyTagOptionDetail : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> key{};
  shared_ptr<string> owner{};
  shared_ptr<string> tagOptionId{};
  shared_ptr<string> value{};

  CreateTagOptionResponseBodyTagOptionDetail() {}

  explicit CreateTagOptionResponseBodyTagOptionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateTagOptionResponseBodyTagOptionDetail() = default;
};
class CreateTagOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateTagOptionResponseBodyTagOptionDetail> tagOptionDetail{};

  CreateTagOptionResponseBody() {}

  explicit CreateTagOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagOptionDetail) {
      res["TagOptionDetail"] = tagOptionDetail ? boost::any(tagOptionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagOptionDetail") != m.end() && !m["TagOptionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagOptionDetail"].type()) {
        CreateTagOptionResponseBodyTagOptionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagOptionDetail"]));
        tagOptionDetail = make_shared<CreateTagOptionResponseBodyTagOptionDetail>(model1);
      }
    }
  }


  virtual ~CreateTagOptionResponseBody() = default;
};
class CreateTagOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTagOptionResponseBody> body{};

  CreateTagOptionResponse() {}

  explicit CreateTagOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTagOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTagOptionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTagOptionResponse() = default;
};
class CreateTemplateRequestTerraformVariables : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> variableName{};

  CreateTemplateRequestTerraformVariables() {}

  explicit CreateTemplateRequestTerraformVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
  }


  virtual ~CreateTemplateRequestTerraformVariables() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateType{};
  shared_ptr<vector<CreateTemplateRequestTerraformVariables>> terraformVariables{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (terraformVariables) {
      vector<boost::any> temp1;
      for(auto item1:*terraformVariables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TerraformVariables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TerraformVariables") != m.end() && !m["TerraformVariables"].empty()) {
      if (typeid(vector<boost::any>) == m["TerraformVariables"].type()) {
        vector<CreateTemplateRequestTerraformVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TerraformVariables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateRequestTerraformVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        terraformVariables = make_shared<vector<CreateTemplateRequestTerraformVariables>>(expect1);
      }
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateUrl{};

  CreateTemplateResponseBody() {}

  explicit CreateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateUrl) {
      res["TemplateUrl"] = boost::any(*templateUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateUrl") != m.end() && !m["TemplateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["TemplateUrl"]));
    }
  }


  virtual ~CreateTemplateResponseBody() = default;
};
class CreateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTemplateResponseBody> body{};

  CreateTemplateResponse() {}

  explicit CreateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateResponse() = default;
};
class DeleteConstraintRequest : public Darabonba::Model {
public:
  shared_ptr<string> constraintId{};

  DeleteConstraintRequest() {}

  explicit DeleteConstraintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraintId) {
      res["ConstraintId"] = boost::any(*constraintId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstraintId") != m.end() && !m["ConstraintId"].empty()) {
      constraintId = make_shared<string>(boost::any_cast<string>(m["ConstraintId"]));
    }
  }


  virtual ~DeleteConstraintRequest() = default;
};
class DeleteConstraintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteConstraintResponseBody() {}

  explicit DeleteConstraintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteConstraintResponseBody() = default;
};
class DeleteConstraintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConstraintResponseBody> body{};

  DeleteConstraintResponse() {}

  explicit DeleteConstraintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConstraintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConstraintResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConstraintResponse() = default;
};
class DeletePortfolioRequest : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};

  DeletePortfolioRequest() {}

  explicit DeletePortfolioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
  }


  virtual ~DeletePortfolioRequest() = default;
};
class DeletePortfolioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePortfolioResponseBody() {}

  explicit DeletePortfolioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePortfolioResponseBody() = default;
};
class DeletePortfolioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePortfolioResponseBody> body{};

  DeletePortfolioResponse() {}

  explicit DeletePortfolioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePortfolioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePortfolioResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePortfolioResponse() = default;
};
class DeleteProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> productId{};

  DeleteProductRequest() {}

  explicit DeleteProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~DeleteProductRequest() = default;
};
class DeleteProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProductResponseBody() {}

  explicit DeleteProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProductResponseBody() = default;
};
class DeleteProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductResponseBody> body{};

  DeleteProductResponse() {}

  explicit DeleteProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductResponse() = default;
};
class DeleteProductVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> productVersionId{};

  DeleteProductVersionRequest() {}

  explicit DeleteProductVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
  }


  virtual ~DeleteProductVersionRequest() = default;
};
class DeleteProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProductVersionResponseBody() {}

  explicit DeleteProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProductVersionResponseBody() = default;
};
class DeleteProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductVersionResponseBody> body{};

  DeleteProductVersionResponse() {}

  explicit DeleteProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductVersionResponse() = default;
};
class DeleteProvisionedProductPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  DeleteProvisionedProductPlanRequest() {}

  explicit DeleteProvisionedProductPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~DeleteProvisionedProductPlanRequest() = default;
};
class DeleteProvisionedProductPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProvisionedProductPlanResponseBody() {}

  explicit DeleteProvisionedProductPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProvisionedProductPlanResponseBody() = default;
};
class DeleteProvisionedProductPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProvisionedProductPlanResponseBody> body{};

  DeleteProvisionedProductPlanResponse() {}

  explicit DeleteProvisionedProductPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProvisionedProductPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProvisionedProductPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProvisionedProductPlanResponse() = default;
};
class DeleteTagOptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagOptionId{};

  DeleteTagOptionRequest() {}

  explicit DeleteTagOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
  }


  virtual ~DeleteTagOptionRequest() = default;
};
class DeleteTagOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTagOptionResponseBody() {}

  explicit DeleteTagOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTagOptionResponseBody() = default;
};
class DeleteTagOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTagOptionResponseBody> body{};

  DeleteTagOptionResponse() {}

  explicit DeleteTagOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTagOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTagOptionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTagOptionResponse() = default;
};
class DisAssociateTagOptionFromResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagOptionId{};

  DisAssociateTagOptionFromResourceRequest() {}

  explicit DisAssociateTagOptionFromResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
  }


  virtual ~DisAssociateTagOptionFromResourceRequest() = default;
};
class DisAssociateTagOptionFromResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisAssociateTagOptionFromResourceResponseBody() {}

  explicit DisAssociateTagOptionFromResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisAssociateTagOptionFromResourceResponseBody() = default;
};
class DisAssociateTagOptionFromResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisAssociateTagOptionFromResourceResponseBody> body{};

  DisAssociateTagOptionFromResourceResponse() {}

  explicit DisAssociateTagOptionFromResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisAssociateTagOptionFromResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisAssociateTagOptionFromResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DisAssociateTagOptionFromResourceResponse() = default;
};
class DisassociatePrincipalFromPortfolioRequest : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};

  DisassociatePrincipalFromPortfolioRequest() {}

  explicit DisassociatePrincipalFromPortfolioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~DisassociatePrincipalFromPortfolioRequest() = default;
};
class DisassociatePrincipalFromPortfolioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisassociatePrincipalFromPortfolioResponseBody() {}

  explicit DisassociatePrincipalFromPortfolioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisassociatePrincipalFromPortfolioResponseBody() = default;
};
class DisassociatePrincipalFromPortfolioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisassociatePrincipalFromPortfolioResponseBody> body{};

  DisassociatePrincipalFromPortfolioResponse() {}

  explicit DisassociatePrincipalFromPortfolioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisassociatePrincipalFromPortfolioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisassociatePrincipalFromPortfolioResponseBody>(model1);
      }
    }
  }


  virtual ~DisassociatePrincipalFromPortfolioResponse() = default;
};
class DisassociateProductFromPortfolioRequest : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};

  DisassociateProductFromPortfolioRequest() {}

  explicit DisassociateProductFromPortfolioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~DisassociateProductFromPortfolioRequest() = default;
};
class DisassociateProductFromPortfolioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisassociateProductFromPortfolioResponseBody() {}

  explicit DisassociateProductFromPortfolioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisassociateProductFromPortfolioResponseBody() = default;
};
class DisassociateProductFromPortfolioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisassociateProductFromPortfolioResponseBody> body{};

  DisassociateProductFromPortfolioResponse() {}

  explicit DisassociateProductFromPortfolioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisassociateProductFromPortfolioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisassociateProductFromPortfolioResponseBody>(model1);
      }
    }
  }


  virtual ~DisassociateProductFromPortfolioResponse() = default;
};
class ExecuteProvisionedProductPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  ExecuteProvisionedProductPlanRequest() {}

  explicit ExecuteProvisionedProductPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~ExecuteProvisionedProductPlanRequest() = default;
};
class ExecuteProvisionedProductPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};

  ExecuteProvisionedProductPlanResponseBody() {}

  explicit ExecuteProvisionedProductPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExecuteProvisionedProductPlanResponseBody() = default;
};
class ExecuteProvisionedProductPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteProvisionedProductPlanResponseBody> body{};

  ExecuteProvisionedProductPlanResponse() {}

  explicit ExecuteProvisionedProductPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteProvisionedProductPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteProvisionedProductPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteProvisionedProductPlanResponse() = default;
};
class GetConstraintRequest : public Darabonba::Model {
public:
  shared_ptr<string> constraintId{};

  GetConstraintRequest() {}

  explicit GetConstraintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraintId) {
      res["ConstraintId"] = boost::any(*constraintId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstraintId") != m.end() && !m["ConstraintId"].empty()) {
      constraintId = make_shared<string>(boost::any_cast<string>(m["ConstraintId"]));
    }
  }


  virtual ~GetConstraintRequest() = default;
};
class GetConstraintResponseBodyConstraintDetail : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> constraintId{};
  shared_ptr<string> constraintType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};

  GetConstraintResponseBodyConstraintDetail() {}

  explicit GetConstraintResponseBodyConstraintDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (constraintId) {
      res["ConstraintId"] = boost::any(*constraintId);
    }
    if (constraintType) {
      res["ConstraintType"] = boost::any(*constraintType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ConstraintId") != m.end() && !m["ConstraintId"].empty()) {
      constraintId = make_shared<string>(boost::any_cast<string>(m["ConstraintId"]));
    }
    if (m.find("ConstraintType") != m.end() && !m["ConstraintType"].empty()) {
      constraintType = make_shared<string>(boost::any_cast<string>(m["ConstraintType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~GetConstraintResponseBodyConstraintDetail() = default;
};
class GetConstraintResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetConstraintResponseBodyConstraintDetail> constraintDetail{};
  shared_ptr<string> requestId{};

  GetConstraintResponseBody() {}

  explicit GetConstraintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraintDetail) {
      res["ConstraintDetail"] = constraintDetail ? boost::any(constraintDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstraintDetail") != m.end() && !m["ConstraintDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConstraintDetail"].type()) {
        GetConstraintResponseBodyConstraintDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConstraintDetail"]));
        constraintDetail = make_shared<GetConstraintResponseBodyConstraintDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetConstraintResponseBody() = default;
};
class GetConstraintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConstraintResponseBody> body{};

  GetConstraintResponse() {}

  explicit GetConstraintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConstraintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConstraintResponseBody>(model1);
      }
    }
  }


  virtual ~GetConstraintResponse() = default;
};
class GetPortfolioRequest : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};

  GetPortfolioRequest() {}

  explicit GetPortfolioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
  }


  virtual ~GetPortfolioRequest() = default;
};
class GetPortfolioResponseBodyPortfolioDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> portfolioArn{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> portfolioName{};
  shared_ptr<string> providerName{};

  GetPortfolioResponseBodyPortfolioDetail() {}

  explicit GetPortfolioResponseBodyPortfolioDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (portfolioArn) {
      res["PortfolioArn"] = boost::any(*portfolioArn);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (portfolioName) {
      res["PortfolioName"] = boost::any(*portfolioName);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
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
    if (m.find("PortfolioArn") != m.end() && !m["PortfolioArn"].empty()) {
      portfolioArn = make_shared<string>(boost::any_cast<string>(m["PortfolioArn"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("PortfolioName") != m.end() && !m["PortfolioName"].empty()) {
      portfolioName = make_shared<string>(boost::any_cast<string>(m["PortfolioName"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~GetPortfolioResponseBodyPortfolioDetail() = default;
};
class GetPortfolioResponseBodyTagOptions : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> key{};
  shared_ptr<string> owner{};
  shared_ptr<string> tagOptionId{};
  shared_ptr<string> value{};

  GetPortfolioResponseBodyTagOptions() {}

  explicit GetPortfolioResponseBodyTagOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetPortfolioResponseBodyTagOptions() = default;
};
class GetPortfolioResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPortfolioResponseBodyPortfolioDetail> portfolioDetail{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetPortfolioResponseBodyTagOptions>> tagOptions{};

  GetPortfolioResponseBody() {}

  explicit GetPortfolioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioDetail) {
      res["PortfolioDetail"] = portfolioDetail ? boost::any(portfolioDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagOptions) {
      vector<boost::any> temp1;
      for(auto item1:*tagOptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagOptions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioDetail") != m.end() && !m["PortfolioDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["PortfolioDetail"].type()) {
        GetPortfolioResponseBodyPortfolioDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PortfolioDetail"]));
        portfolioDetail = make_shared<GetPortfolioResponseBodyPortfolioDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagOptions") != m.end() && !m["TagOptions"].empty()) {
      if (typeid(vector<boost::any>) == m["TagOptions"].type()) {
        vector<GetPortfolioResponseBodyTagOptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagOptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPortfolioResponseBodyTagOptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagOptions = make_shared<vector<GetPortfolioResponseBodyTagOptions>>(expect1);
      }
    }
  }


  virtual ~GetPortfolioResponseBody() = default;
};
class GetPortfolioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPortfolioResponseBody> body{};

  GetPortfolioResponse() {}

  explicit GetPortfolioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPortfolioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPortfolioResponseBody>(model1);
      }
    }
  }


  virtual ~GetPortfolioResponse() = default;
};
class GetProductAsAdminRequest : public Darabonba::Model {
public:
  shared_ptr<string> productId{};

  GetProductAsAdminRequest() {}

  explicit GetProductAsAdminRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~GetProductAsAdminRequest() = default;
};
class GetProductAsAdminResponseBodyProductDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> productArn{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> providerName{};

  GetProductAsAdminResponseBodyProductDetail() {}

  explicit GetProductAsAdminResponseBodyProductDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productArn) {
      res["ProductArn"] = boost::any(*productArn);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
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
    if (m.find("ProductArn") != m.end() && !m["ProductArn"].empty()) {
      productArn = make_shared<string>(boost::any_cast<string>(m["ProductArn"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~GetProductAsAdminResponseBodyProductDetail() = default;
};
class GetProductAsAdminResponseBodyTagOptions : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> key{};
  shared_ptr<string> owner{};
  shared_ptr<string> tagOptionId{};
  shared_ptr<string> value{};

  GetProductAsAdminResponseBodyTagOptions() {}

  explicit GetProductAsAdminResponseBodyTagOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetProductAsAdminResponseBodyTagOptions() = default;
};
class GetProductAsAdminResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProductAsAdminResponseBodyProductDetail> productDetail{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetProductAsAdminResponseBodyTagOptions>> tagOptions{};

  GetProductAsAdminResponseBody() {}

  explicit GetProductAsAdminResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productDetail) {
      res["ProductDetail"] = productDetail ? boost::any(productDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagOptions) {
      vector<boost::any> temp1;
      for(auto item1:*tagOptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagOptions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductDetail"].type()) {
        GetProductAsAdminResponseBodyProductDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductDetail"]));
        productDetail = make_shared<GetProductAsAdminResponseBodyProductDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagOptions") != m.end() && !m["TagOptions"].empty()) {
      if (typeid(vector<boost::any>) == m["TagOptions"].type()) {
        vector<GetProductAsAdminResponseBodyTagOptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagOptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductAsAdminResponseBodyTagOptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagOptions = make_shared<vector<GetProductAsAdminResponseBodyTagOptions>>(expect1);
      }
    }
  }


  virtual ~GetProductAsAdminResponseBody() = default;
};
class GetProductAsAdminResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductAsAdminResponseBody> body{};

  GetProductAsAdminResponse() {}

  explicit GetProductAsAdminResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductAsAdminResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductAsAdminResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductAsAdminResponse() = default;
};
class GetProductAsEndUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> productId{};

  GetProductAsEndUserRequest() {}

  explicit GetProductAsEndUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~GetProductAsEndUserRequest() = default;
};
class GetProductAsEndUserResponseBodyProductSummary : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> hasDefaultLaunchOption{};
  shared_ptr<string> productArn{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> providerName{};

  GetProductAsEndUserResponseBodyProductSummary() {}

  explicit GetProductAsEndUserResponseBodyProductSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hasDefaultLaunchOption) {
      res["HasDefaultLaunchOption"] = boost::any(*hasDefaultLaunchOption);
    }
    if (productArn) {
      res["ProductArn"] = boost::any(*productArn);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
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
    if (m.find("HasDefaultLaunchOption") != m.end() && !m["HasDefaultLaunchOption"].empty()) {
      hasDefaultLaunchOption = make_shared<bool>(boost::any_cast<bool>(m["HasDefaultLaunchOption"]));
    }
    if (m.find("ProductArn") != m.end() && !m["ProductArn"].empty()) {
      productArn = make_shared<string>(boost::any_cast<string>(m["ProductArn"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~GetProductAsEndUserResponseBodyProductSummary() = default;
};
class GetProductAsEndUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProductAsEndUserResponseBodyProductSummary> productSummary{};
  shared_ptr<string> requestId{};

  GetProductAsEndUserResponseBody() {}

  explicit GetProductAsEndUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productSummary) {
      res["ProductSummary"] = productSummary ? boost::any(productSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductSummary") != m.end() && !m["ProductSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductSummary"].type()) {
        GetProductAsEndUserResponseBodyProductSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductSummary"]));
        productSummary = make_shared<GetProductAsEndUserResponseBodyProductSummary>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetProductAsEndUserResponseBody() = default;
};
class GetProductAsEndUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductAsEndUserResponseBody> body{};

  GetProductAsEndUserResponse() {}

  explicit GetProductAsEndUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductAsEndUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductAsEndUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductAsEndUserResponse() = default;
};
class GetProductVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> productVersionId{};

  GetProductVersionRequest() {}

  explicit GetProductVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
  }


  virtual ~GetProductVersionRequest() = default;
};
class GetProductVersionResponseBodyProductVersionDetail : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> guidance{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> templateType{};
  shared_ptr<string> templateUrl{};

  GetProductVersionResponseBodyProductVersionDetail() {}

  explicit GetProductVersionResponseBodyProductVersionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (guidance) {
      res["Guidance"] = boost::any(*guidance);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (templateUrl) {
      res["TemplateUrl"] = boost::any(*templateUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Guidance") != m.end() && !m["Guidance"].empty()) {
      guidance = make_shared<string>(boost::any_cast<string>(m["Guidance"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TemplateUrl") != m.end() && !m["TemplateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["TemplateUrl"]));
    }
  }


  virtual ~GetProductVersionResponseBodyProductVersionDetail() = default;
};
class GetProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProductVersionResponseBodyProductVersionDetail> productVersionDetail{};
  shared_ptr<string> requestId{};

  GetProductVersionResponseBody() {}

  explicit GetProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionDetail) {
      res["ProductVersionDetail"] = productVersionDetail ? boost::any(productVersionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductVersionDetail") != m.end() && !m["ProductVersionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductVersionDetail"].type()) {
        GetProductVersionResponseBodyProductVersionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductVersionDetail"]));
        productVersionDetail = make_shared<GetProductVersionResponseBodyProductVersionDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetProductVersionResponseBody() = default;
};
class GetProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductVersionResponseBody> body{};

  GetProductVersionResponse() {}

  explicit GetProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductVersionResponse() = default;
};
class GetProvisionedProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> provisionedProductId{};

  GetProvisionedProductRequest() {}

  explicit GetProvisionedProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
  }


  virtual ~GetProvisionedProductRequest() = default;
};
class GetProvisionedProductResponseBodyProvisionedProductDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> lastProvisioningTaskId{};
  shared_ptr<string> lastSuccessfulProvisioningTaskId{};
  shared_ptr<string> lastTaskId{};
  shared_ptr<string> ownerPrincipalId{};
  shared_ptr<string> ownerPrincipalType{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> provisionedProductArn{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> provisionedProductName{};
  shared_ptr<string> provisionedProductType{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackRegionId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  GetProvisionedProductResponseBodyProvisionedProductDetail() {}

  explicit GetProvisionedProductResponseBodyProvisionedProductDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastProvisioningTaskId) {
      res["LastProvisioningTaskId"] = boost::any(*lastProvisioningTaskId);
    }
    if (lastSuccessfulProvisioningTaskId) {
      res["LastSuccessfulProvisioningTaskId"] = boost::any(*lastSuccessfulProvisioningTaskId);
    }
    if (lastTaskId) {
      res["LastTaskId"] = boost::any(*lastTaskId);
    }
    if (ownerPrincipalId) {
      res["OwnerPrincipalId"] = boost::any(*ownerPrincipalId);
    }
    if (ownerPrincipalType) {
      res["OwnerPrincipalType"] = boost::any(*ownerPrincipalType);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (provisionedProductArn) {
      res["ProvisionedProductArn"] = boost::any(*provisionedProductArn);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (provisionedProductName) {
      res["ProvisionedProductName"] = boost::any(*provisionedProductName);
    }
    if (provisionedProductType) {
      res["ProvisionedProductType"] = boost::any(*provisionedProductType);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackRegionId) {
      res["StackRegionId"] = boost::any(*stackRegionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LastProvisioningTaskId") != m.end() && !m["LastProvisioningTaskId"].empty()) {
      lastProvisioningTaskId = make_shared<string>(boost::any_cast<string>(m["LastProvisioningTaskId"]));
    }
    if (m.find("LastSuccessfulProvisioningTaskId") != m.end() && !m["LastSuccessfulProvisioningTaskId"].empty()) {
      lastSuccessfulProvisioningTaskId = make_shared<string>(boost::any_cast<string>(m["LastSuccessfulProvisioningTaskId"]));
    }
    if (m.find("LastTaskId") != m.end() && !m["LastTaskId"].empty()) {
      lastTaskId = make_shared<string>(boost::any_cast<string>(m["LastTaskId"]));
    }
    if (m.find("OwnerPrincipalId") != m.end() && !m["OwnerPrincipalId"].empty()) {
      ownerPrincipalId = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalId"]));
    }
    if (m.find("OwnerPrincipalType") != m.end() && !m["OwnerPrincipalType"].empty()) {
      ownerPrincipalType = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalType"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("ProvisionedProductArn") != m.end() && !m["ProvisionedProductArn"].empty()) {
      provisionedProductArn = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductArn"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("ProvisionedProductName") != m.end() && !m["ProvisionedProductName"].empty()) {
      provisionedProductName = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductName"]));
    }
    if (m.find("ProvisionedProductType") != m.end() && !m["ProvisionedProductType"].empty()) {
      provisionedProductType = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductType"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackRegionId") != m.end() && !m["StackRegionId"].empty()) {
      stackRegionId = make_shared<string>(boost::any_cast<string>(m["StackRegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~GetProvisionedProductResponseBodyProvisionedProductDetail() = default;
};
class GetProvisionedProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProvisionedProductResponseBodyProvisionedProductDetail> provisionedProductDetail{};
  shared_ptr<string> requestId{};

  GetProvisionedProductResponseBody() {}

  explicit GetProvisionedProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provisionedProductDetail) {
      res["ProvisionedProductDetail"] = provisionedProductDetail ? boost::any(provisionedProductDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvisionedProductDetail") != m.end() && !m["ProvisionedProductDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProvisionedProductDetail"].type()) {
        GetProvisionedProductResponseBodyProvisionedProductDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProvisionedProductDetail"]));
        provisionedProductDetail = make_shared<GetProvisionedProductResponseBodyProvisionedProductDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetProvisionedProductResponseBody() = default;
};
class GetProvisionedProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProvisionedProductResponseBody> body{};

  GetProvisionedProductResponse() {}

  explicit GetProvisionedProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProvisionedProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProvisionedProductResponseBody>(model1);
      }
    }
  }


  virtual ~GetProvisionedProductResponse() = default;
};
class GetProvisionedProductPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  GetProvisionedProductPlanRequest() {}

  explicit GetProvisionedProductPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~GetProvisionedProductPlanRequest() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecordsOperator : public Darabonba::Model {
public:
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};

  GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecordsOperator() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecordsOperator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecordsOperator() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecords : public Darabonba::Model {
public:
  shared_ptr<string> approvalAction{};
  shared_ptr<string> comment{};
  shared_ptr<string> createTime{};
  shared_ptr<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecordsOperator> operator_{};

  GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecords() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalAction) {
      res["ApprovalAction"] = boost::any(*approvalAction);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (operator_) {
      res["Operator"] = operator_ ? boost::any(operator_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalAction") != m.end() && !m["ApprovalAction"].empty()) {
      approvalAction = make_shared<string>(boost::any_cast<string>(m["ApprovalAction"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operator"].type()) {
        GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecordsOperator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operator"]));
        operator_ = make_shared<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecordsOperator>(model1);
      }
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecords() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasksOperator : public Darabonba::Model {
public:
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};

  GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasksOperator() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasksOperator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasksOperator() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasks : public Darabonba::Model {
public:
  shared_ptr<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasksOperator> operator_{};

  GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasks() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["Operator"] = operator_ ? boost::any(operator_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operator"].type()) {
        GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasksOperator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operator"]));
        operator_ = make_shared<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasksOperator>(model1);
      }
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasks() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivities : public Darabonba::Model {
public:
  shared_ptr<string> activityName{};
  shared_ptr<vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasks>> tasks{};

  GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivities() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityName) {
      res["ActivityName"] = boost::any(*activityName);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityName") != m.end() && !m["ActivityName"].empty()) {
      activityName = make_shared<string>(boost::any_cast<string>(m["ActivityName"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivitiesTasks>>(expect1);
      }
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivities() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetail : public Darabonba::Model {
public:
  shared_ptr<vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecords>> operationRecords{};
  shared_ptr<vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivities>> todoTaskActivities{};

  GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetail() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationRecords) {
      vector<boost::any> temp1;
      for(auto item1:*operationRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperationRecords"] = boost::any(temp1);
    }
    if (todoTaskActivities) {
      vector<boost::any> temp1;
      for(auto item1:*todoTaskActivities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TodoTaskActivities"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationRecords") != m.end() && !m["OperationRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["OperationRecords"].type()) {
        vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperationRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operationRecords = make_shared<vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailOperationRecords>>(expect1);
      }
    }
    if (m.find("TodoTaskActivities") != m.end() && !m["TodoTaskActivities"].empty()) {
      if (typeid(vector<boost::any>) == m["TodoTaskActivities"].type()) {
        vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TodoTaskActivities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        todoTaskActivities = make_shared<vector<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetailTodoTaskActivities>>(expect1);
      }
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetail() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailAssignedApprovers : public Darabonba::Model {
public:
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};

  GetProvisionedProductPlanResponseBodyPlanDetailAssignedApprovers() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailAssignedApprovers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailAssignedApprovers() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetProvisionedProductPlanResponseBodyPlanDetailParameters() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailParameters() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetailTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetProvisionedProductPlanResponseBodyPlanDetailTags() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetailTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetailTags() = default;
};
class GetProvisionedProductPlanResponseBodyPlanDetail : public Darabonba::Model {
public:
  shared_ptr<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetail> approvalDetail{};
  shared_ptr<vector<GetProvisionedProductPlanResponseBodyPlanDetailAssignedApprovers>> assignedApprovers{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ownerPrincipalId{};
  shared_ptr<string> ownerPrincipalName{};
  shared_ptr<string> ownerPrincipalType{};
  shared_ptr<vector<GetProvisionedProductPlanResponseBodyPlanDetailParameters>> parameters{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> planType{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> provisionedProductName{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackRegionId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<vector<GetProvisionedProductPlanResponseBodyPlanDetailTags>> tags{};
  shared_ptr<string> uid{};
  shared_ptr<string> updateTime{};

  GetProvisionedProductPlanResponseBodyPlanDetail() {}

  explicit GetProvisionedProductPlanResponseBodyPlanDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalDetail) {
      res["ApprovalDetail"] = approvalDetail ? boost::any(approvalDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (assignedApprovers) {
      vector<boost::any> temp1;
      for(auto item1:*assignedApprovers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssignedApprovers"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ownerPrincipalId) {
      res["OwnerPrincipalId"] = boost::any(*ownerPrincipalId);
    }
    if (ownerPrincipalName) {
      res["OwnerPrincipalName"] = boost::any(*ownerPrincipalName);
    }
    if (ownerPrincipalType) {
      res["OwnerPrincipalType"] = boost::any(*ownerPrincipalType);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (planType) {
      res["PlanType"] = boost::any(*planType);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (provisionedProductName) {
      res["ProvisionedProductName"] = boost::any(*provisionedProductName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackRegionId) {
      res["StackRegionId"] = boost::any(*stackRegionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalDetail") != m.end() && !m["ApprovalDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApprovalDetail"].type()) {
        GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApprovalDetail"]));
        approvalDetail = make_shared<GetProvisionedProductPlanResponseBodyPlanDetailApprovalDetail>(model1);
      }
    }
    if (m.find("AssignedApprovers") != m.end() && !m["AssignedApprovers"].empty()) {
      if (typeid(vector<boost::any>) == m["AssignedApprovers"].type()) {
        vector<GetProvisionedProductPlanResponseBodyPlanDetailAssignedApprovers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssignedApprovers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProvisionedProductPlanResponseBodyPlanDetailAssignedApprovers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assignedApprovers = make_shared<vector<GetProvisionedProductPlanResponseBodyPlanDetailAssignedApprovers>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("OwnerPrincipalId") != m.end() && !m["OwnerPrincipalId"].empty()) {
      ownerPrincipalId = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalId"]));
    }
    if (m.find("OwnerPrincipalName") != m.end() && !m["OwnerPrincipalName"].empty()) {
      ownerPrincipalName = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalName"]));
    }
    if (m.find("OwnerPrincipalType") != m.end() && !m["OwnerPrincipalType"].empty()) {
      ownerPrincipalType = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalType"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetProvisionedProductPlanResponseBodyPlanDetailParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProvisionedProductPlanResponseBodyPlanDetailParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetProvisionedProductPlanResponseBodyPlanDetailParameters>>(expect1);
      }
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("PlanType") != m.end() && !m["PlanType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["PlanType"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("ProvisionedProductName") != m.end() && !m["ProvisionedProductName"].empty()) {
      provisionedProductName = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackRegionId") != m.end() && !m["StackRegionId"].empty()) {
      stackRegionId = make_shared<string>(boost::any_cast<string>(m["StackRegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetProvisionedProductPlanResponseBodyPlanDetailTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProvisionedProductPlanResponseBodyPlanDetailTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetProvisionedProductPlanResponseBodyPlanDetailTags>>(expect1);
      }
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyPlanDetail() = default;
};
class GetProvisionedProductPlanResponseBodyProductDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> productArn{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> providerName{};

  GetProvisionedProductPlanResponseBodyProductDetail() {}

  explicit GetProvisionedProductPlanResponseBodyProductDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productArn) {
      res["ProductArn"] = boost::any(*productArn);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
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
    if (m.find("ProductArn") != m.end() && !m["ProductArn"].empty()) {
      productArn = make_shared<string>(boost::any_cast<string>(m["ProductArn"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyProductDetail() = default;
};
class GetProvisionedProductPlanResponseBodyProductVersionDetail : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> guidance{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> templateType{};
  shared_ptr<string> templateUrl{};

  GetProvisionedProductPlanResponseBodyProductVersionDetail() {}

  explicit GetProvisionedProductPlanResponseBodyProductVersionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (guidance) {
      res["Guidance"] = boost::any(*guidance);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (templateUrl) {
      res["TemplateUrl"] = boost::any(*templateUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Guidance") != m.end() && !m["Guidance"].empty()) {
      guidance = make_shared<string>(boost::any_cast<string>(m["Guidance"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TemplateUrl") != m.end() && !m["TemplateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["TemplateUrl"]));
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyProductVersionDetail() = default;
};
class GetProvisionedProductPlanResponseBodyResourceChanges : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> replacement{};
  shared_ptr<string> resourceType{};

  GetProvisionedProductPlanResponseBodyResourceChanges() {}

  explicit GetProvisionedProductPlanResponseBodyResourceChanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (replacement) {
      res["Replacement"] = boost::any(*replacement);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("Replacement") != m.end() && !m["Replacement"].empty()) {
      replacement = make_shared<string>(boost::any_cast<string>(m["Replacement"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetProvisionedProductPlanResponseBodyResourceChanges() = default;
};
class GetProvisionedProductPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProvisionedProductPlanResponseBodyPlanDetail> planDetail{};
  shared_ptr<GetProvisionedProductPlanResponseBodyProductDetail> productDetail{};
  shared_ptr<GetProvisionedProductPlanResponseBodyProductVersionDetail> productVersionDetail{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetProvisionedProductPlanResponseBodyResourceChanges>> resourceChanges{};

  GetProvisionedProductPlanResponseBody() {}

  explicit GetProvisionedProductPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planDetail) {
      res["PlanDetail"] = planDetail ? boost::any(planDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productDetail) {
      res["ProductDetail"] = productDetail ? boost::any(productDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productVersionDetail) {
      res["ProductVersionDetail"] = productVersionDetail ? boost::any(productVersionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceChanges) {
      vector<boost::any> temp1;
      for(auto item1:*resourceChanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceChanges"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanDetail") != m.end() && !m["PlanDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["PlanDetail"].type()) {
        GetProvisionedProductPlanResponseBodyPlanDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PlanDetail"]));
        planDetail = make_shared<GetProvisionedProductPlanResponseBodyPlanDetail>(model1);
      }
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductDetail"].type()) {
        GetProvisionedProductPlanResponseBodyProductDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductDetail"]));
        productDetail = make_shared<GetProvisionedProductPlanResponseBodyProductDetail>(model1);
      }
    }
    if (m.find("ProductVersionDetail") != m.end() && !m["ProductVersionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductVersionDetail"].type()) {
        GetProvisionedProductPlanResponseBodyProductVersionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductVersionDetail"]));
        productVersionDetail = make_shared<GetProvisionedProductPlanResponseBodyProductVersionDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceChanges") != m.end() && !m["ResourceChanges"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceChanges"].type()) {
        vector<GetProvisionedProductPlanResponseBodyResourceChanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceChanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProvisionedProductPlanResponseBodyResourceChanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceChanges = make_shared<vector<GetProvisionedProductPlanResponseBodyResourceChanges>>(expect1);
      }
    }
  }


  virtual ~GetProvisionedProductPlanResponseBody() = default;
};
class GetProvisionedProductPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProvisionedProductPlanResponseBody> body{};

  GetProvisionedProductPlanResponse() {}

  explicit GetProvisionedProductPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProvisionedProductPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProvisionedProductPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetProvisionedProductPlanResponse() = default;
};
class GetTagOptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagOptionId{};

  GetTagOptionRequest() {}

  explicit GetTagOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
  }


  virtual ~GetTagOptionRequest() = default;
};
class GetTagOptionResponseBodyTagOptionDetail : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> key{};
  shared_ptr<string> owner{};
  shared_ptr<string> tagOptionId{};
  shared_ptr<string> value{};

  GetTagOptionResponseBodyTagOptionDetail() {}

  explicit GetTagOptionResponseBodyTagOptionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetTagOptionResponseBodyTagOptionDetail() = default;
};
class GetTagOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTagOptionResponseBodyTagOptionDetail> tagOptionDetail{};

  GetTagOptionResponseBody() {}

  explicit GetTagOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagOptionDetail) {
      res["TagOptionDetail"] = tagOptionDetail ? boost::any(tagOptionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagOptionDetail") != m.end() && !m["TagOptionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagOptionDetail"].type()) {
        GetTagOptionResponseBodyTagOptionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagOptionDetail"]));
        tagOptionDetail = make_shared<GetTagOptionResponseBodyTagOptionDetail>(model1);
      }
    }
  }


  virtual ~GetTagOptionResponseBody() = default;
};
class GetTagOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTagOptionResponseBody> body{};

  GetTagOptionResponse() {}

  explicit GetTagOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTagOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTagOptionResponseBody>(model1);
      }
    }
  }


  virtual ~GetTagOptionResponse() = default;
};
class GetTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTaskRequest() {}

  explicit GetTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTaskRequest() = default;
};
class GetTaskResponseBodyTaskDetailLogTerraformLogs : public Darabonba::Model {
public:
  shared_ptr<string> command{};
  shared_ptr<string> content{};
  shared_ptr<string> stream{};

  GetTaskResponseBodyTaskDetailLogTerraformLogs() {}

  explicit GetTaskResponseBodyTaskDetailLogTerraformLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (stream) {
      res["Stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Stream") != m.end() && !m["Stream"].empty()) {
      stream = make_shared<string>(boost::any_cast<string>(m["Stream"]));
    }
  }


  virtual ~GetTaskResponseBodyTaskDetailLogTerraformLogs() = default;
};
class GetTaskResponseBodyTaskDetailLog : public Darabonba::Model {
public:
  shared_ptr<vector<GetTaskResponseBodyTaskDetailLogTerraformLogs>> terraformLogs{};

  GetTaskResponseBodyTaskDetailLog() {}

  explicit GetTaskResponseBodyTaskDetailLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (terraformLogs) {
      vector<boost::any> temp1;
      for(auto item1:*terraformLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TerraformLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TerraformLogs") != m.end() && !m["TerraformLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["TerraformLogs"].type()) {
        vector<GetTaskResponseBodyTaskDetailLogTerraformLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TerraformLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskResponseBodyTaskDetailLogTerraformLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        terraformLogs = make_shared<vector<GetTaskResponseBodyTaskDetailLogTerraformLogs>>(expect1);
      }
    }
  }


  virtual ~GetTaskResponseBodyTaskDetailLog() = default;
};
class GetTaskResponseBodyTaskDetailOutputs : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> outputKey{};
  shared_ptr<string> outputValue{};

  GetTaskResponseBodyTaskDetailOutputs() {}

  explicit GetTaskResponseBodyTaskDetailOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (outputKey) {
      res["OutputKey"] = boost::any(*outputKey);
    }
    if (outputValue) {
      res["OutputValue"] = boost::any(*outputValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OutputKey") != m.end() && !m["OutputKey"].empty()) {
      outputKey = make_shared<string>(boost::any_cast<string>(m["OutputKey"]));
    }
    if (m.find("OutputValue") != m.end() && !m["OutputValue"].empty()) {
      outputValue = make_shared<string>(boost::any_cast<string>(m["OutputValue"]));
    }
  }


  virtual ~GetTaskResponseBodyTaskDetailOutputs() = default;
};
class GetTaskResponseBodyTaskDetailParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetTaskResponseBodyTaskDetailParameters() {}

  explicit GetTaskResponseBodyTaskDetailParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetTaskResponseBodyTaskDetailParameters() = default;
};
class GetTaskResponseBodyTaskDetailTaskTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTaskResponseBodyTaskDetailTaskTags() {}

  explicit GetTaskResponseBodyTaskDetailTaskTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTaskResponseBodyTaskDetailTaskTags() = default;
};
class GetTaskResponseBodyTaskDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<GetTaskResponseBodyTaskDetailLog> log{};
  shared_ptr<vector<GetTaskResponseBodyTaskDetailOutputs>> outputs{};
  shared_ptr<vector<GetTaskResponseBodyTaskDetailParameters>> parameters{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> provisionedProductName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<GetTaskResponseBodyTaskDetailTaskTags>> taskTags{};
  shared_ptr<string> taskType{};
  shared_ptr<string> updateTime{};

  GetTaskResponseBodyTaskDetail() {}

  explicit GetTaskResponseBodyTaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (log) {
      res["Log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputs) {
      vector<boost::any> temp1;
      for(auto item1:*outputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outputs"] = boost::any(temp1);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (provisionedProductName) {
      res["ProvisionedProductName"] = boost::any(*provisionedProductName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskTags) {
      vector<boost::any> temp1;
      for(auto item1:*taskTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskTags"] = boost::any(temp1);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("Log") != m.end() && !m["Log"].empty()) {
      if (typeid(map<string, boost::any>) == m["Log"].type()) {
        GetTaskResponseBodyTaskDetailLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Log"]));
        log = make_shared<GetTaskResponseBodyTaskDetailLog>(model1);
      }
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["Outputs"].type()) {
        vector<GetTaskResponseBodyTaskDetailOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskResponseBodyTaskDetailOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<GetTaskResponseBodyTaskDetailOutputs>>(expect1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetTaskResponseBodyTaskDetailParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskResponseBodyTaskDetailParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetTaskResponseBodyTaskDetailParameters>>(expect1);
      }
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("ProvisionedProductName") != m.end() && !m["ProvisionedProductName"].empty()) {
      provisionedProductName = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskTags") != m.end() && !m["TaskTags"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskTags"].type()) {
        vector<GetTaskResponseBodyTaskDetailTaskTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskResponseBodyTaskDetailTaskTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskTags = make_shared<vector<GetTaskResponseBodyTaskDetailTaskTags>>(expect1);
      }
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetTaskResponseBodyTaskDetail() = default;
};
class GetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTaskResponseBodyTaskDetail> taskDetail{};

  GetTaskResponseBody() {}

  explicit GetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskDetail) {
      res["TaskDetail"] = taskDetail ? boost::any(taskDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskDetail") != m.end() && !m["TaskDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskDetail"].type()) {
        GetTaskResponseBodyTaskDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskDetail"]));
        taskDetail = make_shared<GetTaskResponseBodyTaskDetail>(model1);
      }
    }
  }


  virtual ~GetTaskResponseBody() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateBody{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
  }


  virtual ~GetTemplateResponseBody() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateResponseBody> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateResponse() = default;
};
class LaunchProductRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  LaunchProductRequestParameters() {}

  explicit LaunchProductRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~LaunchProductRequestParameters() = default;
};
class LaunchProductRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  LaunchProductRequestTags() {}

  explicit LaunchProductRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LaunchProductRequestTags() = default;
};
class LaunchProductRequest : public Darabonba::Model {
public:
  shared_ptr<vector<LaunchProductRequestParameters>> parameters{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> provisionedProductName{};
  shared_ptr<string> stackRegionId{};
  shared_ptr<vector<LaunchProductRequestTags>> tags{};

  LaunchProductRequest() {}

  explicit LaunchProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (provisionedProductName) {
      res["ProvisionedProductName"] = boost::any(*provisionedProductName);
    }
    if (stackRegionId) {
      res["StackRegionId"] = boost::any(*stackRegionId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<LaunchProductRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LaunchProductRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<LaunchProductRequestParameters>>(expect1);
      }
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProvisionedProductName") != m.end() && !m["ProvisionedProductName"].empty()) {
      provisionedProductName = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductName"]));
    }
    if (m.find("StackRegionId") != m.end() && !m["StackRegionId"].empty()) {
      stackRegionId = make_shared<string>(boost::any_cast<string>(m["StackRegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<LaunchProductRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LaunchProductRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<LaunchProductRequestTags>>(expect1);
      }
    }
  }


  virtual ~LaunchProductRequest() = default;
};
class LaunchProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> requestId{};

  LaunchProductResponseBody() {}

  explicit LaunchProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~LaunchProductResponseBody() = default;
};
class LaunchProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LaunchProductResponseBody> body{};

  LaunchProductResponse() {}

  explicit LaunchProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LaunchProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LaunchProductResponseBody>(model1);
      }
    }
  }


  virtual ~LaunchProductResponse() = default;
};
class ListLaunchOptionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> productId{};

  ListLaunchOptionsRequest() {}

  explicit ListLaunchOptionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~ListLaunchOptionsRequest() = default;
};
class ListLaunchOptionsResponseBodyLaunchOptionSummariesConstraintSummaries : public Darabonba::Model {
public:
  shared_ptr<string> constraintType{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> operationTypes{};
  shared_ptr<vector<string>> stackRegions{};

  ListLaunchOptionsResponseBodyLaunchOptionSummariesConstraintSummaries() {}

  explicit ListLaunchOptionsResponseBodyLaunchOptionSummariesConstraintSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraintType) {
      res["ConstraintType"] = boost::any(*constraintType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (operationTypes) {
      res["OperationTypes"] = boost::any(*operationTypes);
    }
    if (stackRegions) {
      res["StackRegions"] = boost::any(*stackRegions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstraintType") != m.end() && !m["ConstraintType"].empty()) {
      constraintType = make_shared<string>(boost::any_cast<string>(m["ConstraintType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OperationTypes") != m.end() && !m["OperationTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperationTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperationTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operationTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackRegions") != m.end() && !m["StackRegions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StackRegions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StackRegions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stackRegions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLaunchOptionsResponseBodyLaunchOptionSummariesConstraintSummaries() = default;
};
class ListLaunchOptionsResponseBodyLaunchOptionSummaries : public Darabonba::Model {
public:
  shared_ptr<vector<ListLaunchOptionsResponseBodyLaunchOptionSummariesConstraintSummaries>> constraintSummaries{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> portfolioName{};

  ListLaunchOptionsResponseBodyLaunchOptionSummaries() {}

  explicit ListLaunchOptionsResponseBodyLaunchOptionSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraintSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*constraintSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConstraintSummaries"] = boost::any(temp1);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (portfolioName) {
      res["PortfolioName"] = boost::any(*portfolioName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstraintSummaries") != m.end() && !m["ConstraintSummaries"].empty()) {
      if (typeid(vector<boost::any>) == m["ConstraintSummaries"].type()) {
        vector<ListLaunchOptionsResponseBodyLaunchOptionSummariesConstraintSummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConstraintSummaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLaunchOptionsResponseBodyLaunchOptionSummariesConstraintSummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        constraintSummaries = make_shared<vector<ListLaunchOptionsResponseBodyLaunchOptionSummariesConstraintSummaries>>(expect1);
      }
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("PortfolioName") != m.end() && !m["PortfolioName"].empty()) {
      portfolioName = make_shared<string>(boost::any_cast<string>(m["PortfolioName"]));
    }
  }


  virtual ~ListLaunchOptionsResponseBodyLaunchOptionSummaries() = default;
};
class ListLaunchOptionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLaunchOptionsResponseBodyLaunchOptionSummaries>> launchOptionSummaries{};
  shared_ptr<string> requestId{};

  ListLaunchOptionsResponseBody() {}

  explicit ListLaunchOptionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (launchOptionSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*launchOptionSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LaunchOptionSummaries"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LaunchOptionSummaries") != m.end() && !m["LaunchOptionSummaries"].empty()) {
      if (typeid(vector<boost::any>) == m["LaunchOptionSummaries"].type()) {
        vector<ListLaunchOptionsResponseBodyLaunchOptionSummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LaunchOptionSummaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLaunchOptionsResponseBodyLaunchOptionSummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        launchOptionSummaries = make_shared<vector<ListLaunchOptionsResponseBodyLaunchOptionSummaries>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListLaunchOptionsResponseBody() = default;
};
class ListLaunchOptionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLaunchOptionsResponseBody> body{};

  ListLaunchOptionsResponse() {}

  explicit ListLaunchOptionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLaunchOptionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLaunchOptionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLaunchOptionsResponse() = default;
};
class ListPortfoliosRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListPortfoliosRequestFilters() {}

  explicit ListPortfoliosRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPortfoliosRequestFilters() = default;
};
class ListPortfoliosRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListPortfoliosRequestFilters>> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productId{};
  shared_ptr<string> scope{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListPortfoliosRequest() {}

  explicit ListPortfoliosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListPortfoliosRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPortfoliosRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListPortfoliosRequestFilters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListPortfoliosRequest() = default;
};
class ListPortfoliosResponseBodyPortfolioDetails : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> portfolioArn{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> portfolioName{};
  shared_ptr<string> providerName{};

  ListPortfoliosResponseBodyPortfolioDetails() {}

  explicit ListPortfoliosResponseBodyPortfolioDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (portfolioArn) {
      res["PortfolioArn"] = boost::any(*portfolioArn);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (portfolioName) {
      res["PortfolioName"] = boost::any(*portfolioName);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
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
    if (m.find("PortfolioArn") != m.end() && !m["PortfolioArn"].empty()) {
      portfolioArn = make_shared<string>(boost::any_cast<string>(m["PortfolioArn"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("PortfolioName") != m.end() && !m["PortfolioName"].empty()) {
      portfolioName = make_shared<string>(boost::any_cast<string>(m["PortfolioName"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~ListPortfoliosResponseBodyPortfolioDetails() = default;
};
class ListPortfoliosResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListPortfoliosResponseBodyPortfolioDetails>> portfolioDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPortfoliosResponseBody() {}

  explicit ListPortfoliosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (portfolioDetails) {
      vector<boost::any> temp1;
      for(auto item1:*portfolioDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortfolioDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PortfolioDetails") != m.end() && !m["PortfolioDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["PortfolioDetails"].type()) {
        vector<ListPortfoliosResponseBodyPortfolioDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortfolioDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPortfoliosResponseBodyPortfolioDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portfolioDetails = make_shared<vector<ListPortfoliosResponseBodyPortfolioDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPortfoliosResponseBody() = default;
};
class ListPortfoliosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPortfoliosResponseBody> body{};

  ListPortfoliosResponse() {}

  explicit ListPortfoliosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPortfoliosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPortfoliosResponseBody>(model1);
      }
    }
  }


  virtual ~ListPortfoliosResponse() = default;
};
class ListPrincipalsRequest : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};

  ListPrincipalsRequest() {}

  explicit ListPrincipalsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
  }


  virtual ~ListPrincipalsRequest() = default;
};
class ListPrincipalsResponseBodyPrincipals : public Darabonba::Model {
public:
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};

  ListPrincipalsResponseBodyPrincipals() {}

  explicit ListPrincipalsResponseBodyPrincipals(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~ListPrincipalsResponseBodyPrincipals() = default;
};
class ListPrincipalsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrincipalsResponseBodyPrincipals>> principals{};
  shared_ptr<string> requestId{};

  ListPrincipalsResponseBody() {}

  explicit ListPrincipalsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (principals) {
      vector<boost::any> temp1;
      for(auto item1:*principals){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Principals"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Principals") != m.end() && !m["Principals"].empty()) {
      if (typeid(vector<boost::any>) == m["Principals"].type()) {
        vector<ListPrincipalsResponseBodyPrincipals> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Principals"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrincipalsResponseBodyPrincipals model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        principals = make_shared<vector<ListPrincipalsResponseBodyPrincipals>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPrincipalsResponseBody() = default;
};
class ListPrincipalsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPrincipalsResponseBody> body{};

  ListPrincipalsResponse() {}

  explicit ListPrincipalsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrincipalsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrincipalsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrincipalsResponse() = default;
};
class ListProductVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> productId{};

  ListProductVersionsRequest() {}

  explicit ListProductVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~ListProductVersionsRequest() = default;
};
class ListProductVersionsResponseBodyProductVersionDetails : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> guidance{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> templateType{};
  shared_ptr<string> templateUrl{};

  ListProductVersionsResponseBodyProductVersionDetails() {}

  explicit ListProductVersionsResponseBodyProductVersionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (guidance) {
      res["Guidance"] = boost::any(*guidance);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (templateUrl) {
      res["TemplateUrl"] = boost::any(*templateUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Guidance") != m.end() && !m["Guidance"].empty()) {
      guidance = make_shared<string>(boost::any_cast<string>(m["Guidance"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TemplateUrl") != m.end() && !m["TemplateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["TemplateUrl"]));
    }
  }


  virtual ~ListProductVersionsResponseBodyProductVersionDetails() = default;
};
class ListProductVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductVersionsResponseBodyProductVersionDetails>> productVersionDetails{};
  shared_ptr<string> requestId{};

  ListProductVersionsResponseBody() {}

  explicit ListProductVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionDetails) {
      vector<boost::any> temp1;
      for(auto item1:*productVersionDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductVersionDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductVersionDetails") != m.end() && !m["ProductVersionDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductVersionDetails"].type()) {
        vector<ListProductVersionsResponseBodyProductVersionDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductVersionDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductVersionsResponseBodyProductVersionDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productVersionDetails = make_shared<vector<ListProductVersionsResponseBodyProductVersionDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListProductVersionsResponseBody() = default;
};
class ListProductVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductVersionsResponseBody> body{};

  ListProductVersionsResponse() {}

  explicit ListProductVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductVersionsResponse() = default;
};
class ListProductsAsAdminRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProductsAsAdminRequestFilters() {}

  explicit ListProductsAsAdminRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListProductsAsAdminRequestFilters() = default;
};
class ListProductsAsAdminRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductsAsAdminRequestFilters>> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> scope{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListProductsAsAdminRequest() {}

  explicit ListProductsAsAdminRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListProductsAsAdminRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsAsAdminRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListProductsAsAdminRequestFilters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListProductsAsAdminRequest() = default;
};
class ListProductsAsAdminResponseBodyProductDetails : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> productArn{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> providerName{};

  ListProductsAsAdminResponseBodyProductDetails() {}

  explicit ListProductsAsAdminResponseBodyProductDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productArn) {
      res["ProductArn"] = boost::any(*productArn);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
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
    if (m.find("ProductArn") != m.end() && !m["ProductArn"].empty()) {
      productArn = make_shared<string>(boost::any_cast<string>(m["ProductArn"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~ListProductsAsAdminResponseBodyProductDetails() = default;
};
class ListProductsAsAdminResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListProductsAsAdminResponseBodyProductDetails>> productDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProductsAsAdminResponseBody() {}

  explicit ListProductsAsAdminResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productDetails) {
      vector<boost::any> temp1;
      for(auto item1:*productDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductDetails") != m.end() && !m["ProductDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductDetails"].type()) {
        vector<ListProductsAsAdminResponseBodyProductDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsAsAdminResponseBodyProductDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productDetails = make_shared<vector<ListProductsAsAdminResponseBodyProductDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProductsAsAdminResponseBody() = default;
};
class ListProductsAsAdminResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductsAsAdminResponseBody> body{};

  ListProductsAsAdminResponse() {}

  explicit ListProductsAsAdminResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductsAsAdminResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductsAsAdminResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductsAsAdminResponse() = default;
};
class ListProductsAsEndUserRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProductsAsEndUserRequestFilters() {}

  explicit ListProductsAsEndUserRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListProductsAsEndUserRequestFilters() = default;
};
class ListProductsAsEndUserRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductsAsEndUserRequestFilters>> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListProductsAsEndUserRequest() {}

  explicit ListProductsAsEndUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListProductsAsEndUserRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsAsEndUserRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListProductsAsEndUserRequestFilters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListProductsAsEndUserRequest() = default;
};
class ListProductsAsEndUserResponseBodyProductSummaries : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> hasDefaultLaunchOption{};
  shared_ptr<string> productArn{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> providerName{};

  ListProductsAsEndUserResponseBodyProductSummaries() {}

  explicit ListProductsAsEndUserResponseBodyProductSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hasDefaultLaunchOption) {
      res["HasDefaultLaunchOption"] = boost::any(*hasDefaultLaunchOption);
    }
    if (productArn) {
      res["ProductArn"] = boost::any(*productArn);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
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
    if (m.find("HasDefaultLaunchOption") != m.end() && !m["HasDefaultLaunchOption"].empty()) {
      hasDefaultLaunchOption = make_shared<bool>(boost::any_cast<bool>(m["HasDefaultLaunchOption"]));
    }
    if (m.find("ProductArn") != m.end() && !m["ProductArn"].empty()) {
      productArn = make_shared<string>(boost::any_cast<string>(m["ProductArn"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~ListProductsAsEndUserResponseBodyProductSummaries() = default;
};
class ListProductsAsEndUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListProductsAsEndUserResponseBodyProductSummaries>> productSummaries{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProductsAsEndUserResponseBody() {}

  explicit ListProductsAsEndUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*productSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductSummaries"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductSummaries") != m.end() && !m["ProductSummaries"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductSummaries"].type()) {
        vector<ListProductsAsEndUserResponseBodyProductSummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductSummaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsAsEndUserResponseBodyProductSummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productSummaries = make_shared<vector<ListProductsAsEndUserResponseBodyProductSummaries>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProductsAsEndUserResponseBody() = default;
};
class ListProductsAsEndUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductsAsEndUserResponseBody> body{};

  ListProductsAsEndUserResponse() {}

  explicit ListProductsAsEndUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductsAsEndUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductsAsEndUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductsAsEndUserResponse() = default;
};
class ListProvisionedProductPlanApproversRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProvisionedProductPlanApproversRequestFilters() {}

  explicit ListProvisionedProductPlanApproversRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListProvisionedProductPlanApproversRequestFilters() = default;
};
class ListProvisionedProductPlanApproversRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessLevelFilter{};
  shared_ptr<string> approvalFilter{};
  shared_ptr<vector<ListProvisionedProductPlanApproversRequestFilters>> filters{};

  ListProvisionedProductPlanApproversRequest() {}

  explicit ListProvisionedProductPlanApproversRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevelFilter) {
      res["AccessLevelFilter"] = boost::any(*accessLevelFilter);
    }
    if (approvalFilter) {
      res["ApprovalFilter"] = boost::any(*approvalFilter);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLevelFilter") != m.end() && !m["AccessLevelFilter"].empty()) {
      accessLevelFilter = make_shared<string>(boost::any_cast<string>(m["AccessLevelFilter"]));
    }
    if (m.find("ApprovalFilter") != m.end() && !m["ApprovalFilter"].empty()) {
      approvalFilter = make_shared<string>(boost::any_cast<string>(m["ApprovalFilter"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListProvisionedProductPlanApproversRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductPlanApproversRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListProvisionedProductPlanApproversRequestFilters>>(expect1);
      }
    }
  }


  virtual ~ListProvisionedProductPlanApproversRequest() = default;
};
class ListProvisionedProductPlanApproversResponseBodyApprovers : public Darabonba::Model {
public:
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};

  ListProvisionedProductPlanApproversResponseBodyApprovers() {}

  explicit ListProvisionedProductPlanApproversResponseBodyApprovers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~ListProvisionedProductPlanApproversResponseBodyApprovers() = default;
};
class ListProvisionedProductPlanApproversResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProvisionedProductPlanApproversResponseBodyApprovers>> approvers{};
  shared_ptr<string> requestId{};

  ListProvisionedProductPlanApproversResponseBody() {}

  explicit ListProvisionedProductPlanApproversResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvers) {
      vector<boost::any> temp1;
      for(auto item1:*approvers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Approvers"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Approvers") != m.end() && !m["Approvers"].empty()) {
      if (typeid(vector<boost::any>) == m["Approvers"].type()) {
        vector<ListProvisionedProductPlanApproversResponseBodyApprovers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Approvers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductPlanApproversResponseBodyApprovers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approvers = make_shared<vector<ListProvisionedProductPlanApproversResponseBodyApprovers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListProvisionedProductPlanApproversResponseBody() = default;
};
class ListProvisionedProductPlanApproversResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProvisionedProductPlanApproversResponseBody> body{};

  ListProvisionedProductPlanApproversResponse() {}

  explicit ListProvisionedProductPlanApproversResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProvisionedProductPlanApproversResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProvisionedProductPlanApproversResponseBody>(model1);
      }
    }
  }


  virtual ~ListProvisionedProductPlanApproversResponse() = default;
};
class ListProvisionedProductPlansRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProvisionedProductPlansRequestFilters() {}

  explicit ListProvisionedProductPlansRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListProvisionedProductPlansRequestFilters() = default;
};
class ListProvisionedProductPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessLevelFilter{};
  shared_ptr<string> approvalFilter{};
  shared_ptr<vector<ListProvisionedProductPlansRequestFilters>> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListProvisionedProductPlansRequest() {}

  explicit ListProvisionedProductPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevelFilter) {
      res["AccessLevelFilter"] = boost::any(*accessLevelFilter);
    }
    if (approvalFilter) {
      res["ApprovalFilter"] = boost::any(*approvalFilter);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLevelFilter") != m.end() && !m["AccessLevelFilter"].empty()) {
      accessLevelFilter = make_shared<string>(boost::any_cast<string>(m["AccessLevelFilter"]));
    }
    if (m.find("ApprovalFilter") != m.end() && !m["ApprovalFilter"].empty()) {
      approvalFilter = make_shared<string>(boost::any_cast<string>(m["ApprovalFilter"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListProvisionedProductPlansRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductPlansRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListProvisionedProductPlansRequestFilters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListProvisionedProductPlansRequest() = default;
};
class ListProvisionedProductPlansResponseBodyPlanDetailsAssignedApprovers : public Darabonba::Model {
public:
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};

  ListProvisionedProductPlansResponseBodyPlanDetailsAssignedApprovers() {}

  explicit ListProvisionedProductPlansResponseBodyPlanDetailsAssignedApprovers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~ListProvisionedProductPlansResponseBodyPlanDetailsAssignedApprovers() = default;
};
class ListProvisionedProductPlansResponseBodyPlanDetailsParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  ListProvisionedProductPlansResponseBodyPlanDetailsParameters() {}

  explicit ListProvisionedProductPlansResponseBodyPlanDetailsParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~ListProvisionedProductPlansResponseBodyPlanDetailsParameters() = default;
};
class ListProvisionedProductPlansResponseBodyPlanDetailsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProvisionedProductPlansResponseBodyPlanDetailsTags() {}

  explicit ListProvisionedProductPlansResponseBodyPlanDetailsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListProvisionedProductPlansResponseBodyPlanDetailsTags() = default;
};
class ListProvisionedProductPlansResponseBodyPlanDetails : public Darabonba::Model {
public:
  shared_ptr<vector<ListProvisionedProductPlansResponseBodyPlanDetailsAssignedApprovers>> assignedApprovers{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ownerPrincipalId{};
  shared_ptr<string> ownerPrincipalName{};
  shared_ptr<string> ownerPrincipalType{};
  shared_ptr<vector<ListProvisionedProductPlansResponseBodyPlanDetailsParameters>> parameters{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> planType{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> provisionedProductName{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackRegionId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<vector<ListProvisionedProductPlansResponseBodyPlanDetailsTags>> tags{};
  shared_ptr<string> uid{};
  shared_ptr<string> updateTime{};

  ListProvisionedProductPlansResponseBodyPlanDetails() {}

  explicit ListProvisionedProductPlansResponseBodyPlanDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignedApprovers) {
      vector<boost::any> temp1;
      for(auto item1:*assignedApprovers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssignedApprovers"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ownerPrincipalId) {
      res["OwnerPrincipalId"] = boost::any(*ownerPrincipalId);
    }
    if (ownerPrincipalName) {
      res["OwnerPrincipalName"] = boost::any(*ownerPrincipalName);
    }
    if (ownerPrincipalType) {
      res["OwnerPrincipalType"] = boost::any(*ownerPrincipalType);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (planType) {
      res["PlanType"] = boost::any(*planType);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (provisionedProductName) {
      res["ProvisionedProductName"] = boost::any(*provisionedProductName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackRegionId) {
      res["StackRegionId"] = boost::any(*stackRegionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssignedApprovers") != m.end() && !m["AssignedApprovers"].empty()) {
      if (typeid(vector<boost::any>) == m["AssignedApprovers"].type()) {
        vector<ListProvisionedProductPlansResponseBodyPlanDetailsAssignedApprovers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssignedApprovers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductPlansResponseBodyPlanDetailsAssignedApprovers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assignedApprovers = make_shared<vector<ListProvisionedProductPlansResponseBodyPlanDetailsAssignedApprovers>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("OwnerPrincipalId") != m.end() && !m["OwnerPrincipalId"].empty()) {
      ownerPrincipalId = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalId"]));
    }
    if (m.find("OwnerPrincipalName") != m.end() && !m["OwnerPrincipalName"].empty()) {
      ownerPrincipalName = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalName"]));
    }
    if (m.find("OwnerPrincipalType") != m.end() && !m["OwnerPrincipalType"].empty()) {
      ownerPrincipalType = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalType"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<ListProvisionedProductPlansResponseBodyPlanDetailsParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductPlansResponseBodyPlanDetailsParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<ListProvisionedProductPlansResponseBodyPlanDetailsParameters>>(expect1);
      }
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("PlanType") != m.end() && !m["PlanType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["PlanType"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("ProvisionedProductName") != m.end() && !m["ProvisionedProductName"].empty()) {
      provisionedProductName = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackRegionId") != m.end() && !m["StackRegionId"].empty()) {
      stackRegionId = make_shared<string>(boost::any_cast<string>(m["StackRegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListProvisionedProductPlansResponseBodyPlanDetailsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductPlansResponseBodyPlanDetailsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListProvisionedProductPlansResponseBodyPlanDetailsTags>>(expect1);
      }
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListProvisionedProductPlansResponseBodyPlanDetails() = default;
};
class ListProvisionedProductPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListProvisionedProductPlansResponseBodyPlanDetails>> planDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProvisionedProductPlansResponseBody() {}

  explicit ListProvisionedProductPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (planDetails) {
      vector<boost::any> temp1;
      for(auto item1:*planDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlanDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlanDetails") != m.end() && !m["PlanDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["PlanDetails"].type()) {
        vector<ListProvisionedProductPlansResponseBodyPlanDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlanDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductPlansResponseBodyPlanDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        planDetails = make_shared<vector<ListProvisionedProductPlansResponseBodyPlanDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProvisionedProductPlansResponseBody() = default;
};
class ListProvisionedProductPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProvisionedProductPlansResponseBody> body{};

  ListProvisionedProductPlansResponse() {}

  explicit ListProvisionedProductPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProvisionedProductPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProvisionedProductPlansResponseBody>(model1);
      }
    }
  }


  virtual ~ListProvisionedProductPlansResponse() = default;
};
class ListProvisionedProductsRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProvisionedProductsRequestFilters() {}

  explicit ListProvisionedProductsRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListProvisionedProductsRequestFilters() = default;
};
class ListProvisionedProductsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessLevelFilter{};
  shared_ptr<vector<ListProvisionedProductsRequestFilters>> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListProvisionedProductsRequest() {}

  explicit ListProvisionedProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevelFilter) {
      res["AccessLevelFilter"] = boost::any(*accessLevelFilter);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLevelFilter") != m.end() && !m["AccessLevelFilter"].empty()) {
      accessLevelFilter = make_shared<string>(boost::any_cast<string>(m["AccessLevelFilter"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListProvisionedProductsRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductsRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListProvisionedProductsRequestFilters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListProvisionedProductsRequest() = default;
};
class ListProvisionedProductsResponseBodyProvisionedProductDetails : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> lastProvisioningTaskId{};
  shared_ptr<string> lastSuccessfulProvisioningTaskId{};
  shared_ptr<string> lastTaskId{};
  shared_ptr<string> ownerPrincipalId{};
  shared_ptr<string> ownerPrincipalType{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> provisionedProductArn{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> provisionedProductName{};
  shared_ptr<string> provisionedProductType{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackRegionId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  ListProvisionedProductsResponseBodyProvisionedProductDetails() {}

  explicit ListProvisionedProductsResponseBodyProvisionedProductDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastProvisioningTaskId) {
      res["LastProvisioningTaskId"] = boost::any(*lastProvisioningTaskId);
    }
    if (lastSuccessfulProvisioningTaskId) {
      res["LastSuccessfulProvisioningTaskId"] = boost::any(*lastSuccessfulProvisioningTaskId);
    }
    if (lastTaskId) {
      res["LastTaskId"] = boost::any(*lastTaskId);
    }
    if (ownerPrincipalId) {
      res["OwnerPrincipalId"] = boost::any(*ownerPrincipalId);
    }
    if (ownerPrincipalType) {
      res["OwnerPrincipalType"] = boost::any(*ownerPrincipalType);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (provisionedProductArn) {
      res["ProvisionedProductArn"] = boost::any(*provisionedProductArn);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (provisionedProductName) {
      res["ProvisionedProductName"] = boost::any(*provisionedProductName);
    }
    if (provisionedProductType) {
      res["ProvisionedProductType"] = boost::any(*provisionedProductType);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackRegionId) {
      res["StackRegionId"] = boost::any(*stackRegionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LastProvisioningTaskId") != m.end() && !m["LastProvisioningTaskId"].empty()) {
      lastProvisioningTaskId = make_shared<string>(boost::any_cast<string>(m["LastProvisioningTaskId"]));
    }
    if (m.find("LastSuccessfulProvisioningTaskId") != m.end() && !m["LastSuccessfulProvisioningTaskId"].empty()) {
      lastSuccessfulProvisioningTaskId = make_shared<string>(boost::any_cast<string>(m["LastSuccessfulProvisioningTaskId"]));
    }
    if (m.find("LastTaskId") != m.end() && !m["LastTaskId"].empty()) {
      lastTaskId = make_shared<string>(boost::any_cast<string>(m["LastTaskId"]));
    }
    if (m.find("OwnerPrincipalId") != m.end() && !m["OwnerPrincipalId"].empty()) {
      ownerPrincipalId = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalId"]));
    }
    if (m.find("OwnerPrincipalType") != m.end() && !m["OwnerPrincipalType"].empty()) {
      ownerPrincipalType = make_shared<string>(boost::any_cast<string>(m["OwnerPrincipalType"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("ProvisionedProductArn") != m.end() && !m["ProvisionedProductArn"].empty()) {
      provisionedProductArn = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductArn"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("ProvisionedProductName") != m.end() && !m["ProvisionedProductName"].empty()) {
      provisionedProductName = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductName"]));
    }
    if (m.find("ProvisionedProductType") != m.end() && !m["ProvisionedProductType"].empty()) {
      provisionedProductType = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductType"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackRegionId") != m.end() && !m["StackRegionId"].empty()) {
      stackRegionId = make_shared<string>(boost::any_cast<string>(m["StackRegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~ListProvisionedProductsResponseBodyProvisionedProductDetails() = default;
};
class ListProvisionedProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListProvisionedProductsResponseBodyProvisionedProductDetails>> provisionedProductDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProvisionedProductsResponseBody() {}

  explicit ListProvisionedProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (provisionedProductDetails) {
      vector<boost::any> temp1;
      for(auto item1:*provisionedProductDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProvisionedProductDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProvisionedProductDetails") != m.end() && !m["ProvisionedProductDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ProvisionedProductDetails"].type()) {
        vector<ListProvisionedProductsResponseBodyProvisionedProductDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProvisionedProductDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionedProductsResponseBodyProvisionedProductDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        provisionedProductDetails = make_shared<vector<ListProvisionedProductsResponseBodyProvisionedProductDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProvisionedProductsResponseBody() = default;
};
class ListProvisionedProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProvisionedProductsResponseBody> body{};

  ListProvisionedProductsResponse() {}

  explicit ListProvisionedProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProvisionedProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProvisionedProductsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProvisionedProductsResponse() = default;
};
class ListRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegions() {}

  explicit ListRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListRegionsResponseBodyRegions() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<ListRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListResourcesForTagOptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagOptionId{};

  ListResourcesForTagOptionRequest() {}

  explicit ListResourcesForTagOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
  }


  virtual ~ListResourcesForTagOptionRequest() = default;
};
class ListResourcesForTagOptionResponseBodyResourceDetails : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};

  ListResourcesForTagOptionResponseBodyResourceDetails() {}

  explicit ListResourcesForTagOptionResponseBodyResourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
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
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
  }


  virtual ~ListResourcesForTagOptionResponseBodyResourceDetails() = default;
};
class ListResourcesForTagOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourcesForTagOptionResponseBodyResourceDetails>> resourceDetails{};
  shared_ptr<long> totalCount{};

  ListResourcesForTagOptionResponseBody() {}

  explicit ListResourcesForTagOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*resourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceDetails"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDetails") != m.end() && !m["ResourceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceDetails"].type()) {
        vector<ListResourcesForTagOptionResponseBodyResourceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesForTagOptionResponseBodyResourceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceDetails = make_shared<vector<ListResourcesForTagOptionResponseBodyResourceDetails>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcesForTagOptionResponseBody() = default;
};
class ListResourcesForTagOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesForTagOptionResponseBody> body{};

  ListResourcesForTagOptionResponse() {}

  explicit ListResourcesForTagOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesForTagOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesForTagOptionResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesForTagOptionResponse() = default;
};
class ListTagOptionsRequestFilters : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> fullTextSearch{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagOptionsRequestFilters() {}

  explicit ListTagOptionsRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (fullTextSearch) {
      res["FullTextSearch"] = boost::any(*fullTextSearch);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("FullTextSearch") != m.end() && !m["FullTextSearch"].empty()) {
      fullTextSearch = make_shared<string>(boost::any_cast<string>(m["FullTextSearch"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagOptionsRequestFilters() = default;
};
class ListTagOptionsRequest : public Darabonba::Model {
public:
  shared_ptr<ListTagOptionsRequestFilters> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListTagOptionsRequest() {}

  explicit ListTagOptionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      res["Filters"] = filters ? boost::any(filters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filters"].type()) {
        ListTagOptionsRequestFilters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filters"]));
        filters = make_shared<ListTagOptionsRequestFilters>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListTagOptionsRequest() = default;
};
class ListTagOptionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> filtersShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListTagOptionsShrinkRequest() {}

  explicit ListTagOptionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filtersShrink) {
      res["Filters"] = boost::any(*filtersShrink);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filtersShrink = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListTagOptionsShrinkRequest() = default;
};
class ListTagOptionsResponseBodyTagOptionDetails : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> key{};
  shared_ptr<string> owner{};
  shared_ptr<string> tagOptionId{};
  shared_ptr<string> value{};

  ListTagOptionsResponseBodyTagOptionDetails() {}

  explicit ListTagOptionsResponseBodyTagOptionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagOptionsResponseBodyTagOptionDetails() = default;
};
class ListTagOptionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagOptionsResponseBodyTagOptionDetails>> tagOptionDetails{};
  shared_ptr<long> totalCount{};

  ListTagOptionsResponseBody() {}

  explicit ListTagOptionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagOptionDetails) {
      vector<boost::any> temp1;
      for(auto item1:*tagOptionDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagOptionDetails"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagOptionDetails") != m.end() && !m["TagOptionDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["TagOptionDetails"].type()) {
        vector<ListTagOptionsResponseBodyTagOptionDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagOptionDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagOptionsResponseBodyTagOptionDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagOptionDetails = make_shared<vector<ListTagOptionsResponseBodyTagOptionDetails>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTagOptionsResponseBody() = default;
};
class ListTagOptionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagOptionsResponseBody> body{};

  ListTagOptionsResponse() {}

  explicit ListTagOptionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagOptionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagOptionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagOptionsResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksResponseBodyTaskDetailsLogTerraformLogs : public Darabonba::Model {
public:
  shared_ptr<string> command{};
  shared_ptr<string> content{};
  shared_ptr<string> stream{};

  ListTasksResponseBodyTaskDetailsLogTerraformLogs() {}

  explicit ListTasksResponseBodyTaskDetailsLogTerraformLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (stream) {
      res["Stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Stream") != m.end() && !m["Stream"].empty()) {
      stream = make_shared<string>(boost::any_cast<string>(m["Stream"]));
    }
  }


  virtual ~ListTasksResponseBodyTaskDetailsLogTerraformLogs() = default;
};
class ListTasksResponseBodyTaskDetailsLog : public Darabonba::Model {
public:
  shared_ptr<vector<ListTasksResponseBodyTaskDetailsLogTerraformLogs>> terraformLogs{};

  ListTasksResponseBodyTaskDetailsLog() {}

  explicit ListTasksResponseBodyTaskDetailsLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (terraformLogs) {
      vector<boost::any> temp1;
      for(auto item1:*terraformLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TerraformLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TerraformLogs") != m.end() && !m["TerraformLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["TerraformLogs"].type()) {
        vector<ListTasksResponseBodyTaskDetailsLogTerraformLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TerraformLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTaskDetailsLogTerraformLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        terraformLogs = make_shared<vector<ListTasksResponseBodyTaskDetailsLogTerraformLogs>>(expect1);
      }
    }
  }


  virtual ~ListTasksResponseBodyTaskDetailsLog() = default;
};
class ListTasksResponseBodyTaskDetailsOutputs : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> outputKey{};
  shared_ptr<string> outputValue{};

  ListTasksResponseBodyTaskDetailsOutputs() {}

  explicit ListTasksResponseBodyTaskDetailsOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (outputKey) {
      res["OutputKey"] = boost::any(*outputKey);
    }
    if (outputValue) {
      res["OutputValue"] = boost::any(*outputValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OutputKey") != m.end() && !m["OutputKey"].empty()) {
      outputKey = make_shared<string>(boost::any_cast<string>(m["OutputKey"]));
    }
    if (m.find("OutputValue") != m.end() && !m["OutputValue"].empty()) {
      outputValue = make_shared<string>(boost::any_cast<string>(m["OutputValue"]));
    }
  }


  virtual ~ListTasksResponseBodyTaskDetailsOutputs() = default;
};
class ListTasksResponseBodyTaskDetailsParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  ListTasksResponseBodyTaskDetailsParameters() {}

  explicit ListTasksResponseBodyTaskDetailsParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~ListTasksResponseBodyTaskDetailsParameters() = default;
};
class ListTasksResponseBodyTaskDetails : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<ListTasksResponseBodyTaskDetailsLog> log{};
  shared_ptr<vector<ListTasksResponseBodyTaskDetailsOutputs>> outputs{};
  shared_ptr<vector<ListTasksResponseBodyTaskDetailsParameters>> parameters{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> productVersionName{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> provisionedProductName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};
  shared_ptr<string> updateTime{};

  ListTasksResponseBodyTaskDetails() {}

  explicit ListTasksResponseBodyTaskDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (log) {
      res["Log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputs) {
      vector<boost::any> temp1;
      for(auto item1:*outputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outputs"] = boost::any(temp1);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (provisionedProductName) {
      res["ProvisionedProductName"] = boost::any(*provisionedProductName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("Log") != m.end() && !m["Log"].empty()) {
      if (typeid(map<string, boost::any>) == m["Log"].type()) {
        ListTasksResponseBodyTaskDetailsLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Log"]));
        log = make_shared<ListTasksResponseBodyTaskDetailsLog>(model1);
      }
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["Outputs"].type()) {
        vector<ListTasksResponseBodyTaskDetailsOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTaskDetailsOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<ListTasksResponseBodyTaskDetailsOutputs>>(expect1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<ListTasksResponseBodyTaskDetailsParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTaskDetailsParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<ListTasksResponseBodyTaskDetailsParameters>>(expect1);
      }
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("ProvisionedProductName") != m.end() && !m["ProvisionedProductName"].empty()) {
      provisionedProductName = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListTasksResponseBodyTaskDetails() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTasksResponseBodyTaskDetails>> taskDetails{};
  shared_ptr<long> totalCount{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskDetails) {
      vector<boost::any> temp1;
      for(auto item1:*taskDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskDetails"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskDetails") != m.end() && !m["TaskDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskDetails"].type()) {
        vector<ListTasksResponseBodyTaskDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTaskDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskDetails = make_shared<vector<ListTasksResponseBodyTaskDetails>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class TerminateProvisionedProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> provisionedProductId{};

  TerminateProvisionedProductRequest() {}

  explicit TerminateProvisionedProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
  }


  virtual ~TerminateProvisionedProductRequest() = default;
};
class TerminateProvisionedProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TerminateProvisionedProductResponseBody() {}

  explicit TerminateProvisionedProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TerminateProvisionedProductResponseBody() = default;
};
class TerminateProvisionedProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TerminateProvisionedProductResponseBody> body{};

  TerminateProvisionedProductResponse() {}

  explicit TerminateProvisionedProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TerminateProvisionedProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TerminateProvisionedProductResponseBody>(model1);
      }
    }
  }


  virtual ~TerminateProvisionedProductResponse() = default;
};
class UpdateConstraintRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> constraintId{};
  shared_ptr<string> description{};

  UpdateConstraintRequest() {}

  explicit UpdateConstraintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (constraintId) {
      res["ConstraintId"] = boost::any(*constraintId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ConstraintId") != m.end() && !m["ConstraintId"].empty()) {
      constraintId = make_shared<string>(boost::any_cast<string>(m["ConstraintId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~UpdateConstraintRequest() = default;
};
class UpdateConstraintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> constraintId{};
  shared_ptr<string> requestId{};

  UpdateConstraintResponseBody() {}

  explicit UpdateConstraintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraintId) {
      res["ConstraintId"] = boost::any(*constraintId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstraintId") != m.end() && !m["ConstraintId"].empty()) {
      constraintId = make_shared<string>(boost::any_cast<string>(m["ConstraintId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateConstraintResponseBody() = default;
};
class UpdateConstraintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConstraintResponseBody> body{};

  UpdateConstraintResponse() {}

  explicit UpdateConstraintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateConstraintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConstraintResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConstraintResponse() = default;
};
class UpdatePortfolioRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> portfolioName{};
  shared_ptr<string> providerName{};

  UpdatePortfolioRequest() {}

  explicit UpdatePortfolioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (portfolioName) {
      res["PortfolioName"] = boost::any(*portfolioName);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("PortfolioName") != m.end() && !m["PortfolioName"].empty()) {
      portfolioName = make_shared<string>(boost::any_cast<string>(m["PortfolioName"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~UpdatePortfolioRequest() = default;
};
class UpdatePortfolioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> portfolioId{};
  shared_ptr<string> requestId{};

  UpdatePortfolioResponseBody() {}

  explicit UpdatePortfolioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePortfolioResponseBody() = default;
};
class UpdatePortfolioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePortfolioResponseBody> body{};

  UpdatePortfolioResponse() {}

  explicit UpdatePortfolioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePortfolioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePortfolioResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePortfolioResponse() = default;
};
class UpdateProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> providerName{};

  UpdateProductRequest() {}

  explicit UpdateProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
  }


  virtual ~UpdateProductRequest() = default;
};
class UpdateProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> productId{};
  shared_ptr<string> requestId{};

  UpdateProductResponseBody() {}

  explicit UpdateProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateProductResponseBody() = default;
};
class UpdateProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProductResponseBody> body{};

  UpdateProductResponse() {}

  explicit UpdateProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProductResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProductResponse() = default;
};
class UpdateProductVersionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<string> guidance{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> productVersionName{};

  UpdateProductVersionRequest() {}

  explicit UpdateProductVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (guidance) {
      res["Guidance"] = boost::any(*guidance);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (productVersionName) {
      res["ProductVersionName"] = boost::any(*productVersionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Guidance") != m.end() && !m["Guidance"].empty()) {
      guidance = make_shared<string>(boost::any_cast<string>(m["Guidance"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProductVersionName") != m.end() && !m["ProductVersionName"].empty()) {
      productVersionName = make_shared<string>(boost::any_cast<string>(m["ProductVersionName"]));
    }
  }


  virtual ~UpdateProductVersionRequest() = default;
};
class UpdateProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> productVersionId{};
  shared_ptr<string> requestId{};

  UpdateProductVersionResponseBody() {}

  explicit UpdateProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateProductVersionResponseBody() = default;
};
class UpdateProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProductVersionResponseBody> body{};

  UpdateProductVersionResponse() {}

  explicit UpdateProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProductVersionResponse() = default;
};
class UpdateProvisionedProductRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  UpdateProvisionedProductRequestParameters() {}

  explicit UpdateProvisionedProductRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateProvisionedProductRequestParameters() = default;
};
class UpdateProvisionedProductRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateProvisionedProductRequestTags() {}

  explicit UpdateProvisionedProductRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProvisionedProductRequestTags() = default;
};
class UpdateProvisionedProductRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateProvisionedProductRequestParameters>> parameters{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<vector<UpdateProvisionedProductRequestTags>> tags{};

  UpdateProvisionedProductRequest() {}

  explicit UpdateProvisionedProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<UpdateProvisionedProductRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProvisionedProductRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<UpdateProvisionedProductRequestParameters>>(expect1);
      }
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<UpdateProvisionedProductRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProvisionedProductRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<UpdateProvisionedProductRequestTags>>(expect1);
      }
    }
  }


  virtual ~UpdateProvisionedProductRequest() = default;
};
class UpdateProvisionedProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> requestId{};

  UpdateProvisionedProductResponseBody() {}

  explicit UpdateProvisionedProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateProvisionedProductResponseBody() = default;
};
class UpdateProvisionedProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProvisionedProductResponseBody> body{};

  UpdateProvisionedProductResponse() {}

  explicit UpdateProvisionedProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProvisionedProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProvisionedProductResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProvisionedProductResponse() = default;
};
class UpdateProvisionedProductPlanRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  UpdateProvisionedProductPlanRequestParameters() {}

  explicit UpdateProvisionedProductPlanRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateProvisionedProductPlanRequestParameters() = default;
};
class UpdateProvisionedProductPlanRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateProvisionedProductPlanRequestTags() {}

  explicit UpdateProvisionedProductPlanRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProvisionedProductPlanRequestTags() = default;
};
class UpdateProvisionedProductPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateProvisionedProductPlanRequestParameters>> parameters{};
  shared_ptr<string> planId{};
  shared_ptr<string> portfolioId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productVersionId{};
  shared_ptr<vector<UpdateProvisionedProductPlanRequestTags>> tags{};

  UpdateProvisionedProductPlanRequest() {}

  explicit UpdateProvisionedProductPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (portfolioId) {
      res["PortfolioId"] = boost::any(*portfolioId);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productVersionId) {
      res["ProductVersionId"] = boost::any(*productVersionId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<UpdateProvisionedProductPlanRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProvisionedProductPlanRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<UpdateProvisionedProductPlanRequestParameters>>(expect1);
      }
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PortfolioId") != m.end() && !m["PortfolioId"].empty()) {
      portfolioId = make_shared<string>(boost::any_cast<string>(m["PortfolioId"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductVersionId") != m.end() && !m["ProductVersionId"].empty()) {
      productVersionId = make_shared<string>(boost::any_cast<string>(m["ProductVersionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<UpdateProvisionedProductPlanRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProvisionedProductPlanRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<UpdateProvisionedProductPlanRequestTags>>(expect1);
      }
    }
  }


  virtual ~UpdateProvisionedProductPlanRequest() = default;
};
class UpdateProvisionedProductPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> provisionedProductId{};
  shared_ptr<string> requestId{};

  UpdateProvisionedProductPlanResponseBody() {}

  explicit UpdateProvisionedProductPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (provisionedProductId) {
      res["ProvisionedProductId"] = boost::any(*provisionedProductId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("ProvisionedProductId") != m.end() && !m["ProvisionedProductId"].empty()) {
      provisionedProductId = make_shared<string>(boost::any_cast<string>(m["ProvisionedProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateProvisionedProductPlanResponseBody() = default;
};
class UpdateProvisionedProductPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProvisionedProductPlanResponseBody> body{};

  UpdateProvisionedProductPlanResponse() {}

  explicit UpdateProvisionedProductPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProvisionedProductPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProvisionedProductPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProvisionedProductPlanResponse() = default;
};
class UpdateTagOptionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> tagOptionId{};
  shared_ptr<string> value{};

  UpdateTagOptionRequest() {}

  explicit UpdateTagOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateTagOptionRequest() = default;
};
class UpdateTagOptionResponseBodyTagOptionDetail : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> key{};
  shared_ptr<string> owner{};
  shared_ptr<string> tagOptionId{};
  shared_ptr<string> value{};

  UpdateTagOptionResponseBodyTagOptionDetail() {}

  explicit UpdateTagOptionResponseBodyTagOptionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (tagOptionId) {
      res["TagOptionId"] = boost::any(*tagOptionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("TagOptionId") != m.end() && !m["TagOptionId"].empty()) {
      tagOptionId = make_shared<string>(boost::any_cast<string>(m["TagOptionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateTagOptionResponseBodyTagOptionDetail() = default;
};
class UpdateTagOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateTagOptionResponseBodyTagOptionDetail> tagOptionDetail{};

  UpdateTagOptionResponseBody() {}

  explicit UpdateTagOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagOptionDetail) {
      res["TagOptionDetail"] = tagOptionDetail ? boost::any(tagOptionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagOptionDetail") != m.end() && !m["TagOptionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagOptionDetail"].type()) {
        UpdateTagOptionResponseBodyTagOptionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagOptionDetail"]));
        tagOptionDetail = make_shared<UpdateTagOptionResponseBodyTagOptionDetail>(model1);
      }
    }
  }


  virtual ~UpdateTagOptionResponseBody() = default;
};
class UpdateTagOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTagOptionResponseBody> body{};

  UpdateTagOptionResponse() {}

  explicit UpdateTagOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTagOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTagOptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTagOptionResponse() = default;
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
  ApproveProvisionedProductPlanResponse approveProvisionedProductPlanWithOptions(shared_ptr<ApproveProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApproveProvisionedProductPlanResponse approveProvisionedProductPlan(shared_ptr<ApproveProvisionedProductPlanRequest> request);
  AssociatePrincipalWithPortfolioResponse associatePrincipalWithPortfolioWithOptions(shared_ptr<AssociatePrincipalWithPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociatePrincipalWithPortfolioResponse associatePrincipalWithPortfolio(shared_ptr<AssociatePrincipalWithPortfolioRequest> request);
  AssociateProductWithPortfolioResponse associateProductWithPortfolioWithOptions(shared_ptr<AssociateProductWithPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateProductWithPortfolioResponse associateProductWithPortfolio(shared_ptr<AssociateProductWithPortfolioRequest> request);
  AssociateTagOptionWithResourceResponse associateTagOptionWithResourceWithOptions(shared_ptr<AssociateTagOptionWithResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateTagOptionWithResourceResponse associateTagOptionWithResource(shared_ptr<AssociateTagOptionWithResourceRequest> request);
  CancelProvisionedProductPlanResponse cancelProvisionedProductPlanWithOptions(shared_ptr<CancelProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelProvisionedProductPlanResponse cancelProvisionedProductPlan(shared_ptr<CancelProvisionedProductPlanRequest> request);
  CopyProductResponse copyProductWithOptions(shared_ptr<CopyProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CopyProductResponse copyProduct(shared_ptr<CopyProductRequest> request);
  CreateConstraintResponse createConstraintWithOptions(shared_ptr<CreateConstraintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConstraintResponse createConstraint(shared_ptr<CreateConstraintRequest> request);
  CreatePortfolioResponse createPortfolioWithOptions(shared_ptr<CreatePortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePortfolioResponse createPortfolio(shared_ptr<CreatePortfolioRequest> request);
  CreateProductResponse createProductWithOptions(shared_ptr<CreateProductRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductResponse createProduct(shared_ptr<CreateProductRequest> request);
  CreateProductVersionResponse createProductVersionWithOptions(shared_ptr<CreateProductVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductVersionResponse createProductVersion(shared_ptr<CreateProductVersionRequest> request);
  CreateProvisionedProductPlanResponse createProvisionedProductPlanWithOptions(shared_ptr<CreateProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProvisionedProductPlanResponse createProvisionedProductPlan(shared_ptr<CreateProvisionedProductPlanRequest> request);
  CreateTagOptionResponse createTagOptionWithOptions(shared_ptr<CreateTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTagOptionResponse createTagOption(shared_ptr<CreateTagOptionRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
  DeleteConstraintResponse deleteConstraintWithOptions(shared_ptr<DeleteConstraintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConstraintResponse deleteConstraint(shared_ptr<DeleteConstraintRequest> request);
  DeletePortfolioResponse deletePortfolioWithOptions(shared_ptr<DeletePortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePortfolioResponse deletePortfolio(shared_ptr<DeletePortfolioRequest> request);
  DeleteProductResponse deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductResponse deleteProduct(shared_ptr<DeleteProductRequest> request);
  DeleteProductVersionResponse deleteProductVersionWithOptions(shared_ptr<DeleteProductVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductVersionResponse deleteProductVersion(shared_ptr<DeleteProductVersionRequest> request);
  DeleteProvisionedProductPlanResponse deleteProvisionedProductPlanWithOptions(shared_ptr<DeleteProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProvisionedProductPlanResponse deleteProvisionedProductPlan(shared_ptr<DeleteProvisionedProductPlanRequest> request);
  DeleteTagOptionResponse deleteTagOptionWithOptions(shared_ptr<DeleteTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTagOptionResponse deleteTagOption(shared_ptr<DeleteTagOptionRequest> request);
  DisAssociateTagOptionFromResourceResponse disAssociateTagOptionFromResourceWithOptions(shared_ptr<DisAssociateTagOptionFromResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisAssociateTagOptionFromResourceResponse disAssociateTagOptionFromResource(shared_ptr<DisAssociateTagOptionFromResourceRequest> request);
  DisassociatePrincipalFromPortfolioResponse disassociatePrincipalFromPortfolioWithOptions(shared_ptr<DisassociatePrincipalFromPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisassociatePrincipalFromPortfolioResponse disassociatePrincipalFromPortfolio(shared_ptr<DisassociatePrincipalFromPortfolioRequest> request);
  DisassociateProductFromPortfolioResponse disassociateProductFromPortfolioWithOptions(shared_ptr<DisassociateProductFromPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisassociateProductFromPortfolioResponse disassociateProductFromPortfolio(shared_ptr<DisassociateProductFromPortfolioRequest> request);
  ExecuteProvisionedProductPlanResponse executeProvisionedProductPlanWithOptions(shared_ptr<ExecuteProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteProvisionedProductPlanResponse executeProvisionedProductPlan(shared_ptr<ExecuteProvisionedProductPlanRequest> request);
  GetConstraintResponse getConstraintWithOptions(shared_ptr<GetConstraintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConstraintResponse getConstraint(shared_ptr<GetConstraintRequest> request);
  GetPortfolioResponse getPortfolioWithOptions(shared_ptr<GetPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPortfolioResponse getPortfolio(shared_ptr<GetPortfolioRequest> request);
  GetProductAsAdminResponse getProductAsAdminWithOptions(shared_ptr<GetProductAsAdminRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductAsAdminResponse getProductAsAdmin(shared_ptr<GetProductAsAdminRequest> request);
  GetProductAsEndUserResponse getProductAsEndUserWithOptions(shared_ptr<GetProductAsEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductAsEndUserResponse getProductAsEndUser(shared_ptr<GetProductAsEndUserRequest> request);
  GetProductVersionResponse getProductVersionWithOptions(shared_ptr<GetProductVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductVersionResponse getProductVersion(shared_ptr<GetProductVersionRequest> request);
  GetProvisionedProductResponse getProvisionedProductWithOptions(shared_ptr<GetProvisionedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProvisionedProductResponse getProvisionedProduct(shared_ptr<GetProvisionedProductRequest> request);
  GetProvisionedProductPlanResponse getProvisionedProductPlanWithOptions(shared_ptr<GetProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProvisionedProductPlanResponse getProvisionedProductPlan(shared_ptr<GetProvisionedProductPlanRequest> request);
  GetTagOptionResponse getTagOptionWithOptions(shared_ptr<GetTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTagOptionResponse getTagOption(shared_ptr<GetTagOptionRequest> request);
  GetTaskResponse getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<GetTaskRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<GetTemplateRequest> request);
  LaunchProductResponse launchProductWithOptions(shared_ptr<LaunchProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LaunchProductResponse launchProduct(shared_ptr<LaunchProductRequest> request);
  ListLaunchOptionsResponse listLaunchOptionsWithOptions(shared_ptr<ListLaunchOptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLaunchOptionsResponse listLaunchOptions(shared_ptr<ListLaunchOptionsRequest> request);
  ListPortfoliosResponse listPortfoliosWithOptions(shared_ptr<ListPortfoliosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPortfoliosResponse listPortfolios(shared_ptr<ListPortfoliosRequest> request);
  ListPrincipalsResponse listPrincipalsWithOptions(shared_ptr<ListPrincipalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrincipalsResponse listPrincipals(shared_ptr<ListPrincipalsRequest> request);
  ListProductVersionsResponse listProductVersionsWithOptions(shared_ptr<ListProductVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductVersionsResponse listProductVersions(shared_ptr<ListProductVersionsRequest> request);
  ListProductsAsAdminResponse listProductsAsAdminWithOptions(shared_ptr<ListProductsAsAdminRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductsAsAdminResponse listProductsAsAdmin(shared_ptr<ListProductsAsAdminRequest> request);
  ListProductsAsEndUserResponse listProductsAsEndUserWithOptions(shared_ptr<ListProductsAsEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductsAsEndUserResponse listProductsAsEndUser(shared_ptr<ListProductsAsEndUserRequest> request);
  ListProvisionedProductPlanApproversResponse listProvisionedProductPlanApproversWithOptions(shared_ptr<ListProvisionedProductPlanApproversRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProvisionedProductPlanApproversResponse listProvisionedProductPlanApprovers(shared_ptr<ListProvisionedProductPlanApproversRequest> request);
  ListProvisionedProductPlansResponse listProvisionedProductPlansWithOptions(shared_ptr<ListProvisionedProductPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProvisionedProductPlansResponse listProvisionedProductPlans(shared_ptr<ListProvisionedProductPlansRequest> request);
  ListProvisionedProductsResponse listProvisionedProductsWithOptions(shared_ptr<ListProvisionedProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProvisionedProductsResponse listProvisionedProducts(shared_ptr<ListProvisionedProductsRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListResourcesForTagOptionResponse listResourcesForTagOptionWithOptions(shared_ptr<ListResourcesForTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesForTagOptionResponse listResourcesForTagOption(shared_ptr<ListResourcesForTagOptionRequest> request);
  ListTagOptionsResponse listTagOptionsWithOptions(shared_ptr<ListTagOptionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagOptionsResponse listTagOptions(shared_ptr<ListTagOptionsRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  TerminateProvisionedProductResponse terminateProvisionedProductWithOptions(shared_ptr<TerminateProvisionedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TerminateProvisionedProductResponse terminateProvisionedProduct(shared_ptr<TerminateProvisionedProductRequest> request);
  UpdateConstraintResponse updateConstraintWithOptions(shared_ptr<UpdateConstraintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConstraintResponse updateConstraint(shared_ptr<UpdateConstraintRequest> request);
  UpdatePortfolioResponse updatePortfolioWithOptions(shared_ptr<UpdatePortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePortfolioResponse updatePortfolio(shared_ptr<UpdatePortfolioRequest> request);
  UpdateProductResponse updateProductWithOptions(shared_ptr<UpdateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProductResponse updateProduct(shared_ptr<UpdateProductRequest> request);
  UpdateProductVersionResponse updateProductVersionWithOptions(shared_ptr<UpdateProductVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProductVersionResponse updateProductVersion(shared_ptr<UpdateProductVersionRequest> request);
  UpdateProvisionedProductResponse updateProvisionedProductWithOptions(shared_ptr<UpdateProvisionedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProvisionedProductResponse updateProvisionedProduct(shared_ptr<UpdateProvisionedProductRequest> request);
  UpdateProvisionedProductPlanResponse updateProvisionedProductPlanWithOptions(shared_ptr<UpdateProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProvisionedProductPlanResponse updateProvisionedProductPlan(shared_ptr<UpdateProvisionedProductPlanRequest> request);
  UpdateTagOptionResponse updateTagOptionWithOptions(shared_ptr<UpdateTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTagOptionResponse updateTagOption(shared_ptr<UpdateTagOptionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Servicecatalog20210901

#endif
