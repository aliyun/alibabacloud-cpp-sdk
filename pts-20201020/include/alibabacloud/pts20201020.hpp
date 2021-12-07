// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PTS20201020_H_
#define ALIBABACLOUD_PTS20201020_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PTS20201020 {
class CreatePtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> scene{};

  CreatePtsSceneRequest() {}

  explicit CreatePtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~CreatePtsSceneRequest() = default;
};
class CreatePtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneId{};
  shared_ptr<bool> success{};

  CreatePtsSceneResponseBody() {}

  explicit CreatePtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePtsSceneResponseBody() = default;
};
class CreatePtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePtsSceneResponseBody> body{};

  CreatePtsSceneResponse() {}

  explicit CreatePtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePtsSceneResponse() = default;
};
class CreatePtsSceneBaseLineFromReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> reportId{};
  shared_ptr<string> sceneId{};

  CreatePtsSceneBaseLineFromReportRequest() {}

  explicit CreatePtsSceneBaseLineFromReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~CreatePtsSceneBaseLineFromReportRequest() = default;
};
class CreatePtsSceneBaseLineFromReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePtsSceneBaseLineFromReportResponseBody() {}

  explicit CreatePtsSceneBaseLineFromReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreatePtsSceneBaseLineFromReportResponseBody() = default;
};
class CreatePtsSceneBaseLineFromReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePtsSceneBaseLineFromReportResponseBody> body{};

  CreatePtsSceneBaseLineFromReportResponse() {}

  explicit CreatePtsSceneBaseLineFromReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePtsSceneBaseLineFromReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePtsSceneBaseLineFromReportResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePtsSceneBaseLineFromReportResponse() = default;
};
class DeletePtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  DeletePtsSceneRequest() {}

  explicit DeletePtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~DeletePtsSceneRequest() = default;
};
class DeletePtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePtsSceneResponseBody() {}

  explicit DeletePtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeletePtsSceneResponseBody() = default;
};
class DeletePtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePtsSceneResponseBody> body{};

  DeletePtsSceneResponse() {}

  explicit DeletePtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePtsSceneResponse() = default;
};
class DeletePtsSceneBaseLineRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  DeletePtsSceneBaseLineRequest() {}

  explicit DeletePtsSceneBaseLineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~DeletePtsSceneBaseLineRequest() = default;
};
class DeletePtsSceneBaseLineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePtsSceneBaseLineResponseBody() {}

  explicit DeletePtsSceneBaseLineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeletePtsSceneBaseLineResponseBody() = default;
};
class DeletePtsSceneBaseLineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePtsSceneBaseLineResponseBody> body{};

  DeletePtsSceneBaseLineResponse() {}

  explicit DeletePtsSceneBaseLineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePtsSceneBaseLineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePtsSceneBaseLineResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePtsSceneBaseLineResponse() = default;
};
class DeletePtsScenesRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> sceneIds{};

  DeletePtsScenesRequest() {}

  explicit DeletePtsScenesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneIds) {
      res["SceneIds"] = boost::any(*sceneIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneIds") != m.end() && !m["SceneIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SceneIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sceneIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeletePtsScenesRequest() = default;
};
class DeletePtsScenesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneIdsShrink{};

  DeletePtsScenesShrinkRequest() {}

  explicit DeletePtsScenesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneIdsShrink) {
      res["SceneIds"] = boost::any(*sceneIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneIds") != m.end() && !m["SceneIds"].empty()) {
      sceneIdsShrink = make_shared<string>(boost::any_cast<string>(m["SceneIds"]));
    }
  }


  virtual ~DeletePtsScenesShrinkRequest() = default;
};
class DeletePtsScenesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePtsScenesResponseBody() {}

  explicit DeletePtsScenesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeletePtsScenesResponseBody() = default;
};
class DeletePtsScenesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePtsScenesResponseBody> body{};

  DeletePtsScenesResponse() {}

  explicit DeletePtsScenesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePtsScenesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePtsScenesResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePtsScenesResponse() = default;
};
class GetJMeterLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> agentIndex{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> level{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> reportId{};
  shared_ptr<string> thread{};

  GetJMeterLogsRequest() {}

