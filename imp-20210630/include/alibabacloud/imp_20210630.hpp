// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMP20210630_H_
#define ALIBABACLOUD_IMP20210630_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imp20210630 {
class AddMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<string> fromUserId{};
  shared_ptr<string> toUserId{};

  AddMemberRequest() {}

  explicit AddMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (fromUserId) {
      res["FromUserId"] = boost::any(*fromUserId);
    }
    if (toUserId) {
      res["ToUserId"] = boost::any(*toUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("FromUserId") != m.end() && !m["FromUserId"].empty()) {
      fromUserId = make_shared<string>(boost::any_cast<string>(m["FromUserId"]));
    }
    if (m.find("ToUserId") != m.end() && !m["ToUserId"].empty()) {
      toUserId = make_shared<string>(boost::any_cast<string>(m["ToUserId"]));
    }
  }


  virtual ~AddMemberRequest() = default;
};
class AddMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddMemberResponseBody() {}

  explicit AddMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddMemberResponseBody() = default;
};
class AddMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddMemberResponseBody> body{};

  AddMemberResponse() {}

  explicit AddMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMemberResponseBody>(model1);
      }
    }
  }


  virtual ~AddMemberResponse() = default;
};
class AgreeLinkMicRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<string> fromUserId{};
  shared_ptr<string> toUserId{};

  AgreeLinkMicRequest() {}

  explicit AgreeLinkMicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (fromUserId) {
      res["FromUserId"] = boost::any(*fromUserId);
    }
    if (toUserId) {
      res["ToUserId"] = boost::any(*toUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("FromUserId") != m.end() && !m["FromUserId"].empty()) {
      fromUserId = make_shared<string>(boost::any_cast<string>(m["FromUserId"]));
    }
    if (m.find("ToUserId") != m.end() && !m["ToUserId"].empty()) {
      toUserId = make_shared<string>(boost::any_cast<string>(m["ToUserId"]));
    }
  }


  virtual ~AgreeLinkMicRequest() = default;
};
class AgreeLinkMicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AgreeLinkMicResponseBody() {}

  explicit AgreeLinkMicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AgreeLinkMicResponseBody() = default;
};
class AgreeLinkMicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AgreeLinkMicResponseBody> body{};

  AgreeLinkMicResponse() {}

  explicit AgreeLinkMicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AgreeLinkMicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AgreeLinkMicResponseBody>(model1);
      }
    }
  }


  virtual ~AgreeLinkMicResponse() = default;
};
class ApplyLinkMicRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<string> userId{};

  ApplyLinkMicRequest() {}

  explicit ApplyLinkMicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ApplyLinkMicRequest() = default;
};
class ApplyLinkMicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ApplyLinkMicResponseBody() {}

  explicit ApplyLinkMicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApplyLinkMicResponseBody() = default;
};
class ApplyLinkMicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ApplyLinkMicResponseBody> body{};

  ApplyLinkMicResponse() {}

  explicit ApplyLinkMicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyLinkMicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyLinkMicResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyLinkMicResponse() = default;
};
class AttachStandardRoomHttpsCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> certificatePrivateKey{};
  shared_ptr<string> certificatePublicKey{};
  shared_ptr<string> domainName{};

  AttachStandardRoomHttpsCertificateRequest() {}

  explicit AttachStandardRoomHttpsCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (certificatePrivateKey) {
      res["CertificatePrivateKey"] = boost::any(*certificatePrivateKey);
    }
    if (certificatePublicKey) {
      res["CertificatePublicKey"] = boost::any(*certificatePublicKey);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CertificatePrivateKey") != m.end() && !m["CertificatePrivateKey"].empty()) {
      certificatePrivateKey = make_shared<string>(boost::any_cast<string>(m["CertificatePrivateKey"]));
    }
    if (m.find("CertificatePublicKey") != m.end() && !m["CertificatePublicKey"].empty()) {
      certificatePublicKey = make_shared<string>(boost::any_cast<string>(m["CertificatePublicKey"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~AttachStandardRoomHttpsCertificateRequest() = default;
};
class AttachStandardRoomHttpsCertificateResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  AttachStandardRoomHttpsCertificateResponseBodyResult() {}

  explicit AttachStandardRoomHttpsCertificateResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~AttachStandardRoomHttpsCertificateResponseBodyResult() = default;
};
class AttachStandardRoomHttpsCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AttachStandardRoomHttpsCertificateResponseBodyResult> result{};

  AttachStandardRoomHttpsCertificateResponseBody() {}

  explicit AttachStandardRoomHttpsCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        AttachStandardRoomHttpsCertificateResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<AttachStandardRoomHttpsCertificateResponseBodyResult>(model1);
      }
    }
  }


  virtual ~AttachStandardRoomHttpsCertificateResponseBody() = default;
};
class AttachStandardRoomHttpsCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachStandardRoomHttpsCertificateResponseBody> body{};

  AttachStandardRoomHttpsCertificateResponse() {}

  explicit AttachStandardRoomHttpsCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachStandardRoomHttpsCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachStandardRoomHttpsCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~AttachStandardRoomHttpsCertificateResponse() = default;
};
class BanAllCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  BanAllCommentRequest() {}

  explicit BanAllCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~BanAllCommentRequest() = default;
};
class BanAllCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  BanAllCommentResponseBody() {}

  explicit BanAllCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~BanAllCommentResponseBody() = default;
};
class BanAllCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BanAllCommentResponseBody> body{};

  BanAllCommentResponse() {}

  explicit BanAllCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BanAllCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BanAllCommentResponseBody>(model1);
      }
    }
  }


  virtual ~BanAllCommentResponse() = default;
};
class BanCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> banCommentTime{};
  shared_ptr<string> banCommentUser{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  BanCommentRequest() {}

  explicit BanCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (banCommentTime) {
      res["BanCommentTime"] = boost::any(*banCommentTime);
    }
    if (banCommentUser) {
      res["BanCommentUser"] = boost::any(*banCommentUser);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BanCommentTime") != m.end() && !m["BanCommentTime"].empty()) {
      banCommentTime = make_shared<long>(boost::any_cast<long>(m["BanCommentTime"]));
    }
    if (m.find("BanCommentUser") != m.end() && !m["BanCommentUser"].empty()) {
      banCommentUser = make_shared<string>(boost::any_cast<string>(m["BanCommentUser"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~BanCommentRequest() = default;
};
class BanCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  BanCommentResponseBody() {}

  explicit BanCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~BanCommentResponseBody() = default;
};
class BanCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BanCommentResponseBody> body{};

  BanCommentResponse() {}

  explicit BanCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BanCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BanCommentResponseBody>(model1);
      }
    }
  }


  virtual ~BanCommentResponse() = default;
};
class CancelApplyLinkMicRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<string> userId{};

  CancelApplyLinkMicRequest() {}

  explicit CancelApplyLinkMicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CancelApplyLinkMicRequest() = default;
};
class CancelApplyLinkMicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelApplyLinkMicResponseBody() {}

  explicit CancelApplyLinkMicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelApplyLinkMicResponseBody() = default;
};
class CancelApplyLinkMicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelApplyLinkMicResponseBody> body{};

  CancelApplyLinkMicResponse() {}

  explicit CancelApplyLinkMicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelApplyLinkMicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelApplyLinkMicResponseBody>(model1);
      }
    }
  }


  virtual ~CancelApplyLinkMicResponse() = default;
};
class CancelBanAllCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  CancelBanAllCommentRequest() {}

  explicit CancelBanAllCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CancelBanAllCommentRequest() = default;
};
class CancelBanAllCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CancelBanAllCommentResponseBody() {}

  explicit CancelBanAllCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~CancelBanAllCommentResponseBody() = default;
};
class CancelBanAllCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelBanAllCommentResponseBody> body{};

  CancelBanAllCommentResponse() {}

  explicit CancelBanAllCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelBanAllCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelBanAllCommentResponseBody>(model1);
      }
    }
  }


  virtual ~CancelBanAllCommentResponse() = default;
};
class CancelBanCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> banCommentUser{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  CancelBanCommentRequest() {}

  explicit CancelBanCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (banCommentUser) {
      res["BanCommentUser"] = boost::any(*banCommentUser);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BanCommentUser") != m.end() && !m["BanCommentUser"].empty()) {
      banCommentUser = make_shared<string>(boost::any_cast<string>(m["BanCommentUser"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CancelBanCommentRequest() = default;
};
class CancelBanCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CancelBanCommentResponseBody() {}

  explicit CancelBanCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~CancelBanCommentResponseBody() = default;
};
class CancelBanCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelBanCommentResponseBody> body{};

  CancelBanCommentResponse() {}

  explicit CancelBanCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelBanCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelBanCommentResponseBody>(model1);
      }
    }
  }


  virtual ~CancelBanCommentResponse() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appTemplateId{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  CreateAppResponseBodyResult() {}

  explicit CreateAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~CreateAppResponseBodyResult() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateAppResponseBodyResult> result{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateAppResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateAppTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateName{};
  shared_ptr<vector<string>> componentList{};
  shared_ptr<string> integrationMode{};
  shared_ptr<string> scene{};

  CreateAppTemplateRequest() {}

  explicit CreateAppTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateName) {
      res["AppTemplateName"] = boost::any(*appTemplateName);
    }
    if (componentList) {
      res["ComponentList"] = boost::any(*componentList);
    }
    if (integrationMode) {
      res["IntegrationMode"] = boost::any(*integrationMode);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateName") != m.end() && !m["AppTemplateName"].empty()) {
      appTemplateName = make_shared<string>(boost::any_cast<string>(m["AppTemplateName"]));
    }
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComponentList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComponentList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      componentList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IntegrationMode") != m.end() && !m["IntegrationMode"].empty()) {
      integrationMode = make_shared<string>(boost::any_cast<string>(m["IntegrationMode"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~CreateAppTemplateRequest() = default;
};
class CreateAppTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateName{};
  shared_ptr<string> componentListShrink{};
  shared_ptr<string> integrationMode{};
  shared_ptr<string> scene{};

  CreateAppTemplateShrinkRequest() {}

  explicit CreateAppTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateName) {
      res["AppTemplateName"] = boost::any(*appTemplateName);
    }
    if (componentListShrink) {
      res["ComponentList"] = boost::any(*componentListShrink);
    }
    if (integrationMode) {
      res["IntegrationMode"] = boost::any(*integrationMode);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateName") != m.end() && !m["AppTemplateName"].empty()) {
      appTemplateName = make_shared<string>(boost::any_cast<string>(m["AppTemplateName"]));
    }
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      componentListShrink = make_shared<string>(boost::any_cast<string>(m["ComponentList"]));
    }
    if (m.find("IntegrationMode") != m.end() && !m["IntegrationMode"].empty()) {
      integrationMode = make_shared<string>(boost::any_cast<string>(m["IntegrationMode"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~CreateAppTemplateShrinkRequest() = default;
};
class CreateAppTemplateResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateId{};

  CreateAppTemplateResponseBodyResult() {}

  explicit CreateAppTemplateResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
  }


  virtual ~CreateAppTemplateResponseBodyResult() = default;
};
class CreateAppTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateAppTemplateResponseBodyResult> result{};

  CreateAppTemplateResponseBody() {}

  explicit CreateAppTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateAppTemplateResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateAppTemplateResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateAppTemplateResponseBody() = default;
};
class CreateAppTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAppTemplateResponseBody> body{};

  CreateAppTemplateResponse() {}

  explicit CreateAppTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppTemplateResponse() = default;
};
class CreateClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> title{};

  CreateClassRequest() {}

  explicit CreateClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateClassRequest() = default;
};
class CreateClassResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<string> confId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<string> whiteboardId{};
  shared_ptr<string> whiteboardRecordId{};

  CreateClassResponseBodyResult() {}

  explicit CreateClassResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (confId) {
      res["ConfId"] = boost::any(*confId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (whiteboardId) {
      res["WhiteboardId"] = boost::any(*whiteboardId);
    }
    if (whiteboardRecordId) {
      res["WhiteboardRecordId"] = boost::any(*whiteboardRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("ConfId") != m.end() && !m["ConfId"].empty()) {
      confId = make_shared<string>(boost::any_cast<string>(m["ConfId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("WhiteboardId") != m.end() && !m["WhiteboardId"].empty()) {
      whiteboardId = make_shared<string>(boost::any_cast<string>(m["WhiteboardId"]));
    }
    if (m.find("WhiteboardRecordId") != m.end() && !m["WhiteboardRecordId"].empty()) {
      whiteboardRecordId = make_shared<string>(boost::any_cast<string>(m["WhiteboardRecordId"]));
    }
  }


  virtual ~CreateClassResponseBodyResult() = default;
};
class CreateClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateClassResponseBodyResult> result{};

  CreateClassResponseBody() {}

  explicit CreateClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateClassResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateClassResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateClassResponseBody() = default;
};
class CreateClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateClassResponseBody> body{};

  CreateClassResponse() {}

  explicit CreateClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClassResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClassResponse() = default;
};
class CreateConferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CreateConferenceRequest() {}

  explicit CreateConferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateConferenceRequest() = default;
};
class CreateConferenceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};

  CreateConferenceResponseBodyResult() {}

  explicit CreateConferenceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
  }


  virtual ~CreateConferenceResponseBodyResult() = default;
};
class CreateConferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateConferenceResponseBodyResult> result{};

  CreateConferenceResponseBody() {}

  explicit CreateConferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateConferenceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateConferenceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateConferenceResponseBody() = default;
};
class CreateConferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateConferenceResponseBody> body{};

  CreateConferenceResponse() {}

  explicit CreateConferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConferenceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConferenceResponse() = default;
};
class CreateLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> appId{};
  shared_ptr<long> codeLevel{};
  shared_ptr<string> introduction{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CreateLiveRequest() {}

  explicit CreateLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (codeLevel) {
      res["CodeLevel"] = boost::any(*codeLevel);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CodeLevel") != m.end() && !m["CodeLevel"].empty()) {
      codeLevel = make_shared<long>(boost::any_cast<long>(m["CodeLevel"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateLiveRequest() = default;
};
class CreateLiveResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};

  CreateLiveResponseBodyResult() {}

  explicit CreateLiveResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~CreateLiveResponseBodyResult() = default;
};
class CreateLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateLiveResponseBodyResult> result{};

  CreateLiveResponseBody() {}

  explicit CreateLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateLiveResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateLiveResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateLiveResponseBody() = default;
};
class CreateLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLiveResponseBody> body{};

  CreateLiveResponse() {}

  explicit CreateLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLiveResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLiveResponse() = default;
};
class CreateLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CreateLiveRoomRequest() {}

  explicit CreateLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateLiveRoomRequest() = default;
};
class CreateLiveRoomShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> notice{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CreateLiveRoomShrinkRequest() {}

