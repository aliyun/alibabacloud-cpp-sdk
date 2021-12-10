// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CR20160607_H_
#define ALIBABACLOUD_CR20160607_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Cr20160607 {
class CancelRepoBuildResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CancelRepoBuildResponse() {}

  explicit CancelRepoBuildResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~CancelRepoBuildResponse() = default;
};
class CreateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CreateNamespaceResponse() {}

  explicit CreateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~CreateNamespaceResponse() = default;
};
class CreateRepoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CreateRepoResponse() {}

  explicit CreateRepoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~CreateRepoResponse() = default;
};
class CreateRepoBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CreateRepoBuildRuleResponse() {}

  explicit CreateRepoBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~CreateRepoBuildRuleResponse() = default;
};
class CreateRepoWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CreateRepoWebhookResponse() {}

  explicit CreateRepoWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~CreateRepoWebhookResponse() = default;
};
class CreateUserInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CreateUserInfoResponse() {}

  explicit CreateUserInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~CreateUserInfoResponse() = default;
};
class DeleteImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteImageResponse() {}

  explicit DeleteImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~DeleteImageResponse() = default;
};
class DeleteNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteNamespaceResponse() {}

  explicit DeleteNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~DeleteNamespaceResponse() = default;
};
class DeleteRepoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteRepoResponse() {}

  explicit DeleteRepoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~DeleteRepoResponse() = default;
};
class DeleteRepoBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteRepoBuildRuleResponse() {}

  explicit DeleteRepoBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~DeleteRepoBuildRuleResponse() = default;
};
class DeleteRepoWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteRepoWebhookResponse() {}

  explicit DeleteRepoWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~DeleteRepoWebhookResponse() = default;
};
class GetAuthorizationTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetAuthorizationTokenResponse() {}

  explicit GetAuthorizationTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetAuthorizationTokenResponse() = default;
};
class GetImageLayerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetImageLayerResponse() {}

  explicit GetImageLayerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetImageLayerResponse() = default;
};
class GetImageManifestRequest : public Darabonba::Model {
public:
  shared_ptr<long> schemaVersion{};

  GetImageManifestRequest() {}

