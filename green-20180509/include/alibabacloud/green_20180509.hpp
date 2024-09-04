// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GREEN20180509_H_
#define ALIBABACLOUD_GREEN20180509_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Green20180509 {
class AddFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  AddFacesRequest() {}

  explicit AddFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddFacesRequest() = default;
};
class AddFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddFacesResponseBody() {}

  explicit AddFacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddFacesResponseBody() = default;
};
class AddFacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFacesResponseBody> body{};

  AddFacesResponse() {}

  explicit AddFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFacesResponseBody>(model1);
      }
    }
  }


  virtual ~AddFacesResponse() = default;
};
class AddGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  AddGroupsRequest() {}

  explicit AddGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddGroupsRequest() = default;
};
class AddGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddGroupsResponseBody() {}

  explicit AddGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddGroupsResponseBody() = default;
};
class AddGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddGroupsResponseBody> body{};

  AddGroupsResponse() {}

  explicit AddGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~AddGroupsResponse() = default;
};
class AddPersonRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  AddPersonRequest() {}

  explicit AddPersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddPersonRequest() = default;
};
class AddPersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddPersonResponseBody() {}

  explicit AddPersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddPersonResponseBody() = default;
};
class AddPersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddPersonResponseBody> body{};

  AddPersonResponse() {}

  explicit AddPersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddPersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddPersonResponseBody>(model1);
      }
    }
  }


  virtual ~AddPersonResponse() = default;
};
class AddSimilarityImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  AddSimilarityImageRequest() {}

  explicit AddSimilarityImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~AddSimilarityImageRequest() = default;
};
class AddSimilarityImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddSimilarityImageResponseBody() {}

  explicit AddSimilarityImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddSimilarityImageResponseBody() = default;
};
class AddSimilarityImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddSimilarityImageResponseBody> body{};

  AddSimilarityImageResponse() {}

  explicit AddSimilarityImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSimilarityImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSimilarityImageResponseBody>(model1);
      }
    }
  }


  virtual ~AddSimilarityImageResponse() = default;
};
class AddSimilarityLibraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  AddSimilarityLibraryRequest() {}

  explicit AddSimilarityLibraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~AddSimilarityLibraryRequest() = default;
};
class AddSimilarityLibraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddSimilarityLibraryResponseBody() {}

  explicit AddSimilarityLibraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddSimilarityLibraryResponseBody() = default;
};
class AddSimilarityLibraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddSimilarityLibraryResponseBody> body{};

  AddSimilarityLibraryResponse() {}

  explicit AddSimilarityLibraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSimilarityLibraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSimilarityLibraryResponseBody>(model1);
      }
    }
  }


  virtual ~AddSimilarityLibraryResponse() = default;
};
class AddVideoDnaRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  AddVideoDnaRequest() {}

  explicit AddVideoDnaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~AddVideoDnaRequest() = default;
};
class AddVideoDnaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddVideoDnaResponseBody() {}

  explicit AddVideoDnaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddVideoDnaResponseBody() = default;
};
class AddVideoDnaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddVideoDnaResponseBody> body{};

  AddVideoDnaResponse() {}

  explicit AddVideoDnaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddVideoDnaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddVideoDnaResponseBody>(model1);
      }
    }
  }


  virtual ~AddVideoDnaResponse() = default;
};
class AddVideoDnaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  AddVideoDnaGroupRequest() {}

  explicit AddVideoDnaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~AddVideoDnaGroupRequest() = default;
};
class AddVideoDnaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddVideoDnaGroupResponseBody() {}

  explicit AddVideoDnaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddVideoDnaGroupResponseBody() = default;
};
class AddVideoDnaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddVideoDnaGroupResponseBody> body{};

  AddVideoDnaGroupResponse() {}

  explicit AddVideoDnaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddVideoDnaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddVideoDnaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddVideoDnaGroupResponse() = default;
};
class DeleteFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  DeleteFacesRequest() {}

  explicit DeleteFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteFacesRequest() = default;
};
class DeleteFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFacesResponseBody() {}

  explicit DeleteFacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFacesResponseBody() = default;
};
class DeleteFacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFacesResponseBody> body{};

  DeleteFacesResponse() {}

  explicit DeleteFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFacesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFacesResponse() = default;
};
class DeleteGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  DeleteGroupsRequest() {}

  explicit DeleteGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteGroupsRequest() = default;
};
class DeleteGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupsResponseBody() {}

  explicit DeleteGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGroupsResponseBody() = default;
};
class DeleteGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupsResponseBody> body{};

  DeleteGroupsResponse() {}

  explicit DeleteGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupsResponse() = default;
};
class DeletePersonRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  DeletePersonRequest() {}

  explicit DeletePersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeletePersonRequest() = default;
};
class DeletePersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePersonResponseBody() {}

  explicit DeletePersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePersonResponseBody() = default;
};
class DeletePersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePersonResponseBody> body{};

  DeletePersonResponse() {}

  explicit DeletePersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePersonResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePersonResponse() = default;
};
class DeleteSimilarityImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  DeleteSimilarityImageRequest() {}

  explicit DeleteSimilarityImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~DeleteSimilarityImageRequest() = default;
};
class DeleteSimilarityImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSimilarityImageResponseBody() {}

  explicit DeleteSimilarityImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSimilarityImageResponseBody() = default;
};
class DeleteSimilarityImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSimilarityImageResponseBody> body{};

  DeleteSimilarityImageResponse() {}

  explicit DeleteSimilarityImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSimilarityImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSimilarityImageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSimilarityImageResponse() = default;
};
class DeleteSimilarityLibraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  DeleteSimilarityLibraryRequest() {}

  explicit DeleteSimilarityLibraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~DeleteSimilarityLibraryRequest() = default;
};
class DeleteSimilarityLibraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSimilarityLibraryResponseBody() {}

  explicit DeleteSimilarityLibraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSimilarityLibraryResponseBody() = default;
};
class DeleteSimilarityLibraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSimilarityLibraryResponseBody> body{};

  DeleteSimilarityLibraryResponse() {}

  explicit DeleteSimilarityLibraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSimilarityLibraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSimilarityLibraryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSimilarityLibraryResponse() = default;
};
class DeleteVideoDnaRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  DeleteVideoDnaRequest() {}

  explicit DeleteVideoDnaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~DeleteVideoDnaRequest() = default;
};
class DeleteVideoDnaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVideoDnaResponseBody() {}

  explicit DeleteVideoDnaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVideoDnaResponseBody() = default;
};
class DeleteVideoDnaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVideoDnaResponseBody> body{};

  DeleteVideoDnaResponse() {}

  explicit DeleteVideoDnaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVideoDnaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVideoDnaResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVideoDnaResponse() = default;
};
class DeleteVideoDnaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  DeleteVideoDnaGroupRequest() {}

  explicit DeleteVideoDnaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~DeleteVideoDnaGroupRequest() = default;
};
class DeleteVideoDnaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVideoDnaGroupResponseBody() {}

  explicit DeleteVideoDnaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVideoDnaGroupResponseBody() = default;
};
class DeleteVideoDnaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVideoDnaGroupResponseBody> body{};

  DeleteVideoDnaGroupResponse() {}

  explicit DeleteVideoDnaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVideoDnaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVideoDnaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVideoDnaGroupResponse() = default;
};
class DetectFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  DetectFaceRequest() {}

  explicit DetectFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~DetectFaceRequest() = default;
};
class DetectFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetectFaceResponseBody() {}

  explicit DetectFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DetectFaceResponseBody() = default;
};
class DetectFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectFaceResponseBody> body{};

  DetectFaceResponse() {}

  explicit DetectFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectFaceResponseBody>(model1);
      }
    }
  }


  virtual ~DetectFaceResponse() = default;
};
class FileAsyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  FileAsyncScanRequest() {}

  explicit FileAsyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~FileAsyncScanRequest() = default;
};
class FileAsyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FileAsyncScanResponseBody() {}

  explicit FileAsyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FileAsyncScanResponseBody() = default;
};
class FileAsyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FileAsyncScanResponseBody> body{};

  FileAsyncScanResponse() {}

  explicit FileAsyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FileAsyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FileAsyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~FileAsyncScanResponse() = default;
};
class FileAsyncScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  FileAsyncScanResultsRequest() {}

  explicit FileAsyncScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~FileAsyncScanResultsRequest() = default;
};
class FileAsyncScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FileAsyncScanResultsResponseBody() {}

  explicit FileAsyncScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FileAsyncScanResultsResponseBody() = default;
};
class FileAsyncScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FileAsyncScanResultsResponseBody> body{};

  FileAsyncScanResultsResponse() {}

  explicit FileAsyncScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FileAsyncScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FileAsyncScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~FileAsyncScanResultsResponse() = default;
};
class FileAsyncScanV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FileAsyncScanV2ResponseBody() {}

  explicit FileAsyncScanV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~FileAsyncScanV2ResponseBody() = default;
};
class FileAsyncScanV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FileAsyncScanV2ResponseBody> body{};

  FileAsyncScanV2Response() {}

  explicit FileAsyncScanV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FileAsyncScanV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FileAsyncScanV2ResponseBody>(model1);
      }
    }
  }


  virtual ~FileAsyncScanV2Response() = default;
};
class GetFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  GetFacesRequest() {}

  explicit GetFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetFacesRequest() = default;
};
class GetFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetFacesResponseBody() {}

  explicit GetFacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetFacesResponseBody() = default;
};
class GetFacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFacesResponseBody> body{};

  GetFacesResponse() {}

  explicit GetFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFacesResponseBody>(model1);
      }
    }
  }


  virtual ~GetFacesResponse() = default;
};
class GetGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  GetGroupsRequest() {}

  explicit GetGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetGroupsRequest() = default;
};
class GetGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetGroupsResponseBody() {}

  explicit GetGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetGroupsResponseBody() = default;
};
class GetGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGroupsResponseBody> body{};

  GetGroupsResponse() {}

  explicit GetGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupsResponse() = default;
};
class GetPersonRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  GetPersonRequest() {}

  explicit GetPersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetPersonRequest() = default;
};
class GetPersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetPersonResponseBody() {}

  explicit GetPersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPersonResponseBody() = default;
};
class GetPersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPersonResponseBody> body{};

  GetPersonResponse() {}

  explicit GetPersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPersonResponseBody>(model1);
      }
    }
  }


  virtual ~GetPersonResponse() = default;
};
class GetPersonsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  GetPersonsRequest() {}

  explicit GetPersonsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetPersonsRequest() = default;
};
class GetPersonsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetPersonsResponseBody() {}

  explicit GetPersonsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPersonsResponseBody() = default;
};
class GetPersonsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPersonsResponseBody> body{};

  GetPersonsResponse() {}

  explicit GetPersonsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPersonsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPersonsResponseBody>(model1);
      }
    }
  }


  virtual ~GetPersonsResponse() = default;
};
class GetSimilarityImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  GetSimilarityImageRequest() {}

  explicit GetSimilarityImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~GetSimilarityImageRequest() = default;
};
class GetSimilarityImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetSimilarityImageResponseBody() {}

  explicit GetSimilarityImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSimilarityImageResponseBody() = default;
};
class GetSimilarityImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSimilarityImageResponseBody> body{};

  GetSimilarityImageResponse() {}

  explicit GetSimilarityImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSimilarityImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSimilarityImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetSimilarityImageResponse() = default;
};
class GetSimilarityLibraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  GetSimilarityLibraryRequest() {}

  explicit GetSimilarityLibraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~GetSimilarityLibraryRequest() = default;
};
class GetSimilarityLibraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetSimilarityLibraryResponseBody() {}

  explicit GetSimilarityLibraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSimilarityLibraryResponseBody() = default;
};
class GetSimilarityLibraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSimilarityLibraryResponseBody> body{};

  GetSimilarityLibraryResponse() {}

  explicit GetSimilarityLibraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSimilarityLibraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSimilarityLibraryResponseBody>(model1);
      }
    }
  }


  virtual ~GetSimilarityLibraryResponse() = default;
};
class ImageAsyncManualScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  ImageAsyncManualScanRequest() {}

  explicit ImageAsyncManualScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~ImageAsyncManualScanRequest() = default;
};
class ImageAsyncManualScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ImageAsyncManualScanResponseBody() {}

  explicit ImageAsyncManualScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImageAsyncManualScanResponseBody() = default;
};
class ImageAsyncManualScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImageAsyncManualScanResponseBody> body{};

  ImageAsyncManualScanResponse() {}

  explicit ImageAsyncManualScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageAsyncManualScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageAsyncManualScanResponseBody>(model1);
      }
    }
  }


  virtual ~ImageAsyncManualScanResponse() = default;
};
class ImageAsyncManualScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  ImageAsyncManualScanResultsRequest() {}

  explicit ImageAsyncManualScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~ImageAsyncManualScanResultsRequest() = default;
};
class ImageAsyncManualScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ImageAsyncManualScanResultsResponseBody() {}

  explicit ImageAsyncManualScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImageAsyncManualScanResultsResponseBody() = default;
};
class ImageAsyncManualScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImageAsyncManualScanResultsResponseBody> body{};

  ImageAsyncManualScanResultsResponse() {}

  explicit ImageAsyncManualScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageAsyncManualScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageAsyncManualScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ImageAsyncManualScanResultsResponse() = default;
};
class ImageAsyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  ImageAsyncScanRequest() {}

  explicit ImageAsyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~ImageAsyncScanRequest() = default;
};
class ImageAsyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ImageAsyncScanResponseBody() {}

  explicit ImageAsyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImageAsyncScanResponseBody() = default;
};
class ImageAsyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImageAsyncScanResponseBody> body{};

  ImageAsyncScanResponse() {}

  explicit ImageAsyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageAsyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageAsyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~ImageAsyncScanResponse() = default;
};
class ImageAsyncScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  ImageAsyncScanResultsRequest() {}

  explicit ImageAsyncScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~ImageAsyncScanResultsRequest() = default;
};
class ImageAsyncScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ImageAsyncScanResultsResponseBody() {}

  explicit ImageAsyncScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImageAsyncScanResultsResponseBody() = default;
};
class ImageAsyncScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImageAsyncScanResultsResponseBody> body{};

  ImageAsyncScanResultsResponse() {}

  explicit ImageAsyncScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageAsyncScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageAsyncScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ImageAsyncScanResultsResponse() = default;
};
class ImageScanFeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  ImageScanFeedbackRequest() {}

  explicit ImageScanFeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~ImageScanFeedbackRequest() = default;
};
class ImageScanFeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ImageScanFeedbackResponseBody() {}

  explicit ImageScanFeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImageScanFeedbackResponseBody() = default;
};
class ImageScanFeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImageScanFeedbackResponseBody> body{};

  ImageScanFeedbackResponse() {}

  explicit ImageScanFeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageScanFeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageScanFeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~ImageScanFeedbackResponse() = default;
};
class ImageSyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  ImageSyncScanRequest() {}

  explicit ImageSyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~ImageSyncScanRequest() = default;
};
class ImageSyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ImageSyncScanResponseBody() {}

  explicit ImageSyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImageSyncScanResponseBody() = default;
};
class ImageSyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImageSyncScanResponseBody> body{};

  ImageSyncScanResponse() {}

  explicit ImageSyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageSyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageSyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~ImageSyncScanResponse() = default;
};
class ListSimilarityImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  ListSimilarityImagesRequest() {}

  explicit ListSimilarityImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~ListSimilarityImagesRequest() = default;
};
class ListSimilarityImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ListSimilarityImagesResponseBody() {}

  explicit ListSimilarityImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSimilarityImagesResponseBody() = default;
};
class ListSimilarityImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSimilarityImagesResponseBody> body{};

  ListSimilarityImagesResponse() {}

  explicit ListSimilarityImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSimilarityImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSimilarityImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSimilarityImagesResponse() = default;
};
class ListSimilarityLibrariesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  ListSimilarityLibrariesRequest() {}

  explicit ListSimilarityLibrariesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~ListSimilarityLibrariesRequest() = default;
};
class ListSimilarityLibrariesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ListSimilarityLibrariesResponseBody() {}

  explicit ListSimilarityLibrariesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSimilarityLibrariesResponseBody() = default;
};
class ListSimilarityLibrariesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSimilarityLibrariesResponseBody> body{};

  ListSimilarityLibrariesResponse() {}

  explicit ListSimilarityLibrariesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSimilarityLibrariesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSimilarityLibrariesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSimilarityLibrariesResponse() = default;
};
class LiveStreamAsyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  LiveStreamAsyncScanRequest() {}

  explicit LiveStreamAsyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~LiveStreamAsyncScanRequest() = default;
};
class LiveStreamAsyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LiveStreamAsyncScanResponseBody() {}

  explicit LiveStreamAsyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LiveStreamAsyncScanResponseBody() = default;
};
class LiveStreamAsyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LiveStreamAsyncScanResponseBody> body{};

  LiveStreamAsyncScanResponse() {}

  explicit LiveStreamAsyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LiveStreamAsyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LiveStreamAsyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~LiveStreamAsyncScanResponse() = default;
};
class LiveStreamAsyncScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  LiveStreamAsyncScanResultsRequest() {}

  explicit LiveStreamAsyncScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~LiveStreamAsyncScanResultsRequest() = default;
};
class LiveStreamAsyncScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LiveStreamAsyncScanResultsResponseBody() {}

  explicit LiveStreamAsyncScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LiveStreamAsyncScanResultsResponseBody() = default;
};
class LiveStreamAsyncScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LiveStreamAsyncScanResultsResponseBody> body{};

  LiveStreamAsyncScanResultsResponse() {}

  explicit LiveStreamAsyncScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LiveStreamAsyncScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LiveStreamAsyncScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~LiveStreamAsyncScanResultsResponse() = default;
};
class LiveStreamCancelScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  LiveStreamCancelScanRequest() {}

  explicit LiveStreamCancelScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~LiveStreamCancelScanRequest() = default;
};
class LiveStreamCancelScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LiveStreamCancelScanResponseBody() {}

  explicit LiveStreamCancelScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LiveStreamCancelScanResponseBody() = default;
};
class LiveStreamCancelScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LiveStreamCancelScanResponseBody> body{};

  LiveStreamCancelScanResponse() {}

  explicit LiveStreamCancelScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LiveStreamCancelScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LiveStreamCancelScanResponseBody>(model1);
      }
    }
  }


  virtual ~LiveStreamCancelScanResponse() = default;
};
class SetPersonRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  SetPersonRequest() {}

  explicit SetPersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SetPersonRequest() = default;
};
class SetPersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetPersonResponseBody() {}

  explicit SetPersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetPersonResponseBody() = default;
};
class SetPersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetPersonResponseBody> body{};

  SetPersonResponse() {}

  explicit SetPersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetPersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPersonResponseBody>(model1);
      }
    }
  }


  virtual ~SetPersonResponse() = default;
};
class TextAsyncManualScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  TextAsyncManualScanRequest() {}

  explicit TextAsyncManualScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~TextAsyncManualScanRequest() = default;
};
class TextAsyncManualScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TextAsyncManualScanResponseBody() {}

  explicit TextAsyncManualScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TextAsyncManualScanResponseBody() = default;
};
class TextAsyncManualScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextAsyncManualScanResponseBody> body{};

  TextAsyncManualScanResponse() {}

  explicit TextAsyncManualScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextAsyncManualScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextAsyncManualScanResponseBody>(model1);
      }
    }
  }


  virtual ~TextAsyncManualScanResponse() = default;
};
class TextAsyncManualScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  TextAsyncManualScanResultsRequest() {}

  explicit TextAsyncManualScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~TextAsyncManualScanResultsRequest() = default;
};
class TextAsyncManualScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TextAsyncManualScanResultsResponseBody() {}

  explicit TextAsyncManualScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TextAsyncManualScanResultsResponseBody() = default;
};
class TextAsyncManualScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextAsyncManualScanResultsResponseBody> body{};

  TextAsyncManualScanResultsResponse() {}

  explicit TextAsyncManualScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextAsyncManualScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextAsyncManualScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~TextAsyncManualScanResultsResponse() = default;
};
class TextFeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  TextFeedbackRequest() {}

  explicit TextFeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~TextFeedbackRequest() = default;
};
class TextFeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TextFeedbackResponseBody() {}

  explicit TextFeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TextFeedbackResponseBody() = default;
};
class TextFeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextFeedbackResponseBody> body{};

  TextFeedbackResponse() {}

  explicit TextFeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextFeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextFeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~TextFeedbackResponse() = default;
};
class TextScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  TextScanRequest() {}

  explicit TextScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~TextScanRequest() = default;
};
class TextScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TextScanResponseBody() {}

  explicit TextScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TextScanResponseBody() = default;
};
class TextScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextScanResponseBody> body{};

  TextScanResponse() {}

  explicit TextScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextScanResponseBody>(model1);
      }
    }
  }


  virtual ~TextScanResponse() = default;
};
class UploadCredentialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  UploadCredentialsRequest() {}

  explicit UploadCredentialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UploadCredentialsRequest() = default;
};
class UploadCredentialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UploadCredentialsResponseBody() {}

  explicit UploadCredentialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UploadCredentialsResponseBody() = default;
};
class UploadCredentialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadCredentialsResponseBody> body{};

  UploadCredentialsResponse() {}

  explicit UploadCredentialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadCredentialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadCredentialsResponseBody>(model1);
      }
    }
  }


  virtual ~UploadCredentialsResponse() = default;
};
class VideoAsyncManualScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VideoAsyncManualScanRequest() {}

  explicit VideoAsyncManualScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VideoAsyncManualScanRequest() = default;
};
class VideoAsyncManualScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VideoAsyncManualScanResponseBody() {}

  explicit VideoAsyncManualScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoAsyncManualScanResponseBody() = default;
};
class VideoAsyncManualScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoAsyncManualScanResponseBody> body{};

  VideoAsyncManualScanResponse() {}

  explicit VideoAsyncManualScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoAsyncManualScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoAsyncManualScanResponseBody>(model1);
      }
    }
  }


  virtual ~VideoAsyncManualScanResponse() = default;
};
class VideoAsyncManualScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VideoAsyncManualScanResultsRequest() {}

  explicit VideoAsyncManualScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VideoAsyncManualScanResultsRequest() = default;
};
class VideoAsyncManualScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VideoAsyncManualScanResultsResponseBody() {}

  explicit VideoAsyncManualScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoAsyncManualScanResultsResponseBody() = default;
};
class VideoAsyncManualScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoAsyncManualScanResultsResponseBody> body{};

  VideoAsyncManualScanResultsResponse() {}

  explicit VideoAsyncManualScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoAsyncManualScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoAsyncManualScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~VideoAsyncManualScanResultsResponse() = default;
};
class VideoAsyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VideoAsyncScanRequest() {}

  explicit VideoAsyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VideoAsyncScanRequest() = default;
};
class VideoAsyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VideoAsyncScanResponseBody() {}

  explicit VideoAsyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoAsyncScanResponseBody() = default;
};
class VideoAsyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoAsyncScanResponseBody> body{};

  VideoAsyncScanResponse() {}

  explicit VideoAsyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoAsyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoAsyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~VideoAsyncScanResponse() = default;
};
class VideoAsyncScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VideoAsyncScanResultsRequest() {}

  explicit VideoAsyncScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VideoAsyncScanResultsRequest() = default;
};
class VideoAsyncScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VideoAsyncScanResultsResponseBody() {}

  explicit VideoAsyncScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoAsyncScanResultsResponseBody() = default;
};
class VideoAsyncScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoAsyncScanResultsResponseBody> body{};

  VideoAsyncScanResultsResponse() {}

  explicit VideoAsyncScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoAsyncScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoAsyncScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~VideoAsyncScanResultsResponse() = default;
};
class VideoCancelScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VideoCancelScanRequest() {}

  explicit VideoCancelScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VideoCancelScanRequest() = default;
};
class VideoCancelScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VideoCancelScanResponseBody() {}

  explicit VideoCancelScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoCancelScanResponseBody() = default;
};
class VideoCancelScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoCancelScanResponseBody> body{};

  VideoCancelScanResponse() {}

  explicit VideoCancelScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoCancelScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoCancelScanResponseBody>(model1);
      }
    }
  }


  virtual ~VideoCancelScanResponse() = default;
};
class VideoFeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VideoFeedbackRequest() {}

  explicit VideoFeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VideoFeedbackRequest() = default;
};
class VideoFeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VideoFeedbackResponseBody() {}

  explicit VideoFeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoFeedbackResponseBody() = default;
};
class VideoFeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoFeedbackResponseBody> body{};

  VideoFeedbackResponse() {}

  explicit VideoFeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoFeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoFeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~VideoFeedbackResponse() = default;
};
class VideoSyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VideoSyncScanRequest() {}

  explicit VideoSyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VideoSyncScanRequest() = default;
};
class VideoSyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VideoSyncScanResponseBody() {}

  explicit VideoSyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoSyncScanResponseBody() = default;
};
class VideoSyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoSyncScanResponseBody> body{};

  VideoSyncScanResponse() {}

  explicit VideoSyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoSyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoSyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~VideoSyncScanResponse() = default;
};
class VodAsyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VodAsyncScanRequest() {}

  explicit VodAsyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VodAsyncScanRequest() = default;
};
class VodAsyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VodAsyncScanResponseBody() {}

  explicit VodAsyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VodAsyncScanResponseBody() = default;
};
class VodAsyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VodAsyncScanResponseBody> body{};

  VodAsyncScanResponse() {}

  explicit VodAsyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VodAsyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VodAsyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~VodAsyncScanResponse() = default;
};
class VodAsyncScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VodAsyncScanResultsRequest() {}

  explicit VodAsyncScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VodAsyncScanResultsRequest() = default;
};
class VodAsyncScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VodAsyncScanResultsResponseBody() {}

  explicit VodAsyncScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VodAsyncScanResultsResponseBody() = default;
};
class VodAsyncScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VodAsyncScanResultsResponseBody> body{};

  VodAsyncScanResultsResponse() {}

  explicit VodAsyncScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VodAsyncScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VodAsyncScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~VodAsyncScanResultsResponse() = default;
};
class VoiceAsyncManualScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VoiceAsyncManualScanRequest() {}

  explicit VoiceAsyncManualScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VoiceAsyncManualScanRequest() = default;
};
class VoiceAsyncManualScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceAsyncManualScanResponseBody() {}

  explicit VoiceAsyncManualScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceAsyncManualScanResponseBody() = default;
};
class VoiceAsyncManualScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceAsyncManualScanResponseBody> body{};

  VoiceAsyncManualScanResponse() {}

  explicit VoiceAsyncManualScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceAsyncManualScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceAsyncManualScanResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceAsyncManualScanResponse() = default;
};
class VoiceAsyncManualScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VoiceAsyncManualScanResultsRequest() {}

  explicit VoiceAsyncManualScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VoiceAsyncManualScanResultsRequest() = default;
};
class VoiceAsyncManualScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceAsyncManualScanResultsResponseBody() {}

  explicit VoiceAsyncManualScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceAsyncManualScanResultsResponseBody() = default;
};
class VoiceAsyncManualScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceAsyncManualScanResultsResponseBody> body{};

  VoiceAsyncManualScanResultsResponse() {}

  explicit VoiceAsyncManualScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceAsyncManualScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceAsyncManualScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceAsyncManualScanResultsResponse() = default;
};
class VoiceAsyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VoiceAsyncScanRequest() {}

  explicit VoiceAsyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VoiceAsyncScanRequest() = default;
};
class VoiceAsyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceAsyncScanResponseBody() {}

  explicit VoiceAsyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceAsyncScanResponseBody() = default;
};
class VoiceAsyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceAsyncScanResponseBody> body{};

  VoiceAsyncScanResponse() {}

  explicit VoiceAsyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceAsyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceAsyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceAsyncScanResponse() = default;
};
class VoiceAsyncScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VoiceAsyncScanResultsRequest() {}

  explicit VoiceAsyncScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VoiceAsyncScanResultsRequest() = default;
};
class VoiceAsyncScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceAsyncScanResultsResponseBody() {}

  explicit VoiceAsyncScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceAsyncScanResultsResponseBody() = default;
};
class VoiceAsyncScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceAsyncScanResultsResponseBody> body{};

  VoiceAsyncScanResultsResponse() {}

  explicit VoiceAsyncScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceAsyncScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceAsyncScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceAsyncScanResultsResponse() = default;
};
class VoiceCancelScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  VoiceCancelScanRequest() {}

  explicit VoiceCancelScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~VoiceCancelScanRequest() = default;
};
class VoiceCancelScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceCancelScanResponseBody() {}

  explicit VoiceCancelScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceCancelScanResponseBody() = default;
};
class VoiceCancelScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceCancelScanResponseBody> body{};

  VoiceCancelScanResponse() {}

  explicit VoiceCancelScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceCancelScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceCancelScanResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceCancelScanResponse() = default;
};
class VoiceIdentityCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  VoiceIdentityCheckRequest() {}

  explicit VoiceIdentityCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~VoiceIdentityCheckRequest() = default;
};
class VoiceIdentityCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceIdentityCheckResponseBody() {}

  explicit VoiceIdentityCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceIdentityCheckResponseBody() = default;
};
class VoiceIdentityCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceIdentityCheckResponseBody> body{};

  VoiceIdentityCheckResponse() {}

  explicit VoiceIdentityCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceIdentityCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceIdentityCheckResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceIdentityCheckResponse() = default;
};
class VoiceIdentityRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  VoiceIdentityRegisterRequest() {}

  explicit VoiceIdentityRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~VoiceIdentityRegisterRequest() = default;
};
class VoiceIdentityRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceIdentityRegisterResponseBody() {}

  explicit VoiceIdentityRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceIdentityRegisterResponseBody() = default;
};
class VoiceIdentityRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceIdentityRegisterResponseBody> body{};

  VoiceIdentityRegisterResponse() {}

  explicit VoiceIdentityRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceIdentityRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceIdentityRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceIdentityRegisterResponse() = default;
};
class VoiceIdentityStartCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  VoiceIdentityStartCheckRequest() {}

  explicit VoiceIdentityStartCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~VoiceIdentityStartCheckRequest() = default;
};
class VoiceIdentityStartCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceIdentityStartCheckResponseBody() {}

  explicit VoiceIdentityStartCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceIdentityStartCheckResponseBody() = default;
};
class VoiceIdentityStartCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceIdentityStartCheckResponseBody> body{};

  VoiceIdentityStartCheckResponse() {}

  explicit VoiceIdentityStartCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceIdentityStartCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceIdentityStartCheckResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceIdentityStartCheckResponse() = default;
};
class VoiceIdentityStartRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  VoiceIdentityStartRegisterRequest() {}

  explicit VoiceIdentityStartRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~VoiceIdentityStartRegisterRequest() = default;
};
class VoiceIdentityStartRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceIdentityStartRegisterResponseBody() {}

  explicit VoiceIdentityStartRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceIdentityStartRegisterResponseBody() = default;
};
class VoiceIdentityStartRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceIdentityStartRegisterResponseBody> body{};

  VoiceIdentityStartRegisterResponse() {}

  explicit VoiceIdentityStartRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceIdentityStartRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceIdentityStartRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceIdentityStartRegisterResponse() = default;
};
class VoiceIdentityUnregisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  VoiceIdentityUnregisterRequest() {}

  explicit VoiceIdentityUnregisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~VoiceIdentityUnregisterRequest() = default;
};
class VoiceIdentityUnregisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceIdentityUnregisterResponseBody() {}

  explicit VoiceIdentityUnregisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceIdentityUnregisterResponseBody() = default;
};
class VoiceIdentityUnregisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceIdentityUnregisterResponseBody> body{};

  VoiceIdentityUnregisterResponse() {}

  explicit VoiceIdentityUnregisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceIdentityUnregisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceIdentityUnregisterResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceIdentityUnregisterResponse() = default;
};
class VoiceSyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};
  shared_ptr<string> regionId{};

  VoiceSyncScanRequest() {}

  explicit VoiceSyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~VoiceSyncScanRequest() = default;
};
class VoiceSyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VoiceSyncScanResponseBody() {}

  explicit VoiceSyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceSyncScanResponseBody() = default;
};
class VoiceSyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceSyncScanResponseBody> body{};

  VoiceSyncScanResponse() {}

  explicit VoiceSyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceSyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceSyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceSyncScanResponse() = default;
};
class WebpageAsyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  WebpageAsyncScanRequest() {}

  explicit WebpageAsyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~WebpageAsyncScanRequest() = default;
};
class WebpageAsyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  WebpageAsyncScanResponseBody() {}

  explicit WebpageAsyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~WebpageAsyncScanResponseBody() = default;
};
class WebpageAsyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<WebpageAsyncScanResponseBody> body{};

  WebpageAsyncScanResponse() {}

  explicit WebpageAsyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        WebpageAsyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WebpageAsyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~WebpageAsyncScanResponse() = default;
};
class WebpageAsyncScanResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  WebpageAsyncScanResultsRequest() {}

  explicit WebpageAsyncScanResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~WebpageAsyncScanResultsRequest() = default;
};
class WebpageAsyncScanResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  WebpageAsyncScanResultsResponseBody() {}

  explicit WebpageAsyncScanResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~WebpageAsyncScanResultsResponseBody() = default;
};
class WebpageAsyncScanResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<WebpageAsyncScanResultsResponseBody> body{};

  WebpageAsyncScanResultsResponse() {}

  explicit WebpageAsyncScanResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        WebpageAsyncScanResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WebpageAsyncScanResultsResponseBody>(model1);
      }
    }
  }


  virtual ~WebpageAsyncScanResultsResponse() = default;
};
class WebpageSyncScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInfo{};

  WebpageSyncScanRequest() {}

  explicit WebpageSyncScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
  }


  virtual ~WebpageSyncScanRequest() = default;
};
class WebpageSyncScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  WebpageSyncScanResponseBody() {}

  explicit WebpageSyncScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~WebpageSyncScanResponseBody() = default;
};
class WebpageSyncScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<WebpageSyncScanResponseBody> body{};

  WebpageSyncScanResponse() {}

  explicit WebpageSyncScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        WebpageSyncScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WebpageSyncScanResponseBody>(model1);
      }
    }
  }


  virtual ~WebpageSyncScanResponse() = default;
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
  AddFacesResponse addFacesWithOptions(shared_ptr<AddFacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFacesResponse addFaces(shared_ptr<AddFacesRequest> request);
  AddGroupsResponse addGroupsWithOptions(shared_ptr<AddGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGroupsResponse addGroups(shared_ptr<AddGroupsRequest> request);
  AddPersonResponse addPersonWithOptions(shared_ptr<AddPersonRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddPersonResponse addPerson(shared_ptr<AddPersonRequest> request);
  AddSimilarityImageResponse addSimilarityImageWithOptions(shared_ptr<AddSimilarityImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSimilarityImageResponse addSimilarityImage(shared_ptr<AddSimilarityImageRequest> request);
  AddSimilarityLibraryResponse addSimilarityLibraryWithOptions(shared_ptr<AddSimilarityLibraryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSimilarityLibraryResponse addSimilarityLibrary(shared_ptr<AddSimilarityLibraryRequest> request);
  AddVideoDnaResponse addVideoDnaWithOptions(shared_ptr<AddVideoDnaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddVideoDnaResponse addVideoDna(shared_ptr<AddVideoDnaRequest> request);
  AddVideoDnaGroupResponse addVideoDnaGroupWithOptions(shared_ptr<AddVideoDnaGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddVideoDnaGroupResponse addVideoDnaGroup(shared_ptr<AddVideoDnaGroupRequest> request);
  DeleteFacesResponse deleteFacesWithOptions(shared_ptr<DeleteFacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFacesResponse deleteFaces(shared_ptr<DeleteFacesRequest> request);
  DeleteGroupsResponse deleteGroupsWithOptions(shared_ptr<DeleteGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupsResponse deleteGroups(shared_ptr<DeleteGroupsRequest> request);
  DeletePersonResponse deletePersonWithOptions(shared_ptr<DeletePersonRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePersonResponse deletePerson(shared_ptr<DeletePersonRequest> request);
  DeleteSimilarityImageResponse deleteSimilarityImageWithOptions(shared_ptr<DeleteSimilarityImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSimilarityImageResponse deleteSimilarityImage(shared_ptr<DeleteSimilarityImageRequest> request);
  DeleteSimilarityLibraryResponse deleteSimilarityLibraryWithOptions(shared_ptr<DeleteSimilarityLibraryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSimilarityLibraryResponse deleteSimilarityLibrary(shared_ptr<DeleteSimilarityLibraryRequest> request);
  DeleteVideoDnaResponse deleteVideoDnaWithOptions(shared_ptr<DeleteVideoDnaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVideoDnaResponse deleteVideoDna(shared_ptr<DeleteVideoDnaRequest> request);
  DeleteVideoDnaGroupResponse deleteVideoDnaGroupWithOptions(shared_ptr<DeleteVideoDnaGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVideoDnaGroupResponse deleteVideoDnaGroup(shared_ptr<DeleteVideoDnaGroupRequest> request);
  DetectFaceResponse detectFaceWithOptions(shared_ptr<DetectFaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectFaceResponse detectFace(shared_ptr<DetectFaceRequest> request);
  FileAsyncScanResponse fileAsyncScanWithOptions(shared_ptr<FileAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FileAsyncScanResponse fileAsyncScan(shared_ptr<FileAsyncScanRequest> request);
  FileAsyncScanResultsResponse fileAsyncScanResultsWithOptions(shared_ptr<FileAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FileAsyncScanResultsResponse fileAsyncScanResults(shared_ptr<FileAsyncScanResultsRequest> request);
  FileAsyncScanV2Response fileAsyncScanV2WithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FileAsyncScanV2Response fileAsyncScanV2();
  GetFacesResponse getFacesWithOptions(shared_ptr<GetFacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFacesResponse getFaces(shared_ptr<GetFacesRequest> request);
  GetGroupsResponse getGroupsWithOptions(shared_ptr<GetGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupsResponse getGroups(shared_ptr<GetGroupsRequest> request);
  GetPersonResponse getPersonWithOptions(shared_ptr<GetPersonRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPersonResponse getPerson(shared_ptr<GetPersonRequest> request);
  GetPersonsResponse getPersonsWithOptions(shared_ptr<GetPersonsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPersonsResponse getPersons(shared_ptr<GetPersonsRequest> request);
  GetSimilarityImageResponse getSimilarityImageWithOptions(shared_ptr<GetSimilarityImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSimilarityImageResponse getSimilarityImage(shared_ptr<GetSimilarityImageRequest> request);
  GetSimilarityLibraryResponse getSimilarityLibraryWithOptions(shared_ptr<GetSimilarityLibraryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSimilarityLibraryResponse getSimilarityLibrary(shared_ptr<GetSimilarityLibraryRequest> request);
  ImageAsyncManualScanResponse imageAsyncManualScanWithOptions(shared_ptr<ImageAsyncManualScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageAsyncManualScanResponse imageAsyncManualScan(shared_ptr<ImageAsyncManualScanRequest> request);
  ImageAsyncManualScanResultsResponse imageAsyncManualScanResultsWithOptions(shared_ptr<ImageAsyncManualScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageAsyncManualScanResultsResponse imageAsyncManualScanResults(shared_ptr<ImageAsyncManualScanResultsRequest> request);
  ImageAsyncScanResponse imageAsyncScanWithOptions(shared_ptr<ImageAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageAsyncScanResponse imageAsyncScan(shared_ptr<ImageAsyncScanRequest> request);
  ImageAsyncScanResultsResponse imageAsyncScanResultsWithOptions(shared_ptr<ImageAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageAsyncScanResultsResponse imageAsyncScanResults(shared_ptr<ImageAsyncScanResultsRequest> request);
  ImageScanFeedbackResponse imageScanFeedbackWithOptions(shared_ptr<ImageScanFeedbackRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageScanFeedbackResponse imageScanFeedback(shared_ptr<ImageScanFeedbackRequest> request);
  ImageSyncScanResponse imageSyncScanWithOptions(shared_ptr<ImageSyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageSyncScanResponse imageSyncScan(shared_ptr<ImageSyncScanRequest> request);
  ListSimilarityImagesResponse listSimilarityImagesWithOptions(shared_ptr<ListSimilarityImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSimilarityImagesResponse listSimilarityImages(shared_ptr<ListSimilarityImagesRequest> request);
  ListSimilarityLibrariesResponse listSimilarityLibrariesWithOptions(shared_ptr<ListSimilarityLibrariesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSimilarityLibrariesResponse listSimilarityLibraries(shared_ptr<ListSimilarityLibrariesRequest> request);
  LiveStreamAsyncScanResponse liveStreamAsyncScanWithOptions(shared_ptr<LiveStreamAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LiveStreamAsyncScanResponse liveStreamAsyncScan(shared_ptr<LiveStreamAsyncScanRequest> request);
  LiveStreamAsyncScanResultsResponse liveStreamAsyncScanResultsWithOptions(shared_ptr<LiveStreamAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LiveStreamAsyncScanResultsResponse liveStreamAsyncScanResults(shared_ptr<LiveStreamAsyncScanResultsRequest> request);
  LiveStreamCancelScanResponse liveStreamCancelScanWithOptions(shared_ptr<LiveStreamCancelScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LiveStreamCancelScanResponse liveStreamCancelScan(shared_ptr<LiveStreamCancelScanRequest> request);
  SetPersonResponse setPersonWithOptions(shared_ptr<SetPersonRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPersonResponse setPerson(shared_ptr<SetPersonRequest> request);
  TextAsyncManualScanResponse textAsyncManualScanWithOptions(shared_ptr<TextAsyncManualScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TextAsyncManualScanResponse textAsyncManualScan(shared_ptr<TextAsyncManualScanRequest> request);
  TextAsyncManualScanResultsResponse textAsyncManualScanResultsWithOptions(shared_ptr<TextAsyncManualScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TextAsyncManualScanResultsResponse textAsyncManualScanResults(shared_ptr<TextAsyncManualScanResultsRequest> request);
  TextFeedbackResponse textFeedbackWithOptions(shared_ptr<TextFeedbackRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TextFeedbackResponse textFeedback(shared_ptr<TextFeedbackRequest> request);
  TextScanResponse textScanWithOptions(shared_ptr<TextScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TextScanResponse textScan(shared_ptr<TextScanRequest> request);
  UploadCredentialsResponse uploadCredentialsWithOptions(shared_ptr<UploadCredentialsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadCredentialsResponse uploadCredentials(shared_ptr<UploadCredentialsRequest> request);
  VideoAsyncManualScanResponse videoAsyncManualScanWithOptions(shared_ptr<VideoAsyncManualScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoAsyncManualScanResponse videoAsyncManualScan(shared_ptr<VideoAsyncManualScanRequest> request);
  VideoAsyncManualScanResultsResponse videoAsyncManualScanResultsWithOptions(shared_ptr<VideoAsyncManualScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoAsyncManualScanResultsResponse videoAsyncManualScanResults(shared_ptr<VideoAsyncManualScanResultsRequest> request);
  VideoAsyncScanResponse videoAsyncScanWithOptions(shared_ptr<VideoAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoAsyncScanResponse videoAsyncScan(shared_ptr<VideoAsyncScanRequest> request);
  VideoAsyncScanResultsResponse videoAsyncScanResultsWithOptions(shared_ptr<VideoAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoAsyncScanResultsResponse videoAsyncScanResults(shared_ptr<VideoAsyncScanResultsRequest> request);
  VideoCancelScanResponse videoCancelScanWithOptions(shared_ptr<VideoCancelScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoCancelScanResponse videoCancelScan(shared_ptr<VideoCancelScanRequest> request);
  VideoFeedbackResponse videoFeedbackWithOptions(shared_ptr<VideoFeedbackRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoFeedbackResponse videoFeedback(shared_ptr<VideoFeedbackRequest> request);
  VideoSyncScanResponse videoSyncScanWithOptions(shared_ptr<VideoSyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoSyncScanResponse videoSyncScan(shared_ptr<VideoSyncScanRequest> request);
  VodAsyncScanResponse vodAsyncScanWithOptions(shared_ptr<VodAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VodAsyncScanResponse vodAsyncScan(shared_ptr<VodAsyncScanRequest> request);
  VodAsyncScanResultsResponse vodAsyncScanResultsWithOptions(shared_ptr<VodAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VodAsyncScanResultsResponse vodAsyncScanResults(shared_ptr<VodAsyncScanResultsRequest> request);
  VoiceAsyncManualScanResponse voiceAsyncManualScanWithOptions(shared_ptr<VoiceAsyncManualScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceAsyncManualScanResponse voiceAsyncManualScan(shared_ptr<VoiceAsyncManualScanRequest> request);
  VoiceAsyncManualScanResultsResponse voiceAsyncManualScanResultsWithOptions(shared_ptr<VoiceAsyncManualScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceAsyncManualScanResultsResponse voiceAsyncManualScanResults(shared_ptr<VoiceAsyncManualScanResultsRequest> request);
  VoiceAsyncScanResponse voiceAsyncScanWithOptions(shared_ptr<VoiceAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceAsyncScanResponse voiceAsyncScan(shared_ptr<VoiceAsyncScanRequest> request);
  VoiceAsyncScanResultsResponse voiceAsyncScanResultsWithOptions(shared_ptr<VoiceAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceAsyncScanResultsResponse voiceAsyncScanResults(shared_ptr<VoiceAsyncScanResultsRequest> request);
  VoiceCancelScanResponse voiceCancelScanWithOptions(shared_ptr<VoiceCancelScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceCancelScanResponse voiceCancelScan(shared_ptr<VoiceCancelScanRequest> request);
  VoiceIdentityCheckResponse voiceIdentityCheckWithOptions(shared_ptr<VoiceIdentityCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceIdentityCheckResponse voiceIdentityCheck(shared_ptr<VoiceIdentityCheckRequest> request);
  VoiceIdentityRegisterResponse voiceIdentityRegisterWithOptions(shared_ptr<VoiceIdentityRegisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceIdentityRegisterResponse voiceIdentityRegister(shared_ptr<VoiceIdentityRegisterRequest> request);
  VoiceIdentityStartCheckResponse voiceIdentityStartCheckWithOptions(shared_ptr<VoiceIdentityStartCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceIdentityStartCheckResponse voiceIdentityStartCheck(shared_ptr<VoiceIdentityStartCheckRequest> request);
  VoiceIdentityStartRegisterResponse voiceIdentityStartRegisterWithOptions(shared_ptr<VoiceIdentityStartRegisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceIdentityStartRegisterResponse voiceIdentityStartRegister(shared_ptr<VoiceIdentityStartRegisterRequest> request);
  VoiceIdentityUnregisterResponse voiceIdentityUnregisterWithOptions(shared_ptr<VoiceIdentityUnregisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceIdentityUnregisterResponse voiceIdentityUnregister(shared_ptr<VoiceIdentityUnregisterRequest> request);
  VoiceSyncScanResponse voiceSyncScanWithOptions(shared_ptr<VoiceSyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceSyncScanResponse voiceSyncScan(shared_ptr<VoiceSyncScanRequest> request);
  WebpageAsyncScanResponse webpageAsyncScanWithOptions(shared_ptr<WebpageAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WebpageAsyncScanResponse webpageAsyncScan(shared_ptr<WebpageAsyncScanRequest> request);
  WebpageAsyncScanResultsResponse webpageAsyncScanResultsWithOptions(shared_ptr<WebpageAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WebpageAsyncScanResultsResponse webpageAsyncScanResults(shared_ptr<WebpageAsyncScanResultsRequest> request);
  WebpageSyncScanResponse webpageSyncScanWithOptions(shared_ptr<WebpageSyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WebpageSyncScanResponse webpageSyncScan(shared_ptr<WebpageSyncScanRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Green20180509

#endif