  explicit CreateLiveRoomShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateLiveRoomShrinkRequest() = default;
};
class CreateLiveRoomResponseBodyResultArtcInfo : public Darabonba::Model {
public:
  shared_ptr<string> artcH5Url{};
  shared_ptr<string> artcUrl{};

  CreateLiveRoomResponseBodyResultArtcInfo() {}

  explicit CreateLiveRoomResponseBodyResultArtcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artcH5Url) {
      res["ArtcH5Url"] = boost::any(*artcH5Url);
    }
    if (artcUrl) {
      res["ArtcUrl"] = boost::any(*artcUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtcH5Url") != m.end() && !m["ArtcH5Url"].empty()) {
      artcH5Url = make_shared<string>(boost::any_cast<string>(m["ArtcH5Url"]));
    }
    if (m.find("ArtcUrl") != m.end() && !m["ArtcUrl"].empty()) {
      artcUrl = make_shared<string>(boost::any_cast<string>(m["ArtcUrl"]));
    }
  }


  virtual ~CreateLiveRoomResponseBodyResultArtcInfo() = default;
};
class CreateLiveRoomResponseBodyResultPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginType{};

  CreateLiveRoomResponseBodyResultPluginInstanceInfoList() {}

  explicit CreateLiveRoomResponseBodyResultPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
  }


  virtual ~CreateLiveRoomResponseBodyResultPluginInstanceInfoList() = default;
};
class CreateLiveRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<CreateLiveRoomResponseBodyResultArtcInfo> artcInfo{};
  shared_ptr<string> chatId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> hlsUrl{};
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> notice{};
  shared_ptr<string> playbackUrl{};
  shared_ptr<vector<CreateLiveRoomResponseBodyResultPluginInstanceInfoList>> pluginInstanceInfoList{};
  shared_ptr<string> pushUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> title{};

  CreateLiveRoomResponseBodyResult() {}

  explicit CreateLiveRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artcInfo) {
      res["ArtcInfo"] = artcInfo ? boost::any(artcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (hlsUrl) {
      res["HlsUrl"] = boost::any(*hlsUrl);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (playbackUrl) {
      res["PlaybackUrl"] = boost::any(*playbackUrl);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtcInfo") != m.end() && !m["ArtcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtcInfo"].type()) {
        CreateLiveRoomResponseBodyResultArtcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtcInfo"]));
        artcInfo = make_shared<CreateLiveRoomResponseBodyResultArtcInfo>(model1);
      }
    }
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("HlsUrl") != m.end() && !m["HlsUrl"].empty()) {
      hlsUrl = make_shared<string>(boost::any_cast<string>(m["HlsUrl"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("PlaybackUrl") != m.end() && !m["PlaybackUrl"].empty()) {
      playbackUrl = make_shared<string>(boost::any_cast<string>(m["PlaybackUrl"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<CreateLiveRoomResponseBodyResultPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLiveRoomResponseBodyResultPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<CreateLiveRoomResponseBodyResultPluginInstanceInfoList>>(expect1);
      }
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateLiveRoomResponseBodyResult() = default;
};
class CreateLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateLiveRoomResponseBodyResult> result{};

  CreateLiveRoomResponseBody() {}

  explicit CreateLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateLiveRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateLiveRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateLiveRoomResponseBody() = default;
};
class CreateLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLiveRoomResponseBody> body{};

  CreateLiveRoomResponse() {}

  explicit CreateLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLiveRoomResponse() = default;
};
class CreateRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> title{};

  CreateRoomRequest() {}

  explicit CreateRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateRoomRequest() = default;
};
class CreateRoomShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> notice{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> title{};

  CreateRoomShrinkRequest() {}

  explicit CreateRoomShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateRoomShrinkRequest() = default;
};
class CreateRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> roomId{};

  CreateRoomResponseBodyResult() {}

  explicit CreateRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~CreateRoomResponseBodyResult() = default;
};
class CreateRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateRoomResponseBodyResult> result{};

  CreateRoomResponseBody() {}

  explicit CreateRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateRoomResponseBody() = default;
};
class CreateRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRoomResponseBody> body{};

  CreateRoomResponse() {}

  explicit CreateRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoomResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoomResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteAppTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateId{};

  DeleteAppTemplateRequest() {}

  explicit DeleteAppTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
  }


  virtual ~DeleteAppTemplateRequest() = default;
};
class DeleteAppTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppTemplateResponseBody() {}

  explicit DeleteAppTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppTemplateResponseBody() = default;
};
class DeleteAppTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAppTemplateResponseBody> body{};

  DeleteAppTemplateResponse() {}

  explicit DeleteAppTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppTemplateResponse() = default;
};
class DeleteClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> userId{};

  DeleteClassRequest() {}

  explicit DeleteClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteClassRequest() = default;
};
class DeleteClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteClassResponseBody() {}

  explicit DeleteClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClassResponseBody() = default;
};
class DeleteClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteClassResponseBody> body{};

  DeleteClassResponse() {}

  explicit DeleteClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClassResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClassResponse() = default;
};
class DeleteCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> commentIdList{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  DeleteCommentRequest() {}

  explicit DeleteCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commentIdList) {
      res["CommentIdList"] = boost::any(*commentIdList);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommentIdList") != m.end() && !m["CommentIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CommentIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CommentIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      commentIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteCommentRequest() = default;
};
class DeleteCommentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> deleteResult{};

  DeleteCommentResponseBodyResult() {}

  explicit DeleteCommentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteResult) {
      res["DeleteResult"] = boost::any(*deleteResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteResult") != m.end() && !m["DeleteResult"].empty()) {
      deleteResult = make_shared<bool>(boost::any_cast<bool>(m["DeleteResult"]));
    }
  }


  virtual ~DeleteCommentResponseBodyResult() = default;
};
class DeleteCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteCommentResponseBodyResult> result{};

  DeleteCommentResponseBody() {}

  explicit DeleteCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteCommentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteCommentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteCommentResponseBody() = default;
};
class DeleteCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCommentResponseBody> body{};

  DeleteCommentResponse() {}

  explicit DeleteCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCommentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCommentResponse() = default;
};
class DeleteConferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> conferenceId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  DeleteConferenceRequest() {}

  explicit DeleteConferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteConferenceRequest() = default;
};
class DeleteConferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteConferenceResponseBody() {}

  explicit DeleteConferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteConferenceResponseBody() = default;
};
class DeleteConferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteConferenceResponseBody> body{};

  DeleteConferenceResponse() {}

  explicit DeleteConferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConferenceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConferenceResponse() = default;
};
class DeleteLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};

  DeleteLiveRequest() {}

  explicit DeleteLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~DeleteLiveRequest() = default;
};
class DeleteLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLiveResponseBody() {}

  explicit DeleteLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLiveResponseBody() = default;
};
class DeleteLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLiveResponseBody> body{};

  DeleteLiveResponse() {}

  explicit DeleteLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLiveResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLiveResponse() = default;
};
class DeleteLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  DeleteLiveRoomRequest() {}

  explicit DeleteLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteLiveRoomRequest() = default;
};
class DeleteLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLiveRoomResponseBody() {}

  explicit DeleteLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLiveRoomResponseBody() = default;
};
class DeleteLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLiveRoomResponseBody> body{};

  DeleteLiveRoomResponse() {}

  explicit DeleteLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLiveRoomResponse() = default;
};
class DeleteRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};

  DeleteRoomRequest() {}

  explicit DeleteRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~DeleteRoomRequest() = default;
};
class DeleteRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRoomResponseBody() {}

  explicit DeleteRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRoomResponseBody() = default;
};
class DeleteRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRoomResponseBody> body{};

  DeleteRoomResponse() {}

  explicit DeleteRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRoomResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRoomResponse() = default;
};
class GetAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetAppRequest() {}

  explicit GetAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~GetAppRequest() = default;
};
class GetAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appConfigStatus{};
  shared_ptr<string> appKey{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appTemplateId{};
  shared_ptr<string> appTemplateName{};
  shared_ptr<vector<string>> componentList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> integrationMode{};
  shared_ptr<string> standardRoomInfo{};

  GetAppResponseBodyResult() {}

  explicit GetAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appConfigStatus) {
      res["AppConfigStatus"] = boost::any(*appConfigStatus);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    if (appTemplateName) {
      res["AppTemplateName"] = boost::any(*appTemplateName);
    }
    if (componentList) {
      res["ComponentList"] = boost::any(*componentList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (integrationMode) {
      res["IntegrationMode"] = boost::any(*integrationMode);
    }
    if (standardRoomInfo) {
      res["StandardRoomInfo"] = boost::any(*standardRoomInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppConfigStatus") != m.end() && !m["AppConfigStatus"].empty()) {
      appConfigStatus = make_shared<string>(boost::any_cast<string>(m["AppConfigStatus"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
    if (m.find("AppTemplateName") != m.end() && !m["AppTemplateName"].empty()) {
      appTemplateName = make_shared<string>(boost::any_cast<string>(m["AppTemplateName"]));
    }
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComponentList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComponentList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      componentList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IntegrationMode") != m.end() && !m["IntegrationMode"].empty()) {
      integrationMode = make_shared<string>(boost::any_cast<string>(m["IntegrationMode"]));
    }
    if (m.find("StandardRoomInfo") != m.end() && !m["StandardRoomInfo"].empty()) {
      standardRoomInfo = make_shared<string>(boost::any_cast<string>(m["StandardRoomInfo"]));
    }
  }


  virtual ~GetAppResponseBodyResult() = default;
};
class GetAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAppResponseBodyResult> result{};

  GetAppResponseBody() {}

  explicit GetAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetAppResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAppResponseBody() = default;
};
class GetAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAppResponseBody> body{};

  GetAppResponse() {}

  explicit GetAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppResponse() = default;
};
class GetAppTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateId{};

  GetAppTemplateRequest() {}

  explicit GetAppTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
  }


  virtual ~GetAppTemplateRequest() = default;
};
class GetAppTemplateResponseBodyResultConfigList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetAppTemplateResponseBodyResultConfigList() {}

  explicit GetAppTemplateResponseBodyResultConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAppTemplateResponseBodyResultConfigList() = default;
};
class GetAppTemplateResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateCreator{};
  shared_ptr<string> appTemplateName{};
  shared_ptr<vector<string>> componentList{};
  shared_ptr<vector<GetAppTemplateResponseBodyResultConfigList>> configList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> integrationMode{};
  shared_ptr<string> scene{};
  shared_ptr<string> sdkInfo{};
  shared_ptr<string> standardRoomInfo{};
  shared_ptr<string> status{};

  GetAppTemplateResponseBodyResult() {}

  explicit GetAppTemplateResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateCreator) {
      res["AppTemplateCreator"] = boost::any(*appTemplateCreator);
    }
    if (appTemplateName) {
      res["AppTemplateName"] = boost::any(*appTemplateName);
    }
    if (componentList) {
      res["ComponentList"] = boost::any(*componentList);
    }
    if (configList) {
      vector<boost::any> temp1;
      for(auto item1:*configList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigList"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (integrationMode) {
      res["IntegrationMode"] = boost::any(*integrationMode);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sdkInfo) {
      res["SdkInfo"] = boost::any(*sdkInfo);
    }
    if (standardRoomInfo) {
      res["StandardRoomInfo"] = boost::any(*standardRoomInfo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateCreator") != m.end() && !m["AppTemplateCreator"].empty()) {
      appTemplateCreator = make_shared<string>(boost::any_cast<string>(m["AppTemplateCreator"]));
    }
    if (m.find("AppTemplateName") != m.end() && !m["AppTemplateName"].empty()) {
      appTemplateName = make_shared<string>(boost::any_cast<string>(m["AppTemplateName"]));
    }
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComponentList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComponentList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      componentList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigList"].type()) {
        vector<GetAppTemplateResponseBodyResultConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppTemplateResponseBodyResultConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configList = make_shared<vector<GetAppTemplateResponseBodyResultConfigList>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IntegrationMode") != m.end() && !m["IntegrationMode"].empty()) {
      integrationMode = make_shared<string>(boost::any_cast<string>(m["IntegrationMode"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SdkInfo") != m.end() && !m["SdkInfo"].empty()) {
      sdkInfo = make_shared<string>(boost::any_cast<string>(m["SdkInfo"]));
    }
    if (m.find("StandardRoomInfo") != m.end() && !m["StandardRoomInfo"].empty()) {
      standardRoomInfo = make_shared<string>(boost::any_cast<string>(m["StandardRoomInfo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAppTemplateResponseBodyResult() = default;
};
class GetAppTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAppTemplateResponseBodyResult> result{};

  GetAppTemplateResponseBody() {}

  explicit GetAppTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetAppTemplateResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetAppTemplateResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAppTemplateResponseBody() = default;
};
class GetAppTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAppTemplateResponseBody> body{};

  GetAppTemplateResponse() {}

  explicit GetAppTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppTemplateResponse() = default;
};
class GetAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appKey{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> userId{};

  GetAuthTokenRequest() {}

  explicit GetAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetAuthTokenRequest() = default;
};
class GetAuthTokenResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> accessTokenExpiredTime{};
  shared_ptr<string> refreshToken{};

  GetAuthTokenResponseBodyResult() {}

  explicit GetAuthTokenResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (accessTokenExpiredTime) {
      res["AccessTokenExpiredTime"] = boost::any(*accessTokenExpiredTime);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AccessTokenExpiredTime") != m.end() && !m["AccessTokenExpiredTime"].empty()) {
      accessTokenExpiredTime = make_shared<long>(boost::any_cast<long>(m["AccessTokenExpiredTime"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~GetAuthTokenResponseBodyResult() = default;
};
class GetAuthTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAuthTokenResponseBodyResult> result{};

  GetAuthTokenResponseBody() {}

  explicit GetAuthTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetAuthTokenResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetAuthTokenResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAuthTokenResponseBody() = default;
};
class GetAuthTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAuthTokenResponseBody> body{};

  GetAuthTokenResponse() {}

  explicit GetAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthTokenResponse() = default;
};
class GetClassDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> userId{};

  GetClassDetailRequest() {}

  explicit GetClassDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetClassDetailRequest() = default;
};
class GetClassDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<string> confId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<string> whiteboardId{};
  shared_ptr<string> whiteboardRecordId{};

  GetClassDetailResponseBodyResult() {}

  explicit GetClassDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (confId) {
      res["ConfId"] = boost::any(*confId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (whiteboardId) {
      res["WhiteboardId"] = boost::any(*whiteboardId);
    }
    if (whiteboardRecordId) {
      res["WhiteboardRecordId"] = boost::any(*whiteboardRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("ConfId") != m.end() && !m["ConfId"].empty()) {
      confId = make_shared<string>(boost::any_cast<string>(m["ConfId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("WhiteboardId") != m.end() && !m["WhiteboardId"].empty()) {
      whiteboardId = make_shared<string>(boost::any_cast<string>(m["WhiteboardId"]));
    }
    if (m.find("WhiteboardRecordId") != m.end() && !m["WhiteboardRecordId"].empty()) {
      whiteboardRecordId = make_shared<string>(boost::any_cast<string>(m["WhiteboardRecordId"]));
    }
  }


  virtual ~GetClassDetailResponseBodyResult() = default;
};
class GetClassDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetClassDetailResponseBodyResult> result{};

  GetClassDetailResponseBody() {}

  explicit GetClassDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetClassDetailResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetClassDetailResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetClassDetailResponseBody() = default;
};
class GetClassDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetClassDetailResponseBody> body{};

  GetClassDetailResponse() {}

  explicit GetClassDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClassDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClassDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetClassDetailResponse() = default;
};
class GetConferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};

  GetConferenceRequest() {}

  explicit GetConferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
  }


  virtual ~GetConferenceRequest() = default;
};
class GetConferenceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> conferenceId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> playbackUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  GetConferenceResponseBodyResult() {}

  explicit GetConferenceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (playbackUrl) {
      res["PlaybackUrl"] = boost::any(*playbackUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("PlaybackUrl") != m.end() && !m["PlaybackUrl"].empty()) {
      playbackUrl = make_shared<string>(boost::any_cast<string>(m["PlaybackUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetConferenceResponseBodyResult() = default;
};
class GetConferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetConferenceResponseBodyResult> result{};

  GetConferenceResponseBody() {}

  explicit GetConferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetConferenceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetConferenceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetConferenceResponseBody() = default;
};
class GetConferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConferenceResponseBody> body{};

  GetConferenceResponse() {}

  explicit GetConferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConferenceResponseBody>(model1);
      }
    }
  }


  virtual ~GetConferenceResponse() = default;
};
class GetDomainOwnerVerifyContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveDomainName{};

  GetDomainOwnerVerifyContentRequest() {}

  explicit GetDomainOwnerVerifyContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveDomainName) {
      res["LiveDomainName"] = boost::any(*liveDomainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveDomainName") != m.end() && !m["LiveDomainName"].empty()) {
      liveDomainName = make_shared<string>(boost::any_cast<string>(m["LiveDomainName"]));
    }
  }


  virtual ~GetDomainOwnerVerifyContentRequest() = default;
};
class GetDomainOwnerVerifyContentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  GetDomainOwnerVerifyContentResponseBodyResult() {}

  explicit GetDomainOwnerVerifyContentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~GetDomainOwnerVerifyContentResponseBodyResult() = default;
};
class GetDomainOwnerVerifyContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDomainOwnerVerifyContentResponseBodyResult> result{};

  GetDomainOwnerVerifyContentResponseBody() {}

  explicit GetDomainOwnerVerifyContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetDomainOwnerVerifyContentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetDomainOwnerVerifyContentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDomainOwnerVerifyContentResponseBody() = default;
};
class GetDomainOwnerVerifyContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDomainOwnerVerifyContentResponseBody> body{};

  GetDomainOwnerVerifyContentResponse() {}

  explicit GetDomainOwnerVerifyContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainOwnerVerifyContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainOwnerVerifyContentResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainOwnerVerifyContentResponse() = default;
};
class GetImpProductStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  GetImpProductStatusResponseBody() {}

  explicit GetImpProductStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~GetImpProductStatusResponseBody() = default;
};
class GetImpProductStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetImpProductStatusResponseBody> body{};

  GetImpProductStatusResponse() {}

  explicit GetImpProductStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImpProductStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImpProductStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetImpProductStatusResponse() = default;
};
class GetLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};

  GetLiveRequest() {}

  explicit GetLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~GetLiveRequest() = default;
};
class GetLiveResponseBodyResultArtcInfo : public Darabonba::Model {
public:
  shared_ptr<string> artcH5Url{};
  shared_ptr<string> artcUrl{};