  explicit GetJMeterLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentIndex) {
      res["AgentIndex"] = boost::any(*agentIndex);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (thread) {
      res["Thread"] = boost::any(*thread);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentIndex") != m.end() && !m["AgentIndex"].empty()) {
      agentIndex = make_shared<long>(boost::any_cast<long>(m["AgentIndex"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("Thread") != m.end() && !m["Thread"].empty()) {
      thread = make_shared<string>(boost::any_cast<string>(m["Thread"]));
    }
  }


  virtual ~GetJMeterLogsRequest() = default;
};
class GetJMeterLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> agentCount{};
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> logs{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  GetJMeterLogsResponseBody() {}

  explicit GetJMeterLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentCount) {
      res["AgentCount"] = boost::any(*agentCount);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("AgentCount") != m.end() && !m["AgentCount"].empty()) {
      agentCount = make_shared<long>(boost::any_cast<long>(m["AgentCount"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      logs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~GetJMeterLogsResponseBody() = default;
};
class GetJMeterLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJMeterLogsResponseBody> body{};

  GetJMeterLogsResponse() {}

  explicit GetJMeterLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJMeterLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJMeterLogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetJMeterLogsResponse() = default;
};
class GetJMeterSampleMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> reportId{};
  shared_ptr<long> samplerId{};

  GetJMeterSampleMetricsRequest() {}

  explicit GetJMeterSampleMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (samplerId) {
      res["SamplerId"] = boost::any(*samplerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("SamplerId") != m.end() && !m["SamplerId"].empty()) {
      samplerId = make_shared<long>(boost::any_cast<long>(m["SamplerId"]));
    }
  }


  virtual ~GetJMeterSampleMetricsRequest() = default;
};
class GetJMeterSampleMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> sampleMetricList{};
  shared_ptr<map<string, boost::any>> samplerMap{};
  shared_ptr<bool> success{};

  GetJMeterSampleMetricsResponseBody() {}

  explicit GetJMeterSampleMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sampleMetricList) {
      res["SampleMetricList"] = boost::any(*sampleMetricList);
    }
    if (samplerMap) {
      res["SamplerMap"] = boost::any(*samplerMap);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SampleMetricList") != m.end() && !m["SampleMetricList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SampleMetricList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SampleMetricList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sampleMetricList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SamplerMap") != m.end() && !m["SamplerMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SamplerMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      samplerMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetJMeterSampleMetricsResponseBody() = default;
};
class GetJMeterSampleMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJMeterSampleMetricsResponseBody> body{};

  GetJMeterSampleMetricsResponse() {}

  explicit GetJMeterSampleMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJMeterSampleMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJMeterSampleMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetJMeterSampleMetricsResponse() = default;
};
class GetJMeterSamplingLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> agentId{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<long> maxRT{};
  shared_ptr<long> minRT{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> reportId{};
  shared_ptr<string> responseCode{};
  shared_ptr<long> samplerId{};
  shared_ptr<bool> success{};
  shared_ptr<string> thread{};

  GetJMeterSamplingLogsRequest() {}

  explicit GetJMeterSamplingLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (maxRT) {
      res["MaxRT"] = boost::any(*maxRT);
    }
    if (minRT) {
      res["MinRT"] = boost::any(*minRT);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (samplerId) {
      res["SamplerId"] = boost::any(*samplerId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (thread) {
      res["Thread"] = boost::any(*thread);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("MaxRT") != m.end() && !m["MaxRT"].empty()) {
      maxRT = make_shared<long>(boost::any_cast<long>(m["MaxRT"]));
    }
    if (m.find("MinRT") != m.end() && !m["MinRT"].empty()) {
      minRT = make_shared<long>(boost::any_cast<long>(m["MinRT"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("SamplerId") != m.end() && !m["SamplerId"].empty()) {
      samplerId = make_shared<long>(boost::any_cast<long>(m["SamplerId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Thread") != m.end() && !m["Thread"].empty()) {
      thread = make_shared<string>(boost::any_cast<string>(m["Thread"]));
    }
  }


  virtual ~GetJMeterSamplingLogsRequest() = default;
};
class GetJMeterSamplingLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> sampleResults{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  GetJMeterSamplingLogsResponseBody() {}

  explicit GetJMeterSamplingLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sampleResults) {
      res["SampleResults"] = boost::any(*sampleResults);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SampleResults") != m.end() && !m["SampleResults"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SampleResults"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SampleResults"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sampleResults = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetJMeterSamplingLogsResponseBody() = default;
};
class GetJMeterSamplingLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJMeterSamplingLogsResponseBody> body{};

  GetJMeterSamplingLogsResponse() {}

  explicit GetJMeterSamplingLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJMeterSamplingLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJMeterSamplingLogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetJMeterSamplingLogsResponse() = default;
};
class GetJMeterSceneRunningDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  GetJMeterSceneRunningDataRequest() {}

  explicit GetJMeterSceneRunningDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetJMeterSceneRunningDataRequest() = default;
};
class GetJMeterSceneRunningDataResponseBodyRunningData : public Darabonba::Model {
public:
  shared_ptr<long> agentCount{};
  shared_ptr<vector<string>> agentIdList{};
  shared_ptr<map<string, boost::any>> allSampleStat{};
  shared_ptr<long> concurrency{};
  shared_ptr<bool> hasReport{};
  shared_ptr<bool> isDebugging{};
  shared_ptr<vector<map<string, boost::any>>> sampleStatList{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> stageName{};
  shared_ptr<string> status{};
  shared_ptr<long> vum{};

  GetJMeterSceneRunningDataResponseBodyRunningData() {}

  explicit GetJMeterSceneRunningDataResponseBodyRunningData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentCount) {
      res["AgentCount"] = boost::any(*agentCount);
    }
    if (agentIdList) {
      res["AgentIdList"] = boost::any(*agentIdList);
    }
    if (allSampleStat) {
      res["AllSampleStat"] = boost::any(*allSampleStat);
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (hasReport) {
      res["HasReport"] = boost::any(*hasReport);
    }
    if (isDebugging) {
      res["IsDebugging"] = boost::any(*isDebugging);
    }
    if (sampleStatList) {
      res["SampleStatList"] = boost::any(*sampleStatList);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vum) {
      res["Vum"] = boost::any(*vum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentCount") != m.end() && !m["AgentCount"].empty()) {
      agentCount = make_shared<long>(boost::any_cast<long>(m["AgentCount"]));
    }
    if (m.find("AgentIdList") != m.end() && !m["AgentIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      agentIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AllSampleStat") != m.end() && !m["AllSampleStat"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AllSampleStat"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      allSampleStat = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("HasReport") != m.end() && !m["HasReport"].empty()) {
      hasReport = make_shared<bool>(boost::any_cast<bool>(m["HasReport"]));
    }
    if (m.find("IsDebugging") != m.end() && !m["IsDebugging"].empty()) {
      isDebugging = make_shared<bool>(boost::any_cast<bool>(m["IsDebugging"]));
    }
    if (m.find("SampleStatList") != m.end() && !m["SampleStatList"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["SampleStatList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SampleStatList"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      sampleStatList = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Vum") != m.end() && !m["Vum"].empty()) {
      vum = make_shared<long>(boost::any_cast<long>(m["Vum"]));
    }
  }


  virtual ~GetJMeterSceneRunningDataResponseBodyRunningData() = default;
};
class GetJMeterSceneRunningDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> documentUrl{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetJMeterSceneRunningDataResponseBodyRunningData> runningData{};
  shared_ptr<bool> success{};

  GetJMeterSceneRunningDataResponseBody() {}

  explicit GetJMeterSceneRunningDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (documentUrl) {
      res["DocumentUrl"] = boost::any(*documentUrl);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runningData) {
      res["RunningData"] = runningData ? boost::any(runningData->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DocumentUrl") != m.end() && !m["DocumentUrl"].empty()) {
      documentUrl = make_shared<string>(boost::any_cast<string>(m["DocumentUrl"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunningData") != m.end() && !m["RunningData"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunningData"].type()) {
        GetJMeterSceneRunningDataResponseBodyRunningData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunningData"]));
        runningData = make_shared<GetJMeterSceneRunningDataResponseBodyRunningData>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetJMeterSceneRunningDataResponseBody() = default;
};
class GetJMeterSceneRunningDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJMeterSceneRunningDataResponseBody> body{};

  GetJMeterSceneRunningDataResponse() {}

  explicit GetJMeterSceneRunningDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJMeterSceneRunningDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJMeterSceneRunningDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetJMeterSceneRunningDataResponse() = default;
};
class GetOpenJMeterSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  GetOpenJMeterSceneRequest() {}

  explicit GetOpenJMeterSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetOpenJMeterSceneRequest() = default;
};
class GetOpenJMeterSceneResponseBodySceneBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> createName{};
  shared_ptr<string> modifyName{};
  shared_ptr<string> operateType{};
  shared_ptr<string> principal{};
  shared_ptr<string> remark{};
  shared_ptr<string> resource{};

  GetOpenJMeterSceneResponseBodySceneBaseInfo() {}

  explicit GetOpenJMeterSceneResponseBodySceneBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createName) {
      res["CreateName"] = boost::any(*createName);
    }
    if (modifyName) {
      res["ModifyName"] = boost::any(*modifyName);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (principal) {
      res["Principal"] = boost::any(*principal);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateName") != m.end() && !m["CreateName"].empty()) {
      createName = make_shared<string>(boost::any_cast<string>(m["CreateName"]));
    }
    if (m.find("ModifyName") != m.end() && !m["ModifyName"].empty()) {
      modifyName = make_shared<string>(boost::any_cast<string>(m["ModifyName"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("Principal") != m.end() && !m["Principal"].empty()) {
      principal = make_shared<string>(boost::any_cast<string>(m["Principal"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
  }


  virtual ~GetOpenJMeterSceneResponseBodySceneBaseInfo() = default;
};
class GetOpenJMeterSceneResponseBodySceneDnsCacheConfig : public Darabonba::Model {
public:
  shared_ptr<bool> clearCacheEachIteration{};
  shared_ptr<vector<string>> dnsServers{};
  shared_ptr<map<string, boost::any>> hostTable{};

  GetOpenJMeterSceneResponseBodySceneDnsCacheConfig() {}

  explicit GetOpenJMeterSceneResponseBodySceneDnsCacheConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clearCacheEachIteration) {
      res["ClearCacheEachIteration"] = boost::any(*clearCacheEachIteration);
    }
    if (dnsServers) {
      res["DnsServers"] = boost::any(*dnsServers);
    }
    if (hostTable) {
      res["HostTable"] = boost::any(*hostTable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClearCacheEachIteration") != m.end() && !m["ClearCacheEachIteration"].empty()) {
      clearCacheEachIteration = make_shared<bool>(boost::any_cast<bool>(m["ClearCacheEachIteration"]));
    }
    if (m.find("DnsServers") != m.end() && !m["DnsServers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DnsServers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DnsServers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsServers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HostTable") != m.end() && !m["HostTable"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["HostTable"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      hostTable = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetOpenJMeterSceneResponseBodySceneDnsCacheConfig() = default;
};
class GetOpenJMeterSceneResponseBodySceneFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileOssAddress{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> fileType{};
  shared_ptr<long> id{};
  shared_ptr<string> md5{};
  shared_ptr<bool> splitCsv{};

  GetOpenJMeterSceneResponseBodySceneFileList() {}

  explicit GetOpenJMeterSceneResponseBodySceneFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileOssAddress) {
      res["FileOssAddress"] = boost::any(*fileOssAddress);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (splitCsv) {
      res["SplitCsv"] = boost::any(*splitCsv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileOssAddress") != m.end() && !m["FileOssAddress"].empty()) {
      fileOssAddress = make_shared<string>(boost::any_cast<string>(m["FileOssAddress"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("SplitCsv") != m.end() && !m["SplitCsv"].empty()) {
      splitCsv = make_shared<bool>(boost::any_cast<bool>(m["SplitCsv"]));
    }
  }


  virtual ~GetOpenJMeterSceneResponseBodySceneFileList() = default;
};
class GetOpenJMeterSceneResponseBodyScene : public Darabonba::Model {
public:
  shared_ptr<long> agentCount{};
  shared_ptr<GetOpenJMeterSceneResponseBodySceneBaseInfo> baseInfo{};
  shared_ptr<long> concurrency{};
  shared_ptr<string> constantThroughputTimerType{};
  shared_ptr<GetOpenJMeterSceneResponseBodySceneDnsCacheConfig> dnsCacheConfig{};
  shared_ptr<long> duration{};
  shared_ptr<string> environmentId{};
  shared_ptr<vector<GetOpenJMeterSceneResponseBodySceneFileList>> fileList{};
  shared_ptr<bool> isVpcTest{};
  shared_ptr<long> rampUp{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> steps{};
  shared_ptr<string> syncTimerType{};
  shared_ptr<string> testFile{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  GetOpenJMeterSceneResponseBodyScene() {}

  explicit GetOpenJMeterSceneResponseBodyScene(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentCount) {
      res["AgentCount"] = boost::any(*agentCount);
    }
    if (baseInfo) {
      res["BaseInfo"] = baseInfo ? boost::any(baseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (constantThroughputTimerType) {
      res["ConstantThroughputTimerType"] = boost::any(*constantThroughputTimerType);
    }
    if (dnsCacheConfig) {
      res["DnsCacheConfig"] = dnsCacheConfig ? boost::any(dnsCacheConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (environmentId) {
      res["EnvironmentId"] = boost::any(*environmentId);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (isVpcTest) {
      res["IsVpcTest"] = boost::any(*isVpcTest);
    }
    if (rampUp) {
      res["RampUp"] = boost::any(*rampUp);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (steps) {
      res["Steps"] = boost::any(*steps);
    }
    if (syncTimerType) {
      res["SyncTimerType"] = boost::any(*syncTimerType);
    }
    if (testFile) {
      res["TestFile"] = boost::any(*testFile);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentCount") != m.end() && !m["AgentCount"].empty()) {
      agentCount = make_shared<long>(boost::any_cast<long>(m["AgentCount"]));
    }
    if (m.find("BaseInfo") != m.end() && !m["BaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BaseInfo"].type()) {
        GetOpenJMeterSceneResponseBodySceneBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BaseInfo"]));
        baseInfo = make_shared<GetOpenJMeterSceneResponseBodySceneBaseInfo>(model1);
      }
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("ConstantThroughputTimerType") != m.end() && !m["ConstantThroughputTimerType"].empty()) {
      constantThroughputTimerType = make_shared<string>(boost::any_cast<string>(m["ConstantThroughputTimerType"]));
    }
    if (m.find("DnsCacheConfig") != m.end() && !m["DnsCacheConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsCacheConfig"].type()) {
        GetOpenJMeterSceneResponseBodySceneDnsCacheConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsCacheConfig"]));
        dnsCacheConfig = make_shared<GetOpenJMeterSceneResponseBodySceneDnsCacheConfig>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EnvironmentId") != m.end() && !m["EnvironmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["EnvironmentId"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<GetOpenJMeterSceneResponseBodySceneFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOpenJMeterSceneResponseBodySceneFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<GetOpenJMeterSceneResponseBodySceneFileList>>(expect1);
      }
    }
    if (m.find("IsVpcTest") != m.end() && !m["IsVpcTest"].empty()) {
      isVpcTest = make_shared<bool>(boost::any_cast<bool>(m["IsVpcTest"]));
    }
    if (m.find("RampUp") != m.end() && !m["RampUp"].empty()) {
      rampUp = make_shared<long>(boost::any_cast<long>(m["RampUp"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Steps") != m.end() && !m["Steps"].empty()) {
      steps = make_shared<long>(boost::any_cast<long>(m["Steps"]));
    }
    if (m.find("SyncTimerType") != m.end() && !m["SyncTimerType"].empty()) {
      syncTimerType = make_shared<string>(boost::any_cast<string>(m["SyncTimerType"]));
    }
    if (m.find("TestFile") != m.end() && !m["TestFile"].empty()) {
      testFile = make_shared<string>(boost::any_cast<string>(m["TestFile"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetOpenJMeterSceneResponseBodyScene() = default;
};
class GetOpenJMeterSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetOpenJMeterSceneResponseBodyScene> scene{};
  shared_ptr<bool> success{};

  GetOpenJMeterSceneResponseBody() {}

  explicit GetOpenJMeterSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scene) {
      res["Scene"] = scene ? boost::any(scene->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scene"].type()) {
        GetOpenJMeterSceneResponseBodyScene model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scene"]));
        scene = make_shared<GetOpenJMeterSceneResponseBodyScene>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOpenJMeterSceneResponseBody() = default;
};
class GetOpenJMeterSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOpenJMeterSceneResponseBody> body{};

  GetOpenJMeterSceneResponse() {}

  explicit GetOpenJMeterSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOpenJMeterSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOpenJMeterSceneResponseBody>(model1);
      }
    }
  }


  virtual ~GetOpenJMeterSceneResponse() = default;
};
class GetPtsReportDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> sceneId{};

  GetPtsReportDetailsRequest() {}

  explicit GetPtsReportDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetPtsReportDetailsRequest() = default;
};
class GetPtsReportDetailsResponseBodyApiMetricsList : public Darabonba::Model {
public:
  shared_ptr<long> allCount{};
  shared_ptr<string> apiName{};
  shared_ptr<double> avgRt{};
  shared_ptr<double> avgTps{};
  shared_ptr<long> failCountBiz{};
  shared_ptr<long> failCountReq{};
  shared_ptr<double> maxRt{};
  shared_ptr<double> minRt{};
  shared_ptr<double> seg50Rt{};
  shared_ptr<double> seg75Rt{};
  shared_ptr<double> seg90Rt{};
  shared_ptr<double> seg99Rt{};
  shared_ptr<double> successRateBiz{};
  shared_ptr<double> successRateReq{};

  GetPtsReportDetailsResponseBodyApiMetricsList() {}

  explicit GetPtsReportDetailsResponseBodyApiMetricsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allCount) {
      res["AllCount"] = boost::any(*allCount);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (avgRt) {
      res["AvgRt"] = boost::any(*avgRt);
    }
    if (avgTps) {
      res["AvgTps"] = boost::any(*avgTps);
    }
    if (failCountBiz) {
      res["FailCountBiz"] = boost::any(*failCountBiz);
    }
    if (failCountReq) {
      res["FailCountReq"] = boost::any(*failCountReq);
    }
    if (maxRt) {
      res["MaxRt"] = boost::any(*maxRt);
    }
    if (minRt) {
      res["MinRt"] = boost::any(*minRt);
    }
    if (seg50Rt) {
      res["Seg50Rt"] = boost::any(*seg50Rt);
    }
    if (seg75Rt) {
      res["Seg75Rt"] = boost::any(*seg75Rt);
    }
    if (seg90Rt) {
      res["Seg90Rt"] = boost::any(*seg90Rt);
    }
    if (seg99Rt) {
      res["Seg99Rt"] = boost::any(*seg99Rt);
    }
    if (successRateBiz) {
      res["SuccessRateBiz"] = boost::any(*successRateBiz);
    }
    if (successRateReq) {
      res["SuccessRateReq"] = boost::any(*successRateReq);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllCount") != m.end() && !m["AllCount"].empty()) {
      allCount = make_shared<long>(boost::any_cast<long>(m["AllCount"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AvgRt") != m.end() && !m["AvgRt"].empty()) {
      avgRt = make_shared<double>(boost::any_cast<double>(m["AvgRt"]));
    }
    if (m.find("AvgTps") != m.end() && !m["AvgTps"].empty()) {
      avgTps = make_shared<double>(boost::any_cast<double>(m["AvgTps"]));
    }
    if (m.find("FailCountBiz") != m.end() && !m["FailCountBiz"].empty()) {
      failCountBiz = make_shared<long>(boost::any_cast<long>(m["FailCountBiz"]));
    }
    if (m.find("FailCountReq") != m.end() && !m["FailCountReq"].empty()) {
      failCountReq = make_shared<long>(boost::any_cast<long>(m["FailCountReq"]));
    }
    if (m.find("MaxRt") != m.end() && !m["MaxRt"].empty()) {
      maxRt = make_shared<double>(boost::any_cast<double>(m["MaxRt"]));
    }
    if (m.find("MinRt") != m.end() && !m["MinRt"].empty()) {
      minRt = make_shared<double>(boost::any_cast<double>(m["MinRt"]));
    }
    if (m.find("Seg50Rt") != m.end() && !m["Seg50Rt"].empty()) {
      seg50Rt = make_shared<double>(boost::any_cast<double>(m["Seg50Rt"]));
    }
    if (m.find("Seg75Rt") != m.end() && !m["Seg75Rt"].empty()) {
      seg75Rt = make_shared<double>(boost::any_cast<double>(m["Seg75Rt"]));
    }
    if (m.find("Seg90Rt") != m.end() && !m["Seg90Rt"].empty()) {
      seg90Rt = make_shared<double>(boost::any_cast<double>(m["Seg90Rt"]));
    }
    if (m.find("Seg99Rt") != m.end() && !m["Seg99Rt"].empty()) {
      seg99Rt = make_shared<double>(boost::any_cast<double>(m["Seg99Rt"]));
    }
    if (m.find("SuccessRateBiz") != m.end() && !m["SuccessRateBiz"].empty()) {
      successRateBiz = make_shared<double>(boost::any_cast<double>(m["SuccessRateBiz"]));
    }
    if (m.find("SuccessRateReq") != m.end() && !m["SuccessRateReq"].empty()) {
      successRateReq = make_shared<double>(boost::any_cast<double>(m["SuccessRateReq"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodyApiMetricsList() = default;
};
class GetPtsReportDetailsResponseBodyReportOverView : public Darabonba::Model {
public:
  shared_ptr<long> agentCount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> reportId{};
  shared_ptr<string> reportName{};
  shared_ptr<string> startTime{};
  shared_ptr<long> vum{};

  GetPtsReportDetailsResponseBodyReportOverView() {}

  explicit GetPtsReportDetailsResponseBodyReportOverView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentCount) {
      res["AgentCount"] = boost::any(*agentCount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (reportName) {
      res["ReportName"] = boost::any(*reportName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (vum) {
      res["Vum"] = boost::any(*vum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentCount") != m.end() && !m["AgentCount"].empty()) {
      agentCount = make_shared<long>(boost::any_cast<long>(m["AgentCount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ReportName") != m.end() && !m["ReportName"].empty()) {
      reportName = make_shared<string>(boost::any_cast<string>(m["ReportName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Vum") != m.end() && !m["Vum"].empty()) {
      vum = make_shared<long>(boost::any_cast<long>(m["Vum"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodyReportOverView() = default;
};
class GetPtsReportDetailsResponseBodySceneMetrics : public Darabonba::Model {
public:
  shared_ptr<long> allCount{};
  shared_ptr<double> avgRt{};
  shared_ptr<double> avgTps{};
  shared_ptr<long> failCountBiz{};
  shared_ptr<long> failCountReq{};
  shared_ptr<double> seg90Rt{};
  shared_ptr<double> seg99Rt{};
  shared_ptr<double> successRateBiz{};
  shared_ptr<double> successRateReq{};

  GetPtsReportDetailsResponseBodySceneMetrics() {}

  explicit GetPtsReportDetailsResponseBodySceneMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allCount) {
      res["AllCount"] = boost::any(*allCount);
    }
    if (avgRt) {
      res["AvgRt"] = boost::any(*avgRt);
    }
    if (avgTps) {
      res["AvgTps"] = boost::any(*avgTps);
    }
    if (failCountBiz) {
      res["FailCountBiz"] = boost::any(*failCountBiz);
    }
    if (failCountReq) {
      res["FailCountReq"] = boost::any(*failCountReq);
    }
    if (seg90Rt) {
      res["Seg90Rt"] = boost::any(*seg90Rt);
    }
    if (seg99Rt) {
      res["Seg99Rt"] = boost::any(*seg99Rt);
    }
    if (successRateBiz) {
      res["SuccessRateBiz"] = boost::any(*successRateBiz);
    }
    if (successRateReq) {
      res["SuccessRateReq"] = boost::any(*successRateReq);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllCount") != m.end() && !m["AllCount"].empty()) {
      allCount = make_shared<long>(boost::any_cast<long>(m["AllCount"]));
    }
    if (m.find("AvgRt") != m.end() && !m["AvgRt"].empty()) {
      avgRt = make_shared<double>(boost::any_cast<double>(m["AvgRt"]));
    }
    if (m.find("AvgTps") != m.end() && !m["AvgTps"].empty()) {
      avgTps = make_shared<double>(boost::any_cast<double>(m["AvgTps"]));
    }
    if (m.find("FailCountBiz") != m.end() && !m["FailCountBiz"].empty()) {
      failCountBiz = make_shared<long>(boost::any_cast<long>(m["FailCountBiz"]));
    }
    if (m.find("FailCountReq") != m.end() && !m["FailCountReq"].empty()) {
      failCountReq = make_shared<long>(boost::any_cast<long>(m["FailCountReq"]));
    }
    if (m.find("Seg90Rt") != m.end() && !m["Seg90Rt"].empty()) {
      seg90Rt = make_shared<double>(boost::any_cast<double>(m["Seg90Rt"]));
    }
    if (m.find("Seg99Rt") != m.end() && !m["Seg99Rt"].empty()) {
      seg99Rt = make_shared<double>(boost::any_cast<double>(m["Seg99Rt"]));
    }
    if (m.find("SuccessRateBiz") != m.end() && !m["SuccessRateBiz"].empty()) {
      successRateBiz = make_shared<double>(boost::any_cast<double>(m["SuccessRateBiz"]));
    }
    if (m.find("SuccessRateReq") != m.end() && !m["SuccessRateReq"].empty()) {
      successRateReq = make_shared<double>(boost::any_cast<double>(m["SuccessRateReq"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneMetrics() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> ips{};

  GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting : public Darabonba::Model {
public:
  shared_ptr<long> connectionTimeoutInSecond{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList>> domainBindingList{};
  shared_ptr<long> logRate{};
  shared_ptr<string> successCode{};

  GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionTimeoutInSecond) {
      res["ConnectionTimeoutInSecond"] = boost::any(*connectionTimeoutInSecond);
    }
    if (domainBindingList) {
      vector<boost::any> temp1;
      for(auto item1:*domainBindingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainBindingList"] = boost::any(temp1);
    }
    if (logRate) {
      res["LogRate"] = boost::any(*logRate);
    }
    if (successCode) {
      res["SuccessCode"] = boost::any(*successCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionTimeoutInSecond") != m.end() && !m["ConnectionTimeoutInSecond"].empty()) {
      connectionTimeoutInSecond = make_shared<long>(boost::any_cast<long>(m["ConnectionTimeoutInSecond"]));
    }
    if (m.find("DomainBindingList") != m.end() && !m["DomainBindingList"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainBindingList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainBindingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainBindingList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList>>(expect1);
      }
    }
    if (m.find("LogRate") != m.end() && !m["LogRate"].empty()) {
      logRate = make_shared<long>(boost::any_cast<long>(m["LogRate"]));
    }
    if (m.find("SuccessCode") != m.end() && !m["SuccessCode"].empty()) {
      successCode = make_shared<string>(boost::any_cast<string>(m["SuccessCode"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileOssAddress{};

  GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileOssAddress) {
      res["FileOssAddress"] = boost::any(*fileOssAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileOssAddress") != m.end() && !m["FileOssAddress"].empty()) {
      fileOssAddress = make_shared<string>(boost::any_cast<string>(m["FileOssAddress"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList : public Darabonba::Model {
public:
  shared_ptr<string> paramName{};
  shared_ptr<string> paramValue{};

  GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList : public Darabonba::Model {
public:
  shared_ptr<long> rpsBegin{};
  shared_ptr<long> rpsLimit{};

  GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rpsBegin) {
      res["RpsBegin"] = boost::any(*rpsBegin);
    }
    if (rpsLimit) {
      res["RpsLimit"] = boost::any(*rpsLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RpsBegin") != m.end() && !m["RpsBegin"].empty()) {
      rpsBegin = make_shared<long>(boost::any_cast<long>(m["RpsBegin"]));
    }
    if (m.find("RpsLimit") != m.end() && !m["RpsLimit"].empty()) {
      rpsLimit = make_shared<long>(boost::any_cast<long>(m["RpsLimit"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> allConcurrencyBegin{};
  shared_ptr<long> allConcurrencyLimit{};
  shared_ptr<long> allRpsBegin{};
  shared_ptr<long> allRpsLimit{};

  GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allConcurrencyBegin) {
      res["AllConcurrencyBegin"] = boost::any(*allConcurrencyBegin);
    }
    if (allConcurrencyLimit) {
      res["AllConcurrencyLimit"] = boost::any(*allConcurrencyLimit);
    }
    if (allRpsBegin) {
      res["AllRpsBegin"] = boost::any(*allRpsBegin);
    }
    if (allRpsLimit) {
      res["AllRpsLimit"] = boost::any(*allRpsLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllConcurrencyBegin") != m.end() && !m["AllConcurrencyBegin"].empty()) {
      allConcurrencyBegin = make_shared<long>(boost::any_cast<long>(m["AllConcurrencyBegin"]));
    }
    if (m.find("AllConcurrencyLimit") != m.end() && !m["AllConcurrencyLimit"].empty()) {
      allConcurrencyLimit = make_shared<long>(boost::any_cast<long>(m["AllConcurrencyLimit"]));
    }
    if (m.find("AllRpsBegin") != m.end() && !m["AllRpsBegin"].empty()) {
      allRpsBegin = make_shared<long>(boost::any_cast<long>(m["AllRpsBegin"]));
    }
    if (m.find("AllRpsLimit") != m.end() && !m["AllRpsLimit"].empty()) {
      allRpsLimit = make_shared<long>(boost::any_cast<long>(m["AllRpsLimit"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList : public Darabonba::Model {
public:
  shared_ptr<long> concurrencyBegin{};
  shared_ptr<long> concurrencyLimit{};

  GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrencyBegin) {
      res["ConcurrencyBegin"] = boost::any(*concurrencyBegin);
    }
    if (concurrencyLimit) {
      res["ConcurrencyLimit"] = boost::any(*concurrencyLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConcurrencyBegin") != m.end() && !m["ConcurrencyBegin"].empty()) {
      concurrencyBegin = make_shared<long>(boost::any_cast<long>(m["ConcurrencyBegin"]));
    }
    if (m.find("ConcurrencyLimit") != m.end() && !m["ConcurrencyLimit"].empty()) {
      concurrencyLimit = make_shared<long>(boost::any_cast<long>(m["ConcurrencyLimit"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig : public Darabonba::Model {
public:
  shared_ptr<long> agentCount{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList>> apiLoadConfigList{};
  shared_ptr<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration> configuration{};
  shared_ptr<long> maxRunningTime{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList>> relationLoadConfigList{};
  shared_ptr<string> testMode{};

  GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentCount) {
      res["AgentCount"] = boost::any(*agentCount);
    }
    if (apiLoadConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*apiLoadConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiLoadConfigList"] = boost::any(temp1);
    }
    if (configuration) {
      res["Configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxRunningTime) {
      res["MaxRunningTime"] = boost::any(*maxRunningTime);
    }
    if (relationLoadConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*relationLoadConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelationLoadConfigList"] = boost::any(temp1);
    }
    if (testMode) {
      res["TestMode"] = boost::any(*testMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentCount") != m.end() && !m["AgentCount"].empty()) {
      agentCount = make_shared<long>(boost::any_cast<long>(m["AgentCount"]));
    }
    if (m.find("ApiLoadConfigList") != m.end() && !m["ApiLoadConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiLoadConfigList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiLoadConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiLoadConfigList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList>>(expect1);
      }
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["Configuration"].type()) {
        GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Configuration"]));
        configuration = make_shared<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration>(model1);
      }
    }
    if (m.find("MaxRunningTime") != m.end() && !m["MaxRunningTime"].empty()) {
      maxRunningTime = make_shared<long>(boost::any_cast<long>(m["MaxRunningTime"]));
    }
    if (m.find("RelationLoadConfigList") != m.end() && !m["RelationLoadConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["RelationLoadConfigList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelationLoadConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relationLoadConfigList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList>>(expect1);
      }
    }
    if (m.find("TestMode") != m.end() && !m["TestMode"].empty()) {
      testMode = make_shared<string>(boost::any_cast<string>(m["TestMode"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody : public Darabonba::Model {
public:
  shared_ptr<string> bodyValue{};
  shared_ptr<string> contentType{};

  GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyValue) {
      res["BodyValue"] = boost::any(*bodyValue);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyValue") != m.end() && !m["BodyValue"].empty()) {
      bodyValue = make_shared<string>(boost::any_cast<string>(m["BodyValue"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList : public Darabonba::Model {
public:
  shared_ptr<string> checkPoint{};
  shared_ptr<string> checkType{};
  shared_ptr<string> expectValue{};
  shared_ptr<string> operator_{};

  GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkPoint) {
      res["CheckPoint"] = boost::any(*checkPoint);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (expectValue) {
      res["ExpectValue"] = boost::any(*expectValue);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckPoint") != m.end() && !m["CheckPoint"].empty()) {
      checkPoint = make_shared<string>(boost::any_cast<string>(m["CheckPoint"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("ExpectValue") != m.end() && !m["ExpectValue"].empty()) {
      expectValue = make_shared<string>(boost::any_cast<string>(m["ExpectValue"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> exportName{};
  shared_ptr<string> exportType{};
  shared_ptr<string> exportValue{};

  GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (exportName) {
      res["ExportName"] = boost::any(*exportName);
    }
    if (exportType) {
      res["ExportType"] = boost::any(*exportType);
    }
    if (exportValue) {
      res["ExportValue"] = boost::any(*exportValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("ExportName") != m.end() && !m["ExportName"].empty()) {
      exportName = make_shared<string>(boost::any_cast<string>(m["ExportName"]));
    }
    if (m.find("ExportType") != m.end() && !m["ExportType"].empty()) {
      exportType = make_shared<string>(boost::any_cast<string>(m["ExportType"]));
    }
    if (m.find("ExportValue") != m.end() && !m["ExportValue"].empty()) {
      exportValue = make_shared<string>(boost::any_cast<string>(m["ExportValue"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList : public Darabonba::Model {
public:
  shared_ptr<string> headerName{};
  shared_ptr<string> headerValue{};

  GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headerName) {
      res["HeaderName"] = boost::any(*headerName);
    }
    if (headerValue) {
      res["HeaderValue"] = boost::any(*headerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HeaderName") != m.end() && !m["HeaderName"].empty()) {
      headerName = make_shared<string>(boost::any_cast<string>(m["HeaderName"]));
    }
    if (m.find("HeaderValue") != m.end() && !m["HeaderValue"].empty()) {
      headerValue = make_shared<string>(boost::any_cast<string>(m["HeaderValue"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody> body{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList>> checkPointList{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList>> exportList{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList>> headerList{};
  shared_ptr<string> method{};
  shared_ptr<long> redirectCountLimit{};
  shared_ptr<long> timeoutInSecond{};
  shared_ptr<string> url{};

  GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkPointList) {
      vector<boost::any> temp1;
      for(auto item1:*checkPointList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckPointList"] = boost::any(temp1);
    }
    if (exportList) {
      vector<boost::any> temp1;
      for(auto item1:*exportList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExportList"] = boost::any(temp1);
    }
    if (headerList) {
      vector<boost::any> temp1;
      for(auto item1:*headerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HeaderList"] = boost::any(temp1);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (redirectCountLimit) {
      res["RedirectCountLimit"] = boost::any(*redirectCountLimit);
    }
    if (timeoutInSecond) {
      res["TimeoutInSecond"] = boost::any(*timeoutInSecond);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody>(model1);
      }
    }
    if (m.find("CheckPointList") != m.end() && !m["CheckPointList"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckPointList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckPointList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkPointList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList>>(expect1);
      }
    }
    if (m.find("ExportList") != m.end() && !m["ExportList"].empty()) {
      if (typeid(vector<boost::any>) == m["ExportList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExportList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        exportList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList>>(expect1);
      }
    }
    if (m.find("HeaderList") != m.end() && !m["HeaderList"].empty()) {
      if (typeid(vector<boost::any>) == m["HeaderList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HeaderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headerList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList>>(expect1);
      }
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("RedirectCountLimit") != m.end() && !m["RedirectCountLimit"].empty()) {
      redirectCountLimit = make_shared<long>(boost::any_cast<long>(m["RedirectCountLimit"]));
    }
    if (m.find("TimeoutInSecond") != m.end() && !m["TimeoutInSecond"].empty()) {
      timeoutInSecond = make_shared<long>(boost::any_cast<long>(m["TimeoutInSecond"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList : public Darabonba::Model {
public:
  shared_ptr<bool> baseFile{};
  shared_ptr<bool> cycleOnce{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileParamName{};

  GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseFile) {
      res["BaseFile"] = boost::any(*baseFile);
    }
    if (cycleOnce) {
      res["CycleOnce"] = boost::any(*cycleOnce);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileParamName) {
      res["FileParamName"] = boost::any(*fileParamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseFile") != m.end() && !m["BaseFile"].empty()) {
      baseFile = make_shared<bool>(boost::any_cast<bool>(m["BaseFile"]));
    }
    if (m.find("CycleOnce") != m.end() && !m["CycleOnce"].empty()) {
      cycleOnce = make_shared<bool>(boost::any_cast<bool>(m["CycleOnce"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileParamName") != m.end() && !m["FileParamName"].empty()) {
      fileParamName = make_shared<string>(boost::any_cast<string>(m["FileParamName"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShotRelationList : public Darabonba::Model {
public:
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList>> apiList{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList>> fileParameterExplainList{};
  shared_ptr<string> relationId{};
  shared_ptr<string> relationName{};

  GetPtsReportDetailsResponseBodySceneSnapShotRelationList() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShotRelationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiList) {
      vector<boost::any> temp1;
      for(auto item1:*apiList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiList"] = boost::any(temp1);
    }
    if (fileParameterExplainList) {
      vector<boost::any> temp1;
      for(auto item1:*fileParameterExplainList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileParameterExplainList"] = boost::any(temp1);
    }
    if (relationId) {
      res["RelationId"] = boost::any(*relationId);
    }
    if (relationName) {
      res["RelationName"] = boost::any(*relationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiList") != m.end() && !m["ApiList"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList>>(expect1);
      }
    }
    if (m.find("FileParameterExplainList") != m.end() && !m["FileParameterExplainList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileParameterExplainList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileParameterExplainList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileParameterExplainList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList>>(expect1);
      }
    }
    if (m.find("RelationId") != m.end() && !m["RelationId"].empty()) {
      relationId = make_shared<string>(boost::any_cast<string>(m["RelationId"]));
    }
    if (m.find("RelationName") != m.end() && !m["RelationName"].empty()) {
      relationName = make_shared<string>(boost::any_cast<string>(m["RelationName"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationList() = default;
};
class GetPtsReportDetailsResponseBodySceneSnapShot : public Darabonba::Model {
public:
  shared_ptr<GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting> advanceSetting{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList>> fileParameterList{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList>> globalParameterList{};
  shared_ptr<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig> loadConfig{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationList>> relationList{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> status{};

  GetPtsReportDetailsResponseBodySceneSnapShot() {}

  explicit GetPtsReportDetailsResponseBodySceneSnapShot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceSetting) {
      res["AdvanceSetting"] = advanceSetting ? boost::any(advanceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileParameterList) {
      vector<boost::any> temp1;
      for(auto item1:*fileParameterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileParameterList"] = boost::any(temp1);
    }
    if (globalParameterList) {
      vector<boost::any> temp1;
      for(auto item1:*globalParameterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GlobalParameterList"] = boost::any(temp1);
    }
    if (loadConfig) {
      res["LoadConfig"] = loadConfig ? boost::any(loadConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (relationList) {
      vector<boost::any> temp1;
      for(auto item1:*relationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelationList"] = boost::any(temp1);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvanceSetting") != m.end() && !m["AdvanceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdvanceSetting"].type()) {
        GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdvanceSetting"]));
        advanceSetting = make_shared<GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileParameterList") != m.end() && !m["FileParameterList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileParameterList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileParameterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileParameterList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList>>(expect1);
      }
    }
    if (m.find("GlobalParameterList") != m.end() && !m["GlobalParameterList"].empty()) {
      if (typeid(vector<boost::any>) == m["GlobalParameterList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GlobalParameterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        globalParameterList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList>>(expect1);
      }
    }
    if (m.find("LoadConfig") != m.end() && !m["LoadConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadConfig"].type()) {
        GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadConfig"]));
        loadConfig = make_shared<GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig>(model1);
      }
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RelationList") != m.end() && !m["RelationList"].empty()) {
      if (typeid(vector<boost::any>) == m["RelationList"].type()) {
        vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodySceneSnapShotRelationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relationList = make_shared<vector<GetPtsReportDetailsResponseBodySceneSnapShotRelationList>>(expect1);
      }
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBodySceneSnapShot() = default;
};
class GetPtsReportDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetPtsReportDetailsResponseBodyApiMetricsList>> apiMetricsList{};
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetPtsReportDetailsResponseBodyReportOverView> reportOverView{};
  shared_ptr<string> requestId{};
  shared_ptr<GetPtsReportDetailsResponseBodySceneMetrics> sceneMetrics{};
  shared_ptr<GetPtsReportDetailsResponseBodySceneSnapShot> sceneSnapShot{};
  shared_ptr<bool> success{};

  GetPtsReportDetailsResponseBody() {}

  explicit GetPtsReportDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiMetricsList) {
      vector<boost::any> temp1;
      for(auto item1:*apiMetricsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiMetricsList"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reportOverView) {
      res["ReportOverView"] = reportOverView ? boost::any(reportOverView->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneMetrics) {
      res["SceneMetrics"] = sceneMetrics ? boost::any(sceneMetrics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sceneSnapShot) {
      res["SceneSnapShot"] = sceneSnapShot ? boost::any(sceneSnapShot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiMetricsList") != m.end() && !m["ApiMetricsList"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiMetricsList"].type()) {
        vector<GetPtsReportDetailsResponseBodyApiMetricsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiMetricsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportDetailsResponseBodyApiMetricsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiMetricsList = make_shared<vector<GetPtsReportDetailsResponseBodyApiMetricsList>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReportOverView") != m.end() && !m["ReportOverView"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReportOverView"].type()) {
        GetPtsReportDetailsResponseBodyReportOverView model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReportOverView"]));
        reportOverView = make_shared<GetPtsReportDetailsResponseBodyReportOverView>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneMetrics") != m.end() && !m["SceneMetrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["SceneMetrics"].type()) {
        GetPtsReportDetailsResponseBodySceneMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SceneMetrics"]));
        sceneMetrics = make_shared<GetPtsReportDetailsResponseBodySceneMetrics>(model1);
      }
    }
    if (m.find("SceneSnapShot") != m.end() && !m["SceneSnapShot"].empty()) {
      if (typeid(map<string, boost::any>) == m["SceneSnapShot"].type()) {
        GetPtsReportDetailsResponseBodySceneSnapShot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SceneSnapShot"]));
        sceneSnapShot = make_shared<GetPtsReportDetailsResponseBodySceneSnapShot>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPtsReportDetailsResponseBody() = default;
};
class GetPtsReportDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPtsReportDetailsResponseBody> body{};

  GetPtsReportDetailsResponse() {}

  explicit GetPtsReportDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPtsReportDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPtsReportDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~GetPtsReportDetailsResponse() = default;
};
class GetPtsReportsBySceneIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sceneId{};

  GetPtsReportsBySceneIdRequest() {}

  explicit GetPtsReportsBySceneIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
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
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetPtsReportsBySceneIdRequest() = default;
};
class GetPtsReportsBySceneIdResponseBodyReportOverViewList : public Darabonba::Model {
public:
  shared_ptr<long> agentCount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> reportId{};
  shared_ptr<string> reportName{};
  shared_ptr<string> startTime{};
  shared_ptr<long> vum{};

  GetPtsReportsBySceneIdResponseBodyReportOverViewList() {}

  explicit GetPtsReportsBySceneIdResponseBodyReportOverViewList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentCount) {
      res["AgentCount"] = boost::any(*agentCount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (reportName) {
      res["ReportName"] = boost::any(*reportName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (vum) {
      res["Vum"] = boost::any(*vum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentCount") != m.end() && !m["AgentCount"].empty()) {
      agentCount = make_shared<long>(boost::any_cast<long>(m["AgentCount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ReportName") != m.end() && !m["ReportName"].empty()) {
      reportName = make_shared<string>(boost::any_cast<string>(m["ReportName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Vum") != m.end() && !m["Vum"].empty()) {
      vum = make_shared<long>(boost::any_cast<long>(m["Vum"]));
    }
  }


  virtual ~GetPtsReportsBySceneIdResponseBodyReportOverViewList() = default;
};
class GetPtsReportsBySceneIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<GetPtsReportsBySceneIdResponseBodyReportOverViewList>> reportOverViewList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPtsReportsBySceneIdResponseBody() {}

  explicit GetPtsReportsBySceneIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reportOverViewList) {
      vector<boost::any> temp1;
      for(auto item1:*reportOverViewList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReportOverViewList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReportOverViewList") != m.end() && !m["ReportOverViewList"].empty()) {
      if (typeid(vector<boost::any>) == m["ReportOverViewList"].type()) {
        vector<GetPtsReportsBySceneIdResponseBodyReportOverViewList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReportOverViewList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsReportsBySceneIdResponseBodyReportOverViewList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reportOverViewList = make_shared<vector<GetPtsReportsBySceneIdResponseBodyReportOverViewList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPtsReportsBySceneIdResponseBody() = default;
};
class GetPtsReportsBySceneIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPtsReportsBySceneIdResponseBody> body{};

  GetPtsReportsBySceneIdResponse() {}

  explicit GetPtsReportsBySceneIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPtsReportsBySceneIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPtsReportsBySceneIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetPtsReportsBySceneIdResponse() = default;
};
class GetPtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  GetPtsSceneRequest() {}

  explicit GetPtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetPtsSceneRequest() = default;
};
class GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> ips{};

  GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList() {}

  explicit GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList() = default;
};
class GetPtsSceneResponseBodySceneAdvanceSetting : public Darabonba::Model {
public:
  shared_ptr<long> connectionTimeoutInSecond{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList>> domainBindingList{};
  shared_ptr<long> logRate{};
  shared_ptr<string> successCode{};

  GetPtsSceneResponseBodySceneAdvanceSetting() {}

  explicit GetPtsSceneResponseBodySceneAdvanceSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionTimeoutInSecond) {
      res["ConnectionTimeoutInSecond"] = boost::any(*connectionTimeoutInSecond);
    }
    if (domainBindingList) {
      vector<boost::any> temp1;
      for(auto item1:*domainBindingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainBindingList"] = boost::any(temp1);
    }
    if (logRate) {
      res["LogRate"] = boost::any(*logRate);
    }
    if (successCode) {
      res["SuccessCode"] = boost::any(*successCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionTimeoutInSecond") != m.end() && !m["ConnectionTimeoutInSecond"].empty()) {
      connectionTimeoutInSecond = make_shared<long>(boost::any_cast<long>(m["ConnectionTimeoutInSecond"]));
    }
    if (m.find("DomainBindingList") != m.end() && !m["DomainBindingList"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainBindingList"].type()) {
        vector<GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainBindingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainBindingList = make_shared<vector<GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList>>(expect1);
      }
    }
    if (m.find("LogRate") != m.end() && !m["LogRate"].empty()) {
      logRate = make_shared<long>(boost::any_cast<long>(m["LogRate"]));
    }
    if (m.find("SuccessCode") != m.end() && !m["SuccessCode"].empty()) {
      successCode = make_shared<string>(boost::any_cast<string>(m["SuccessCode"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneAdvanceSetting() = default;
};
class GetPtsSceneResponseBodySceneFileParameterList : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileOssAddress{};

  GetPtsSceneResponseBodySceneFileParameterList() {}

  explicit GetPtsSceneResponseBodySceneFileParameterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileOssAddress) {
      res["FileOssAddress"] = boost::any(*fileOssAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileOssAddress") != m.end() && !m["FileOssAddress"].empty()) {
      fileOssAddress = make_shared<string>(boost::any_cast<string>(m["FileOssAddress"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneFileParameterList() = default;
};
class GetPtsSceneResponseBodySceneGlobalParameterList : public Darabonba::Model {
public:
  shared_ptr<string> paramName{};
  shared_ptr<string> paramValue{};

  GetPtsSceneResponseBodySceneGlobalParameterList() {}

  explicit GetPtsSceneResponseBodySceneGlobalParameterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneGlobalParameterList() = default;
};
class GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList : public Darabonba::Model {
public:
  shared_ptr<long> rpsBegin{};
  shared_ptr<long> rpsLimit{};

  GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList() {}

  explicit GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rpsBegin) {
      res["RpsBegin"] = boost::any(*rpsBegin);
    }
    if (rpsLimit) {
      res["RpsLimit"] = boost::any(*rpsLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RpsBegin") != m.end() && !m["RpsBegin"].empty()) {
      rpsBegin = make_shared<long>(boost::any_cast<long>(m["RpsBegin"]));
    }
    if (m.find("RpsLimit") != m.end() && !m["RpsLimit"].empty()) {
      rpsLimit = make_shared<long>(boost::any_cast<long>(m["RpsLimit"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList() = default;
};
class GetPtsSceneResponseBodySceneLoadConfigConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> allConcurrencyBegin{};
  shared_ptr<long> allConcurrencyLimit{};
  shared_ptr<long> allRpsBegin{};
  shared_ptr<long> allRpsLimit{};

  GetPtsSceneResponseBodySceneLoadConfigConfiguration() {}

  explicit GetPtsSceneResponseBodySceneLoadConfigConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allConcurrencyBegin) {
      res["AllConcurrencyBegin"] = boost::any(*allConcurrencyBegin);
    }
    if (allConcurrencyLimit) {
      res["AllConcurrencyLimit"] = boost::any(*allConcurrencyLimit);
    }
    if (allRpsBegin) {
      res["AllRpsBegin"] = boost::any(*allRpsBegin);
    }
    if (allRpsLimit) {
      res["AllRpsLimit"] = boost::any(*allRpsLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllConcurrencyBegin") != m.end() && !m["AllConcurrencyBegin"].empty()) {
      allConcurrencyBegin = make_shared<long>(boost::any_cast<long>(m["AllConcurrencyBegin"]));
    }
    if (m.find("AllConcurrencyLimit") != m.end() && !m["AllConcurrencyLimit"].empty()) {
      allConcurrencyLimit = make_shared<long>(boost::any_cast<long>(m["AllConcurrencyLimit"]));
    }
    if (m.find("AllRpsBegin") != m.end() && !m["AllRpsBegin"].empty()) {
      allRpsBegin = make_shared<long>(boost::any_cast<long>(m["AllRpsBegin"]));
    }
    if (m.find("AllRpsLimit") != m.end() && !m["AllRpsLimit"].empty()) {
      allRpsLimit = make_shared<long>(boost::any_cast<long>(m["AllRpsLimit"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneLoadConfigConfiguration() = default;
};
class GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList : public Darabonba::Model {
public:
  shared_ptr<long> concurrencyBegin{};
  shared_ptr<long> concurrencyLimit{};

  GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList() {}

  explicit GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrencyBegin) {
      res["ConcurrencyBegin"] = boost::any(*concurrencyBegin);
    }
    if (concurrencyLimit) {
      res["ConcurrencyLimit"] = boost::any(*concurrencyLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConcurrencyBegin") != m.end() && !m["ConcurrencyBegin"].empty()) {
      concurrencyBegin = make_shared<long>(boost::any_cast<long>(m["ConcurrencyBegin"]));
    }
    if (m.find("ConcurrencyLimit") != m.end() && !m["ConcurrencyLimit"].empty()) {
      concurrencyLimit = make_shared<long>(boost::any_cast<long>(m["ConcurrencyLimit"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList() = default;
};
class GetPtsSceneResponseBodySceneLoadConfig : public Darabonba::Model {
public:
  shared_ptr<long> agentCount{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList>> apiLoadConfigList{};
  shared_ptr<GetPtsSceneResponseBodySceneLoadConfigConfiguration> configuration{};
  shared_ptr<long> maxRunningTime{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList>> relationLoadConfigList{};
  shared_ptr<string> testMode{};

  GetPtsSceneResponseBodySceneLoadConfig() {}

  explicit GetPtsSceneResponseBodySceneLoadConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentCount) {
      res["AgentCount"] = boost::any(*agentCount);
    }
    if (apiLoadConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*apiLoadConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiLoadConfigList"] = boost::any(temp1);
    }
    if (configuration) {
      res["Configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxRunningTime) {
      res["MaxRunningTime"] = boost::any(*maxRunningTime);
    }
    if (relationLoadConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*relationLoadConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelationLoadConfigList"] = boost::any(temp1);
    }
    if (testMode) {
      res["TestMode"] = boost::any(*testMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentCount") != m.end() && !m["AgentCount"].empty()) {
      agentCount = make_shared<long>(boost::any_cast<long>(m["AgentCount"]));
    }
    if (m.find("ApiLoadConfigList") != m.end() && !m["ApiLoadConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiLoadConfigList"].type()) {
        vector<GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiLoadConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiLoadConfigList = make_shared<vector<GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList>>(expect1);
      }
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["Configuration"].type()) {
        GetPtsSceneResponseBodySceneLoadConfigConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Configuration"]));
        configuration = make_shared<GetPtsSceneResponseBodySceneLoadConfigConfiguration>(model1);
      }
    }
    if (m.find("MaxRunningTime") != m.end() && !m["MaxRunningTime"].empty()) {
      maxRunningTime = make_shared<long>(boost::any_cast<long>(m["MaxRunningTime"]));
    }
    if (m.find("RelationLoadConfigList") != m.end() && !m["RelationLoadConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["RelationLoadConfigList"].type()) {
        vector<GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelationLoadConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relationLoadConfigList = make_shared<vector<GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList>>(expect1);
      }
    }
    if (m.find("TestMode") != m.end() && !m["TestMode"].empty()) {
      testMode = make_shared<string>(boost::any_cast<string>(m["TestMode"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneLoadConfig() = default;
};
class GetPtsSceneResponseBodySceneRelationListApiListBody : public Darabonba::Model {
public:
  shared_ptr<string> bodyValue{};
  shared_ptr<string> contentType{};

  GetPtsSceneResponseBodySceneRelationListApiListBody() {}

  explicit GetPtsSceneResponseBodySceneRelationListApiListBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyValue) {
      res["BodyValue"] = boost::any(*bodyValue);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyValue") != m.end() && !m["BodyValue"].empty()) {
      bodyValue = make_shared<string>(boost::any_cast<string>(m["BodyValue"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneRelationListApiListBody() = default;
};
class GetPtsSceneResponseBodySceneRelationListApiListCheckPointList : public Darabonba::Model {
public:
  shared_ptr<string> checkPoint{};
  shared_ptr<string> checkType{};
  shared_ptr<string> expectValue{};
  shared_ptr<string> operator_{};

  GetPtsSceneResponseBodySceneRelationListApiListCheckPointList() {}

  explicit GetPtsSceneResponseBodySceneRelationListApiListCheckPointList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkPoint) {
      res["CheckPoint"] = boost::any(*checkPoint);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (expectValue) {
      res["ExpectValue"] = boost::any(*expectValue);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckPoint") != m.end() && !m["CheckPoint"].empty()) {
      checkPoint = make_shared<string>(boost::any_cast<string>(m["CheckPoint"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("ExpectValue") != m.end() && !m["ExpectValue"].empty()) {
      expectValue = make_shared<string>(boost::any_cast<string>(m["ExpectValue"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneRelationListApiListCheckPointList() = default;
};
class GetPtsSceneResponseBodySceneRelationListApiListExportList : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> exportName{};
  shared_ptr<string> exportType{};
  shared_ptr<string> exportValue{};

  GetPtsSceneResponseBodySceneRelationListApiListExportList() {}

  explicit GetPtsSceneResponseBodySceneRelationListApiListExportList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (exportName) {
      res["ExportName"] = boost::any(*exportName);
    }
    if (exportType) {
      res["ExportType"] = boost::any(*exportType);
    }
    if (exportValue) {
      res["ExportValue"] = boost::any(*exportValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("ExportName") != m.end() && !m["ExportName"].empty()) {
      exportName = make_shared<string>(boost::any_cast<string>(m["ExportName"]));
    }
    if (m.find("ExportType") != m.end() && !m["ExportType"].empty()) {
      exportType = make_shared<string>(boost::any_cast<string>(m["ExportType"]));
    }
    if (m.find("ExportValue") != m.end() && !m["ExportValue"].empty()) {
      exportValue = make_shared<string>(boost::any_cast<string>(m["ExportValue"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneRelationListApiListExportList() = default;
};
class GetPtsSceneResponseBodySceneRelationListApiListHeaderList : public Darabonba::Model {
public:
  shared_ptr<string> headerName{};
  shared_ptr<string> headerValue{};

  GetPtsSceneResponseBodySceneRelationListApiListHeaderList() {}

  explicit GetPtsSceneResponseBodySceneRelationListApiListHeaderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headerName) {
      res["HeaderName"] = boost::any(*headerName);
    }
    if (headerValue) {
      res["HeaderValue"] = boost::any(*headerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HeaderName") != m.end() && !m["HeaderName"].empty()) {
      headerName = make_shared<string>(boost::any_cast<string>(m["HeaderName"]));
    }
    if (m.find("HeaderValue") != m.end() && !m["HeaderValue"].empty()) {
      headerValue = make_shared<string>(boost::any_cast<string>(m["HeaderValue"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneRelationListApiListHeaderList() = default;
};
class GetPtsSceneResponseBodySceneRelationListApiList : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<GetPtsSceneResponseBodySceneRelationListApiListBody> body{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneRelationListApiListCheckPointList>> checkPointList{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneRelationListApiListExportList>> exportList{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneRelationListApiListHeaderList>> headerList{};
  shared_ptr<string> method{};
  shared_ptr<long> redirectCountLimit{};
  shared_ptr<long> timeoutInSecond{};
  shared_ptr<string> url{};

  GetPtsSceneResponseBodySceneRelationListApiList() {}

  explicit GetPtsSceneResponseBodySceneRelationListApiList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkPointList) {
      vector<boost::any> temp1;
      for(auto item1:*checkPointList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckPointList"] = boost::any(temp1);
    }
    if (exportList) {
      vector<boost::any> temp1;
      for(auto item1:*exportList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExportList"] = boost::any(temp1);
    }
    if (headerList) {
      vector<boost::any> temp1;
      for(auto item1:*headerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HeaderList"] = boost::any(temp1);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (redirectCountLimit) {
      res["RedirectCountLimit"] = boost::any(*redirectCountLimit);
    }
    if (timeoutInSecond) {
      res["TimeoutInSecond"] = boost::any(*timeoutInSecond);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        GetPtsSceneResponseBodySceneRelationListApiListBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<GetPtsSceneResponseBodySceneRelationListApiListBody>(model1);
      }
    }
    if (m.find("CheckPointList") != m.end() && !m["CheckPointList"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckPointList"].type()) {
        vector<GetPtsSceneResponseBodySceneRelationListApiListCheckPointList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckPointList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneRelationListApiListCheckPointList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkPointList = make_shared<vector<GetPtsSceneResponseBodySceneRelationListApiListCheckPointList>>(expect1);
      }
    }
    if (m.find("ExportList") != m.end() && !m["ExportList"].empty()) {
      if (typeid(vector<boost::any>) == m["ExportList"].type()) {
        vector<GetPtsSceneResponseBodySceneRelationListApiListExportList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExportList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneRelationListApiListExportList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        exportList = make_shared<vector<GetPtsSceneResponseBodySceneRelationListApiListExportList>>(expect1);
      }
    }
    if (m.find("HeaderList") != m.end() && !m["HeaderList"].empty()) {
      if (typeid(vector<boost::any>) == m["HeaderList"].type()) {
        vector<GetPtsSceneResponseBodySceneRelationListApiListHeaderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HeaderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneRelationListApiListHeaderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headerList = make_shared<vector<GetPtsSceneResponseBodySceneRelationListApiListHeaderList>>(expect1);
      }
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("RedirectCountLimit") != m.end() && !m["RedirectCountLimit"].empty()) {
      redirectCountLimit = make_shared<long>(boost::any_cast<long>(m["RedirectCountLimit"]));
    }
    if (m.find("TimeoutInSecond") != m.end() && !m["TimeoutInSecond"].empty()) {
      timeoutInSecond = make_shared<long>(boost::any_cast<long>(m["TimeoutInSecond"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneRelationListApiList() = default;
};
class GetPtsSceneResponseBodySceneRelationListFileParameterExplainList : public Darabonba::Model {
public:
  shared_ptr<bool> baseFile{};
  shared_ptr<bool> cycleOnce{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileParamName{};

  GetPtsSceneResponseBodySceneRelationListFileParameterExplainList() {}

  explicit GetPtsSceneResponseBodySceneRelationListFileParameterExplainList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseFile) {
      res["BaseFile"] = boost::any(*baseFile);
    }
    if (cycleOnce) {
      res["CycleOnce"] = boost::any(*cycleOnce);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileParamName) {
      res["FileParamName"] = boost::any(*fileParamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseFile") != m.end() && !m["BaseFile"].empty()) {
      baseFile = make_shared<bool>(boost::any_cast<bool>(m["BaseFile"]));
    }
    if (m.find("CycleOnce") != m.end() && !m["CycleOnce"].empty()) {
      cycleOnce = make_shared<bool>(boost::any_cast<bool>(m["CycleOnce"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileParamName") != m.end() && !m["FileParamName"].empty()) {
      fileParamName = make_shared<string>(boost::any_cast<string>(m["FileParamName"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneRelationListFileParameterExplainList() = default;
};
class GetPtsSceneResponseBodySceneRelationList : public Darabonba::Model {
public:
  shared_ptr<vector<GetPtsSceneResponseBodySceneRelationListApiList>> apiList{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneRelationListFileParameterExplainList>> fileParameterExplainList{};
  shared_ptr<string> relationId{};
  shared_ptr<string> relationName{};

  GetPtsSceneResponseBodySceneRelationList() {}

  explicit GetPtsSceneResponseBodySceneRelationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiList) {
      vector<boost::any> temp1;
      for(auto item1:*apiList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiList"] = boost::any(temp1);
    }
    if (fileParameterExplainList) {
      vector<boost::any> temp1;
      for(auto item1:*fileParameterExplainList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileParameterExplainList"] = boost::any(temp1);
    }
    if (relationId) {
      res["RelationId"] = boost::any(*relationId);
    }
    if (relationName) {
      res["RelationName"] = boost::any(*relationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiList") != m.end() && !m["ApiList"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiList"].type()) {
        vector<GetPtsSceneResponseBodySceneRelationListApiList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneRelationListApiList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiList = make_shared<vector<GetPtsSceneResponseBodySceneRelationListApiList>>(expect1);
      }
    }
    if (m.find("FileParameterExplainList") != m.end() && !m["FileParameterExplainList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileParameterExplainList"].type()) {
        vector<GetPtsSceneResponseBodySceneRelationListFileParameterExplainList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileParameterExplainList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneRelationListFileParameterExplainList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileParameterExplainList = make_shared<vector<GetPtsSceneResponseBodySceneRelationListFileParameterExplainList>>(expect1);
      }
    }
    if (m.find("RelationId") != m.end() && !m["RelationId"].empty()) {
      relationId = make_shared<string>(boost::any_cast<string>(m["RelationId"]));
    }
    if (m.find("RelationName") != m.end() && !m["RelationName"].empty()) {
      relationName = make_shared<string>(boost::any_cast<string>(m["RelationName"]));
    }
  }


  virtual ~GetPtsSceneResponseBodySceneRelationList() = default;
};
class GetPtsSceneResponseBodyScene : public Darabonba::Model {
public:
  shared_ptr<GetPtsSceneResponseBodySceneAdvanceSetting> advanceSetting{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneFileParameterList>> fileParameterList{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneGlobalParameterList>> globalParameterList{};
  shared_ptr<GetPtsSceneResponseBodySceneLoadConfig> loadConfig{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<vector<GetPtsSceneResponseBodySceneRelationList>> relationList{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> status{};

  GetPtsSceneResponseBodyScene() {}

  explicit GetPtsSceneResponseBodyScene(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceSetting) {
      res["AdvanceSetting"] = advanceSetting ? boost::any(advanceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileParameterList) {
      vector<boost::any> temp1;
      for(auto item1:*fileParameterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileParameterList"] = boost::any(temp1);
    }
    if (globalParameterList) {
      vector<boost::any> temp1;
      for(auto item1:*globalParameterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GlobalParameterList"] = boost::any(temp1);
    }
    if (loadConfig) {
      res["LoadConfig"] = loadConfig ? boost::any(loadConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (relationList) {
      vector<boost::any> temp1;
      for(auto item1:*relationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelationList"] = boost::any(temp1);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvanceSetting") != m.end() && !m["AdvanceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdvanceSetting"].type()) {
        GetPtsSceneResponseBodySceneAdvanceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdvanceSetting"]));
        advanceSetting = make_shared<GetPtsSceneResponseBodySceneAdvanceSetting>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileParameterList") != m.end() && !m["FileParameterList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileParameterList"].type()) {
        vector<GetPtsSceneResponseBodySceneFileParameterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileParameterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneFileParameterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileParameterList = make_shared<vector<GetPtsSceneResponseBodySceneFileParameterList>>(expect1);
      }
    }
    if (m.find("GlobalParameterList") != m.end() && !m["GlobalParameterList"].empty()) {
      if (typeid(vector<boost::any>) == m["GlobalParameterList"].type()) {
        vector<GetPtsSceneResponseBodySceneGlobalParameterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GlobalParameterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneGlobalParameterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        globalParameterList = make_shared<vector<GetPtsSceneResponseBodySceneGlobalParameterList>>(expect1);
      }
    }
    if (m.find("LoadConfig") != m.end() && !m["LoadConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadConfig"].type()) {
        GetPtsSceneResponseBodySceneLoadConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadConfig"]));
        loadConfig = make_shared<GetPtsSceneResponseBodySceneLoadConfig>(model1);
      }
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RelationList") != m.end() && !m["RelationList"].empty()) {
      if (typeid(vector<boost::any>) == m["RelationList"].type()) {
        vector<GetPtsSceneResponseBodySceneRelationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneResponseBodySceneRelationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relationList = make_shared<vector<GetPtsSceneResponseBodySceneRelationList>>(expect1);
      }
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetPtsSceneResponseBodyScene() = default;
};
class GetPtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetPtsSceneResponseBodyScene> scene{};
  shared_ptr<bool> success{};

  GetPtsSceneResponseBody() {}

  explicit GetPtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scene) {
      res["Scene"] = scene ? boost::any(scene->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scene"].type()) {
        GetPtsSceneResponseBodyScene model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scene"]));
        scene = make_shared<GetPtsSceneResponseBodyScene>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPtsSceneResponseBody() = default;
};
class GetPtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPtsSceneResponseBody> body{};

  GetPtsSceneResponse() {}

  explicit GetPtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~GetPtsSceneResponse() = default;
};
class GetPtsSceneBaseLineRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  GetPtsSceneBaseLineRequest() {}

  explicit GetPtsSceneBaseLineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetPtsSceneBaseLineRequest() = default;
};
class GetPtsSceneBaseLineResponseBodyBaselineApiBaselines : public Darabonba::Model {
public:
  shared_ptr<double> avgRt{};
  shared_ptr<double> avgTps{};
  shared_ptr<long> failCountBiz{};
  shared_ptr<long> failCountReq{};
  shared_ptr<long> id{};
  shared_ptr<long> maxRt{};
  shared_ptr<long> minRt{};
  shared_ptr<string> name{};
  shared_ptr<double> seg90Rt{};
  shared_ptr<double> seg99Rt{};
  shared_ptr<double> successRateBiz{};
  shared_ptr<double> successRateReq{};

  GetPtsSceneBaseLineResponseBodyBaselineApiBaselines() {}

  explicit GetPtsSceneBaseLineResponseBodyBaselineApiBaselines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgRt) {
      res["AvgRt"] = boost::any(*avgRt);
    }
    if (avgTps) {
      res["AvgTps"] = boost::any(*avgTps);
    }
    if (failCountBiz) {
      res["FailCountBiz"] = boost::any(*failCountBiz);
    }
    if (failCountReq) {
      res["FailCountReq"] = boost::any(*failCountReq);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (maxRt) {
      res["MaxRt"] = boost::any(*maxRt);
    }
    if (minRt) {
      res["MinRt"] = boost::any(*minRt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (seg90Rt) {
      res["Seg90Rt"] = boost::any(*seg90Rt);
    }
    if (seg99Rt) {
      res["Seg99Rt"] = boost::any(*seg99Rt);
    }
    if (successRateBiz) {
      res["SuccessRateBiz"] = boost::any(*successRateBiz);
    }
    if (successRateReq) {
      res["SuccessRateReq"] = boost::any(*successRateReq);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgRt") != m.end() && !m["AvgRt"].empty()) {
      avgRt = make_shared<double>(boost::any_cast<double>(m["AvgRt"]));
    }
    if (m.find("AvgTps") != m.end() && !m["AvgTps"].empty()) {
      avgTps = make_shared<double>(boost::any_cast<double>(m["AvgTps"]));
    }
    if (m.find("FailCountBiz") != m.end() && !m["FailCountBiz"].empty()) {
      failCountBiz = make_shared<long>(boost::any_cast<long>(m["FailCountBiz"]));
    }
    if (m.find("FailCountReq") != m.end() && !m["FailCountReq"].empty()) {
      failCountReq = make_shared<long>(boost::any_cast<long>(m["FailCountReq"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MaxRt") != m.end() && !m["MaxRt"].empty()) {
      maxRt = make_shared<long>(boost::any_cast<long>(m["MaxRt"]));
    }
    if (m.find("MinRt") != m.end() && !m["MinRt"].empty()) {
      minRt = make_shared<long>(boost::any_cast<long>(m["MinRt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Seg90Rt") != m.end() && !m["Seg90Rt"].empty()) {
      seg90Rt = make_shared<double>(boost::any_cast<double>(m["Seg90Rt"]));
    }
    if (m.find("Seg99Rt") != m.end() && !m["Seg99Rt"].empty()) {
      seg99Rt = make_shared<double>(boost::any_cast<double>(m["Seg99Rt"]));
    }
    if (m.find("SuccessRateBiz") != m.end() && !m["SuccessRateBiz"].empty()) {
      successRateBiz = make_shared<double>(boost::any_cast<double>(m["SuccessRateBiz"]));
    }
    if (m.find("SuccessRateReq") != m.end() && !m["SuccessRateReq"].empty()) {
      successRateReq = make_shared<double>(boost::any_cast<double>(m["SuccessRateReq"]));
    }
  }


  virtual ~GetPtsSceneBaseLineResponseBodyBaselineApiBaselines() = default;
};
class GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline : public Darabonba::Model {
public:
  shared_ptr<double> avgRt{};
  shared_ptr<double> avgTps{};
  shared_ptr<long> failCountBiz{};
  shared_ptr<long> failCountReq{};
  shared_ptr<double> seg90Rt{};
  shared_ptr<double> seg99Rt{};
  shared_ptr<double> successRateBiz{};
  shared_ptr<double> successRateReq{};

  GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline() {}

  explicit GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgRt) {
      res["AvgRt"] = boost::any(*avgRt);
    }
    if (avgTps) {
      res["AvgTps"] = boost::any(*avgTps);
    }
    if (failCountBiz) {
      res["FailCountBiz"] = boost::any(*failCountBiz);
    }
    if (failCountReq) {
      res["FailCountReq"] = boost::any(*failCountReq);
    }
    if (seg90Rt) {
      res["Seg90Rt"] = boost::any(*seg90Rt);
    }
    if (seg99Rt) {
      res["Seg99Rt"] = boost::any(*seg99Rt);
    }
    if (successRateBiz) {
      res["SuccessRateBiz"] = boost::any(*successRateBiz);
    }
    if (successRateReq) {
      res["SuccessRateReq"] = boost::any(*successRateReq);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgRt") != m.end() && !m["AvgRt"].empty()) {
      avgRt = make_shared<double>(boost::any_cast<double>(m["AvgRt"]));
    }
    if (m.find("AvgTps") != m.end() && !m["AvgTps"].empty()) {
      avgTps = make_shared<double>(boost::any_cast<double>(m["AvgTps"]));
    }
    if (m.find("FailCountBiz") != m.end() && !m["FailCountBiz"].empty()) {
      failCountBiz = make_shared<long>(boost::any_cast<long>(m["FailCountBiz"]));
    }
    if (m.find("FailCountReq") != m.end() && !m["FailCountReq"].empty()) {
      failCountReq = make_shared<long>(boost::any_cast<long>(m["FailCountReq"]));
    }
    if (m.find("Seg90Rt") != m.end() && !m["Seg90Rt"].empty()) {
      seg90Rt = make_shared<double>(boost::any_cast<double>(m["Seg90Rt"]));
    }
    if (m.find("Seg99Rt") != m.end() && !m["Seg99Rt"].empty()) {
      seg99Rt = make_shared<double>(boost::any_cast<double>(m["Seg99Rt"]));
    }
    if (m.find("SuccessRateBiz") != m.end() && !m["SuccessRateBiz"].empty()) {
      successRateBiz = make_shared<double>(boost::any_cast<double>(m["SuccessRateBiz"]));
    }
    if (m.find("SuccessRateReq") != m.end() && !m["SuccessRateReq"].empty()) {
      successRateReq = make_shared<double>(boost::any_cast<double>(m["SuccessRateReq"]));
    }
  }


  virtual ~GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline() = default;
};
class GetPtsSceneBaseLineResponseBodyBaseline : public Darabonba::Model {
public:
  shared_ptr<vector<GetPtsSceneBaseLineResponseBodyBaselineApiBaselines>> apiBaselines{};
  shared_ptr<string> name{};
  shared_ptr<GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline> sceneBaseline{};

  GetPtsSceneBaseLineResponseBodyBaseline() {}

  explicit GetPtsSceneBaseLineResponseBodyBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiBaselines) {
      vector<boost::any> temp1;
      for(auto item1:*apiBaselines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiBaselines"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sceneBaseline) {
      res["SceneBaseline"] = sceneBaseline ? boost::any(sceneBaseline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiBaselines") != m.end() && !m["ApiBaselines"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiBaselines"].type()) {
        vector<GetPtsSceneBaseLineResponseBodyBaselineApiBaselines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiBaselines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneBaseLineResponseBodyBaselineApiBaselines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiBaselines = make_shared<vector<GetPtsSceneBaseLineResponseBodyBaselineApiBaselines>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SceneBaseline") != m.end() && !m["SceneBaseline"].empty()) {
      if (typeid(map<string, boost::any>) == m["SceneBaseline"].type()) {
        GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SceneBaseline"]));
        sceneBaseline = make_shared<GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline>(model1);
      }
    }
  }


  virtual ~GetPtsSceneBaseLineResponseBodyBaseline() = default;
};
class GetPtsSceneBaseLineResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPtsSceneBaseLineResponseBodyBaseline> baseline{};
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneId{};
  shared_ptr<bool> success{};

  GetPtsSceneBaseLineResponseBody() {}

  explicit GetPtsSceneBaseLineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseline) {
      res["Baseline"] = baseline ? boost::any(baseline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Baseline") != m.end() && !m["Baseline"].empty()) {
      if (typeid(map<string, boost::any>) == m["Baseline"].type()) {
        GetPtsSceneBaseLineResponseBodyBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Baseline"]));
        baseline = make_shared<GetPtsSceneBaseLineResponseBodyBaseline>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPtsSceneBaseLineResponseBody() = default;
};
class GetPtsSceneBaseLineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPtsSceneBaseLineResponseBody> body{};

  GetPtsSceneBaseLineResponse() {}

  explicit GetPtsSceneBaseLineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPtsSceneBaseLineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPtsSceneBaseLineResponseBody>(model1);
      }
    }
  }


  virtual ~GetPtsSceneBaseLineResponse() = default;
};
class GetPtsSceneRunningDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> sceneId{};

  GetPtsSceneRunningDataRequest() {}

  explicit GetPtsSceneRunningDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetPtsSceneRunningDataRequest() = default;
};
class GetPtsSceneRunningDataResponseBodyAgentLocation : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> isp{};
  shared_ptr<string> province{};
  shared_ptr<string> region{};

  GetPtsSceneRunningDataResponseBodyAgentLocation() {}

  explicit GetPtsSceneRunningDataResponseBodyAgentLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetPtsSceneRunningDataResponseBodyAgentLocation() = default;
};
class GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult : public Darabonba::Model {
public:
  shared_ptr<long> failedBusinessCount{};
  shared_ptr<double> failedBusinessQps{};
  shared_ptr<long> succeedBusinessCount{};
  shared_ptr<double> succeedBusinessQps{};

  GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult() {}

  explicit GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedBusinessCount) {
      res["FailedBusinessCount"] = boost::any(*failedBusinessCount);
    }
    if (failedBusinessQps) {
      res["FailedBusinessQps"] = boost::any(*failedBusinessQps);
    }
    if (succeedBusinessCount) {
      res["SucceedBusinessCount"] = boost::any(*succeedBusinessCount);
    }
    if (succeedBusinessQps) {
      res["SucceedBusinessQps"] = boost::any(*succeedBusinessQps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedBusinessCount") != m.end() && !m["FailedBusinessCount"].empty()) {
      failedBusinessCount = make_shared<long>(boost::any_cast<long>(m["FailedBusinessCount"]));
    }
    if (m.find("FailedBusinessQps") != m.end() && !m["FailedBusinessQps"].empty()) {
      failedBusinessQps = make_shared<double>(boost::any_cast<double>(m["FailedBusinessQps"]));
    }
    if (m.find("SucceedBusinessCount") != m.end() && !m["SucceedBusinessCount"].empty()) {
      succeedBusinessCount = make_shared<long>(boost::any_cast<long>(m["SucceedBusinessCount"]));
    }
    if (m.find("SucceedBusinessQps") != m.end() && !m["SucceedBusinessQps"].empty()) {
      succeedBusinessQps = make_shared<double>(boost::any_cast<double>(m["SucceedBusinessQps"]));
    }
  }


  virtual ~GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult() = default;
};
class GetPtsSceneRunningDataResponseBodyChainMonitorDataList : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<long> averageRt{};
  shared_ptr<GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult> checkPointResult{};
  shared_ptr<double> concurrency{};
  shared_ptr<long> configQps{};
  shared_ptr<long> count2XX{};
  shared_ptr<long> failedCount{};
  shared_ptr<double> failedQps{};
  shared_ptr<long> maxRt{};
  shared_ptr<long> minRt{};
  shared_ptr<long> nodeId{};
  shared_ptr<double> qps2XX{};
  shared_ptr<double> realQps{};
  shared_ptr<long> timePoint{};

  GetPtsSceneRunningDataResponseBodyChainMonitorDataList() {}

  explicit GetPtsSceneRunningDataResponseBodyChainMonitorDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (averageRt) {
      res["AverageRt"] = boost::any(*averageRt);
    }
    if (checkPointResult) {
      res["CheckPointResult"] = checkPointResult ? boost::any(checkPointResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (configQps) {
      res["ConfigQps"] = boost::any(*configQps);
    }
    if (count2XX) {
      res["Count2XX"] = boost::any(*count2XX);
    }
    if (failedCount) {
      res["FailedCount"] = boost::any(*failedCount);
    }
    if (failedQps) {
      res["FailedQps"] = boost::any(*failedQps);
    }
    if (maxRt) {
      res["MaxRt"] = boost::any(*maxRt);
    }
    if (minRt) {
      res["MinRt"] = boost::any(*minRt);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (qps2XX) {
      res["Qps2XX"] = boost::any(*qps2XX);
    }
    if (realQps) {
      res["RealQps"] = boost::any(*realQps);
    }
    if (timePoint) {
      res["TimePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AverageRt") != m.end() && !m["AverageRt"].empty()) {
      averageRt = make_shared<long>(boost::any_cast<long>(m["AverageRt"]));
    }
    if (m.find("CheckPointResult") != m.end() && !m["CheckPointResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckPointResult"].type()) {
        GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckPointResult"]));
        checkPointResult = make_shared<GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult>(model1);
      }
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<double>(boost::any_cast<double>(m["Concurrency"]));
    }
    if (m.find("ConfigQps") != m.end() && !m["ConfigQps"].empty()) {
      configQps = make_shared<long>(boost::any_cast<long>(m["ConfigQps"]));
    }
    if (m.find("Count2XX") != m.end() && !m["Count2XX"].empty()) {
      count2XX = make_shared<long>(boost::any_cast<long>(m["Count2XX"]));
    }
    if (m.find("FailedCount") != m.end() && !m["FailedCount"].empty()) {
      failedCount = make_shared<long>(boost::any_cast<long>(m["FailedCount"]));
    }
    if (m.find("FailedQps") != m.end() && !m["FailedQps"].empty()) {
      failedQps = make_shared<double>(boost::any_cast<double>(m["FailedQps"]));
    }
    if (m.find("MaxRt") != m.end() && !m["MaxRt"].empty()) {
      maxRt = make_shared<long>(boost::any_cast<long>(m["MaxRt"]));
    }
    if (m.find("MinRt") != m.end() && !m["MinRt"].empty()) {
      minRt = make_shared<long>(boost::any_cast<long>(m["MinRt"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("Qps2XX") != m.end() && !m["Qps2XX"].empty()) {
      qps2XX = make_shared<double>(boost::any_cast<double>(m["Qps2XX"]));
    }
    if (m.find("RealQps") != m.end() && !m["RealQps"].empty()) {
      realQps = make_shared<double>(boost::any_cast<double>(m["RealQps"]));
    }
    if (m.find("TimePoint") != m.end() && !m["TimePoint"].empty()) {
      timePoint = make_shared<long>(boost::any_cast<long>(m["TimePoint"]));
    }
  }


  virtual ~GetPtsSceneRunningDataResponseBodyChainMonitorDataList() = default;
};
class GetPtsSceneRunningDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetPtsSceneRunningDataResponseBodyAgentLocation>> agentLocation{};
  shared_ptr<long> aliveAgents{};
  shared_ptr<long> averageRt{};
  shared_ptr<long> beginTime{};
  shared_ptr<vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList>> chainMonitorDataList{};
  shared_ptr<string> code{};
  shared_ptr<long> concurrency{};
  shared_ptr<long> concurrencyLimit{};
  shared_ptr<long> failedBusinessCount{};
  shared_ptr<long> failedRequestCount{};
  shared_ptr<bool> hasReport{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestBps{};
  shared_ptr<string> requestId{};
  shared_ptr<string> responseBps{};
  shared_ptr<long> seg90Rt{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalAgents{};
  shared_ptr<long> totalRequestCount{};
  shared_ptr<long> tpsLimit{};
  shared_ptr<long> vum{};

  GetPtsSceneRunningDataResponseBody() {}

  explicit GetPtsSceneRunningDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentLocation) {
      vector<boost::any> temp1;
      for(auto item1:*agentLocation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AgentLocation"] = boost::any(temp1);
    }
    if (aliveAgents) {
      res["AliveAgents"] = boost::any(*aliveAgents);
    }
    if (averageRt) {
      res["AverageRt"] = boost::any(*averageRt);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (chainMonitorDataList) {
      vector<boost::any> temp1;
      for(auto item1:*chainMonitorDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChainMonitorDataList"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (concurrencyLimit) {
      res["ConcurrencyLimit"] = boost::any(*concurrencyLimit);
    }
    if (failedBusinessCount) {
      res["FailedBusinessCount"] = boost::any(*failedBusinessCount);
    }
    if (failedRequestCount) {
      res["FailedRequestCount"] = boost::any(*failedRequestCount);
    }
    if (hasReport) {
      res["HasReport"] = boost::any(*hasReport);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestBps) {
      res["RequestBps"] = boost::any(*requestBps);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseBps) {
      res["ResponseBps"] = boost::any(*responseBps);
    }
    if (seg90Rt) {
      res["Seg90Rt"] = boost::any(*seg90Rt);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalAgents) {
      res["TotalAgents"] = boost::any(*totalAgents);
    }
    if (totalRequestCount) {
      res["TotalRequestCount"] = boost::any(*totalRequestCount);
    }
    if (tpsLimit) {
      res["TpsLimit"] = boost::any(*tpsLimit);
    }
    if (vum) {
      res["Vum"] = boost::any(*vum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentLocation") != m.end() && !m["AgentLocation"].empty()) {
      if (typeid(vector<boost::any>) == m["AgentLocation"].type()) {
        vector<GetPtsSceneRunningDataResponseBodyAgentLocation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AgentLocation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneRunningDataResponseBodyAgentLocation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agentLocation = make_shared<vector<GetPtsSceneRunningDataResponseBodyAgentLocation>>(expect1);
      }
    }
    if (m.find("AliveAgents") != m.end() && !m["AliveAgents"].empty()) {
      aliveAgents = make_shared<long>(boost::any_cast<long>(m["AliveAgents"]));
    }
    if (m.find("AverageRt") != m.end() && !m["AverageRt"].empty()) {
      averageRt = make_shared<long>(boost::any_cast<long>(m["AverageRt"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ChainMonitorDataList") != m.end() && !m["ChainMonitorDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["ChainMonitorDataList"].type()) {
        vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChainMonitorDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPtsSceneRunningDataResponseBodyChainMonitorDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chainMonitorDataList = make_shared<vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("ConcurrencyLimit") != m.end() && !m["ConcurrencyLimit"].empty()) {
      concurrencyLimit = make_shared<long>(boost::any_cast<long>(m["ConcurrencyLimit"]));
    }
    if (m.find("FailedBusinessCount") != m.end() && !m["FailedBusinessCount"].empty()) {
      failedBusinessCount = make_shared<long>(boost::any_cast<long>(m["FailedBusinessCount"]));
    }
    if (m.find("FailedRequestCount") != m.end() && !m["FailedRequestCount"].empty()) {
      failedRequestCount = make_shared<long>(boost::any_cast<long>(m["FailedRequestCount"]));
    }
    if (m.find("HasReport") != m.end() && !m["HasReport"].empty()) {
      hasReport = make_shared<bool>(boost::any_cast<bool>(m["HasReport"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestBps") != m.end() && !m["RequestBps"].empty()) {
      requestBps = make_shared<string>(boost::any_cast<string>(m["RequestBps"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseBps") != m.end() && !m["ResponseBps"].empty()) {
      responseBps = make_shared<string>(boost::any_cast<string>(m["ResponseBps"]));
    }
    if (m.find("Seg90Rt") != m.end() && !m["Seg90Rt"].empty()) {
      seg90Rt = make_shared<long>(boost::any_cast<long>(m["Seg90Rt"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalAgents") != m.end() && !m["TotalAgents"].empty()) {
      totalAgents = make_shared<long>(boost::any_cast<long>(m["TotalAgents"]));
    }
    if (m.find("TotalRequestCount") != m.end() && !m["TotalRequestCount"].empty()) {
      totalRequestCount = make_shared<long>(boost::any_cast<long>(m["TotalRequestCount"]));
    }
    if (m.find("TpsLimit") != m.end() && !m["TpsLimit"].empty()) {
      tpsLimit = make_shared<long>(boost::any_cast<long>(m["TpsLimit"]));
    }
    if (m.find("Vum") != m.end() && !m["Vum"].empty()) {
      vum = make_shared<long>(boost::any_cast<long>(m["Vum"]));
    }
  }


  virtual ~GetPtsSceneRunningDataResponseBody() = default;
};
class GetPtsSceneRunningDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPtsSceneRunningDataResponseBody> body{};

  GetPtsSceneRunningDataResponse() {}

  explicit GetPtsSceneRunningDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPtsSceneRunningDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPtsSceneRunningDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetPtsSceneRunningDataResponse() = default;
};
class GetPtsSceneRunningStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  GetPtsSceneRunningStatusRequest() {}

  explicit GetPtsSceneRunningStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetPtsSceneRunningStatusRequest() = default;
};
class GetPtsSceneRunningStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> createTime{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetPtsSceneRunningStatusResponseBody() {}

  explicit GetPtsSceneRunningStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPtsSceneRunningStatusResponseBody() = default;
};
class GetPtsSceneRunningStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPtsSceneRunningStatusResponseBody> body{};

  GetPtsSceneRunningStatusResponse() {}

  explicit GetPtsSceneRunningStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPtsSceneRunningStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPtsSceneRunningStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPtsSceneRunningStatusResponse() = default;
};
class ListEnvsRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> envName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListEnvsRequest() {}

  explicit ListEnvsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListEnvsRequest() = default;
};
class ListEnvsResponseBodyEnvsFiles : public Darabonba::Model {
public:
  shared_ptr<long> fileId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileOssAddress{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> md5{};

  ListEnvsResponseBodyEnvsFiles() {}

  explicit ListEnvsResponseBodyEnvsFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileOssAddress) {
      res["FileOssAddress"] = boost::any(*fileOssAddress);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileOssAddress") != m.end() && !m["FileOssAddress"].empty()) {
      fileOssAddress = make_shared<string>(boost::any_cast<string>(m["FileOssAddress"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
  }


  virtual ~ListEnvsResponseBodyEnvsFiles() = default;
};
class ListEnvsResponseBodyEnvsProperties : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListEnvsResponseBodyEnvsProperties() {}

  explicit ListEnvsResponseBodyEnvsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEnvsResponseBodyEnvsProperties() = default;
};
class ListEnvsResponseBodyEnvs : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> envId{};
  shared_ptr<string> envName{};
  shared_ptr<string> envVersion{};
  shared_ptr<vector<ListEnvsResponseBodyEnvsFiles>> files{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<vector<ListEnvsResponseBodyEnvsProperties>> properties{};
  shared_ptr<vector<string>> relatedScenes{};
  shared_ptr<vector<string>> runningScenes{};
  shared_ptr<long> usedCapacity{};

  ListEnvsResponseBodyEnvs() {}

  explicit ListEnvsResponseBodyEnvs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (envVersion) {
      res["EnvVersion"] = boost::any(*envVersion);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (properties) {
      vector<boost::any> temp1;
      for(auto item1:*properties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Properties"] = boost::any(temp1);
    }
    if (relatedScenes) {
      res["RelatedScenes"] = boost::any(*relatedScenes);
    }
    if (runningScenes) {
      res["RunningScenes"] = boost::any(*runningScenes);
    }
    if (usedCapacity) {
      res["UsedCapacity"] = boost::any(*usedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("EnvVersion") != m.end() && !m["EnvVersion"].empty()) {
      envVersion = make_shared<string>(boost::any_cast<string>(m["EnvVersion"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<ListEnvsResponseBodyEnvsFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvsResponseBodyEnvsFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<ListEnvsResponseBodyEnvsFiles>>(expect1);
      }
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(vector<boost::any>) == m["Properties"].type()) {
        vector<ListEnvsResponseBodyEnvsProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Properties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvsResponseBodyEnvsProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        properties = make_shared<vector<ListEnvsResponseBodyEnvsProperties>>(expect1);
      }
    }
    if (m.find("RelatedScenes") != m.end() && !m["RelatedScenes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedScenes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedScenes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relatedScenes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RunningScenes") != m.end() && !m["RunningScenes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RunningScenes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RunningScenes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      runningScenes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UsedCapacity") != m.end() && !m["UsedCapacity"].empty()) {
      usedCapacity = make_shared<long>(boost::any_cast<long>(m["UsedCapacity"]));
    }
  }


  virtual ~ListEnvsResponseBodyEnvs() = default;
};
class ListEnvsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListEnvsResponseBodyEnvs>> envs{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListEnvsResponseBody() {}

  explicit ListEnvsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (envs) {
      vector<boost::any> temp1;
      for(auto item1:*envs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Envs"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Envs") != m.end() && !m["Envs"].empty()) {
      if (typeid(vector<boost::any>) == m["Envs"].type()) {
        vector<ListEnvsResponseBodyEnvs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Envs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvsResponseBodyEnvs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        envs = make_shared<vector<ListEnvsResponseBodyEnvs>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListEnvsResponseBody() = default;
};
class ListEnvsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEnvsResponseBody> body{};

  ListEnvsResponse() {}

  explicit ListEnvsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnvsResponse() = default;
};
class ListJMeterReportsRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> reportId{};
  shared_ptr<string> sceneId{};

  ListJMeterReportsRequest() {}

  explicit ListJMeterReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~ListJMeterReportsRequest() = default;
};
class ListJMeterReportsResponseBodyReports : public Darabonba::Model {
public:
  shared_ptr<long> actualStartTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> reportId{};
  shared_ptr<string> reportName{};
  shared_ptr<long> vum{};

  ListJMeterReportsResponseBodyReports() {}

  explicit ListJMeterReportsResponseBodyReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualStartTime) {
      res["ActualStartTime"] = boost::any(*actualStartTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (reportName) {
      res["ReportName"] = boost::any(*reportName);
    }
    if (vum) {
      res["Vum"] = boost::any(*vum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualStartTime") != m.end() && !m["ActualStartTime"].empty()) {
      actualStartTime = make_shared<long>(boost::any_cast<long>(m["ActualStartTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ReportName") != m.end() && !m["ReportName"].empty()) {
      reportName = make_shared<string>(boost::any_cast<string>(m["ReportName"]));
    }
    if (m.find("Vum") != m.end() && !m["Vum"].empty()) {
      vum = make_shared<long>(boost::any_cast<long>(m["Vum"]));
    }
  }


  virtual ~ListJMeterReportsResponseBodyReports() = default;
};
class ListJMeterReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListJMeterReportsResponseBodyReports>> reports{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListJMeterReportsResponseBody() {}

  explicit ListJMeterReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reports) {
      vector<boost::any> temp1;
      for(auto item1:*reports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Reports"] = boost::any(temp1);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reports") != m.end() && !m["Reports"].empty()) {
      if (typeid(vector<boost::any>) == m["Reports"].type()) {
        vector<ListJMeterReportsResponseBodyReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Reports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJMeterReportsResponseBodyReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reports = make_shared<vector<ListJMeterReportsResponseBodyReports>>(expect1);
      }
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


  virtual ~ListJMeterReportsResponseBody() = default;
};
class ListJMeterReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListJMeterReportsResponseBody> body{};

  ListJMeterReportsResponse() {}

  explicit ListJMeterReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListJMeterReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJMeterReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJMeterReportsResponse() = default;
};
class ListOpenJMeterScenesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};

  ListOpenJMeterScenesRequest() {}

  explicit ListOpenJMeterScenesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
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
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
  }


  virtual ~ListOpenJMeterScenesRequest() = default;
};
class ListOpenJMeterScenesResponseBodyJMeterScene : public Darabonba::Model {
public:
  shared_ptr<string> durationStr{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};

  ListOpenJMeterScenesResponseBodyJMeterScene() {}

  explicit ListOpenJMeterScenesResponseBodyJMeterScene(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationStr) {
      res["DurationStr"] = boost::any(*durationStr);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationStr") != m.end() && !m["DurationStr"].empty()) {
      durationStr = make_shared<string>(boost::any_cast<string>(m["DurationStr"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
  }


  virtual ~ListOpenJMeterScenesResponseBodyJMeterScene() = default;
};
class ListOpenJMeterScenesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListOpenJMeterScenesResponseBodyJMeterScene>> JMeterScene{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListOpenJMeterScenesResponseBody() {}

  explicit ListOpenJMeterScenesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (JMeterScene) {
      vector<boost::any> temp1;
      for(auto item1:*JMeterScene){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JMeterScene"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("JMeterScene") != m.end() && !m["JMeterScene"].empty()) {
      if (typeid(vector<boost::any>) == m["JMeterScene"].type()) {
        vector<ListOpenJMeterScenesResponseBodyJMeterScene> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JMeterScene"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOpenJMeterScenesResponseBodyJMeterScene model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        JMeterScene = make_shared<vector<ListOpenJMeterScenesResponseBodyJMeterScene>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListOpenJMeterScenesResponseBody() = default;
};
class ListOpenJMeterScenesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOpenJMeterScenesResponseBody> body{};

  ListOpenJMeterScenesResponse() {}

  explicit ListOpenJMeterScenesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOpenJMeterScenesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOpenJMeterScenesResponseBody>(model1);
      }
    }
  }


  virtual ~ListOpenJMeterScenesResponse() = default;
};
class ListPtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListPtsSceneRequest() {}

  explicit ListPtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListPtsSceneRequest() = default;
};
class ListPtsSceneResponseBodySceneViewList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};

  ListPtsSceneResponseBodySceneViewList() {}

  explicit ListPtsSceneResponseBodySceneViewList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
  }


  virtual ~ListPtsSceneResponseBodySceneViewList() = default;
};
class ListPtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListPtsSceneResponseBodySceneViewList>> sceneViewList{};
  shared_ptr<bool> success{};

  ListPtsSceneResponseBody() {}

  explicit ListPtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneViewList) {
      vector<boost::any> temp1;
      for(auto item1:*sceneViewList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SceneViewList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneViewList") != m.end() && !m["SceneViewList"].empty()) {
      if (typeid(vector<boost::any>) == m["SceneViewList"].type()) {
        vector<ListPtsSceneResponseBodySceneViewList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SceneViewList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPtsSceneResponseBodySceneViewList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sceneViewList = make_shared<vector<ListPtsSceneResponseBodySceneViewList>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListPtsSceneResponseBody() = default;
};
class ListPtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPtsSceneResponseBody> body{};

  ListPtsSceneResponse() {}

  explicit ListPtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~ListPtsSceneResponse() = default;
};
class ModifyPtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> scene{};

  ModifyPtsSceneRequest() {}

  explicit ModifyPtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~ModifyPtsSceneRequest() = default;
};
class ModifyPtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyPtsSceneResponseBody() {}

  explicit ModifyPtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ModifyPtsSceneResponseBody() = default;
};
class ModifyPtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyPtsSceneResponseBody> body{};

  ModifyPtsSceneResponse() {}

  explicit ModifyPtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPtsSceneResponse() = default;
};
class RemoveEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};

  RemoveEnvRequest() {}

  explicit RemoveEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~RemoveEnvRequest() = default;
};
class RemoveEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveEnvResponseBody() {}

  explicit RemoveEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~RemoveEnvResponseBody() = default;
};
class RemoveEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveEnvResponseBody> body{};

  RemoveEnvResponse() {}

  explicit RemoveEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveEnvResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveEnvResponse() = default;
};
class RemoveOpenJMeterSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  RemoveOpenJMeterSceneRequest() {}

  explicit RemoveOpenJMeterSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~RemoveOpenJMeterSceneRequest() = default;
};
class RemoveOpenJMeterSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveOpenJMeterSceneResponseBody() {}

  explicit RemoveOpenJMeterSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~RemoveOpenJMeterSceneResponseBody() = default;
};
class RemoveOpenJMeterSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveOpenJMeterSceneResponseBody> body{};

  RemoveOpenJMeterSceneResponse() {}

  explicit RemoveOpenJMeterSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveOpenJMeterSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveOpenJMeterSceneResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveOpenJMeterSceneResponse() = default;
};
class SaveEnvRequestEnvFiles : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileOssAddress{};

  SaveEnvRequestEnvFiles() {}

  explicit SaveEnvRequestEnvFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileOssAddress) {
      res["FileOssAddress"] = boost::any(*fileOssAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileOssAddress") != m.end() && !m["FileOssAddress"].empty()) {
      fileOssAddress = make_shared<string>(boost::any_cast<string>(m["FileOssAddress"]));
    }
  }


  virtual ~SaveEnvRequestEnvFiles() = default;
};
class SaveEnvRequestEnvProperties : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  SaveEnvRequestEnvProperties() {}

  explicit SaveEnvRequestEnvProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SaveEnvRequestEnvProperties() = default;
};
class SaveEnvRequestEnv : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> envName{};
  shared_ptr<vector<SaveEnvRequestEnvFiles>> files{};
  shared_ptr<string> jmeterPluginLabel{};
  shared_ptr<vector<SaveEnvRequestEnvProperties>> properties{};

  SaveEnvRequestEnv() {}

  explicit SaveEnvRequestEnv(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (jmeterPluginLabel) {
      res["JmeterPluginLabel"] = boost::any(*jmeterPluginLabel);
    }
    if (properties) {
      vector<boost::any> temp1;
      for(auto item1:*properties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Properties"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<SaveEnvRequestEnvFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveEnvRequestEnvFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<SaveEnvRequestEnvFiles>>(expect1);
      }
    }
    if (m.find("JmeterPluginLabel") != m.end() && !m["JmeterPluginLabel"].empty()) {
      jmeterPluginLabel = make_shared<string>(boost::any_cast<string>(m["JmeterPluginLabel"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(vector<boost::any>) == m["Properties"].type()) {
        vector<SaveEnvRequestEnvProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Properties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveEnvRequestEnvProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        properties = make_shared<vector<SaveEnvRequestEnvProperties>>(expect1);
      }
    }
  }


  virtual ~SaveEnvRequestEnv() = default;
};
class SaveEnvRequest : public Darabonba::Model {
public:
  shared_ptr<SaveEnvRequestEnv> env{};

  SaveEnvRequest() {}

  explicit SaveEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = env ? boost::any(env->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      if (typeid(map<string, boost::any>) == m["Env"].type()) {
        SaveEnvRequestEnv model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Env"]));
        env = make_shared<SaveEnvRequestEnv>(model1);
      }
    }
  }


  virtual ~SaveEnvRequest() = default;
};
class SaveEnvShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> envShrink{};

  SaveEnvShrinkRequest() {}

  explicit SaveEnvShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envShrink) {
      res["Env"] = boost::any(*envShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      envShrink = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
  }


  virtual ~SaveEnvShrinkRequest() = default;
};
class SaveEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> envId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveEnvResponseBody() {}

  explicit SaveEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~SaveEnvResponseBody() = default;
};
class SaveEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SaveEnvResponseBody> body{};

  SaveEnvResponse() {}

  explicit SaveEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveEnvResponseBody>(model1);
      }
    }
  }


  virtual ~SaveEnvResponse() = default;
};
class SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig : public Darabonba::Model {
public:
  shared_ptr<bool> clearCacheEachIteration{};
  shared_ptr<vector<string>> dnsServers{};
  shared_ptr<map<string, string>> hostTable{};

  SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig() {}

  explicit SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clearCacheEachIteration) {
      res["ClearCacheEachIteration"] = boost::any(*clearCacheEachIteration);
    }
    if (dnsServers) {
      res["DnsServers"] = boost::any(*dnsServers);
    }
    if (hostTable) {
      res["HostTable"] = boost::any(*hostTable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClearCacheEachIteration") != m.end() && !m["ClearCacheEachIteration"].empty()) {
      clearCacheEachIteration = make_shared<bool>(boost::any_cast<bool>(m["ClearCacheEachIteration"]));
    }
    if (m.find("DnsServers") != m.end() && !m["DnsServers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DnsServers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DnsServers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsServers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HostTable") != m.end() && !m["HostTable"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["HostTable"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      hostTable = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig() = default;
};
class SaveOpenJMeterSceneRequestOpenJMeterSceneFileList : public Darabonba::Model {
public:
  shared_ptr<long> fileId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileOssAddress{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> md5{};
  shared_ptr<bool> splitCsv{};
  shared_ptr<string> tags{};

  SaveOpenJMeterSceneRequestOpenJMeterSceneFileList() {}

  explicit SaveOpenJMeterSceneRequestOpenJMeterSceneFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileOssAddress) {
      res["FileOssAddress"] = boost::any(*fileOssAddress);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (splitCsv) {
      res["SplitCsv"] = boost::any(*splitCsv);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileOssAddress") != m.end() && !m["FileOssAddress"].empty()) {
      fileOssAddress = make_shared<string>(boost::any_cast<string>(m["FileOssAddress"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("SplitCsv") != m.end() && !m["SplitCsv"].empty()) {
      splitCsv = make_shared<bool>(boost::any_cast<bool>(m["SplitCsv"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~SaveOpenJMeterSceneRequestOpenJMeterSceneFileList() = default;
};
class SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties() {}

  explicit SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties() = default;
};
class SaveOpenJMeterSceneRequestOpenJMeterScene : public Darabonba::Model {
public:
  shared_ptr<long> agentCount{};
  shared_ptr<long> concurrency{};
  shared_ptr<string> constantThroughputTimerType{};
  shared_ptr<SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig> dnsCacheConfig{};
  shared_ptr<long> duration{};
  shared_ptr<string> environmentId{};
  shared_ptr<vector<SaveOpenJMeterSceneRequestOpenJMeterSceneFileList>> fileList{};
  shared_ptr<bool> isVpcTest{};
  shared_ptr<vector<SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties>> JMeterProperties{};
  shared_ptr<string> jmeterPluginLabel{};
  shared_ptr<long> rampUp{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> steps{};
  shared_ptr<string> syncTimerType{};
  shared_ptr<string> testFile{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  SaveOpenJMeterSceneRequestOpenJMeterScene() {}

  explicit SaveOpenJMeterSceneRequestOpenJMeterScene(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentCount) {
      res["AgentCount"] = boost::any(*agentCount);
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (constantThroughputTimerType) {
      res["ConstantThroughputTimerType"] = boost::any(*constantThroughputTimerType);
    }
    if (dnsCacheConfig) {
      res["DnsCacheConfig"] = dnsCacheConfig ? boost::any(dnsCacheConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (environmentId) {
      res["EnvironmentId"] = boost::any(*environmentId);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (isVpcTest) {
      res["IsVpcTest"] = boost::any(*isVpcTest);
    }
    if (JMeterProperties) {
      vector<boost::any> temp1;
      for(auto item1:*JMeterProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JMeterProperties"] = boost::any(temp1);
    }
    if (jmeterPluginLabel) {
      res["JmeterPluginLabel"] = boost::any(*jmeterPluginLabel);
    }
    if (rampUp) {
      res["RampUp"] = boost::any(*rampUp);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (steps) {
      res["Steps"] = boost::any(*steps);
    }
    if (syncTimerType) {
      res["SyncTimerType"] = boost::any(*syncTimerType);
    }
    if (testFile) {
      res["TestFile"] = boost::any(*testFile);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentCount") != m.end() && !m["AgentCount"].empty()) {
      agentCount = make_shared<long>(boost::any_cast<long>(m["AgentCount"]));
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("ConstantThroughputTimerType") != m.end() && !m["ConstantThroughputTimerType"].empty()) {
      constantThroughputTimerType = make_shared<string>(boost::any_cast<string>(m["ConstantThroughputTimerType"]));
    }
    if (m.find("DnsCacheConfig") != m.end() && !m["DnsCacheConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsCacheConfig"].type()) {
        SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsCacheConfig"]));
        dnsCacheConfig = make_shared<SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EnvironmentId") != m.end() && !m["EnvironmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["EnvironmentId"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<SaveOpenJMeterSceneRequestOpenJMeterSceneFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveOpenJMeterSceneRequestOpenJMeterSceneFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<SaveOpenJMeterSceneRequestOpenJMeterSceneFileList>>(expect1);
      }
    }
    if (m.find("IsVpcTest") != m.end() && !m["IsVpcTest"].empty()) {
      isVpcTest = make_shared<bool>(boost::any_cast<bool>(m["IsVpcTest"]));
    }
    if (m.find("JMeterProperties") != m.end() && !m["JMeterProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["JMeterProperties"].type()) {
        vector<SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JMeterProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        JMeterProperties = make_shared<vector<SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties>>(expect1);
      }
    }
    if (m.find("JmeterPluginLabel") != m.end() && !m["JmeterPluginLabel"].empty()) {
      jmeterPluginLabel = make_shared<string>(boost::any_cast<string>(m["JmeterPluginLabel"]));
    }
    if (m.find("RampUp") != m.end() && !m["RampUp"].empty()) {
      rampUp = make_shared<long>(boost::any_cast<long>(m["RampUp"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Steps") != m.end() && !m["Steps"].empty()) {
      steps = make_shared<long>(boost::any_cast<long>(m["Steps"]));
    }
    if (m.find("SyncTimerType") != m.end() && !m["SyncTimerType"].empty()) {
      syncTimerType = make_shared<string>(boost::any_cast<string>(m["SyncTimerType"]));
    }
    if (m.find("TestFile") != m.end() && !m["TestFile"].empty()) {
      testFile = make_shared<string>(boost::any_cast<string>(m["TestFile"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~SaveOpenJMeterSceneRequestOpenJMeterScene() = default;
};
class SaveOpenJMeterSceneRequest : public Darabonba::Model {
public:
  shared_ptr<SaveOpenJMeterSceneRequestOpenJMeterScene> openJMeterScene{};

  SaveOpenJMeterSceneRequest() {}

  explicit SaveOpenJMeterSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openJMeterScene) {
      res["OpenJMeterScene"] = openJMeterScene ? boost::any(openJMeterScene->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenJMeterScene") != m.end() && !m["OpenJMeterScene"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenJMeterScene"].type()) {
        SaveOpenJMeterSceneRequestOpenJMeterScene model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenJMeterScene"]));
        openJMeterScene = make_shared<SaveOpenJMeterSceneRequestOpenJMeterScene>(model1);
      }
    }
  }


  virtual ~SaveOpenJMeterSceneRequest() = default;
};
class SaveOpenJMeterSceneShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> openJMeterSceneShrink{};

  SaveOpenJMeterSceneShrinkRequest() {}

  explicit SaveOpenJMeterSceneShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openJMeterSceneShrink) {
      res["OpenJMeterScene"] = boost::any(*openJMeterSceneShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenJMeterScene") != m.end() && !m["OpenJMeterScene"].empty()) {
      openJMeterSceneShrink = make_shared<string>(boost::any_cast<string>(m["OpenJMeterScene"]));
    }
  }


  virtual ~SaveOpenJMeterSceneShrinkRequest() = default;
};
class SaveOpenJMeterSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneId{};
  shared_ptr<bool> success{};

  SaveOpenJMeterSceneResponseBody() {}

  explicit SaveOpenJMeterSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveOpenJMeterSceneResponseBody() = default;
};
class SaveOpenJMeterSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SaveOpenJMeterSceneResponseBody> body{};

  SaveOpenJMeterSceneResponse() {}

  explicit SaveOpenJMeterSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveOpenJMeterSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveOpenJMeterSceneResponseBody>(model1);
      }
    }
  }


  virtual ~SaveOpenJMeterSceneResponse() = default;
};
class StartDebugPtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  StartDebugPtsSceneRequest() {}

  explicit StartDebugPtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~StartDebugPtsSceneRequest() = default;
};
class StartDebugPtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartDebugPtsSceneResponseBody() {}

  explicit StartDebugPtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartDebugPtsSceneResponseBody() = default;
};
class StartDebugPtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartDebugPtsSceneResponseBody> body{};

  StartDebugPtsSceneResponse() {}

  explicit StartDebugPtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDebugPtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDebugPtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StartDebugPtsSceneResponse() = default;
};
class StartDebuggingJMeterSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  StartDebuggingJMeterSceneRequest() {}

  explicit StartDebuggingJMeterSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~StartDebuggingJMeterSceneRequest() = default;
};
class StartDebuggingJMeterSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> reportId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartDebuggingJMeterSceneResponseBody() {}

  explicit StartDebuggingJMeterSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartDebuggingJMeterSceneResponseBody() = default;
};
class StartDebuggingJMeterSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartDebuggingJMeterSceneResponseBody> body{};

  StartDebuggingJMeterSceneResponse() {}

  explicit StartDebuggingJMeterSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDebuggingJMeterSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDebuggingJMeterSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StartDebuggingJMeterSceneResponse() = default;
};
class StartPtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  StartPtsSceneRequest() {}

  explicit StartPtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~StartPtsSceneRequest() = default;
};
class StartPtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartPtsSceneResponseBody() {}

  explicit StartPtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartPtsSceneResponseBody() = default;
};
class StartPtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartPtsSceneResponseBody> body{};

  StartPtsSceneResponse() {}

  explicit StartPtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartPtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartPtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StartPtsSceneResponse() = default;
};
class StartTestingJMeterSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  StartTestingJMeterSceneRequest() {}

  explicit StartTestingJMeterSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~StartTestingJMeterSceneRequest() = default;
};
class StartTestingJMeterSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> reportId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartTestingJMeterSceneResponseBody() {}

  explicit StartTestingJMeterSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartTestingJMeterSceneResponseBody() = default;
};
class StartTestingJMeterSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartTestingJMeterSceneResponseBody> body{};

  StartTestingJMeterSceneResponse() {}

  explicit StartTestingJMeterSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartTestingJMeterSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartTestingJMeterSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StartTestingJMeterSceneResponse() = default;
};
class StopDebugPtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> sceneId{};

  StopDebugPtsSceneRequest() {}

  explicit StopDebugPtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~StopDebugPtsSceneRequest() = default;
};
class StopDebugPtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopDebugPtsSceneResponseBody() {}

  explicit StopDebugPtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~StopDebugPtsSceneResponseBody() = default;
};
class StopDebugPtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopDebugPtsSceneResponseBody> body{};

  StopDebugPtsSceneResponse() {}

  explicit StopDebugPtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDebugPtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDebugPtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StopDebugPtsSceneResponse() = default;
};
class StopDebuggingJMeterSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  StopDebuggingJMeterSceneRequest() {}

  explicit StopDebuggingJMeterSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~StopDebuggingJMeterSceneRequest() = default;
};
class StopDebuggingJMeterSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopDebuggingJMeterSceneResponseBody() {}

  explicit StopDebuggingJMeterSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~StopDebuggingJMeterSceneResponseBody() = default;
};
class StopDebuggingJMeterSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopDebuggingJMeterSceneResponseBody> body{};

  StopDebuggingJMeterSceneResponse() {}

  explicit StopDebuggingJMeterSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDebuggingJMeterSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDebuggingJMeterSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StopDebuggingJMeterSceneResponse() = default;
};
class StopPtsSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  StopPtsSceneRequest() {}

  explicit StopPtsSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~StopPtsSceneRequest() = default;
};
class StopPtsSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopPtsSceneResponseBody() {}

  explicit StopPtsSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~StopPtsSceneResponseBody() = default;
};
class StopPtsSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopPtsSceneResponseBody> body{};

  StopPtsSceneResponse() {}

  explicit StopPtsSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopPtsSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopPtsSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StopPtsSceneResponse() = default;
};
class StopTestingJMeterSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  StopTestingJMeterSceneRequest() {}

  explicit StopTestingJMeterSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~StopTestingJMeterSceneRequest() = default;
};
class StopTestingJMeterSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopTestingJMeterSceneResponseBody() {}

  explicit StopTestingJMeterSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~StopTestingJMeterSceneResponseBody() = default;
};
class StopTestingJMeterSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopTestingJMeterSceneResponseBody> body{};

  StopTestingJMeterSceneResponse() {}

  explicit StopTestingJMeterSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopTestingJMeterSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopTestingJMeterSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StopTestingJMeterSceneResponse() = default;
};
class UpdatePtsSceneBaseLineRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> apiBaselines{};
  shared_ptr<map<string, boost::any>> sceneBaseline{};
  shared_ptr<string> sceneId{};

  UpdatePtsSceneBaseLineRequest() {}

  explicit UpdatePtsSceneBaseLineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiBaselines) {
      res["ApiBaselines"] = boost::any(*apiBaselines);
    }
    if (sceneBaseline) {
      res["SceneBaseline"] = boost::any(*sceneBaseline);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiBaselines") != m.end() && !m["ApiBaselines"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ApiBaselines"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      apiBaselines = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SceneBaseline") != m.end() && !m["SceneBaseline"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SceneBaseline"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sceneBaseline = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~UpdatePtsSceneBaseLineRequest() = default;
};
class UpdatePtsSceneBaseLineShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiBaselinesShrink{};
  shared_ptr<string> sceneBaselineShrink{};
  shared_ptr<string> sceneId{};

  UpdatePtsSceneBaseLineShrinkRequest() {}

  explicit UpdatePtsSceneBaseLineShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiBaselinesShrink) {
      res["ApiBaselines"] = boost::any(*apiBaselinesShrink);
    }
    if (sceneBaselineShrink) {
      res["SceneBaseline"] = boost::any(*sceneBaselineShrink);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiBaselines") != m.end() && !m["ApiBaselines"].empty()) {
      apiBaselinesShrink = make_shared<string>(boost::any_cast<string>(m["ApiBaselines"]));
    }
    if (m.find("SceneBaseline") != m.end() && !m["SceneBaseline"].empty()) {
      sceneBaselineShrink = make_shared<string>(boost::any_cast<string>(m["SceneBaseline"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~UpdatePtsSceneBaseLineShrinkRequest() = default;
};
class UpdatePtsSceneBaseLineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdatePtsSceneBaseLineResponseBody() {}

  explicit UpdatePtsSceneBaseLineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~UpdatePtsSceneBaseLineResponseBody() = default;
};
class UpdatePtsSceneBaseLineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdatePtsSceneBaseLineResponseBody> body{};

  UpdatePtsSceneBaseLineResponse() {}

  explicit UpdatePtsSceneBaseLineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePtsSceneBaseLineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePtsSceneBaseLineResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePtsSceneBaseLineResponse() = default;
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
  CreatePtsSceneResponse createPtsSceneWithOptions(shared_ptr<CreatePtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePtsSceneResponse createPtsScene(shared_ptr<CreatePtsSceneRequest> request);
  CreatePtsSceneBaseLineFromReportResponse createPtsSceneBaseLineFromReportWithOptions(shared_ptr<CreatePtsSceneBaseLineFromReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePtsSceneBaseLineFromReportResponse createPtsSceneBaseLineFromReport(shared_ptr<CreatePtsSceneBaseLineFromReportRequest> request);
  DeletePtsSceneResponse deletePtsSceneWithOptions(shared_ptr<DeletePtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePtsSceneResponse deletePtsScene(shared_ptr<DeletePtsSceneRequest> request);
  DeletePtsSceneBaseLineResponse deletePtsSceneBaseLineWithOptions(shared_ptr<DeletePtsSceneBaseLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePtsSceneBaseLineResponse deletePtsSceneBaseLine(shared_ptr<DeletePtsSceneBaseLineRequest> request);
  DeletePtsScenesResponse deletePtsScenesWithOptions(shared_ptr<DeletePtsScenesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePtsScenesResponse deletePtsScenes(shared_ptr<DeletePtsScenesRequest> request);
  GetJMeterLogsResponse getJMeterLogsWithOptions(shared_ptr<GetJMeterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJMeterLogsResponse getJMeterLogs(shared_ptr<GetJMeterLogsRequest> request);
  GetJMeterSampleMetricsResponse getJMeterSampleMetricsWithOptions(shared_ptr<GetJMeterSampleMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJMeterSampleMetricsResponse getJMeterSampleMetrics(shared_ptr<GetJMeterSampleMetricsRequest> request);
  GetJMeterSamplingLogsResponse getJMeterSamplingLogsWithOptions(shared_ptr<GetJMeterSamplingLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJMeterSamplingLogsResponse getJMeterSamplingLogs(shared_ptr<GetJMeterSamplingLogsRequest> request);
  GetJMeterSceneRunningDataResponse getJMeterSceneRunningDataWithOptions(shared_ptr<GetJMeterSceneRunningDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJMeterSceneRunningDataResponse getJMeterSceneRunningData(shared_ptr<GetJMeterSceneRunningDataRequest> request);
  GetOpenJMeterSceneResponse getOpenJMeterSceneWithOptions(shared_ptr<GetOpenJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOpenJMeterSceneResponse getOpenJMeterScene(shared_ptr<GetOpenJMeterSceneRequest> request);
  GetPtsReportDetailsResponse getPtsReportDetailsWithOptions(shared_ptr<GetPtsReportDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPtsReportDetailsResponse getPtsReportDetails(shared_ptr<GetPtsReportDetailsRequest> request);
  GetPtsReportsBySceneIdResponse getPtsReportsBySceneIdWithOptions(shared_ptr<GetPtsReportsBySceneIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPtsReportsBySceneIdResponse getPtsReportsBySceneId(shared_ptr<GetPtsReportsBySceneIdRequest> request);
  GetPtsSceneResponse getPtsSceneWithOptions(shared_ptr<GetPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPtsSceneResponse getPtsScene(shared_ptr<GetPtsSceneRequest> request);
  GetPtsSceneBaseLineResponse getPtsSceneBaseLineWithOptions(shared_ptr<GetPtsSceneBaseLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPtsSceneBaseLineResponse getPtsSceneBaseLine(shared_ptr<GetPtsSceneBaseLineRequest> request);
  GetPtsSceneRunningDataResponse getPtsSceneRunningDataWithOptions(shared_ptr<GetPtsSceneRunningDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPtsSceneRunningDataResponse getPtsSceneRunningData(shared_ptr<GetPtsSceneRunningDataRequest> request);
  GetPtsSceneRunningStatusResponse getPtsSceneRunningStatusWithOptions(shared_ptr<GetPtsSceneRunningStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPtsSceneRunningStatusResponse getPtsSceneRunningStatus(shared_ptr<GetPtsSceneRunningStatusRequest> request);
  ListEnvsResponse listEnvsWithOptions(shared_ptr<ListEnvsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvsResponse listEnvs(shared_ptr<ListEnvsRequest> request);
  ListJMeterReportsResponse listJMeterReportsWithOptions(shared_ptr<ListJMeterReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJMeterReportsResponse listJMeterReports(shared_ptr<ListJMeterReportsRequest> request);
  ListOpenJMeterScenesResponse listOpenJMeterScenesWithOptions(shared_ptr<ListOpenJMeterScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOpenJMeterScenesResponse listOpenJMeterScenes(shared_ptr<ListOpenJMeterScenesRequest> request);
  ListPtsSceneResponse listPtsSceneWithOptions(shared_ptr<ListPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPtsSceneResponse listPtsScene(shared_ptr<ListPtsSceneRequest> request);
  ModifyPtsSceneResponse modifyPtsSceneWithOptions(shared_ptr<ModifyPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPtsSceneResponse modifyPtsScene(shared_ptr<ModifyPtsSceneRequest> request);
  RemoveEnvResponse removeEnvWithOptions(shared_ptr<RemoveEnvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveEnvResponse removeEnv(shared_ptr<RemoveEnvRequest> request);
  RemoveOpenJMeterSceneResponse removeOpenJMeterSceneWithOptions(shared_ptr<RemoveOpenJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveOpenJMeterSceneResponse removeOpenJMeterScene(shared_ptr<RemoveOpenJMeterSceneRequest> request);
  SaveEnvResponse saveEnvWithOptions(shared_ptr<SaveEnvRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveEnvResponse saveEnv(shared_ptr<SaveEnvRequest> request);
  SaveOpenJMeterSceneResponse saveOpenJMeterSceneWithOptions(shared_ptr<SaveOpenJMeterSceneRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveOpenJMeterSceneResponse saveOpenJMeterScene(shared_ptr<SaveOpenJMeterSceneRequest> request);
  StartDebugPtsSceneResponse startDebugPtsSceneWithOptions(shared_ptr<StartDebugPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDebugPtsSceneResponse startDebugPtsScene(shared_ptr<StartDebugPtsSceneRequest> request);
  StartDebuggingJMeterSceneResponse startDebuggingJMeterSceneWithOptions(shared_ptr<StartDebuggingJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDebuggingJMeterSceneResponse startDebuggingJMeterScene(shared_ptr<StartDebuggingJMeterSceneRequest> request);
  StartPtsSceneResponse startPtsSceneWithOptions(shared_ptr<StartPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartPtsSceneResponse startPtsScene(shared_ptr<StartPtsSceneRequest> request);
  StartTestingJMeterSceneResponse startTestingJMeterSceneWithOptions(shared_ptr<StartTestingJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTestingJMeterSceneResponse startTestingJMeterScene(shared_ptr<StartTestingJMeterSceneRequest> request);
  StopDebugPtsSceneResponse stopDebugPtsSceneWithOptions(shared_ptr<StopDebugPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDebugPtsSceneResponse stopDebugPtsScene(shared_ptr<StopDebugPtsSceneRequest> request);
  StopDebuggingJMeterSceneResponse stopDebuggingJMeterSceneWithOptions(shared_ptr<StopDebuggingJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDebuggingJMeterSceneResponse stopDebuggingJMeterScene(shared_ptr<StopDebuggingJMeterSceneRequest> request);
  StopPtsSceneResponse stopPtsSceneWithOptions(shared_ptr<StopPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopPtsSceneResponse stopPtsScene(shared_ptr<StopPtsSceneRequest> request);
  StopTestingJMeterSceneResponse stopTestingJMeterSceneWithOptions(shared_ptr<StopTestingJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopTestingJMeterSceneResponse stopTestingJMeterScene(shared_ptr<StopTestingJMeterSceneRequest> request);
  UpdatePtsSceneBaseLineResponse updatePtsSceneBaseLineWithOptions(shared_ptr<UpdatePtsSceneBaseLineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePtsSceneBaseLineResponse updatePtsSceneBaseLine(shared_ptr<UpdatePtsSceneBaseLineRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PTS20201020

#endif