  explicit GetImageManifestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<long>(boost::any_cast<long>(m["SchemaVersion"]));
    }
  }


  virtual ~GetImageManifestRequest() = default;
};
class GetImageManifestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetImageManifestResponse() {}

  explicit GetImageManifestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetImageManifestResponse() = default;
};
class GetNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetNamespaceResponse() {}

  explicit GetNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetNamespaceResponse() = default;
};
class GetNamespaceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorize{};
  shared_ptr<string> status{};

  GetNamespaceListRequest() {}

  explicit GetNamespaceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorize) {
      res["Authorize"] = boost::any(*authorize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authorize") != m.end() && !m["Authorize"].empty()) {
      authorize = make_shared<string>(boost::any_cast<string>(m["Authorize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetNamespaceListRequest() = default;
};
class GetNamespaceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetNamespaceListResponse() {}

  explicit GetNamespaceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetNamespaceListResponse() = default;
};
class GetRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};

  GetRegionRequest() {}

  explicit GetRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetRegionRequest() = default;
};
class GetRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRegionResponse() {}

  explicit GetRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRegionResponse() = default;
};
class GetRegionListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRegionListResponse() {}

  explicit GetRegionListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRegionListResponse() = default;
};
class GetRepoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoResponse() {}

  explicit GetRepoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoResponse() = default;
};
class GetRepoBuildListRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  GetRepoBuildListRequest() {}

  explicit GetRepoBuildListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetRepoBuildListRequest() = default;
};
class GetRepoBuildListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoBuildListResponse() {}

  explicit GetRepoBuildListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoBuildListResponse() = default;
};
class GetRepoBuildRuleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoBuildRuleListResponse() {}

  explicit GetRepoBuildRuleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoBuildRuleListResponse() = default;
};
class GetRepoBuildStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoBuildStatusResponse() {}

  explicit GetRepoBuildStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoBuildStatusResponse() = default;
};
class GetRepoListRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  GetRepoListRequest() {}

  explicit GetRepoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
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
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetRepoListRequest() = default;
};
class GetRepoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoListResponse() {}

  explicit GetRepoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoListResponse() = default;
};
class GetRepoListByNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  GetRepoListByNamespaceRequest() {}

  explicit GetRepoListByNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
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
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetRepoListByNamespaceRequest() = default;
};
class GetRepoListByNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoListByNamespaceResponse() {}

  explicit GetRepoListByNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoListByNamespaceResponse() = default;
};
class GetRepoTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> digest{};
  shared_ptr<long> imageCreate{};
  shared_ptr<string> imageId{};
  shared_ptr<long> imageSize{};
  shared_ptr<long> imageUpdate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};

  GetRepoTagResponseBody() {}

  explicit GetRepoTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (digest) {
      res["digest"] = boost::any(*digest);
    }
    if (imageCreate) {
      res["imageCreate"] = boost::any(*imageCreate);
    }
    if (imageId) {
      res["imageId"] = boost::any(*imageId);
    }
    if (imageSize) {
      res["imageSize"] = boost::any(*imageSize);
    }
    if (imageUpdate) {
      res["imageUpdate"] = boost::any(*imageUpdate);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("digest") != m.end() && !m["digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["digest"]));
    }
    if (m.find("imageCreate") != m.end() && !m["imageCreate"].empty()) {
      imageCreate = make_shared<long>(boost::any_cast<long>(m["imageCreate"]));
    }
    if (m.find("imageId") != m.end() && !m["imageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["imageId"]));
    }
    if (m.find("imageSize") != m.end() && !m["imageSize"].empty()) {
      imageSize = make_shared<long>(boost::any_cast<long>(m["imageSize"]));
    }
    if (m.find("imageUpdate") != m.end() && !m["imageUpdate"].empty()) {
      imageUpdate = make_shared<long>(boost::any_cast<long>(m["imageUpdate"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~GetRepoTagResponseBody() = default;
};
class GetRepoTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRepoTagResponseBody> body{};

  GetRepoTagResponse() {}

  explicit GetRepoTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepoTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepoTagResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepoTagResponse() = default;
};
class GetRepoTagScanListRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> severity{};

  GetRepoTagScanListRequest() {}

  explicit GetRepoTagScanListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
  }


  virtual ~GetRepoTagScanListRequest() = default;
};
class GetRepoTagScanListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoTagScanListResponse() {}

  explicit GetRepoTagScanListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoTagScanListResponse() = default;
};
class GetRepoTagScanStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoTagScanStatusResponse() {}

  explicit GetRepoTagScanStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoTagScanStatusResponse() = default;
};
class GetRepoTagScanSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoTagScanSummaryResponse() {}

  explicit GetRepoTagScanSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoTagScanSummaryResponse() = default;
};
class GetRepoTagsRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  GetRepoTagsRequest() {}

  explicit GetRepoTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetRepoTagsRequest() = default;
};
class GetRepoTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoTagsResponse() {}

  explicit GetRepoTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoTagsResponse() = default;
};
class GetRepoWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetRepoWebhookResponse() {}

  explicit GetRepoWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetRepoWebhookResponse() = default;
};
class GetResourceQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GetResourceQuotaResponse() {}

  explicit GetResourceQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~GetResourceQuotaResponse() = default;
};
class StartImageScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  StartImageScanResponse() {}

  explicit StartImageScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~StartImageScanResponse() = default;
};
class StartRepoBuildByRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  StartRepoBuildByRuleResponse() {}

  explicit StartRepoBuildByRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~StartRepoBuildByRuleResponse() = default;
};
class UpdateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpdateNamespaceResponse() {}

  explicit UpdateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~UpdateNamespaceResponse() = default;
};
class UpdateRepoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpdateRepoResponse() {}

  explicit UpdateRepoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~UpdateRepoResponse() = default;
};
class UpdateRepoBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpdateRepoBuildRuleResponse() {}

  explicit UpdateRepoBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~UpdateRepoBuildRuleResponse() = default;
};
class UpdateRepoWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpdateRepoWebhookResponse() {}

  explicit UpdateRepoWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~UpdateRepoWebhookResponse() = default;
};
class UpdateUserInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpdateUserInfoResponse() {}

  explicit UpdateUserInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~UpdateUserInfoResponse() = default;
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
  CancelRepoBuildResponse cancelRepoBuild(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildId);
  CancelRepoBuildResponse cancelRepoBuildWithOptions(shared_ptr<string> RepoNamespace,
                                                     shared_ptr<string> RepoName,
                                                     shared_ptr<string> BuildId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNamespaceResponse createNamespace();
  CreateNamespaceResponse createNamespaceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoResponse createRepo();
  CreateRepoResponse createRepoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoBuildRuleResponse createRepoBuildRule(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName);
  CreateRepoBuildRuleResponse createRepoBuildRuleWithOptions(shared_ptr<string> RepoNamespace,
                                                             shared_ptr<string> RepoName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoWebhookResponse createRepoWebhook(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName);
  CreateRepoWebhookResponse createRepoWebhookWithOptions(shared_ptr<string> RepoNamespace,
                                                         shared_ptr<string> RepoName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserInfoResponse createUserInfo();
  CreateUserInfoResponse createUserInfoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageResponse deleteImage(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag);
  DeleteImageResponse deleteImageWithOptions(shared_ptr<string> RepoNamespace,
                                             shared_ptr<string> RepoName,
                                             shared_ptr<string> Tag,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNamespaceResponse deleteNamespace(shared_ptr<string> Namespace_);
  DeleteNamespaceResponse deleteNamespaceWithOptions(shared_ptr<string> Namespace_, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepoResponse deleteRepo(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName);
  DeleteRepoResponse deleteRepoWithOptions(shared_ptr<string> RepoNamespace,
                                           shared_ptr<string> RepoName,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepoBuildRuleResponse deleteRepoBuildRule(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildRuleId);
  DeleteRepoBuildRuleResponse deleteRepoBuildRuleWithOptions(shared_ptr<string> RepoNamespace,
                                                             shared_ptr<string> RepoName,
                                                             shared_ptr<string> BuildRuleId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepoWebhookResponse deleteRepoWebhook(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> WebhookId);
  DeleteRepoWebhookResponse deleteRepoWebhookWithOptions(shared_ptr<string> RepoNamespace,
                                                         shared_ptr<string> RepoName,
                                                         shared_ptr<string> WebhookId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthorizationTokenResponse getAuthorizationToken();
  GetAuthorizationTokenResponse getAuthorizationTokenWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageLayerResponse getImageLayer(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag);
  GetImageLayerResponse getImageLayerWithOptions(shared_ptr<string> RepoNamespace,
                                                 shared_ptr<string> RepoName,
                                                 shared_ptr<string> Tag,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageManifestResponse getImageManifest(shared_ptr<string> RepoNamespace,
                                            shared_ptr<string> RepoName,
                                            shared_ptr<string> Tag,
                                            shared_ptr<GetImageManifestRequest> request);
  GetImageManifestResponse getImageManifestWithOptions(shared_ptr<string> RepoNamespace,
                                                       shared_ptr<string> RepoName,
                                                       shared_ptr<string> Tag,
                                                       shared_ptr<GetImageManifestRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNamespaceResponse getNamespace(shared_ptr<string> Namespace_);
  GetNamespaceResponse getNamespaceWithOptions(shared_ptr<string> Namespace_, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNamespaceListResponse getNamespaceList(shared_ptr<GetNamespaceListRequest> request);
  GetNamespaceListResponse getNamespaceListWithOptions(shared_ptr<GetNamespaceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegionResponse getRegion(shared_ptr<GetRegionRequest> request);
  GetRegionResponse getRegionWithOptions(shared_ptr<GetRegionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegionListResponse getRegionList();
  GetRegionListResponse getRegionListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoResponse getRepo(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName);
  GetRepoResponse getRepoWithOptions(shared_ptr<string> RepoNamespace,
                                     shared_ptr<string> RepoName,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoBuildListResponse getRepoBuildList(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<GetRepoBuildListRequest> request);
  GetRepoBuildListResponse getRepoBuildListWithOptions(shared_ptr<string> RepoNamespace,
                                                       shared_ptr<string> RepoName,
                                                       shared_ptr<GetRepoBuildListRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoBuildRuleListResponse getRepoBuildRuleList(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName);
  GetRepoBuildRuleListResponse getRepoBuildRuleListWithOptions(shared_ptr<string> RepoNamespace,
                                                               shared_ptr<string> RepoName,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoBuildStatusResponse getRepoBuildStatus(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildId);
  GetRepoBuildStatusResponse getRepoBuildStatusWithOptions(shared_ptr<string> RepoNamespace,
                                                           shared_ptr<string> RepoName,
                                                           shared_ptr<string> BuildId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoListResponse getRepoList(shared_ptr<GetRepoListRequest> request);
  GetRepoListResponse getRepoListWithOptions(shared_ptr<GetRepoListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoListByNamespaceResponse getRepoListByNamespace(shared_ptr<string> RepoNamespace, shared_ptr<GetRepoListByNamespaceRequest> request);
  GetRepoListByNamespaceResponse getRepoListByNamespaceWithOptions(shared_ptr<string> RepoNamespace,
                                                                   shared_ptr<GetRepoListByNamespaceRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoTagResponse getRepoTag(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag);
  GetRepoTagResponse getRepoTagWithOptions(shared_ptr<string> RepoNamespace,
                                           shared_ptr<string> RepoName,
                                           shared_ptr<string> Tag,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoTagScanListResponse getRepoTagScanList(shared_ptr<string> RepoNamespace,
                                                shared_ptr<string> RepoName,
                                                shared_ptr<string> Tag,
                                                shared_ptr<GetRepoTagScanListRequest> request);
  GetRepoTagScanListResponse getRepoTagScanListWithOptions(shared_ptr<string> RepoNamespace,
                                                           shared_ptr<string> RepoName,
                                                           shared_ptr<string> Tag,
                                                           shared_ptr<GetRepoTagScanListRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoTagScanStatusResponse getRepoTagScanStatus(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag);
  GetRepoTagScanStatusResponse getRepoTagScanStatusWithOptions(shared_ptr<string> RepoNamespace,
                                                               shared_ptr<string> RepoName,
                                                               shared_ptr<string> Tag,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoTagScanSummaryResponse getRepoTagScanSummary(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag);
  GetRepoTagScanSummaryResponse getRepoTagScanSummaryWithOptions(shared_ptr<string> RepoNamespace,
                                                                 shared_ptr<string> RepoName,
                                                                 shared_ptr<string> Tag,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoTagsResponse getRepoTags(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<GetRepoTagsRequest> request);
  GetRepoTagsResponse getRepoTagsWithOptions(shared_ptr<string> RepoNamespace,
                                             shared_ptr<string> RepoName,
                                             shared_ptr<GetRepoTagsRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoWebhookResponse getRepoWebhook(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName);
  GetRepoWebhookResponse getRepoWebhookWithOptions(shared_ptr<string> RepoNamespace,
                                                   shared_ptr<string> RepoName,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceQuotaResponse getResourceQuota(shared_ptr<string> ResourceName);
  GetResourceQuotaResponse getResourceQuotaWithOptions(shared_ptr<string> ResourceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartImageScanResponse startImageScan(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag);
  StartImageScanResponse startImageScanWithOptions(shared_ptr<string> RepoNamespace,
                                                   shared_ptr<string> RepoName,
                                                   shared_ptr<string> Tag,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRepoBuildByRuleResponse startRepoBuildByRule(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildRuleId);
  StartRepoBuildByRuleResponse startRepoBuildByRuleWithOptions(shared_ptr<string> RepoNamespace,
                                                               shared_ptr<string> RepoName,
                                                               shared_ptr<string> BuildRuleId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNamespaceResponse updateNamespace(shared_ptr<string> Namespace_);
  UpdateNamespaceResponse updateNamespaceWithOptions(shared_ptr<string> Namespace_, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepoResponse updateRepo(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName);
  UpdateRepoResponse updateRepoWithOptions(shared_ptr<string> RepoNamespace,
                                           shared_ptr<string> RepoName,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepoBuildRuleResponse updateRepoBuildRule(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildRuleId);
  UpdateRepoBuildRuleResponse updateRepoBuildRuleWithOptions(shared_ptr<string> RepoNamespace,
                                                             shared_ptr<string> RepoName,
                                                             shared_ptr<string> BuildRuleId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepoWebhookResponse updateRepoWebhook(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> WebhookId);
  UpdateRepoWebhookResponse updateRepoWebhookWithOptions(shared_ptr<string> RepoNamespace,
                                                         shared_ptr<string> RepoName,
                                                         shared_ptr<string> WebhookId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserInfoResponse updateUserInfo();
  UpdateUserInfoResponse updateUserInfoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cr20160607

#endif