  GetLiveResponseBodyResultArtcInfo() {}

  explicit GetLiveResponseBodyResultArtcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artcH5Url) {
      res["ArtcH5Url"] = boost::any(*artcH5Url);
    }
    if (artcUrl) {
      res["ArtcUrl"] = boost::any(*artcUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtcH5Url") != m.end() && !m["ArtcH5Url"].empty()) {
      artcH5Url = make_shared<string>(boost::any_cast<string>(m["ArtcH5Url"]));
    }
    if (m.find("ArtcUrl") != m.end() && !m["ArtcUrl"].empty()) {
      artcUrl = make_shared<string>(boost::any_cast<string>(m["ArtcUrl"]));
    }
  }


  virtual ~GetLiveResponseBodyResultArtcInfo() = default;
};
class GetLiveResponseBodyResultPlayUrlInfoList : public Darabonba::Model {
public:
  shared_ptr<long> codeLevel{};
  shared_ptr<string> flvUrl{};
  shared_ptr<string> hlsUrl{};
  shared_ptr<string> rtmpUrl{};

  GetLiveResponseBodyResultPlayUrlInfoList() {}

  explicit GetLiveResponseBodyResultPlayUrlInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeLevel) {
      res["CodeLevel"] = boost::any(*codeLevel);
    }
    if (flvUrl) {
      res["FlvUrl"] = boost::any(*flvUrl);
    }
    if (hlsUrl) {
      res["HlsUrl"] = boost::any(*hlsUrl);
    }
    if (rtmpUrl) {
      res["RtmpUrl"] = boost::any(*rtmpUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeLevel") != m.end() && !m["CodeLevel"].empty()) {
      codeLevel = make_shared<long>(boost::any_cast<long>(m["CodeLevel"]));
    }
    if (m.find("FlvUrl") != m.end() && !m["FlvUrl"].empty()) {
      flvUrl = make_shared<string>(boost::any_cast<string>(m["FlvUrl"]));
    }
    if (m.find("HlsUrl") != m.end() && !m["HlsUrl"].empty()) {
      hlsUrl = make_shared<string>(boost::any_cast<string>(m["HlsUrl"]));
    }
    if (m.find("RtmpUrl") != m.end() && !m["RtmpUrl"].empty()) {
      rtmpUrl = make_shared<string>(boost::any_cast<string>(m["RtmpUrl"]));
    }
  }


  virtual ~GetLiveResponseBodyResultPlayUrlInfoList() = default;
};
class GetLiveResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> appId{};
  shared_ptr<GetLiveResponseBodyResultArtcInfo> artcInfo{};
  shared_ptr<long> codeLevel{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> createTime{};
  shared_ptr<long> duration{};
  shared_ptr<long> endTime{};
  shared_ptr<string> hlsUrl{};
  shared_ptr<string> introduction{};
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<vector<GetLiveResponseBodyResultPlayUrlInfoList>> playUrlInfoList{};
  shared_ptr<string> playbackUrl{};
  shared_ptr<string> pushUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userDefineField{};
  shared_ptr<string> userId{};

  GetLiveResponseBodyResult() {}

  explicit GetLiveResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artcInfo) {
      res["ArtcInfo"] = artcInfo ? boost::any(artcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (codeLevel) {
      res["CodeLevel"] = boost::any(*codeLevel);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hlsUrl) {
      res["HlsUrl"] = boost::any(*hlsUrl);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (playUrlInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*playUrlInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlayUrlInfoList"] = boost::any(temp1);
    }
    if (playbackUrl) {
      res["PlaybackUrl"] = boost::any(*playbackUrl);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userDefineField) {
      res["UserDefineField"] = boost::any(*userDefineField);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtcInfo") != m.end() && !m["ArtcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtcInfo"].type()) {
        GetLiveResponseBodyResultArtcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtcInfo"]));
        artcInfo = make_shared<GetLiveResponseBodyResultArtcInfo>(model1);
      }
    }
    if (m.find("CodeLevel") != m.end() && !m["CodeLevel"].empty()) {
      codeLevel = make_shared<long>(boost::any_cast<long>(m["CodeLevel"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("HlsUrl") != m.end() && !m["HlsUrl"].empty()) {
      hlsUrl = make_shared<string>(boost::any_cast<string>(m["HlsUrl"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("PlayUrlInfoList") != m.end() && !m["PlayUrlInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PlayUrlInfoList"].type()) {
        vector<GetLiveResponseBodyResultPlayUrlInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlayUrlInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLiveResponseBodyResultPlayUrlInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playUrlInfoList = make_shared<vector<GetLiveResponseBodyResultPlayUrlInfoList>>(expect1);
      }
    }
    if (m.find("PlaybackUrl") != m.end() && !m["PlaybackUrl"].empty()) {
      playbackUrl = make_shared<string>(boost::any_cast<string>(m["PlaybackUrl"]));
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserDefineField") != m.end() && !m["UserDefineField"].empty()) {
      userDefineField = make_shared<string>(boost::any_cast<string>(m["UserDefineField"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetLiveResponseBodyResult() = default;
};
class GetLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveResponseBodyResult> result{};

  GetLiveResponseBody() {}

  explicit GetLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveResponseBody() = default;
};
class GetLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLiveResponseBody> body{};

  GetLiveResponse() {}

  explicit GetLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveResponse() = default;
};
class GetLiveDomainStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> liveDomainList{};
  shared_ptr<string> liveDomainType{};

  GetLiveDomainStatusRequest() {}

  explicit GetLiveDomainStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveDomainList) {
      res["LiveDomainList"] = boost::any(*liveDomainList);
    }
    if (liveDomainType) {
      res["LiveDomainType"] = boost::any(*liveDomainType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveDomainList") != m.end() && !m["LiveDomainList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LiveDomainList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LiveDomainList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      liveDomainList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LiveDomainType") != m.end() && !m["LiveDomainType"].empty()) {
      liveDomainType = make_shared<string>(boost::any_cast<string>(m["LiveDomainType"]));
    }
  }


  virtual ~GetLiveDomainStatusRequest() = default;
};
class GetLiveDomainStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveDomainListShrink{};
  shared_ptr<string> liveDomainType{};

  GetLiveDomainStatusShrinkRequest() {}

  explicit GetLiveDomainStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveDomainListShrink) {
      res["LiveDomainList"] = boost::any(*liveDomainListShrink);
    }
    if (liveDomainType) {
      res["LiveDomainType"] = boost::any(*liveDomainType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveDomainList") != m.end() && !m["LiveDomainList"].empty()) {
      liveDomainListShrink = make_shared<string>(boost::any_cast<string>(m["LiveDomainList"]));
    }
    if (m.find("LiveDomainType") != m.end() && !m["LiveDomainType"].empty()) {
      liveDomainType = make_shared<string>(boost::any_cast<string>(m["LiveDomainType"]));
    }
  }


  virtual ~GetLiveDomainStatusShrinkRequest() = default;
};
class GetLiveDomainStatusResponseBodyResultLiveDomainInfoList : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<string> domain{};
  shared_ptr<string> status{};

  GetLiveDomainStatusResponseBodyResultLiveDomainInfoList() {}

  explicit GetLiveDomainStatusResponseBodyResultLiveDomainInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetLiveDomainStatusResponseBodyResultLiveDomainInfoList() = default;
};
class GetLiveDomainStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetLiveDomainStatusResponseBodyResultLiveDomainInfoList>> liveDomainInfoList{};

  GetLiveDomainStatusResponseBodyResult() {}

  explicit GetLiveDomainStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveDomainInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*liveDomainInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveDomainInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveDomainInfoList") != m.end() && !m["LiveDomainInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveDomainInfoList"].type()) {
        vector<GetLiveDomainStatusResponseBodyResultLiveDomainInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveDomainInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLiveDomainStatusResponseBodyResultLiveDomainInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveDomainInfoList = make_shared<vector<GetLiveDomainStatusResponseBodyResultLiveDomainInfoList>>(expect1);
      }
    }
  }


  virtual ~GetLiveDomainStatusResponseBodyResult() = default;
};
class GetLiveDomainStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveDomainStatusResponseBodyResult> result{};

  GetLiveDomainStatusResponseBody() {}

  explicit GetLiveDomainStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveDomainStatusResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveDomainStatusResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveDomainStatusResponseBody() = default;
};
class GetLiveDomainStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLiveDomainStatusResponseBody> body{};

  GetLiveDomainStatusResponse() {}

  explicit GetLiveDomainStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveDomainStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveDomainStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveDomainStatusResponse() = default;
};
class GetLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};

  GetLiveRoomRequest() {}

  explicit GetLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~GetLiveRoomRequest() = default;
};
class GetLiveRoomResponseBodyResultArtcInfo : public Darabonba::Model {
public:
  shared_ptr<string> artcH5Url{};
  shared_ptr<string> artcUrl{};

  GetLiveRoomResponseBodyResultArtcInfo() {}

  explicit GetLiveRoomResponseBodyResultArtcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artcH5Url) {
      res["ArtcH5Url"] = boost::any(*artcH5Url);
    }
    if (artcUrl) {
      res["ArtcUrl"] = boost::any(*artcUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtcH5Url") != m.end() && !m["ArtcH5Url"].empty()) {
      artcH5Url = make_shared<string>(boost::any_cast<string>(m["ArtcH5Url"]));
    }
    if (m.find("ArtcUrl") != m.end() && !m["ArtcUrl"].empty()) {
      artcUrl = make_shared<string>(boost::any_cast<string>(m["ArtcUrl"]));
    }
  }


  virtual ~GetLiveRoomResponseBodyResultArtcInfo() = default;
};
class GetLiveRoomResponseBodyResultPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginType{};

  GetLiveRoomResponseBodyResultPluginInstanceInfoList() {}

  explicit GetLiveRoomResponseBodyResultPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
  }


  virtual ~GetLiveRoomResponseBodyResultPluginInstanceInfoList() = default;
};
class GetLiveRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<GetLiveRoomResponseBodyResultArtcInfo> artcInfo{};
  shared_ptr<string> chatId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> createTime{};
  shared_ptr<long> endTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> hlsUrl{};
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<string> playbackUrl{};
  shared_ptr<vector<GetLiveRoomResponseBodyResultPluginInstanceInfoList>> pluginInstanceInfoList{};
  shared_ptr<string> pushUrl{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  GetLiveRoomResponseBodyResult() {}

  explicit GetLiveRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artcInfo) {
      res["ArtcInfo"] = artcInfo ? boost::any(artcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (hlsUrl) {
      res["HlsUrl"] = boost::any(*hlsUrl);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (playbackUrl) {
      res["PlaybackUrl"] = boost::any(*playbackUrl);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtcInfo") != m.end() && !m["ArtcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtcInfo"].type()) {
        GetLiveRoomResponseBodyResultArtcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtcInfo"]));
        artcInfo = make_shared<GetLiveRoomResponseBodyResultArtcInfo>(model1);
      }
    }
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("HlsUrl") != m.end() && !m["HlsUrl"].empty()) {
      hlsUrl = make_shared<string>(boost::any_cast<string>(m["HlsUrl"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("PlaybackUrl") != m.end() && !m["PlaybackUrl"].empty()) {
      playbackUrl = make_shared<string>(boost::any_cast<string>(m["PlaybackUrl"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<GetLiveRoomResponseBodyResultPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLiveRoomResponseBodyResultPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<GetLiveRoomResponseBodyResultPluginInstanceInfoList>>(expect1);
      }
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~GetLiveRoomResponseBodyResult() = default;
};
class GetLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveRoomResponseBodyResult> result{};

  GetLiveRoomResponseBody() {}

  explicit GetLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveRoomResponseBody() = default;
};
class GetLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLiveRoomResponseBody> body{};

  GetLiveRoomResponse() {}

  explicit GetLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveRoomResponse() = default;
};
class GetLiveRoomStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};

  GetLiveRoomStatisticsRequest() {}

  explicit GetLiveRoomStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~GetLiveRoomStatisticsRequest() = default;
};
class GetLiveRoomStatisticsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> liveId{};
  shared_ptr<long> messageCount{};
  shared_ptr<long> pv{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<long> uv{};
  shared_ptr<long> watchLiveTime{};

  GetLiveRoomStatisticsResponseBodyResult() {}

  explicit GetLiveRoomStatisticsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (messageCount) {
      res["MessageCount"] = boost::any(*messageCount);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    if (watchLiveTime) {
      res["WatchLiveTime"] = boost::any(*watchLiveTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("MessageCount") != m.end() && !m["MessageCount"].empty()) {
      messageCount = make_shared<long>(boost::any_cast<long>(m["MessageCount"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
    if (m.find("WatchLiveTime") != m.end() && !m["WatchLiveTime"].empty()) {
      watchLiveTime = make_shared<long>(boost::any_cast<long>(m["WatchLiveTime"]));
    }
  }


  virtual ~GetLiveRoomStatisticsResponseBodyResult() = default;
};
class GetLiveRoomStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveRoomStatisticsResponseBodyResult> result{};

  GetLiveRoomStatisticsResponseBody() {}

  explicit GetLiveRoomStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveRoomStatisticsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveRoomStatisticsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveRoomStatisticsResponseBody() = default;
};
class GetLiveRoomStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLiveRoomStatisticsResponseBody> body{};

  GetLiveRoomStatisticsResponse() {}

  explicit GetLiveRoomStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveRoomStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveRoomStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveRoomStatisticsResponse() = default;
};
class GetLiveRoomUserStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  GetLiveRoomUserStatisticsRequest() {}

  explicit GetLiveRoomUserStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~GetLiveRoomUserStatisticsRequest() = default;
};
class GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<long> watchLiveTime{};

  GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList() {}

  explicit GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (watchLiveTime) {
      res["WatchLiveTime"] = boost::any(*watchLiveTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WatchLiveTime") != m.end() && !m["WatchLiveTime"].empty()) {
      watchLiveTime = make_shared<long>(boost::any_cast<long>(m["WatchLiveTime"]));
    }
  }


  virtual ~GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList() = default;
};
class GetLiveRoomUserStatisticsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<string> liveId{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList>> userStatisticsList{};

  GetLiveRoomUserStatisticsResponseBodyResult() {}

  explicit GetLiveRoomUserStatisticsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userStatisticsList) {
      vector<boost::any> temp1;
      for(auto item1:*userStatisticsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserStatisticsList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserStatisticsList") != m.end() && !m["UserStatisticsList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserStatisticsList"].type()) {
        vector<GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserStatisticsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userStatisticsList = make_shared<vector<GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList>>(expect1);
      }
    }
  }


  virtual ~GetLiveRoomUserStatisticsResponseBodyResult() = default;
};
class GetLiveRoomUserStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveRoomUserStatisticsResponseBodyResult> result{};

  GetLiveRoomUserStatisticsResponseBody() {}

  explicit GetLiveRoomUserStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveRoomUserStatisticsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveRoomUserStatisticsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveRoomUserStatisticsResponseBody() = default;
};
class GetLiveRoomUserStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLiveRoomUserStatisticsResponseBody> body{};

  GetLiveRoomUserStatisticsResponse() {}

  explicit GetLiveRoomUserStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveRoomUserStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveRoomUserStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveRoomUserStatisticsResponse() = default;
};
class GetRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};

  GetRoomRequest() {}

  explicit GetRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~GetRoomRequest() = default;
};
class GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginType{};

  GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList() {}

  explicit GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
  }


  virtual ~GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList() = default;
};
class GetRoomResponseBodyResultRoomInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<vector<GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList>> pluginInstanceInfoList{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  GetRoomResponseBodyResultRoomInfo() {}

  explicit GetRoomResponseBodyResultRoomInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList>>(expect1);
      }
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~GetRoomResponseBodyResultRoomInfo() = default;
};
class GetRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetRoomResponseBodyResultRoomInfo> roomInfo{};

  GetRoomResponseBodyResult() {}

  explicit GetRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomInfo) {
      res["RoomInfo"] = roomInfo ? boost::any(roomInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomInfo") != m.end() && !m["RoomInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoomInfo"].type()) {
        GetRoomResponseBodyResultRoomInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoomInfo"]));
        roomInfo = make_shared<GetRoomResponseBodyResultRoomInfo>(model1);
      }
    }
  }


  virtual ~GetRoomResponseBodyResult() = default;
};
class GetRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRoomResponseBodyResult> result{};

  GetRoomResponseBody() {}

  explicit GetRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetRoomResponseBody() = default;
};
class GetRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRoomResponseBody> body{};

  GetRoomResponse() {}

  explicit GetRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoomResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoomResponse() = default;
};
class GetStandardRoomHttpsCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  GetStandardRoomHttpsCertificateRequest() {}

  explicit GetStandardRoomHttpsCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~GetStandardRoomHttpsCertificateRequest() = default;
};
class GetStandardRoomHttpsCertificateResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> certificateName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> expireTime{};

  GetStandardRoomHttpsCertificateResponseBodyResult() {}

  explicit GetStandardRoomHttpsCertificateResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
  }


  virtual ~GetStandardRoomHttpsCertificateResponseBodyResult() = default;
};
class GetStandardRoomHttpsCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetStandardRoomHttpsCertificateResponseBodyResult> result{};

  GetStandardRoomHttpsCertificateResponseBody() {}

  explicit GetStandardRoomHttpsCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetStandardRoomHttpsCertificateResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetStandardRoomHttpsCertificateResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetStandardRoomHttpsCertificateResponseBody() = default;
};
class GetStandardRoomHttpsCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStandardRoomHttpsCertificateResponseBody> body{};

  GetStandardRoomHttpsCertificateResponse() {}

  explicit GetStandardRoomHttpsCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStandardRoomHttpsCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStandardRoomHttpsCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~GetStandardRoomHttpsCertificateResponse() = default;
};
class GetStandardRoomJumpUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appKey{};
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> platform{};
  shared_ptr<string> userId{};
  shared_ptr<string> userNick{};

  GetStandardRoomJumpUrlRequest() {}

  explicit GetStandardRoomJumpUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
  }


  virtual ~GetStandardRoomJumpUrlRequest() = default;
};
class GetStandardRoomJumpUrlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> standardRoomJumpUrl{};

  GetStandardRoomJumpUrlResponseBodyResult() {}

  explicit GetStandardRoomJumpUrlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (standardRoomJumpUrl) {
      res["StandardRoomJumpUrl"] = boost::any(*standardRoomJumpUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StandardRoomJumpUrl") != m.end() && !m["StandardRoomJumpUrl"].empty()) {
      standardRoomJumpUrl = make_shared<string>(boost::any_cast<string>(m["StandardRoomJumpUrl"]));
    }
  }


  virtual ~GetStandardRoomJumpUrlResponseBodyResult() = default;
};
class GetStandardRoomJumpUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetStandardRoomJumpUrlResponseBodyResult> result{};

  GetStandardRoomJumpUrlResponseBody() {}

  explicit GetStandardRoomJumpUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetStandardRoomJumpUrlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetStandardRoomJumpUrlResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetStandardRoomJumpUrlResponseBody() = default;
};
class GetStandardRoomJumpUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStandardRoomJumpUrlResponseBody> body{};

  GetStandardRoomJumpUrlResponse() {}

  explicit GetStandardRoomJumpUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStandardRoomJumpUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStandardRoomJumpUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetStandardRoomJumpUrlResponse() = default;
};
class ListAppTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListAppTemplatesRequest() {}

  explicit ListAppTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListAppTemplatesRequest() = default;
};
class ListAppTemplatesResponseBodyResultAppTemplateInfoListConfigList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAppTemplatesResponseBodyResultAppTemplateInfoListConfigList() {}

  explicit ListAppTemplatesResponseBodyResultAppTemplateInfoListConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAppTemplatesResponseBodyResultAppTemplateInfoListConfigList() = default;
};
class ListAppTemplatesResponseBodyResultAppTemplateInfoList : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateCreator{};
  shared_ptr<string> appTemplateId{};
  shared_ptr<string> appTemplateName{};
  shared_ptr<vector<string>> componentList{};
  shared_ptr<vector<ListAppTemplatesResponseBodyResultAppTemplateInfoListConfigList>> configList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> integrationMode{};
  shared_ptr<string> scene{};
  shared_ptr<string> sdkInfo{};
  shared_ptr<string> standardRoomInfo{};
  shared_ptr<string> status{};

  ListAppTemplatesResponseBodyResultAppTemplateInfoList() {}

  explicit ListAppTemplatesResponseBodyResultAppTemplateInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateCreator) {
      res["AppTemplateCreator"] = boost::any(*appTemplateCreator);
    }
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    if (appTemplateName) {
      res["AppTemplateName"] = boost::any(*appTemplateName);
    }
    if (componentList) {
      res["ComponentList"] = boost::any(*componentList);
    }
    if (configList) {
      vector<boost::any> temp1;
      for(auto item1:*configList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigList"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (integrationMode) {
      res["IntegrationMode"] = boost::any(*integrationMode);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sdkInfo) {
      res["SdkInfo"] = boost::any(*sdkInfo);
    }
    if (standardRoomInfo) {
      res["StandardRoomInfo"] = boost::any(*standardRoomInfo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateCreator") != m.end() && !m["AppTemplateCreator"].empty()) {
      appTemplateCreator = make_shared<string>(boost::any_cast<string>(m["AppTemplateCreator"]));
    }
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
    if (m.find("AppTemplateName") != m.end() && !m["AppTemplateName"].empty()) {
      appTemplateName = make_shared<string>(boost::any_cast<string>(m["AppTemplateName"]));
    }
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComponentList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComponentList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      componentList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigList"].type()) {
        vector<ListAppTemplatesResponseBodyResultAppTemplateInfoListConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppTemplatesResponseBodyResultAppTemplateInfoListConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configList = make_shared<vector<ListAppTemplatesResponseBodyResultAppTemplateInfoListConfigList>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IntegrationMode") != m.end() && !m["IntegrationMode"].empty()) {
      integrationMode = make_shared<string>(boost::any_cast<string>(m["IntegrationMode"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SdkInfo") != m.end() && !m["SdkInfo"].empty()) {
      sdkInfo = make_shared<string>(boost::any_cast<string>(m["SdkInfo"]));
    }
    if (m.find("StandardRoomInfo") != m.end() && !m["StandardRoomInfo"].empty()) {
      standardRoomInfo = make_shared<string>(boost::any_cast<string>(m["StandardRoomInfo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAppTemplatesResponseBodyResultAppTemplateInfoList() = default;
};
class ListAppTemplatesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppTemplatesResponseBodyResultAppTemplateInfoList>> appTemplateInfoList{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListAppTemplatesResponseBodyResult() {}

  explicit ListAppTemplatesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*appTemplateInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppTemplateInfoList"] = boost::any(temp1);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateInfoList") != m.end() && !m["AppTemplateInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AppTemplateInfoList"].type()) {
        vector<ListAppTemplatesResponseBodyResultAppTemplateInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppTemplateInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppTemplatesResponseBodyResultAppTemplateInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appTemplateInfoList = make_shared<vector<ListAppTemplatesResponseBodyResultAppTemplateInfoList>>(expect1);
      }
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAppTemplatesResponseBodyResult() = default;
};
class ListAppTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListAppTemplatesResponseBodyResult> result{};

  ListAppTemplatesResponseBody() {}

  explicit ListAppTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListAppTemplatesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListAppTemplatesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListAppTemplatesResponseBody() = default;
};
class ListAppTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAppTemplatesResponseBody> body{};

  ListAppTemplatesResponse() {}

  explicit ListAppTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppTemplatesResponse() = default;
};
class ListApplyLinkMicUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListApplyLinkMicUsersRequest() {}

  explicit ListApplyLinkMicUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
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
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListApplyLinkMicUsersRequest() = default;
};
class ListApplyLinkMicUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applyLinkMicUserList{};
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListApplyLinkMicUsersResponseBodyResult() {}

  explicit ListApplyLinkMicUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyLinkMicUserList) {
      res["ApplyLinkMicUserList"] = boost::any(*applyLinkMicUserList);
    }
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyLinkMicUserList") != m.end() && !m["ApplyLinkMicUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplyLinkMicUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplyLinkMicUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applyLinkMicUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListApplyLinkMicUsersResponseBodyResult() = default;
};
class ListApplyLinkMicUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListApplyLinkMicUsersResponseBodyResult> result{};

  ListApplyLinkMicUsersResponseBody() {}

  explicit ListApplyLinkMicUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListApplyLinkMicUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListApplyLinkMicUsersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListApplyLinkMicUsersResponseBody() = default;
};
class ListApplyLinkMicUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListApplyLinkMicUsersResponseBody> body{};

  ListApplyLinkMicUsersResponse() {}

  explicit ListApplyLinkMicUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplyLinkMicUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplyLinkMicUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplyLinkMicUsersResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> integrationMode{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationMode) {
      res["IntegrationMode"] = boost::any(*integrationMode);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("IntegrationMode") != m.end() && !m["IntegrationMode"].empty()) {
      integrationMode = make_shared<string>(boost::any_cast<string>(m["IntegrationMode"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponseBodyResultAppInfoList : public Darabonba::Model {
public:
  shared_ptr<string> appConfigStatus{};
  shared_ptr<string> appId{};
  shared_ptr<string> appKey{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appTemplateId{};
  shared_ptr<string> appTemplateName{};
  shared_ptr<vector<string>> componentList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> integrationMode{};
  shared_ptr<string> standardRoomInfo{};

  ListAppsResponseBodyResultAppInfoList() {}

  explicit ListAppsResponseBodyResultAppInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appConfigStatus) {
      res["AppConfigStatus"] = boost::any(*appConfigStatus);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    if (appTemplateName) {
      res["AppTemplateName"] = boost::any(*appTemplateName);
    }
    if (componentList) {
      res["ComponentList"] = boost::any(*componentList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (integrationMode) {
      res["IntegrationMode"] = boost::any(*integrationMode);
    }
    if (standardRoomInfo) {
      res["StandardRoomInfo"] = boost::any(*standardRoomInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppConfigStatus") != m.end() && !m["AppConfigStatus"].empty()) {
      appConfigStatus = make_shared<string>(boost::any_cast<string>(m["AppConfigStatus"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
    if (m.find("AppTemplateName") != m.end() && !m["AppTemplateName"].empty()) {
      appTemplateName = make_shared<string>(boost::any_cast<string>(m["AppTemplateName"]));
    }
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComponentList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComponentList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      componentList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IntegrationMode") != m.end() && !m["IntegrationMode"].empty()) {
      integrationMode = make_shared<string>(boost::any_cast<string>(m["IntegrationMode"]));
    }
    if (m.find("StandardRoomInfo") != m.end() && !m["StandardRoomInfo"].empty()) {
      standardRoomInfo = make_shared<string>(boost::any_cast<string>(m["StandardRoomInfo"]));
    }
  }


  virtual ~ListAppsResponseBodyResultAppInfoList() = default;
};
class ListAppsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppsResponseBodyResultAppInfoList>> appInfoList{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListAppsResponseBodyResult() {}

  explicit ListAppsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*appInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfoList"] = boost::any(temp1);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfoList") != m.end() && !m["AppInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfoList"].type()) {
        vector<ListAppsResponseBodyResultAppInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyResultAppInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfoList = make_shared<vector<ListAppsResponseBodyResultAppInfoList>>(expect1);
      }
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAppsResponseBodyResult() = default;
};
class ListAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListAppsResponseBodyResult> result{};

  ListAppsResponseBody() {}

  explicit ListAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListAppsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListAppsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListAppsResponseBody() = default;
};
class ListAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAppsResponseBody> body{};

  ListAppsResponse() {}

  explicit ListAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListCommentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> roomId{};
  shared_ptr<long> sortType{};
  shared_ptr<string> userId{};

  ListCommentsRequest() {}

  explicit ListCommentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<long>(boost::any_cast<long>(m["SortType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListCommentsRequest() = default;
};
class ListCommentsResponseBodyResultCommentVOList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commentId{};
  shared_ptr<string> content{};
  shared_ptr<long> createAt{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> roomId{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};

  ListCommentsResponseBodyResultCommentVOList() {}

  explicit ListCommentsResponseBodyResultCommentVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commentId) {
      res["CommentId"] = boost::any(*commentId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createAt) {
      res["CreateAt"] = boost::any(*createAt);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommentId") != m.end() && !m["CommentId"].empty()) {
      commentId = make_shared<string>(boost::any_cast<string>(m["CommentId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateAt") != m.end() && !m["CreateAt"].empty()) {
      createAt = make_shared<long>(boost::any_cast<long>(m["CreateAt"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
  }


  virtual ~ListCommentsResponseBodyResultCommentVOList() = default;
};
class ListCommentsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListCommentsResponseBodyResultCommentVOList>> commentVOList{};
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListCommentsResponseBodyResult() {}

  explicit ListCommentsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commentVOList) {
      vector<boost::any> temp1;
      for(auto item1:*commentVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommentVOList"] = boost::any(temp1);
    }
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommentVOList") != m.end() && !m["CommentVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["CommentVOList"].type()) {
        vector<ListCommentsResponseBodyResultCommentVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommentVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommentsResponseBodyResultCommentVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commentVOList = make_shared<vector<ListCommentsResponseBodyResultCommentVOList>>(expect1);
      }
    }
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCommentsResponseBodyResult() = default;
};
class ListCommentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListCommentsResponseBodyResult> result{};

  ListCommentsResponseBody() {}

  explicit ListCommentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListCommentsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListCommentsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListCommentsResponseBody() = default;
};
class ListCommentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCommentsResponseBody> body{};

  ListCommentsResponse() {}

  explicit ListCommentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCommentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommentsResponse() = default;
};
class ListComponentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appTemplateId{};

  ListComponentsRequest() {}

  explicit ListComponentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
  }


  virtual ~ListComponentsRequest() = default;
};
class ListComponentsResponseBodyResultComponentCategoryList : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> componentType{};
  shared_ptr<string> inUse{};

  ListComponentsResponseBodyResultComponentCategoryList() {}

  explicit ListComponentsResponseBodyResultComponentCategoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (componentType) {
      res["ComponentType"] = boost::any(*componentType);
    }
    if (inUse) {
      res["InUse"] = boost::any(*inUse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("ComponentType") != m.end() && !m["ComponentType"].empty()) {
      componentType = make_shared<string>(boost::any_cast<string>(m["ComponentType"]));
    }
    if (m.find("InUse") != m.end() && !m["InUse"].empty()) {
      inUse = make_shared<string>(boost::any_cast<string>(m["InUse"]));
    }
  }


  virtual ~ListComponentsResponseBodyResultComponentCategoryList() = default;
};
class ListComponentsResponseBodyResultComponentCategory : public Darabonba::Model {
public:
  shared_ptr<vector<ListComponentsResponseBodyResultComponentCategoryList>> list{};
  shared_ptr<string> type{};

  ListComponentsResponseBodyResultComponentCategory() {}

  explicit ListComponentsResponseBodyResultComponentCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListComponentsResponseBodyResultComponentCategoryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentsResponseBodyResultComponentCategoryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListComponentsResponseBodyResultComponentCategoryList>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListComponentsResponseBodyResultComponentCategory() = default;
};
class ListComponentsResponseBodyResultConfigGroup : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListComponentsResponseBodyResultConfigGroup() {}

  explicit ListComponentsResponseBodyResultConfigGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
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
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListComponentsResponseBodyResultConfigGroup() = default;
};
class ListComponentsResponseBodyResultSceneListComponentCategoryList : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> componentType{};
  shared_ptr<string> inUse{};

  ListComponentsResponseBodyResultSceneListComponentCategoryList() {}

  explicit ListComponentsResponseBodyResultSceneListComponentCategoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (componentType) {
      res["ComponentType"] = boost::any(*componentType);
    }
    if (inUse) {
      res["InUse"] = boost::any(*inUse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("ComponentType") != m.end() && !m["ComponentType"].empty()) {
      componentType = make_shared<string>(boost::any_cast<string>(m["ComponentType"]));
    }
    if (m.find("InUse") != m.end() && !m["InUse"].empty()) {
      inUse = make_shared<string>(boost::any_cast<string>(m["InUse"]));
    }
  }


  virtual ~ListComponentsResponseBodyResultSceneListComponentCategoryList() = default;
};
class ListComponentsResponseBodyResultSceneListComponentCategory : public Darabonba::Model {
public:
  shared_ptr<vector<ListComponentsResponseBodyResultSceneListComponentCategoryList>> list{};
  shared_ptr<string> type{};

  ListComponentsResponseBodyResultSceneListComponentCategory() {}

  explicit ListComponentsResponseBodyResultSceneListComponentCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListComponentsResponseBodyResultSceneListComponentCategoryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentsResponseBodyResultSceneListComponentCategoryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListComponentsResponseBodyResultSceneListComponentCategoryList>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListComponentsResponseBodyResultSceneListComponentCategory() = default;
};
class ListComponentsResponseBodyResultSceneList : public Darabonba::Model {
public:
  shared_ptr<vector<ListComponentsResponseBodyResultSceneListComponentCategory>> componentCategory{};
  shared_ptr<string> scene{};

  ListComponentsResponseBodyResultSceneList() {}

  explicit ListComponentsResponseBodyResultSceneList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCategory) {
      vector<boost::any> temp1;
      for(auto item1:*componentCategory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentCategory"] = boost::any(temp1);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentCategory") != m.end() && !m["ComponentCategory"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentCategory"].type()) {
        vector<ListComponentsResponseBodyResultSceneListComponentCategory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentCategory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentsResponseBodyResultSceneListComponentCategory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentCategory = make_shared<vector<ListComponentsResponseBodyResultSceneListComponentCategory>>(expect1);
      }
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~ListComponentsResponseBodyResultSceneList() = default;
};
class ListComponentsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListComponentsResponseBodyResultComponentCategory>> componentCategory{};
  shared_ptr<vector<ListComponentsResponseBodyResultConfigGroup>> configGroup{};
  shared_ptr<vector<ListComponentsResponseBodyResultSceneList>> sceneList{};

  ListComponentsResponseBodyResult() {}

  explicit ListComponentsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCategory) {
      vector<boost::any> temp1;
      for(auto item1:*componentCategory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentCategory"] = boost::any(temp1);
    }
    if (configGroup) {
      vector<boost::any> temp1;
      for(auto item1:*configGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigGroup"] = boost::any(temp1);
    }
    if (sceneList) {
      vector<boost::any> temp1;
      for(auto item1:*sceneList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SceneList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentCategory") != m.end() && !m["ComponentCategory"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentCategory"].type()) {
        vector<ListComponentsResponseBodyResultComponentCategory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentCategory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentsResponseBodyResultComponentCategory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentCategory = make_shared<vector<ListComponentsResponseBodyResultComponentCategory>>(expect1);
      }
    }
    if (m.find("ConfigGroup") != m.end() && !m["ConfigGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigGroup"].type()) {
        vector<ListComponentsResponseBodyResultConfigGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentsResponseBodyResultConfigGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configGroup = make_shared<vector<ListComponentsResponseBodyResultConfigGroup>>(expect1);
      }
    }
    if (m.find("SceneList") != m.end() && !m["SceneList"].empty()) {
      if (typeid(vector<boost::any>) == m["SceneList"].type()) {
        vector<ListComponentsResponseBodyResultSceneList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SceneList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentsResponseBodyResultSceneList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sceneList = make_shared<vector<ListComponentsResponseBodyResultSceneList>>(expect1);
      }
    }
  }


  virtual ~ListComponentsResponseBodyResult() = default;
};
class ListComponentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListComponentsResponseBodyResult> result{};

  ListComponentsResponseBody() {}

  explicit ListComponentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListComponentsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListComponentsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListComponentsResponseBody() = default;
};
class ListComponentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListComponentsResponseBody> body{};

  ListComponentsResponse() {}

  explicit ListComponentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListComponentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListComponentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListComponentsResponse() = default;
};
class ListConferenceUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListConferenceUsersRequest() {}

  explicit ListConferenceUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
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
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListConferenceUsersRequest() = default;
};
class ListConferenceUsersResponseBodyResultConferenceUserList : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> userId{};

  ListConferenceUsersResponseBodyResultConferenceUserList() {}

  explicit ListConferenceUsersResponseBodyResultConferenceUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListConferenceUsersResponseBodyResultConferenceUserList() = default;
};
class ListConferenceUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListConferenceUsersResponseBodyResultConferenceUserList>> conferenceUserList{};
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListConferenceUsersResponseBodyResult() {}

  explicit ListConferenceUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceUserList) {
      vector<boost::any> temp1;
      for(auto item1:*conferenceUserList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConferenceUserList"] = boost::any(temp1);
    }
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceUserList") != m.end() && !m["ConferenceUserList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConferenceUserList"].type()) {
        vector<ListConferenceUsersResponseBodyResultConferenceUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConferenceUserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConferenceUsersResponseBodyResultConferenceUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conferenceUserList = make_shared<vector<ListConferenceUsersResponseBodyResultConferenceUserList>>(expect1);
      }
    }
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListConferenceUsersResponseBodyResult() = default;
};
class ListConferenceUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListConferenceUsersResponseBodyResult> result{};

  ListConferenceUsersResponseBody() {}

  explicit ListConferenceUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListConferenceUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListConferenceUsersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListConferenceUsersResponseBody() = default;
};
class ListConferenceUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConferenceUsersResponseBody> body{};

  ListConferenceUsersResponse() {}

  explicit ListConferenceUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConferenceUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConferenceUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListConferenceUsersResponse() = default;
};
class ListLiveRoomsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};

  ListLiveRoomsRequest() {}

  explicit ListLiveRoomsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListLiveRoomsRequest() = default;
};
class ListLiveRoomsResponseBodyResultLiveList : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> chatId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  ListLiveRoomsResponseBodyResultLiveList() {}

  explicit ListLiveRoomsResponseBodyResultLiveList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~ListLiveRoomsResponseBodyResultLiveList() = default;
};
class ListLiveRoomsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<vector<ListLiveRoomsResponseBodyResultLiveList>> liveList{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListLiveRoomsResponseBodyResult() {}

  explicit ListLiveRoomsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (liveList) {
      vector<boost::any> temp1;
      for(auto item1:*liveList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveList"] = boost::any(temp1);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("LiveList") != m.end() && !m["LiveList"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveList"].type()) {
        vector<ListLiveRoomsResponseBodyResultLiveList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLiveRoomsResponseBodyResultLiveList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveList = make_shared<vector<ListLiveRoomsResponseBodyResultLiveList>>(expect1);
      }
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListLiveRoomsResponseBodyResult() = default;
};
class ListLiveRoomsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListLiveRoomsResponseBodyResult> result{};

  ListLiveRoomsResponseBody() {}

  explicit ListLiveRoomsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListLiveRoomsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListLiveRoomsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListLiveRoomsResponseBody() = default;
};
class ListLiveRoomsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListLiveRoomsResponseBody> body{};

  ListLiveRoomsResponse() {}

  explicit ListLiveRoomsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLiveRoomsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLiveRoomsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLiveRoomsResponse() = default;
};
class ListLiveRoomsByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> liveIdList{};

  ListLiveRoomsByIdRequest() {}

  explicit ListLiveRoomsByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveIdList) {
      res["LiveIdList"] = boost::any(*liveIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveIdList") != m.end() && !m["LiveIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LiveIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LiveIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      liveIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLiveRoomsByIdRequest() = default;
};
class ListLiveRoomsByIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveIdListShrink{};

  ListLiveRoomsByIdShrinkRequest() {}

  explicit ListLiveRoomsByIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveIdListShrink) {
      res["LiveIdList"] = boost::any(*liveIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveIdList") != m.end() && !m["LiveIdList"].empty()) {
      liveIdListShrink = make_shared<string>(boost::any_cast<string>(m["LiveIdList"]));
    }
  }


  virtual ~ListLiveRoomsByIdShrinkRequest() = default;
};
class ListLiveRoomsByIdResponseBodyResultLiveList : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> chatId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  ListLiveRoomsByIdResponseBodyResultLiveList() {}

  explicit ListLiveRoomsByIdResponseBodyResultLiveList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~ListLiveRoomsByIdResponseBodyResultLiveList() = default;
};
class ListLiveRoomsByIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListLiveRoomsByIdResponseBodyResultLiveList>> liveList{};

  ListLiveRoomsByIdResponseBodyResult() {}

  explicit ListLiveRoomsByIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveList) {
      vector<boost::any> temp1;
      for(auto item1:*liveList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveList") != m.end() && !m["LiveList"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveList"].type()) {
        vector<ListLiveRoomsByIdResponseBodyResultLiveList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLiveRoomsByIdResponseBodyResultLiveList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveList = make_shared<vector<ListLiveRoomsByIdResponseBodyResultLiveList>>(expect1);
      }
    }
  }


  virtual ~ListLiveRoomsByIdResponseBodyResult() = default;
};
class ListLiveRoomsByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListLiveRoomsByIdResponseBodyResult> result{};

  ListLiveRoomsByIdResponseBody() {}

  explicit ListLiveRoomsByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListLiveRoomsByIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListLiveRoomsByIdResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListLiveRoomsByIdResponseBody() = default;
};
class ListLiveRoomsByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListLiveRoomsByIdResponseBody> body{};

  ListLiveRoomsByIdResponse() {}

  explicit ListLiveRoomsByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLiveRoomsByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLiveRoomsByIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListLiveRoomsByIdResponse() = default;
};
class ListRoomLivesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> queryTimestamp{};
  shared_ptr<string> roomId{};
  shared_ptr<vector<string>> roomIdList{};
  shared_ptr<long> size{};
  shared_ptr<long> status{};

  ListRoomLivesRequest() {}

  explicit ListRoomLivesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (queryTimestamp) {
      res["QueryTimestamp"] = boost::any(*queryTimestamp);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomIdList) {
      res["RoomIdList"] = boost::any(*roomIdList);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("QueryTimestamp") != m.end() && !m["QueryTimestamp"].empty()) {
      queryTimestamp = make_shared<long>(boost::any_cast<long>(m["QueryTimestamp"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomIdList") != m.end() && !m["RoomIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RoomIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoomIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roomIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListRoomLivesRequest() = default;
};
class ListRoomLivesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> queryTimestamp{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomIdListShrink{};
  shared_ptr<long> size{};
  shared_ptr<long> status{};

  ListRoomLivesShrinkRequest() {}

  explicit ListRoomLivesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (queryTimestamp) {
      res["QueryTimestamp"] = boost::any(*queryTimestamp);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomIdListShrink) {
      res["RoomIdList"] = boost::any(*roomIdListShrink);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("QueryTimestamp") != m.end() && !m["QueryTimestamp"].empty()) {
      queryTimestamp = make_shared<long>(boost::any_cast<long>(m["QueryTimestamp"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomIdList") != m.end() && !m["RoomIdList"].empty()) {
      roomIdListShrink = make_shared<string>(boost::any_cast<string>(m["RoomIdList"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListRoomLivesShrinkRequest() = default;
};
class ListRoomLivesResponseBodyResultLiveList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  ListRoomLivesResponseBodyResultLiveList() {}

  explicit ListRoomLivesResponseBodyResultLiveList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~ListRoomLivesResponseBodyResultLiveList() = default;
};
class ListRoomLivesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<vector<ListRoomLivesResponseBodyResultLiveList>> liveList{};
  shared_ptr<long> nextQueryTimestamp{};

  ListRoomLivesResponseBodyResult() {}

  explicit ListRoomLivesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (liveList) {
      vector<boost::any> temp1;
      for(auto item1:*liveList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveList"] = boost::any(temp1);
    }
    if (nextQueryTimestamp) {
      res["NextQueryTimestamp"] = boost::any(*nextQueryTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("LiveList") != m.end() && !m["LiveList"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveList"].type()) {
        vector<ListRoomLivesResponseBodyResultLiveList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRoomLivesResponseBodyResultLiveList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveList = make_shared<vector<ListRoomLivesResponseBodyResultLiveList>>(expect1);
      }
    }
    if (m.find("NextQueryTimestamp") != m.end() && !m["NextQueryTimestamp"].empty()) {
      nextQueryTimestamp = make_shared<long>(boost::any_cast<long>(m["NextQueryTimestamp"]));
    }
  }


  virtual ~ListRoomLivesResponseBodyResult() = default;
};
class ListRoomLivesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListRoomLivesResponseBodyResult> result{};

  ListRoomLivesResponseBody() {}

  explicit ListRoomLivesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListRoomLivesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListRoomLivesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListRoomLivesResponseBody() = default;
};
class ListRoomLivesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRoomLivesResponseBody> body{};

  ListRoomLivesResponse() {}

  explicit ListRoomLivesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRoomLivesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRoomLivesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRoomLivesResponse() = default;
};
class ListRoomsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRoomsRequest() {}

  explicit ListRoomsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListRoomsRequest() = default;
};
class ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginType{};

  ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList() {}

  explicit ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
  }


  virtual ~ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList() = default;
};
class ListRoomsResponseBodyResultRoomInfoList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<vector<ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList>> pluginInstanceInfoList{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  ListRoomsResponseBodyResultRoomInfoList() {}

  explicit ListRoomsResponseBodyResultRoomInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList>>(expect1);
      }
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~ListRoomsResponseBodyResultRoomInfoList() = default;
};
class ListRoomsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<vector<ListRoomsResponseBodyResultRoomInfoList>> roomInfoList{};
  shared_ptr<long> totalCount{};

  ListRoomsResponseBodyResult() {}

  explicit ListRoomsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (roomInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*roomInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoomInfoList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("RoomInfoList") != m.end() && !m["RoomInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoomInfoList"].type()) {
        vector<ListRoomsResponseBodyResultRoomInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoomInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRoomsResponseBodyResultRoomInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roomInfoList = make_shared<vector<ListRoomsResponseBodyResultRoomInfoList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRoomsResponseBodyResult() = default;
};
class ListRoomsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListRoomsResponseBodyResult> result{};

  ListRoomsResponseBody() {}

  explicit ListRoomsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListRoomsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListRoomsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListRoomsResponseBody() = default;
};
class ListRoomsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRoomsResponseBody> body{};

  ListRoomsResponse() {}

  explicit ListRoomsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRoomsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRoomsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRoomsResponse() = default;
};
class PublishLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  PublishLiveRequest() {}

  explicit PublishLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~PublishLiveRequest() = default;
};
class PublishLiveResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> pushUrl{};
  shared_ptr<string> status{};

  PublishLiveResponseBodyResult() {}

  explicit PublishLiveResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PublishLiveResponseBodyResult() = default;
};
class PublishLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PublishLiveResponseBodyResult> result{};

  PublishLiveResponseBody() {}

  explicit PublishLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        PublishLiveResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<PublishLiveResponseBodyResult>(model1);
      }
    }
  }


  virtual ~PublishLiveResponseBody() = default;
};
class PublishLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PublishLiveResponseBody> body{};

  PublishLiveResponse() {}

  explicit PublishLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishLiveResponseBody>(model1);
      }
    }
  }


  virtual ~PublishLiveResponse() = default;
};
class PublishLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  PublishLiveRoomRequest() {}

  explicit PublishLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~PublishLiveRoomRequest() = default;
};
class PublishLiveRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> pushUrl{};

  PublishLiveRoomResponseBodyResult() {}

  explicit PublishLiveRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
  }


  virtual ~PublishLiveRoomResponseBodyResult() = default;
};
class PublishLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PublishLiveRoomResponseBodyResult> result{};

  PublishLiveRoomResponseBody() {}

  explicit PublishLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        PublishLiveRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<PublishLiveRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~PublishLiveRoomResponseBody() = default;
};
class PublishLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PublishLiveRoomResponseBody> body{};

  PublishLiveRoomResponse() {}

  explicit PublishLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~PublishLiveRoomResponse() = default;
};
class RejectLinkMicRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<string> fromUserId{};
  shared_ptr<string> toUserId{};

  RejectLinkMicRequest() {}

  explicit RejectLinkMicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (fromUserId) {
      res["FromUserId"] = boost::any(*fromUserId);
    }
    if (toUserId) {
      res["ToUserId"] = boost::any(*toUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("FromUserId") != m.end() && !m["FromUserId"].empty()) {
      fromUserId = make_shared<string>(boost::any_cast<string>(m["FromUserId"]));
    }
    if (m.find("ToUserId") != m.end() && !m["ToUserId"].empty()) {
      toUserId = make_shared<string>(boost::any_cast<string>(m["ToUserId"]));
    }
  }


  virtual ~RejectLinkMicRequest() = default;
};
class RejectLinkMicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RejectLinkMicResponseBody() {}

  explicit RejectLinkMicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RejectLinkMicResponseBody() = default;
};
class RejectLinkMicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RejectLinkMicResponseBody> body{};

  RejectLinkMicResponse() {}

  explicit RejectLinkMicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RejectLinkMicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RejectLinkMicResponseBody>(model1);
      }
    }
  }


  virtual ~RejectLinkMicResponse() = default;
};
class RemoveMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<string> fromUserId{};
  shared_ptr<string> toUserId{};

  RemoveMemberRequest() {}

  explicit RemoveMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (fromUserId) {
      res["FromUserId"] = boost::any(*fromUserId);
    }
    if (toUserId) {
      res["ToUserId"] = boost::any(*toUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("FromUserId") != m.end() && !m["FromUserId"].empty()) {
      fromUserId = make_shared<string>(boost::any_cast<string>(m["FromUserId"]));
    }
    if (m.find("ToUserId") != m.end() && !m["ToUserId"].empty()) {
      toUserId = make_shared<string>(boost::any_cast<string>(m["ToUserId"]));
    }
  }


  virtual ~RemoveMemberRequest() = default;
};
class RemoveMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveMemberResponseBody() {}

  explicit RemoveMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveMemberResponseBody() = default;
};
class RemoveMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveMemberResponseBody> body{};

  RemoveMemberResponse() {}

  explicit RemoveMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveMemberResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveMemberResponse() = default;
};
class SendCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> content{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> roomId{};
  shared_ptr<string> senderId{};

  SendCommentRequest() {}

  explicit SendCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
  }


  virtual ~SendCommentRequest() = default;
};
class SendCommentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> content{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> roomId{};
  shared_ptr<string> senderId{};

  SendCommentShrinkRequest() {}

  explicit SendCommentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
  }


  virtual ~SendCommentShrinkRequest() = default;
};
class SendCommentResponseBodyResultCommentVO : public Darabonba::Model {
public:
  shared_ptr<string> commentId{};
  shared_ptr<string> content{};
  shared_ptr<long> createAt{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};

  SendCommentResponseBodyResultCommentVO() {}

  explicit SendCommentResponseBodyResultCommentVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commentId) {
      res["CommentId"] = boost::any(*commentId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createAt) {
      res["CreateAt"] = boost::any(*createAt);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommentId") != m.end() && !m["CommentId"].empty()) {
      commentId = make_shared<string>(boost::any_cast<string>(m["CommentId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateAt") != m.end() && !m["CreateAt"].empty()) {
      createAt = make_shared<long>(boost::any_cast<long>(m["CreateAt"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
  }


  virtual ~SendCommentResponseBodyResultCommentVO() = default;
};
class SendCommentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<SendCommentResponseBodyResultCommentVO> commentVO{};

  SendCommentResponseBodyResult() {}

  explicit SendCommentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commentVO) {
      res["CommentVO"] = commentVO ? boost::any(commentVO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommentVO") != m.end() && !m["CommentVO"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommentVO"].type()) {
        SendCommentResponseBodyResultCommentVO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommentVO"]));
        commentVO = make_shared<SendCommentResponseBodyResultCommentVO>(model1);
      }
    }
  }


  virtual ~SendCommentResponseBodyResult() = default;
};
class SendCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SendCommentResponseBodyResult> result{};

  SendCommentResponseBody() {}

  explicit SendCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendCommentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendCommentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~SendCommentResponseBody() = default;
};
class SendCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendCommentResponseBody> body{};

  SendCommentResponse() {}

  explicit SendCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCommentResponseBody>(model1);
      }
    }
  }


  virtual ~SendCommentResponse() = default;
};
class SendCustomMessageToAllRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> body{};
  shared_ptr<string> roomId{};

  SendCustomMessageToAllRequest() {}

  explicit SendCustomMessageToAllRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~SendCustomMessageToAllRequest() = default;
};
class SendCustomMessageToAllResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};

  SendCustomMessageToAllResponseBodyResult() {}

  explicit SendCustomMessageToAllResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~SendCustomMessageToAllResponseBodyResult() = default;
};
class SendCustomMessageToAllResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SendCustomMessageToAllResponseBodyResult> result{};

  SendCustomMessageToAllResponseBody() {}

  explicit SendCustomMessageToAllResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendCustomMessageToAllResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendCustomMessageToAllResponseBodyResult>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToAllResponseBody() = default;
};
class SendCustomMessageToAllResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendCustomMessageToAllResponseBody> body{};

  SendCustomMessageToAllResponse() {}

  explicit SendCustomMessageToAllResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomMessageToAllResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCustomMessageToAllResponseBody>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToAllResponse() = default;
};
class SendCustomMessageToUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> body{};
  shared_ptr<vector<string>> receiverList{};
  shared_ptr<string> roomId{};

  SendCustomMessageToUsersRequest() {}

  explicit SendCustomMessageToUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (receiverList) {
      res["ReceiverList"] = boost::any(*receiverList);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("ReceiverList") != m.end() && !m["ReceiverList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReceiverList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReceiverList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receiverList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~SendCustomMessageToUsersRequest() = default;
};
class SendCustomMessageToUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};

  SendCustomMessageToUsersResponseBodyResult() {}

  explicit SendCustomMessageToUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~SendCustomMessageToUsersResponseBodyResult() = default;
};
class SendCustomMessageToUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SendCustomMessageToUsersResponseBodyResult> result{};

  SendCustomMessageToUsersResponseBody() {}

  explicit SendCustomMessageToUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendCustomMessageToUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendCustomMessageToUsersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToUsersResponseBody() = default;
};
class SendCustomMessageToUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendCustomMessageToUsersResponseBody> body{};

  SendCustomMessageToUsersResponse() {}

  explicit SendCustomMessageToUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomMessageToUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCustomMessageToUsersResponseBody>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToUsersResponse() = default;
};
class StopClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> userId{};

  StopClassRequest() {}

  explicit StopClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StopClassRequest() = default;
};
class StopClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopClassResponseBody() {}

  explicit StopClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopClassResponseBody() = default;
};
class StopClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopClassResponseBody> body{};

  StopClassResponse() {}

  explicit StopClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopClassResponseBody>(model1);
      }
    }
  }


  virtual ~StopClassResponse() = default;
};
class StopLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  StopLiveRequest() {}

  explicit StopLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StopLiveRequest() = default;
};
class StopLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopLiveResponseBody() {}

  explicit StopLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopLiveResponseBody() = default;
};
class StopLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopLiveResponseBody> body{};

  StopLiveResponse() {}

  explicit StopLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopLiveResponseBody>(model1);
      }
    }
  }


  virtual ~StopLiveResponse() = default;
};
class StopLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  StopLiveRoomRequest() {}

  explicit StopLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StopLiveRoomRequest() = default;
};
class StopLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopLiveRoomResponseBody() {}

  explicit StopLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopLiveRoomResponseBody() = default;
};
class StopLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopLiveRoomResponseBody> body{};

  StopLiveRoomResponse() {}

  explicit StopLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~StopLiveRoomResponse() = default;
};
class UpdateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};

  UpdateAppRequest() {}

  explicit UpdateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
  }


  virtual ~UpdateAppRequest() = default;
};
class UpdateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAppResponseBody() {}

  explicit UpdateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAppResponseBody() = default;
};
class UpdateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAppResponseBody> body{};

  UpdateAppResponse() {}

  explicit UpdateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppResponse() = default;
};
class UpdateAppTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateId{};
  shared_ptr<string> appTemplateName{};
  shared_ptr<vector<string>> componentList{};

  UpdateAppTemplateRequest() {}

  explicit UpdateAppTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    if (appTemplateName) {
      res["AppTemplateName"] = boost::any(*appTemplateName);
    }
    if (componentList) {
      res["ComponentList"] = boost::any(*componentList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
    if (m.find("AppTemplateName") != m.end() && !m["AppTemplateName"].empty()) {
      appTemplateName = make_shared<string>(boost::any_cast<string>(m["AppTemplateName"]));
    }
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComponentList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComponentList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      componentList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateAppTemplateRequest() = default;
};
class UpdateAppTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateId{};
  shared_ptr<string> appTemplateName{};
  shared_ptr<string> componentListShrink{};

  UpdateAppTemplateShrinkRequest() {}

  explicit UpdateAppTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    if (appTemplateName) {
      res["AppTemplateName"] = boost::any(*appTemplateName);
    }
    if (componentListShrink) {
      res["ComponentList"] = boost::any(*componentListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
    if (m.find("AppTemplateName") != m.end() && !m["AppTemplateName"].empty()) {
      appTemplateName = make_shared<string>(boost::any_cast<string>(m["AppTemplateName"]));
    }
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      componentListShrink = make_shared<string>(boost::any_cast<string>(m["ComponentList"]));
    }
  }


  virtual ~UpdateAppTemplateShrinkRequest() = default;
};
class UpdateAppTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAppTemplateResponseBody() {}

  explicit UpdateAppTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAppTemplateResponseBody() = default;
};
class UpdateAppTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAppTemplateResponseBody> body{};

  UpdateAppTemplateResponse() {}

  explicit UpdateAppTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppTemplateResponse() = default;
};
class UpdateAppTemplateConfigRequestConfigList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateAppTemplateConfigRequestConfigList() {}

  explicit UpdateAppTemplateConfigRequestConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAppTemplateConfigRequestConfigList() = default;
};
class UpdateAppTemplateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateId{};
  shared_ptr<vector<UpdateAppTemplateConfigRequestConfigList>> configList{};

  UpdateAppTemplateConfigRequest() {}

  explicit UpdateAppTemplateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    if (configList) {
      vector<boost::any> temp1;
      for(auto item1:*configList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigList"].type()) {
        vector<UpdateAppTemplateConfigRequestConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppTemplateConfigRequestConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configList = make_shared<vector<UpdateAppTemplateConfigRequestConfigList>>(expect1);
      }
    }
  }


  virtual ~UpdateAppTemplateConfigRequest() = default;
};
class UpdateAppTemplateConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appTemplateId{};
  shared_ptr<string> configListShrink{};

  UpdateAppTemplateConfigShrinkRequest() {}

  explicit UpdateAppTemplateConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    if (configListShrink) {
      res["ConfigList"] = boost::any(*configListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      configListShrink = make_shared<string>(boost::any_cast<string>(m["ConfigList"]));
    }
  }


  virtual ~UpdateAppTemplateConfigShrinkRequest() = default;
};
class UpdateAppTemplateConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAppTemplateConfigResponseBody() {}

  explicit UpdateAppTemplateConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAppTemplateConfigResponseBody() = default;
};
class UpdateAppTemplateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAppTemplateConfigResponseBody> body{};

  UpdateAppTemplateConfigResponse() {}

  explicit UpdateAppTemplateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppTemplateConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppTemplateConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppTemplateConfigResponse() = default;
};
class UpdateClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> title{};

  UpdateClassRequest() {}

  explicit UpdateClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateClassRequest() = default;
};
class UpdateClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateClassResponseBody() {}

  explicit UpdateClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateClassResponseBody() = default;
};
class UpdateClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateClassResponseBody> body{};

  UpdateClassResponse() {}

  explicit UpdateClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClassResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClassResponse() = default;
};
class UpdateConferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<string> title{};

  UpdateConferenceRequest() {}

  explicit UpdateConferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateConferenceRequest() = default;
};
class UpdateConferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateConferenceResponseBody() {}

  explicit UpdateConferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConferenceResponseBody() = default;
};
class UpdateConferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateConferenceResponseBody> body{};

  UpdateConferenceResponse() {}

  explicit UpdateConferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateConferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConferenceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConferenceResponse() = default;
};
class UpdateLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> introduction{};
  shared_ptr<string> liveId{};
  shared_ptr<string> title{};

  UpdateLiveRequest() {}

  explicit UpdateLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateLiveRequest() = default;
};
class UpdateLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLiveResponseBody() {}

  explicit UpdateLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLiveResponseBody() = default;
};
class UpdateLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateLiveResponseBody> body{};

  UpdateLiveResponse() {}

  explicit UpdateLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLiveResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLiveResponse() = default;
};
class UpdateLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  UpdateLiveRoomRequest() {}

  explicit UpdateLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateLiveRoomRequest() = default;
};
class UpdateLiveRoomShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  UpdateLiveRoomShrinkRequest() {}

  explicit UpdateLiveRoomShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateLiveRoomShrinkRequest() = default;
};
class UpdateLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLiveRoomResponseBody() {}

  explicit UpdateLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLiveRoomResponseBody() = default;
};
class UpdateLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateLiveRoomResponseBody> body{};

  UpdateLiveRoomResponse() {}

  explicit UpdateLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLiveRoomResponse() = default;
};
class UpdateRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> title{};

  UpdateRoomRequest() {}

  explicit UpdateRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateRoomRequest() = default;
};
class UpdateRoomShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> notice{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> title{};

  UpdateRoomShrinkRequest() {}

  explicit UpdateRoomShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateRoomShrinkRequest() = default;
};
class UpdateRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRoomResponseBody() {}

  explicit UpdateRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateRoomResponseBody() = default;
};
class UpdateRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRoomResponseBody> body{};

  UpdateRoomResponse() {}

  explicit UpdateRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRoomResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRoomResponse() = default;
};
class VerifyDomainOwnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveDomainName{};

  VerifyDomainOwnerRequest() {}

  explicit VerifyDomainOwnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveDomainName) {
      res["LiveDomainName"] = boost::any(*liveDomainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveDomainName") != m.end() && !m["LiveDomainName"].empty()) {
      liveDomainName = make_shared<string>(boost::any_cast<string>(m["LiveDomainName"]));
    }
  }


  virtual ~VerifyDomainOwnerRequest() = default;
};
class VerifyDomainOwnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  VerifyDomainOwnerResponseBody() {}

  explicit VerifyDomainOwnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~VerifyDomainOwnerResponseBody() = default;
};
class VerifyDomainOwnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VerifyDomainOwnerResponseBody> body{};

  VerifyDomainOwnerResponse() {}

  explicit VerifyDomainOwnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyDomainOwnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyDomainOwnerResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyDomainOwnerResponse() = default;
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
  AddMemberResponse addMemberWithOptions(shared_ptr<AddMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMemberResponse addMember(shared_ptr<AddMemberRequest> request);
  AgreeLinkMicResponse agreeLinkMicWithOptions(shared_ptr<AgreeLinkMicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AgreeLinkMicResponse agreeLinkMic(shared_ptr<AgreeLinkMicRequest> request);
  ApplyLinkMicResponse applyLinkMicWithOptions(shared_ptr<ApplyLinkMicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyLinkMicResponse applyLinkMic(shared_ptr<ApplyLinkMicRequest> request);
  AttachStandardRoomHttpsCertificateResponse attachStandardRoomHttpsCertificateWithOptions(shared_ptr<AttachStandardRoomHttpsCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachStandardRoomHttpsCertificateResponse attachStandardRoomHttpsCertificate(shared_ptr<AttachStandardRoomHttpsCertificateRequest> request);
  BanAllCommentResponse banAllCommentWithOptions(shared_ptr<BanAllCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BanAllCommentResponse banAllComment(shared_ptr<BanAllCommentRequest> request);
  BanCommentResponse banCommentWithOptions(shared_ptr<BanCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BanCommentResponse banComment(shared_ptr<BanCommentRequest> request);
  CancelApplyLinkMicResponse cancelApplyLinkMicWithOptions(shared_ptr<CancelApplyLinkMicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelApplyLinkMicResponse cancelApplyLinkMic(shared_ptr<CancelApplyLinkMicRequest> request);
  CancelBanAllCommentResponse cancelBanAllCommentWithOptions(shared_ptr<CancelBanAllCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelBanAllCommentResponse cancelBanAllComment(shared_ptr<CancelBanAllCommentRequest> request);
  CancelBanCommentResponse cancelBanCommentWithOptions(shared_ptr<CancelBanCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelBanCommentResponse cancelBanComment(shared_ptr<CancelBanCommentRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateAppTemplateResponse createAppTemplateWithOptions(shared_ptr<CreateAppTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppTemplateResponse createAppTemplate(shared_ptr<CreateAppTemplateRequest> request);
  CreateClassResponse createClassWithOptions(shared_ptr<CreateClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClassResponse createClass(shared_ptr<CreateClassRequest> request);
  CreateConferenceResponse createConferenceWithOptions(shared_ptr<CreateConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConferenceResponse createConference(shared_ptr<CreateConferenceRequest> request);
  CreateLiveResponse createLiveWithOptions(shared_ptr<CreateLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLiveResponse createLive(shared_ptr<CreateLiveRequest> request);
  CreateLiveRoomResponse createLiveRoomWithOptions(shared_ptr<CreateLiveRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLiveRoomResponse createLiveRoom(shared_ptr<CreateLiveRoomRequest> request);
  CreateRoomResponse createRoomWithOptions(shared_ptr<CreateRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoomResponse createRoom(shared_ptr<CreateRoomRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DeleteAppTemplateResponse deleteAppTemplateWithOptions(shared_ptr<DeleteAppTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppTemplateResponse deleteAppTemplate(shared_ptr<DeleteAppTemplateRequest> request);
  DeleteClassResponse deleteClassWithOptions(shared_ptr<DeleteClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClassResponse deleteClass(shared_ptr<DeleteClassRequest> request);
  DeleteCommentResponse deleteCommentWithOptions(shared_ptr<DeleteCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCommentResponse deleteComment(shared_ptr<DeleteCommentRequest> request);
  DeleteConferenceResponse deleteConferenceWithOptions(shared_ptr<DeleteConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConferenceResponse deleteConference(shared_ptr<DeleteConferenceRequest> request);
  DeleteLiveResponse deleteLiveWithOptions(shared_ptr<DeleteLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLiveResponse deleteLive(shared_ptr<DeleteLiveRequest> request);
  DeleteLiveRoomResponse deleteLiveRoomWithOptions(shared_ptr<DeleteLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLiveRoomResponse deleteLiveRoom(shared_ptr<DeleteLiveRoomRequest> request);
  DeleteRoomResponse deleteRoomWithOptions(shared_ptr<DeleteRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRoomResponse deleteRoom(shared_ptr<DeleteRoomRequest> request);
  GetAppResponse getAppWithOptions(shared_ptr<GetAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppResponse getApp(shared_ptr<GetAppRequest> request);
  GetAppTemplateResponse getAppTemplateWithOptions(shared_ptr<GetAppTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppTemplateResponse getAppTemplate(shared_ptr<GetAppTemplateRequest> request);
  GetAuthTokenResponse getAuthTokenWithOptions(shared_ptr<GetAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthTokenResponse getAuthToken(shared_ptr<GetAuthTokenRequest> request);
  GetClassDetailResponse getClassDetailWithOptions(shared_ptr<GetClassDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClassDetailResponse getClassDetail(shared_ptr<GetClassDetailRequest> request);
  GetConferenceResponse getConferenceWithOptions(shared_ptr<GetConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConferenceResponse getConference(shared_ptr<GetConferenceRequest> request);
  GetDomainOwnerVerifyContentResponse getDomainOwnerVerifyContentWithOptions(shared_ptr<GetDomainOwnerVerifyContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainOwnerVerifyContentResponse getDomainOwnerVerifyContent(shared_ptr<GetDomainOwnerVerifyContentRequest> request);
  GetImpProductStatusResponse getImpProductStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImpProductStatusResponse getImpProductStatus();
  GetLiveResponse getLiveWithOptions(shared_ptr<GetLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveResponse getLive(shared_ptr<GetLiveRequest> request);
  GetLiveDomainStatusResponse getLiveDomainStatusWithOptions(shared_ptr<GetLiveDomainStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveDomainStatusResponse getLiveDomainStatus(shared_ptr<GetLiveDomainStatusRequest> request);
  GetLiveRoomResponse getLiveRoomWithOptions(shared_ptr<GetLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveRoomResponse getLiveRoom(shared_ptr<GetLiveRoomRequest> request);
  GetLiveRoomStatisticsResponse getLiveRoomStatisticsWithOptions(shared_ptr<GetLiveRoomStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveRoomStatisticsResponse getLiveRoomStatistics(shared_ptr<GetLiveRoomStatisticsRequest> request);
  GetLiveRoomUserStatisticsResponse getLiveRoomUserStatisticsWithOptions(shared_ptr<GetLiveRoomUserStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveRoomUserStatisticsResponse getLiveRoomUserStatistics(shared_ptr<GetLiveRoomUserStatisticsRequest> request);
  GetRoomResponse getRoomWithOptions(shared_ptr<GetRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoomResponse getRoom(shared_ptr<GetRoomRequest> request);
  GetStandardRoomHttpsCertificateResponse getStandardRoomHttpsCertificateWithOptions(shared_ptr<GetStandardRoomHttpsCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStandardRoomHttpsCertificateResponse getStandardRoomHttpsCertificate(shared_ptr<GetStandardRoomHttpsCertificateRequest> request);
  GetStandardRoomJumpUrlResponse getStandardRoomJumpUrlWithOptions(shared_ptr<GetStandardRoomJumpUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStandardRoomJumpUrlResponse getStandardRoomJumpUrl(shared_ptr<GetStandardRoomJumpUrlRequest> request);
  ListAppTemplatesResponse listAppTemplatesWithOptions(shared_ptr<ListAppTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppTemplatesResponse listAppTemplates(shared_ptr<ListAppTemplatesRequest> request);
  ListApplyLinkMicUsersResponse listApplyLinkMicUsersWithOptions(shared_ptr<ListApplyLinkMicUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplyLinkMicUsersResponse listApplyLinkMicUsers(shared_ptr<ListApplyLinkMicUsersRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListCommentsResponse listCommentsWithOptions(shared_ptr<ListCommentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommentsResponse listComments(shared_ptr<ListCommentsRequest> request);
  ListComponentsResponse listComponentsWithOptions(shared_ptr<ListComponentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListComponentsResponse listComponents(shared_ptr<ListComponentsRequest> request);
  ListConferenceUsersResponse listConferenceUsersWithOptions(shared_ptr<ListConferenceUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConferenceUsersResponse listConferenceUsers(shared_ptr<ListConferenceUsersRequest> request);
  ListLiveRoomsResponse listLiveRoomsWithOptions(shared_ptr<ListLiveRoomsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLiveRoomsResponse listLiveRooms(shared_ptr<ListLiveRoomsRequest> request);
  ListLiveRoomsByIdResponse listLiveRoomsByIdWithOptions(shared_ptr<ListLiveRoomsByIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLiveRoomsByIdResponse listLiveRoomsById(shared_ptr<ListLiveRoomsByIdRequest> request);
  ListRoomLivesResponse listRoomLivesWithOptions(shared_ptr<ListRoomLivesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRoomLivesResponse listRoomLives(shared_ptr<ListRoomLivesRequest> request);
  ListRoomsResponse listRoomsWithOptions(shared_ptr<ListRoomsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRoomsResponse listRooms(shared_ptr<ListRoomsRequest> request);
  PublishLiveResponse publishLiveWithOptions(shared_ptr<PublishLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishLiveResponse publishLive(shared_ptr<PublishLiveRequest> request);
  PublishLiveRoomResponse publishLiveRoomWithOptions(shared_ptr<PublishLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishLiveRoomResponse publishLiveRoom(shared_ptr<PublishLiveRoomRequest> request);
  RejectLinkMicResponse rejectLinkMicWithOptions(shared_ptr<RejectLinkMicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RejectLinkMicResponse rejectLinkMic(shared_ptr<RejectLinkMicRequest> request);
  RemoveMemberResponse removeMemberWithOptions(shared_ptr<RemoveMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveMemberResponse removeMember(shared_ptr<RemoveMemberRequest> request);
  SendCommentResponse sendCommentWithOptions(shared_ptr<SendCommentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCommentResponse sendComment(shared_ptr<SendCommentRequest> request);
  SendCustomMessageToAllResponse sendCustomMessageToAllWithOptions(shared_ptr<SendCustomMessageToAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCustomMessageToAllResponse sendCustomMessageToAll(shared_ptr<SendCustomMessageToAllRequest> request);
  SendCustomMessageToUsersResponse sendCustomMessageToUsersWithOptions(shared_ptr<SendCustomMessageToUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCustomMessageToUsersResponse sendCustomMessageToUsers(shared_ptr<SendCustomMessageToUsersRequest> request);
  StopClassResponse stopClassWithOptions(shared_ptr<StopClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopClassResponse stopClass(shared_ptr<StopClassRequest> request);
  StopLiveResponse stopLiveWithOptions(shared_ptr<StopLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopLiveResponse stopLive(shared_ptr<StopLiveRequest> request);
  StopLiveRoomResponse stopLiveRoomWithOptions(shared_ptr<StopLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopLiveRoomResponse stopLiveRoom(shared_ptr<StopLiveRoomRequest> request);
  UpdateAppResponse updateAppWithOptions(shared_ptr<UpdateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppResponse updateApp(shared_ptr<UpdateAppRequest> request);
  UpdateAppTemplateResponse updateAppTemplateWithOptions(shared_ptr<UpdateAppTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppTemplateResponse updateAppTemplate(shared_ptr<UpdateAppTemplateRequest> request);
  UpdateAppTemplateConfigResponse updateAppTemplateConfigWithOptions(shared_ptr<UpdateAppTemplateConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppTemplateConfigResponse updateAppTemplateConfig(shared_ptr<UpdateAppTemplateConfigRequest> request);
  UpdateClassResponse updateClassWithOptions(shared_ptr<UpdateClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClassResponse updateClass(shared_ptr<UpdateClassRequest> request);
  UpdateConferenceResponse updateConferenceWithOptions(shared_ptr<UpdateConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConferenceResponse updateConference(shared_ptr<UpdateConferenceRequest> request);
  UpdateLiveResponse updateLiveWithOptions(shared_ptr<UpdateLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLiveResponse updateLive(shared_ptr<UpdateLiveRequest> request);
  UpdateLiveRoomResponse updateLiveRoomWithOptions(shared_ptr<UpdateLiveRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLiveRoomResponse updateLiveRoom(shared_ptr<UpdateLiveRoomRequest> request);
  UpdateRoomResponse updateRoomWithOptions(shared_ptr<UpdateRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRoomResponse updateRoom(shared_ptr<UpdateRoomRequest> request);
  VerifyDomainOwnerResponse verifyDomainOwnerWithOptions(shared_ptr<VerifyDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyDomainOwnerResponse verifyDomainOwner(shared_ptr<VerifyDomainOwnerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imp20210630

#endif
