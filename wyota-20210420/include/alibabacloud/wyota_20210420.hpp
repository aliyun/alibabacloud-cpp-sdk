// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WYOTA20210420_H_
#define ALIBABACLOUD_WYOTA20210420_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Wyota20210420 {
class ActivateDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> uuid{};

  ActivateDeviceRequest() {}

  explicit ActivateDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ActivateDeviceRequest() = default;
};
class ActivateDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ActivateDeviceResponseBody() {}

  explicit ActivateDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ActivateDeviceResponseBody() = default;
};
class ActivateDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActivateDeviceResponseBody> body{};

  ActivateDeviceResponse() {}

  explicit ActivateDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivateDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateDeviceResponse() = default;
};
class AddDeviceFromSNRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> customProperty{};
  shared_ptr<string> groupId{};
  shared_ptr<string> labelContents{};
  shared_ptr<string> secureNetworkType{};
  shared_ptr<string> serialNo{};

  AddDeviceFromSNRequest() {}

  explicit AddDeviceFromSNRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (customProperty) {
      res["CustomProperty"] = boost::any(*customProperty);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (labelContents) {
      res["LabelContents"] = boost::any(*labelContents);
    }
    if (secureNetworkType) {
      res["SecureNetworkType"] = boost::any(*secureNetworkType);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("CustomProperty") != m.end() && !m["CustomProperty"].empty()) {
      customProperty = make_shared<string>(boost::any_cast<string>(m["CustomProperty"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("LabelContents") != m.end() && !m["LabelContents"].empty()) {
      labelContents = make_shared<string>(boost::any_cast<string>(m["LabelContents"]));
    }
    if (m.find("SecureNetworkType") != m.end() && !m["SecureNetworkType"].empty()) {
      secureNetworkType = make_shared<string>(boost::any_cast<string>(m["SecureNetworkType"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~AddDeviceFromSNRequest() = default;
};
class AddDeviceFromSNResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddDeviceFromSNResponseBody() {}

  explicit AddDeviceFromSNResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddDeviceFromSNResponseBody() = default;
};
class AddDeviceFromSNResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDeviceFromSNResponseBody> body{};

  AddDeviceFromSNResponse() {}

  explicit AddDeviceFromSNResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDeviceFromSNResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDeviceFromSNResponseBody>(model1);
      }
    }
  }


  virtual ~AddDeviceFromSNResponse() = default;
};
class AddDeviceSeatsAndLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isUnique{};
  shared_ptr<string> label{};
  shared_ptr<vector<string>> labelList{};
  shared_ptr<string> seatName{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> zoneId{};

  AddDeviceSeatsAndLabelsRequest() {}

  explicit AddDeviceSeatsAndLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isUnique) {
      res["IsUnique"] = boost::any(*isUnique);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (labelList) {
      res["LabelList"] = boost::any(*labelList);
    }
    if (seatName) {
      res["SeatName"] = boost::any(*seatName);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsUnique") != m.end() && !m["IsUnique"].empty()) {
      isUnique = make_shared<bool>(boost::any_cast<bool>(m["IsUnique"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("LabelList") != m.end() && !m["LabelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LabelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LabelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SeatName") != m.end() && !m["SeatName"].empty()) {
      seatName = make_shared<string>(boost::any_cast<string>(m["SeatName"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~AddDeviceSeatsAndLabelsRequest() = default;
};
class AddDeviceSeatsAndLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddDeviceSeatsAndLabelsResponseBody() {}

  explicit AddDeviceSeatsAndLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddDeviceSeatsAndLabelsResponseBody() = default;
};
class AddDeviceSeatsAndLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDeviceSeatsAndLabelsResponseBody> body{};

  AddDeviceSeatsAndLabelsResponse() {}

  explicit AddDeviceSeatsAndLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDeviceSeatsAndLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDeviceSeatsAndLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~AddDeviceSeatsAndLabelsResponse() = default;
};
class AddDevicesFromCSVRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<long> seatCol{};
  shared_ptr<string> siteId{};
  shared_ptr<string> siteName{};

  AddDevicesFromCSVRequest() {}

  explicit AddDevicesFromCSVRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (seatCol) {
      res["SeatCol"] = boost::any(*seatCol);
    }
    if (siteId) {
      res["SiteId"] = boost::any(*siteId);
    }
    if (siteName) {
      res["SiteName"] = boost::any(*siteName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["FileType"]));
    }
    if (m.find("SeatCol") != m.end() && !m["SeatCol"].empty()) {
      seatCol = make_shared<long>(boost::any_cast<long>(m["SeatCol"]));
    }
    if (m.find("SiteId") != m.end() && !m["SiteId"].empty()) {
      siteId = make_shared<string>(boost::any_cast<string>(m["SiteId"]));
    }
    if (m.find("SiteName") != m.end() && !m["SiteName"].empty()) {
      siteName = make_shared<string>(boost::any_cast<string>(m["SiteName"]));
    }
  }


  virtual ~AddDevicesFromCSVRequest() = default;
};
class AddDevicesFromCSVResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddDevicesFromCSVResponseBody() {}

  explicit AddDevicesFromCSVResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddDevicesFromCSVResponseBody() = default;
};
class AddDevicesFromCSVResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDevicesFromCSVResponseBody> body{};

  AddDevicesFromCSVResponse() {}

  explicit AddDevicesFromCSVResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDevicesFromCSVResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDevicesFromCSVResponseBody>(model1);
      }
    }
  }


  virtual ~AddDevicesFromCSVResponse() = default;
};
class AddLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelContents{};

  AddLabelsRequest() {}

  explicit AddLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelContents) {
      res["LabelContents"] = boost::any(*labelContents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelContents") != m.end() && !m["LabelContents"].empty()) {
      labelContents = make_shared<string>(boost::any_cast<string>(m["LabelContents"]));
    }
  }


  virtual ~AddLabelsRequest() = default;
};
class AddLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddLabelsResponseBody() {}

  explicit AddLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddLabelsResponseBody() = default;
};
class AddLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddLabelsResponseBody> body{};

  AddLabelsResponse() {}

  explicit AddLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~AddLabelsResponse() = default;
};
class AddOrUpdateDeviceSeatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> userCustomId{};
  shared_ptr<string> zoneId{};

  AddOrUpdateDeviceSeatsRequest() {}

  explicit AddOrUpdateDeviceSeatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (userCustomId) {
      res["UserCustomId"] = boost::any(*userCustomId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("UserCustomId") != m.end() && !m["UserCustomId"].empty()) {
      userCustomId = make_shared<string>(boost::any_cast<string>(m["UserCustomId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~AddOrUpdateDeviceSeatsRequest() = default;
};
class AddOrUpdateDeviceSeatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddOrUpdateDeviceSeatsResponseBody() {}

  explicit AddOrUpdateDeviceSeatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddOrUpdateDeviceSeatsResponseBody() = default;
};
class AddOrUpdateDeviceSeatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddOrUpdateDeviceSeatsResponseBody> body{};

  AddOrUpdateDeviceSeatsResponse() {}

  explicit AddOrUpdateDeviceSeatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddOrUpdateDeviceSeatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddOrUpdateDeviceSeatsResponseBody>(model1);
      }
    }
  }


  virtual ~AddOrUpdateDeviceSeatsResponse() = default;
};
class AddTerminalRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> terminalGroupId{};

  AddTerminalRequest() {}

  explicit AddTerminalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (terminalGroupId) {
      res["TerminalGroupId"] = boost::any(*terminalGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("TerminalGroupId") != m.end() && !m["TerminalGroupId"].empty()) {
      terminalGroupId = make_shared<string>(boost::any_cast<string>(m["TerminalGroupId"]));
    }
  }


  virtual ~AddTerminalRequest() = default;
};
class AddTerminalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddTerminalResponseBody() {}

  explicit AddTerminalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddTerminalResponseBody() = default;
};
class AddTerminalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddTerminalResponseBody> body{};

  AddTerminalResponse() {}

  explicit AddTerminalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddTerminalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTerminalResponseBody>(model1);
      }
    }
  }


  virtual ~AddTerminalResponse() = default;
};
class AttachEndUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserIds{};
  shared_ptr<string> serialNo{};

  AttachEndUsersRequest() {}

  explicit AttachEndUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserIds") != m.end() && !m["EndUserIds"].empty()) {
      endUserIds = make_shared<string>(boost::any_cast<string>(m["EndUserIds"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~AttachEndUsersRequest() = default;
};
class AttachEndUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AttachEndUsersResponseBody() {}

  explicit AttachEndUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachEndUsersResponseBody() = default;
};
class AttachEndUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachEndUsersResponseBody> body{};

  AttachEndUsersResponse() {}

  explicit AttachEndUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachEndUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachEndUsersResponseBody>(model1);
      }
    }
  }


  virtual ~AttachEndUsersResponse() = default;
};
class AttachLabelRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelContent{};
  shared_ptr<string> labelId{};
  shared_ptr<string> serialNo{};

  AttachLabelRequest() {}

  explicit AttachLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelContent) {
      res["LabelContent"] = boost::any(*labelContent);
    }
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelContent") != m.end() && !m["LabelContent"].empty()) {
      labelContent = make_shared<string>(boost::any_cast<string>(m["LabelContent"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~AttachLabelRequest() = default;
};
class AttachLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AttachLabelResponseBody() {}

  explicit AttachLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachLabelResponseBody() = default;
};
class AttachLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachLabelResponseBody> body{};

  AttachLabelResponse() {}

  explicit AttachLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachLabelResponseBody>(model1);
      }
    }
  }


  virtual ~AttachLabelResponse() = default;
};
class AttachLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelIds{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> serialNoList{};

  AttachLabelsRequest() {}

  explicit AttachLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelIds) {
      res["LabelIds"] = boost::any(*labelIds);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (serialNoList) {
      res["SerialNoList"] = boost::any(*serialNoList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelIds") != m.end() && !m["LabelIds"].empty()) {
      labelIds = make_shared<string>(boost::any_cast<string>(m["LabelIds"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("SerialNoList") != m.end() && !m["SerialNoList"].empty()) {
      serialNoList = make_shared<string>(boost::any_cast<string>(m["SerialNoList"]));
    }
  }


  virtual ~AttachLabelsRequest() = default;
};
class AttachLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AttachLabelsResponseBody() {}

  explicit AttachLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachLabelsResponseBody() = default;
};
class AttachLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachLabelsResponseBody> body{};

  AttachLabelsResponse() {}

  explicit AttachLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~AttachLabelsResponse() = default;
};
class BindAccountLessLoginUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> uuid{};

  BindAccountLessLoginUserRequest() {}

  explicit BindAccountLessLoginUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~BindAccountLessLoginUserRequest() = default;
};
class BindAccountLessLoginUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BindAccountLessLoginUserResponseBody() {}

  explicit BindAccountLessLoginUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindAccountLessLoginUserResponseBody() = default;
};
class BindAccountLessLoginUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAccountLessLoginUserResponseBody> body{};

  BindAccountLessLoginUserResponse() {}

  explicit BindAccountLessLoginUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindAccountLessLoginUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAccountLessLoginUserResponseBody>(model1);
      }
    }
  }


  virtual ~BindAccountLessLoginUserResponse() = default;
};
class CheckUuidValidRequest : public Darabonba::Model {
public:
  shared_ptr<string> bluetooth{};
  shared_ptr<string> buildId{};
  shared_ptr<string> chipId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> customId{};
  shared_ptr<string> etherMac{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> uuid{};
  shared_ptr<string> wlan{};

  CheckUuidValidRequest() {}

  explicit CheckUuidValidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bluetooth) {
      res["Bluetooth"] = boost::any(*bluetooth);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (chipId) {
      res["ChipId"] = boost::any(*chipId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (etherMac) {
      res["EtherMac"] = boost::any(*etherMac);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    if (wlan) {
      res["Wlan"] = boost::any(*wlan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bluetooth") != m.end() && !m["Bluetooth"].empty()) {
      bluetooth = make_shared<string>(boost::any_cast<string>(m["Bluetooth"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("ChipId") != m.end() && !m["ChipId"].empty()) {
      chipId = make_shared<string>(boost::any_cast<string>(m["ChipId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("EtherMac") != m.end() && !m["EtherMac"].empty()) {
      etherMac = make_shared<string>(boost::any_cast<string>(m["EtherMac"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
    if (m.find("Wlan") != m.end() && !m["Wlan"].empty()) {
      wlan = make_shared<string>(boost::any_cast<string>(m["Wlan"]));
    }
  }


  virtual ~CheckUuidValidRequest() = default;
};
class CheckUuidValidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CheckUuidValidResponseBody() {}

  explicit CheckUuidValidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckUuidValidResponseBody() = default;
};
class CheckUuidValidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckUuidValidResponseBody> body{};

  CheckUuidValidResponse() {}

  explicit CheckUuidValidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckUuidValidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckUuidValidResponseBody>(model1);
      }
    }
  }


  virtual ~CheckUuidValidResponse() = default;
};
class CreateAppOtaTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersionUid{};
  shared_ptr<string> channel{};
  shared_ptr<vector<string>> clientIdList{};
  shared_ptr<long> clientType{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<long> forceUpgrade{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> project{};
  shared_ptr<vector<string>> regions{};
  shared_ptr<long> status{};
  shared_ptr<long> taskType{};
  shared_ptr<string> tenantId{};

  CreateAppOtaTaskRequest() {}

  explicit CreateAppOtaTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersionUid) {
      res["AppVersionUid"] = boost::any(*appVersionUid);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (clientIdList) {
      res["ClientIdList"] = boost::any(*clientIdList);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (forceUpgrade) {
      res["ForceUpgrade"] = boost::any(*forceUpgrade);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (regions) {
      res["Regions"] = boost::any(*regions);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersionUid") != m.end() && !m["AppVersionUid"].empty()) {
      appVersionUid = make_shared<string>(boost::any_cast<string>(m["AppVersionUid"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ClientIdList") != m.end() && !m["ClientIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ForceUpgrade") != m.end() && !m["ForceUpgrade"].empty()) {
      forceUpgrade = make_shared<long>(boost::any_cast<long>(m["ForceUpgrade"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~CreateAppOtaTaskRequest() = default;
};
class CreateAppOtaTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskUid{};

  CreateAppOtaTaskResponseBodyData() {}

  explicit CreateAppOtaTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskUid) {
      res["TaskUid"] = boost::any(*taskUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskUid") != m.end() && !m["TaskUid"].empty()) {
      taskUid = make_shared<string>(boost::any_cast<string>(m["TaskUid"]));
    }
  }


  virtual ~CreateAppOtaTaskResponseBodyData() = default;
};
class CreateAppOtaTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateAppOtaTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateAppOtaTaskResponseBody() {}

  explicit CreateAppOtaTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateAppOtaTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAppOtaTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppOtaTaskResponseBody() = default;
};
class CreateAppOtaTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppOtaTaskResponseBody> body{};

  CreateAppOtaTaskResponse() {}

  explicit CreateAppOtaTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppOtaTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppOtaTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppOtaTaskResponse() = default;
};
class CreateAppOtaVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> arch{};
  shared_ptr<string> channel{};
  shared_ptr<long> clientType{};
  shared_ptr<string> creator{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> md5{};
  shared_ptr<string> os{};
  shared_ptr<string> osType{};
  shared_ptr<long> otaType{};
  shared_ptr<string> project{};
  shared_ptr<string> releaseNote{};
  shared_ptr<string> releaseNoteEn{};
  shared_ptr<string> releaseNoteJp{};
  shared_ptr<long> size{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> snapshotRegionId{};
  shared_ptr<long> status{};
  shared_ptr<string> versionType{};

  CreateAppOtaVersionRequest() {}

  explicit CreateAppOtaVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (arch) {
      res["Arch"] = boost::any(*arch);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (otaType) {
      res["OtaType"] = boost::any(*otaType);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (releaseNoteEn) {
      res["ReleaseNoteEn"] = boost::any(*releaseNoteEn);
    }
    if (releaseNoteJp) {
      res["ReleaseNoteJp"] = boost::any(*releaseNoteJp);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (snapshotRegionId) {
      res["SnapshotRegionId"] = boost::any(*snapshotRegionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (versionType) {
      res["VersionType"] = boost::any(*versionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Arch") != m.end() && !m["Arch"].empty()) {
      arch = make_shared<string>(boost::any_cast<string>(m["Arch"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OtaType") != m.end() && !m["OtaType"].empty()) {
      otaType = make_shared<long>(boost::any_cast<long>(m["OtaType"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("ReleaseNoteEn") != m.end() && !m["ReleaseNoteEn"].empty()) {
      releaseNoteEn = make_shared<string>(boost::any_cast<string>(m["ReleaseNoteEn"]));
    }
    if (m.find("ReleaseNoteJp") != m.end() && !m["ReleaseNoteJp"].empty()) {
      releaseNoteJp = make_shared<string>(boost::any_cast<string>(m["ReleaseNoteJp"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SnapshotRegionId") != m.end() && !m["SnapshotRegionId"].empty()) {
      snapshotRegionId = make_shared<string>(boost::any_cast<string>(m["SnapshotRegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("VersionType") != m.end() && !m["VersionType"].empty()) {
      versionType = make_shared<string>(boost::any_cast<string>(m["VersionType"]));
    }
  }


  virtual ~CreateAppOtaVersionRequest() = default;
};
class CreateAppOtaVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> versionUid{};

  CreateAppOtaVersionResponseBodyData() {}

  explicit CreateAppOtaVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionUid) {
      res["VersionUid"] = boost::any(*versionUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionUid") != m.end() && !m["VersionUid"].empty()) {
      versionUid = make_shared<string>(boost::any_cast<string>(m["VersionUid"]));
    }
  }


  virtual ~CreateAppOtaVersionResponseBodyData() = default;
};
class CreateAppOtaVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateAppOtaVersionResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateAppOtaVersionResponseBody() {}

  explicit CreateAppOtaVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateAppOtaVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAppOtaVersionResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppOtaVersionResponseBody() = default;
};
class CreateAppOtaVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppOtaVersionResponseBody> body{};

  CreateAppOtaVersionResponse() {}

  explicit CreateAppOtaVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppOtaVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppOtaVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppOtaVersionResponse() = default;
};
class DeleteAppOtaVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> versionUidList{};

  DeleteAppOtaVersionsRequest() {}

  explicit DeleteAppOtaVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionUidList) {
      res["VersionUidList"] = boost::any(*versionUidList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionUidList") != m.end() && !m["VersionUidList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VersionUidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VersionUidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      versionUidList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteAppOtaVersionsRequest() = default;
};
class DeleteAppOtaVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteAppOtaVersionsResponseBody() {}

  explicit DeleteAppOtaVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppOtaVersionsResponseBody() = default;
};
class DeleteAppOtaVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppOtaVersionsResponseBody> body{};

  DeleteAppOtaVersionsResponse() {}

  explicit DeleteAppOtaVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppOtaVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppOtaVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppOtaVersionsResponse() = default;
};
class DeleteDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> force{};
  shared_ptr<string> serialNos{};
  shared_ptr<string> uuids{};

  DeleteDevicesRequest() {}

  explicit DeleteDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (serialNos) {
      res["SerialNos"] = boost::any(*serialNos);
    }
    if (uuids) {
      res["Uuids"] = boost::any(*uuids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<string>(boost::any_cast<string>(m["Force"]));
    }
    if (m.find("SerialNos") != m.end() && !m["SerialNos"].empty()) {
      serialNos = make_shared<string>(boost::any_cast<string>(m["SerialNos"]));
    }
    if (m.find("Uuids") != m.end() && !m["Uuids"].empty()) {
      uuids = make_shared<string>(boost::any_cast<string>(m["Uuids"]));
    }
  }


  virtual ~DeleteDevicesRequest() = default;
};
class DeleteDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteDevicesResponseBody() {}

  explicit DeleteDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDevicesResponseBody() = default;
};
class DeleteDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDevicesResponseBody> body{};

  DeleteDevicesResponse() {}

  explicit DeleteDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDevicesResponse() = default;
};
class DeleteLabelRequest : public Darabonba::Model {
public:
  shared_ptr<string> force{};
  shared_ptr<string> labelContent{};
  shared_ptr<string> labelId{};

  DeleteLabelRequest() {}

  explicit DeleteLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (labelContent) {
      res["LabelContent"] = boost::any(*labelContent);
    }
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<string>(boost::any_cast<string>(m["Force"]));
    }
    if (m.find("LabelContent") != m.end() && !m["LabelContent"].empty()) {
      labelContent = make_shared<string>(boost::any_cast<string>(m["LabelContent"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
  }


  virtual ~DeleteLabelRequest() = default;
};
class DeleteLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteLabelResponseBody() {}

  explicit DeleteLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteLabelResponseBody() = default;
};
class DeleteLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLabelResponseBody> body{};

  DeleteLabelResponse() {}

  explicit DeleteLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLabelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLabelResponse() = default;
};
class DescribeAppOtaVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> channel{};
  shared_ptr<long> clientType{};
  shared_ptr<string> creator{};
  shared_ptr<string> project{};
  shared_ptr<long> status{};
  shared_ptr<string> versionUid{};

  DescribeAppOtaVersionRequest() {}

  explicit DescribeAppOtaVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (versionUid) {
      res["VersionUid"] = boost::any(*versionUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("VersionUid") != m.end() && !m["VersionUid"].empty()) {
      versionUid = make_shared<string>(boost::any_cast<string>(m["VersionUid"]));
    }
  }


  virtual ~DescribeAppOtaVersionRequest() = default;
};
class DescribeAppOtaVersionResponseBodyDataAppOtaInfoDTOList : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> channel{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> fullDownloadUrl{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> md5{};
  shared_ptr<string> osType{};
  shared_ptr<string> project{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> releaseNote{};
  shared_ptr<string> releaseNoteEn{};
  shared_ptr<string> sessionType{};
  shared_ptr<long> size{};
  shared_ptr<long> status{};
  shared_ptr<long> versionCode{};
  shared_ptr<string> versionType{};
  shared_ptr<string> versionUid{};

  DescribeAppOtaVersionResponseBodyDataAppOtaInfoDTOList() {}

  explicit DescribeAppOtaVersionResponseBodyDataAppOtaInfoDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (fullDownloadUrl) {
      res["FullDownloadUrl"] = boost::any(*fullDownloadUrl);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (releaseNoteEn) {
      res["ReleaseNoteEn"] = boost::any(*releaseNoteEn);
    }
    if (sessionType) {
      res["SessionType"] = boost::any(*sessionType);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    if (versionType) {
      res["VersionType"] = boost::any(*versionType);
    }
    if (versionUid) {
      res["VersionUid"] = boost::any(*versionUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("FullDownloadUrl") != m.end() && !m["FullDownloadUrl"].empty()) {
      fullDownloadUrl = make_shared<string>(boost::any_cast<string>(m["FullDownloadUrl"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("ReleaseNoteEn") != m.end() && !m["ReleaseNoteEn"].empty()) {
      releaseNoteEn = make_shared<string>(boost::any_cast<string>(m["ReleaseNoteEn"]));
    }
    if (m.find("SessionType") != m.end() && !m["SessionType"].empty()) {
      sessionType = make_shared<string>(boost::any_cast<string>(m["SessionType"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<long>(boost::any_cast<long>(m["VersionCode"]));
    }
    if (m.find("VersionType") != m.end() && !m["VersionType"].empty()) {
      versionType = make_shared<string>(boost::any_cast<string>(m["VersionType"]));
    }
    if (m.find("VersionUid") != m.end() && !m["VersionUid"].empty()) {
      versionUid = make_shared<string>(boost::any_cast<string>(m["VersionUid"]));
    }
  }


  virtual ~DescribeAppOtaVersionResponseBodyDataAppOtaInfoDTOList() = default;
};
class DescribeAppOtaVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppOtaVersionResponseBodyDataAppOtaInfoDTOList>> appOtaInfoDTOList{};

  DescribeAppOtaVersionResponseBodyData() {}

  explicit DescribeAppOtaVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appOtaInfoDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*appOtaInfoDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppOtaInfoDTOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppOtaInfoDTOList") != m.end() && !m["AppOtaInfoDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["AppOtaInfoDTOList"].type()) {
        vector<DescribeAppOtaVersionResponseBodyDataAppOtaInfoDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppOtaInfoDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppOtaVersionResponseBodyDataAppOtaInfoDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appOtaInfoDTOList = make_shared<vector<DescribeAppOtaVersionResponseBodyDataAppOtaInfoDTOList>>(expect1);
      }
    }
  }


  virtual ~DescribeAppOtaVersionResponseBodyData() = default;
};
class DescribeAppOtaVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeAppOtaVersionResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeAppOtaVersionResponseBody() {}

  explicit DescribeAppOtaVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeAppOtaVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAppOtaVersionResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAppOtaVersionResponseBody() = default;
};
class DescribeAppOtaVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppOtaVersionResponseBody> body{};

  DescribeAppOtaVersionResponse() {}

  explicit DescribeAppOtaVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppOtaVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppOtaVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppOtaVersionResponse() = default;
};
class DescribeDeviceSeatsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> serialNo{};
  shared_ptr<vector<string>> serialNoList{};
  shared_ptr<string> siteId{};
  shared_ptr<string> tenantId{};

  DescribeDeviceSeatsRequest() {}

  explicit DescribeDeviceSeatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (serialNoList) {
      res["SerialNoList"] = boost::any(*serialNoList);
    }
    if (siteId) {
      res["SiteId"] = boost::any(*siteId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
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
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("SerialNoList") != m.end() && !m["SerialNoList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SerialNoList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SerialNoList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serialNoList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SiteId") != m.end() && !m["SiteId"].empty()) {
      siteId = make_shared<string>(boost::any_cast<string>(m["SiteId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~DescribeDeviceSeatsRequest() = default;
};
class DescribeDeviceSeatsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> seatCol{};
  shared_ptr<string> seatName{};
  shared_ptr<string> seatNo{};
  shared_ptr<long> seatRow{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> siteId{};
  shared_ptr<string> siteName{};

  DescribeDeviceSeatsResponseBodyData() {}

  explicit DescribeDeviceSeatsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seatCol) {
      res["SeatCol"] = boost::any(*seatCol);
    }
    if (seatName) {
      res["SeatName"] = boost::any(*seatName);
    }
    if (seatNo) {
      res["SeatNo"] = boost::any(*seatNo);
    }
    if (seatRow) {
      res["SeatRow"] = boost::any(*seatRow);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (siteId) {
      res["SiteId"] = boost::any(*siteId);
    }
    if (siteName) {
      res["SiteName"] = boost::any(*siteName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeatCol") != m.end() && !m["SeatCol"].empty()) {
      seatCol = make_shared<long>(boost::any_cast<long>(m["SeatCol"]));
    }
    if (m.find("SeatName") != m.end() && !m["SeatName"].empty()) {
      seatName = make_shared<string>(boost::any_cast<string>(m["SeatName"]));
    }
    if (m.find("SeatNo") != m.end() && !m["SeatNo"].empty()) {
      seatNo = make_shared<string>(boost::any_cast<string>(m["SeatNo"]));
    }
    if (m.find("SeatRow") != m.end() && !m["SeatRow"].empty()) {
      seatRow = make_shared<long>(boost::any_cast<long>(m["SeatRow"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("SiteId") != m.end() && !m["SiteId"].empty()) {
      siteId = make_shared<string>(boost::any_cast<string>(m["SiteId"]));
    }
    if (m.find("SiteName") != m.end() && !m["SiteName"].empty()) {
      siteName = make_shared<string>(boost::any_cast<string>(m["SiteName"]));
    }
  }


  virtual ~DescribeDeviceSeatsResponseBodyData() = default;
};
class DescribeDeviceSeatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeDeviceSeatsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDeviceSeatsResponseBody() {}

  explicit DescribeDeviceSeatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDeviceSeatsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeviceSeatsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDeviceSeatsResponseBodyData>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDeviceSeatsResponseBody() = default;
};
class DescribeDeviceSeatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDeviceSeatsResponseBody> body{};

  DescribeDeviceSeatsResponse() {}

  explicit DescribeDeviceSeatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeviceSeatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeviceSeatsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeviceSeatsResponse() = default;
};
class DescribeDeviceVersionDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> model{};
  shared_ptr<string> networkType{};
  shared_ptr<string> region{};
  shared_ptr<string> versionName{};

  DescribeDeviceVersionDetailRequest() {}

  explicit DescribeDeviceVersionDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~DescribeDeviceVersionDetailRequest() = default;
};
class DescribeDeviceVersionDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> androidHorizontalMultiCnImageDownloadUrl{};
  shared_ptr<string> androidHorizontalMultiEnImageDownloadUrl{};
  shared_ptr<string> androidVerticalMultiCnImageDownloadUrl{};
  shared_ptr<string> androidVerticalMultiEnImageDownloadUrl{};
  shared_ptr<string> channel{};
  shared_ptr<long> clientType{};
  shared_ptr<string> cnImageDownloadUrl{};
  shared_ptr<string> creator{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> enImageDownloadUrl{};
  shared_ptr<string> md5{};
  shared_ptr<string> model{};
  shared_ptr<string> multiCnImageDownloadUrl{};
  shared_ptr<string> multiEnImageDownloadUrl{};
  shared_ptr<string> releaseNote{};
  shared_ptr<string> releaseNoteEn{};
  shared_ptr<long> size{};
  shared_ptr<string> version{};
  shared_ptr<string> versionCode{};
  shared_ptr<string> versionType{};

  DescribeDeviceVersionDetailResponseBodyData() {}

  explicit DescribeDeviceVersionDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidHorizontalMultiCnImageDownloadUrl) {
      res["AndroidHorizontalMultiCnImageDownloadUrl"] = boost::any(*androidHorizontalMultiCnImageDownloadUrl);
    }
    if (androidHorizontalMultiEnImageDownloadUrl) {
      res["AndroidHorizontalMultiEnImageDownloadUrl"] = boost::any(*androidHorizontalMultiEnImageDownloadUrl);
    }
    if (androidVerticalMultiCnImageDownloadUrl) {
      res["AndroidVerticalMultiCnImageDownloadUrl"] = boost::any(*androidVerticalMultiCnImageDownloadUrl);
    }
    if (androidVerticalMultiEnImageDownloadUrl) {
      res["AndroidVerticalMultiEnImageDownloadUrl"] = boost::any(*androidVerticalMultiEnImageDownloadUrl);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (cnImageDownloadUrl) {
      res["CnImageDownloadUrl"] = boost::any(*cnImageDownloadUrl);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (enImageDownloadUrl) {
      res["EnImageDownloadUrl"] = boost::any(*enImageDownloadUrl);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (multiCnImageDownloadUrl) {
      res["MultiCnImageDownloadUrl"] = boost::any(*multiCnImageDownloadUrl);
    }
    if (multiEnImageDownloadUrl) {
      res["MultiEnImageDownloadUrl"] = boost::any(*multiEnImageDownloadUrl);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (releaseNoteEn) {
      res["ReleaseNoteEn"] = boost::any(*releaseNoteEn);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    if (versionType) {
      res["VersionType"] = boost::any(*versionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidHorizontalMultiCnImageDownloadUrl") != m.end() && !m["AndroidHorizontalMultiCnImageDownloadUrl"].empty()) {
      androidHorizontalMultiCnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["AndroidHorizontalMultiCnImageDownloadUrl"]));
    }
    if (m.find("AndroidHorizontalMultiEnImageDownloadUrl") != m.end() && !m["AndroidHorizontalMultiEnImageDownloadUrl"].empty()) {
      androidHorizontalMultiEnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["AndroidHorizontalMultiEnImageDownloadUrl"]));
    }
    if (m.find("AndroidVerticalMultiCnImageDownloadUrl") != m.end() && !m["AndroidVerticalMultiCnImageDownloadUrl"].empty()) {
      androidVerticalMultiCnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["AndroidVerticalMultiCnImageDownloadUrl"]));
    }
    if (m.find("AndroidVerticalMultiEnImageDownloadUrl") != m.end() && !m["AndroidVerticalMultiEnImageDownloadUrl"].empty()) {
      androidVerticalMultiEnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["AndroidVerticalMultiEnImageDownloadUrl"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("CnImageDownloadUrl") != m.end() && !m["CnImageDownloadUrl"].empty()) {
      cnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["CnImageDownloadUrl"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("EnImageDownloadUrl") != m.end() && !m["EnImageDownloadUrl"].empty()) {
      enImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["EnImageDownloadUrl"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("MultiCnImageDownloadUrl") != m.end() && !m["MultiCnImageDownloadUrl"].empty()) {
      multiCnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["MultiCnImageDownloadUrl"]));
    }
    if (m.find("MultiEnImageDownloadUrl") != m.end() && !m["MultiEnImageDownloadUrl"].empty()) {
      multiEnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["MultiEnImageDownloadUrl"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("ReleaseNoteEn") != m.end() && !m["ReleaseNoteEn"].empty()) {
      releaseNoteEn = make_shared<string>(boost::any_cast<string>(m["ReleaseNoteEn"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
    if (m.find("VersionType") != m.end() && !m["VersionType"].empty()) {
      versionType = make_shared<string>(boost::any_cast<string>(m["VersionType"]));
    }
  }


  virtual ~DescribeDeviceVersionDetailResponseBodyData() = default;
};
class DescribeDeviceVersionDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeDeviceVersionDetailResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeDeviceVersionDetailResponseBody() {}

  explicit DescribeDeviceVersionDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDeviceVersionDetailResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeviceVersionDetailResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDeviceVersionDetailResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDeviceVersionDetailResponseBody() = default;
};
class DescribeDeviceVersionDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDeviceVersionDetailResponseBody> body{};

  DescribeDeviceVersionDetailResponse() {}

  explicit DescribeDeviceVersionDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeviceVersionDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeviceVersionDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeviceVersionDetailResponse() = default;
};
class DescribeSnLabelCountsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> labelList{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};

  DescribeSnLabelCountsRequest() {}

  explicit DescribeSnLabelCountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelList) {
      res["LabelList"] = boost::any(*labelList);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelList") != m.end() && !m["LabelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LabelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LabelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~DescribeSnLabelCountsRequest() = default;
};
class DescribeSnLabelCountsResponseBodyDataLabelCountDTOList : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> label{};

  DescribeSnLabelCountsResponseBodyDataLabelCountDTOList() {}

  explicit DescribeSnLabelCountsResponseBodyDataLabelCountDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~DescribeSnLabelCountsResponseBodyDataLabelCountDTOList() = default;
};
class DescribeSnLabelCountsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSnLabelCountsResponseBodyDataLabelCountDTOList>> labelCountDTOList{};
  shared_ptr<long> totalCount{};

  DescribeSnLabelCountsResponseBodyData() {}

  explicit DescribeSnLabelCountsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelCountDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*labelCountDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelCountDTOList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelCountDTOList") != m.end() && !m["LabelCountDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelCountDTOList"].type()) {
        vector<DescribeSnLabelCountsResponseBodyDataLabelCountDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelCountDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSnLabelCountsResponseBodyDataLabelCountDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelCountDTOList = make_shared<vector<DescribeSnLabelCountsResponseBodyDataLabelCountDTOList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSnLabelCountsResponseBodyData() = default;
};
class DescribeSnLabelCountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeSnLabelCountsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeSnLabelCountsResponseBody() {}

  explicit DescribeSnLabelCountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeSnLabelCountsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeSnLabelCountsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSnLabelCountsResponseBody() = default;
};
class DescribeSnLabelCountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSnLabelCountsResponseBody> body{};

  DescribeSnLabelCountsResponse() {}

  explicit DescribeSnLabelCountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSnLabelCountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSnLabelCountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSnLabelCountsResponse() = default;
};
class DescribeWorkZonesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> tenantId{};
  shared_ptr<vector<string>> zoneIdList{};
  shared_ptr<vector<string>> zoneNameList{};

  DescribeWorkZonesRequest() {}

  explicit DescribeWorkZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (zoneIdList) {
      res["ZoneIdList"] = boost::any(*zoneIdList);
    }
    if (zoneNameList) {
      res["ZoneNameList"] = boost::any(*zoneNameList);
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
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ZoneIdList") != m.end() && !m["ZoneIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ZoneNameList") != m.end() && !m["ZoneNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneNameList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeWorkZonesRequest() = default;
};
class DescribeWorkZonesResponseBodyDataWorkZoneDTOList : public Darabonba::Model {
public:
  shared_ptr<long> seatCol{};
  shared_ptr<long> seatRow{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};

  DescribeWorkZonesResponseBodyDataWorkZoneDTOList() {}

  explicit DescribeWorkZonesResponseBodyDataWorkZoneDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seatCol) {
      res["SeatCol"] = boost::any(*seatCol);
    }
    if (seatRow) {
      res["SeatRow"] = boost::any(*seatRow);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeatCol") != m.end() && !m["SeatCol"].empty()) {
      seatCol = make_shared<long>(boost::any_cast<long>(m["SeatCol"]));
    }
    if (m.find("SeatRow") != m.end() && !m["SeatRow"].empty()) {
      seatRow = make_shared<long>(boost::any_cast<long>(m["SeatRow"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~DescribeWorkZonesResponseBodyDataWorkZoneDTOList() = default;
};
class DescribeWorkZonesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeWorkZonesResponseBodyDataWorkZoneDTOList>> workZoneDTOList{};

  DescribeWorkZonesResponseBodyData() {}

  explicit DescribeWorkZonesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (workZoneDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*workZoneDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkZoneDTOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("WorkZoneDTOList") != m.end() && !m["WorkZoneDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkZoneDTOList"].type()) {
        vector<DescribeWorkZonesResponseBodyDataWorkZoneDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkZoneDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWorkZonesResponseBodyDataWorkZoneDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workZoneDTOList = make_shared<vector<DescribeWorkZonesResponseBodyDataWorkZoneDTOList>>(expect1);
      }
    }
  }


  virtual ~DescribeWorkZonesResponseBodyData() = default;
};
class DescribeWorkZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeWorkZonesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeWorkZonesResponseBody() {}

  explicit DescribeWorkZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeWorkZonesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeWorkZonesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeWorkZonesResponseBody() = default;
};
class DescribeWorkZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWorkZonesResponseBody> body{};

  DescribeWorkZonesResponse() {}

  explicit DescribeWorkZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWorkZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWorkZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWorkZonesResponse() = default;
};
class DetachEndUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserIds{};
  shared_ptr<string> serialNo{};

  DetachEndUsersRequest() {}

  explicit DetachEndUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserIds") != m.end() && !m["EndUserIds"].empty()) {
      endUserIds = make_shared<string>(boost::any_cast<string>(m["EndUserIds"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~DetachEndUsersRequest() = default;
};
class DetachEndUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetachEndUsersResponseBody() {}

  explicit DetachEndUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachEndUsersResponseBody() = default;
};
class DetachEndUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachEndUsersResponseBody> body{};

  DetachEndUsersResponse() {}

  explicit DetachEndUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachEndUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachEndUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DetachEndUsersResponse() = default;
};
class DetachLabelRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelContent{};
  shared_ptr<string> labelId{};
  shared_ptr<string> serialNo{};

  DetachLabelRequest() {}

  explicit DetachLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelContent) {
      res["LabelContent"] = boost::any(*labelContent);
    }
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelContent") != m.end() && !m["LabelContent"].empty()) {
      labelContent = make_shared<string>(boost::any_cast<string>(m["LabelContent"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~DetachLabelRequest() = default;
};
class DetachLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetachLabelResponseBody() {}

  explicit DetachLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachLabelResponseBody() = default;
};
class DetachLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachLabelResponseBody> body{};

  DetachLabelResponse() {}

  explicit DetachLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachLabelResponseBody>(model1);
      }
    }
  }


  virtual ~DetachLabelResponse() = default;
};
class DetachLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelIds{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> serialNoList{};

  DetachLabelsRequest() {}

  explicit DetachLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelIds) {
      res["LabelIds"] = boost::any(*labelIds);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (serialNoList) {
      res["SerialNoList"] = boost::any(*serialNoList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelIds") != m.end() && !m["LabelIds"].empty()) {
      labelIds = make_shared<string>(boost::any_cast<string>(m["LabelIds"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("SerialNoList") != m.end() && !m["SerialNoList"].empty()) {
      serialNoList = make_shared<string>(boost::any_cast<string>(m["SerialNoList"]));
    }
  }


  virtual ~DetachLabelsRequest() = default;
};
class DetachLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetachLabelsResponseBody() {}

  explicit DetachLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachLabelsResponseBody() = default;
};
class DetachLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachLabelsResponseBody> body{};

  DetachLabelsResponse() {}

  explicit DetachLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DetachLabelsResponse() = default;
};
class GenerateOssUrlRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> objectNameList{};
  shared_ptr<string> sessionId{};

  GenerateOssUrlRequest() {}

  explicit GenerateOssUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectNameList) {
      res["ObjectNameList"] = boost::any(*objectNameList);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ObjectNameList") != m.end() && !m["ObjectNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ObjectNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ObjectNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objectNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~GenerateOssUrlRequest() = default;
};
class GenerateOssUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> objectName{};

  GenerateOssUrlResponseBodyData() {}

  explicit GenerateOssUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
  }


  virtual ~GenerateOssUrlResponseBodyData() = default;
};
class GenerateOssUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateOssUrlResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GenerateOssUrlResponseBody() {}

  explicit GenerateOssUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GenerateOssUrlResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateOssUrlResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GenerateOssUrlResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateOssUrlResponseBody() = default;
};
class GenerateOssUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateOssUrlResponseBody> body{};

  GenerateOssUrlResponse() {}

  explicit GenerateOssUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateOssUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateOssUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateOssUrlResponse() = default;
};
class GetAppOtaLatestVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseVersion{};
  shared_ptr<long> clientType{};
  shared_ptr<string> clientUid{};
  shared_ptr<string> osType{};
  shared_ptr<string> project{};

  GetAppOtaLatestVersionRequest() {}

  explicit GetAppOtaLatestVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseVersion) {
      res["BaseVersion"] = boost::any(*baseVersion);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clientUid) {
      res["ClientUid"] = boost::any(*clientUid);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseVersion") != m.end() && !m["BaseVersion"].empty()) {
      baseVersion = make_shared<string>(boost::any_cast<string>(m["BaseVersion"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("ClientUid") != m.end() && !m["ClientUid"].empty()) {
      clientUid = make_shared<string>(boost::any_cast<string>(m["ClientUid"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~GetAppOtaLatestVersionRequest() = default;
};
class GetAppOtaLatestVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<long> forceUpgrade{};
  shared_ptr<string> md5{};
  shared_ptr<string> releaseNote{};
  shared_ptr<long> size{};
  shared_ptr<string> taskUid{};
  shared_ptr<string> versionCode{};
  shared_ptr<string> versionType{};

  GetAppOtaLatestVersionResponseBodyData() {}

  explicit GetAppOtaLatestVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (forceUpgrade) {
      res["ForceUpgrade"] = boost::any(*forceUpgrade);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (taskUid) {
      res["TaskUid"] = boost::any(*taskUid);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    if (versionType) {
      res["VersionType"] = boost::any(*versionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("ForceUpgrade") != m.end() && !m["ForceUpgrade"].empty()) {
      forceUpgrade = make_shared<long>(boost::any_cast<long>(m["ForceUpgrade"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("TaskUid") != m.end() && !m["TaskUid"].empty()) {
      taskUid = make_shared<string>(boost::any_cast<string>(m["TaskUid"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
    if (m.find("VersionType") != m.end() && !m["VersionType"].empty()) {
      versionType = make_shared<string>(boost::any_cast<string>(m["VersionType"]));
    }
  }


  virtual ~GetAppOtaLatestVersionResponseBodyData() = default;
};
class GetAppOtaLatestVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAppOtaLatestVersionResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetAppOtaLatestVersionResponseBody() {}

  explicit GetAppOtaLatestVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAppOtaLatestVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAppOtaLatestVersionResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppOtaLatestVersionResponseBody() = default;
};
class GetAppOtaLatestVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppOtaLatestVersionResponseBody> body{};

  GetAppOtaLatestVersionResponse() {}

  explicit GetAppOtaLatestVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppOtaLatestVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppOtaLatestVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppOtaLatestVersionResponse() = default;
};
class GetDeviceConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> region{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> urclVersion{};
  shared_ptr<string> userCustomId{};

  GetDeviceConfigsRequest() {}

  explicit GetDeviceConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (urclVersion) {
      res["UrclVersion"] = boost::any(*urclVersion);
    }
    if (userCustomId) {
      res["UserCustomId"] = boost::any(*userCustomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("UrclVersion") != m.end() && !m["UrclVersion"].empty()) {
      urclVersion = make_shared<string>(boost::any_cast<string>(m["UrclVersion"]));
    }
    if (m.find("UserCustomId") != m.end() && !m["UserCustomId"].empty()) {
      userCustomId = make_shared<string>(boost::any_cast<string>(m["UserCustomId"]));
    }
  }


  virtual ~GetDeviceConfigsRequest() = default;
};
class GetDeviceConfigsResponseBodyDataCustomResourcePackage : public Darabonba::Model {
public:
  shared_ptr<string> configAboutLogo{};
  shared_ptr<string> desktopWallpaper{};
  shared_ptr<string> loginPageBackground{};
  shared_ptr<string> loginPageLogo{};
  shared_ptr<string> personalCenterLogo{};
  shared_ptr<string> startLogo{};
  shared_ptr<string> startMenuLogo{};
  shared_ptr<string> upgradeLogo{};

  GetDeviceConfigsResponseBodyDataCustomResourcePackage() {}

  explicit GetDeviceConfigsResponseBodyDataCustomResourcePackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configAboutLogo) {
      res["ConfigAboutLogo"] = boost::any(*configAboutLogo);
    }
    if (desktopWallpaper) {
      res["DesktopWallpaper"] = boost::any(*desktopWallpaper);
    }
    if (loginPageBackground) {
      res["LoginPageBackground"] = boost::any(*loginPageBackground);
    }
    if (loginPageLogo) {
      res["LoginPageLogo"] = boost::any(*loginPageLogo);
    }
    if (personalCenterLogo) {
      res["PersonalCenterLogo"] = boost::any(*personalCenterLogo);
    }
    if (startLogo) {
      res["StartLogo"] = boost::any(*startLogo);
    }
    if (startMenuLogo) {
      res["StartMenuLogo"] = boost::any(*startMenuLogo);
    }
    if (upgradeLogo) {
      res["UpgradeLogo"] = boost::any(*upgradeLogo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigAboutLogo") != m.end() && !m["ConfigAboutLogo"].empty()) {
      configAboutLogo = make_shared<string>(boost::any_cast<string>(m["ConfigAboutLogo"]));
    }
    if (m.find("DesktopWallpaper") != m.end() && !m["DesktopWallpaper"].empty()) {
      desktopWallpaper = make_shared<string>(boost::any_cast<string>(m["DesktopWallpaper"]));
    }
    if (m.find("LoginPageBackground") != m.end() && !m["LoginPageBackground"].empty()) {
      loginPageBackground = make_shared<string>(boost::any_cast<string>(m["LoginPageBackground"]));
    }
    if (m.find("LoginPageLogo") != m.end() && !m["LoginPageLogo"].empty()) {
      loginPageLogo = make_shared<string>(boost::any_cast<string>(m["LoginPageLogo"]));
    }
    if (m.find("PersonalCenterLogo") != m.end() && !m["PersonalCenterLogo"].empty()) {
      personalCenterLogo = make_shared<string>(boost::any_cast<string>(m["PersonalCenterLogo"]));
    }
    if (m.find("StartLogo") != m.end() && !m["StartLogo"].empty()) {
      startLogo = make_shared<string>(boost::any_cast<string>(m["StartLogo"]));
    }
    if (m.find("StartMenuLogo") != m.end() && !m["StartMenuLogo"].empty()) {
      startMenuLogo = make_shared<string>(boost::any_cast<string>(m["StartMenuLogo"]));
    }
    if (m.find("UpgradeLogo") != m.end() && !m["UpgradeLogo"].empty()) {
      upgradeLogo = make_shared<string>(boost::any_cast<string>(m["UpgradeLogo"]));
    }
  }


  virtual ~GetDeviceConfigsResponseBodyDataCustomResourcePackage() = default;
};
class GetDeviceConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> autoLockScreenTime{};
  shared_ptr<long> autoLogin{};
  shared_ptr<long> autoUpdate{};
  shared_ptr<long> customIdleAction{};
  shared_ptr<long> customPowerOn{};
  shared_ptr<GetDeviceConfigsResponseBodyDataCustomResourcePackage> customResourcePackage{};
  shared_ptr<long> definePowerButton{};
  shared_ptr<long> deviceLock{};
  shared_ptr<string> displayLayout{};
  shared_ptr<string> displayResolution{};
  shared_ptr<string> displayScaleRatio{};
  shared_ptr<long> enableAdb{};
  shared_ptr<long> enableAutoLockScreen{};
  shared_ptr<long> enableBluetooth{};
  shared_ptr<long> enableLockScreenPassword{};
  shared_ptr<long> enableModifyPassword{};
  shared_ptr<long> enableScheduledPowerOff{};
  shared_ptr<long> enableUnlockPassword{};
  shared_ptr<long> enableWlan{};
  shared_ptr<long> idleTime{};
  shared_ptr<long> localUsbPrint{};
  shared_ptr<string> lockPassword{};
  shared_ptr<string> scheduledPowerOff{};
  shared_ptr<string> secureNetworkType{};
  shared_ptr<string> serialNo{};
  shared_ptr<long> sleepTime{};
  shared_ptr<string> urcl{};
  shared_ptr<long> usbStorage{};
  shared_ptr<string> userCustomId{};
  shared_ptr<string> uuid{};

  GetDeviceConfigsResponseBodyData() {}

  explicit GetDeviceConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoLockScreenTime) {
      res["AutoLockScreenTime"] = boost::any(*autoLockScreenTime);
    }
    if (autoLogin) {
      res["AutoLogin"] = boost::any(*autoLogin);
    }
    if (autoUpdate) {
      res["AutoUpdate"] = boost::any(*autoUpdate);
    }
    if (customIdleAction) {
      res["CustomIdleAction"] = boost::any(*customIdleAction);
    }
    if (customPowerOn) {
      res["CustomPowerOn"] = boost::any(*customPowerOn);
    }
    if (customResourcePackage) {
      res["CustomResourcePackage"] = customResourcePackage ? boost::any(customResourcePackage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (definePowerButton) {
      res["DefinePowerButton"] = boost::any(*definePowerButton);
    }
    if (deviceLock) {
      res["DeviceLock"] = boost::any(*deviceLock);
    }
    if (displayLayout) {
      res["DisplayLayout"] = boost::any(*displayLayout);
    }
    if (displayResolution) {
      res["DisplayResolution"] = boost::any(*displayResolution);
    }
    if (displayScaleRatio) {
      res["DisplayScaleRatio"] = boost::any(*displayScaleRatio);
    }
    if (enableAdb) {
      res["EnableAdb"] = boost::any(*enableAdb);
    }
    if (enableAutoLockScreen) {
      res["EnableAutoLockScreen"] = boost::any(*enableAutoLockScreen);
    }
    if (enableBluetooth) {
      res["EnableBluetooth"] = boost::any(*enableBluetooth);
    }
    if (enableLockScreenPassword) {
      res["EnableLockScreenPassword"] = boost::any(*enableLockScreenPassword);
    }
    if (enableModifyPassword) {
      res["EnableModifyPassword"] = boost::any(*enableModifyPassword);
    }
    if (enableScheduledPowerOff) {
      res["EnableScheduledPowerOff"] = boost::any(*enableScheduledPowerOff);
    }
    if (enableUnlockPassword) {
      res["EnableUnlockPassword"] = boost::any(*enableUnlockPassword);
    }
    if (enableWlan) {
      res["EnableWlan"] = boost::any(*enableWlan);
    }
    if (idleTime) {
      res["IdleTime"] = boost::any(*idleTime);
    }
    if (localUsbPrint) {
      res["LocalUsbPrint"] = boost::any(*localUsbPrint);
    }
    if (lockPassword) {
      res["LockPassword"] = boost::any(*lockPassword);
    }
    if (scheduledPowerOff) {
      res["ScheduledPowerOff"] = boost::any(*scheduledPowerOff);
    }
    if (secureNetworkType) {
      res["SecureNetworkType"] = boost::any(*secureNetworkType);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (sleepTime) {
      res["SleepTime"] = boost::any(*sleepTime);
    }
    if (urcl) {
      res["Urcl"] = boost::any(*urcl);
    }
    if (usbStorage) {
      res["UsbStorage"] = boost::any(*usbStorage);
    }
    if (userCustomId) {
      res["UserCustomId"] = boost::any(*userCustomId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoLockScreenTime") != m.end() && !m["AutoLockScreenTime"].empty()) {
      autoLockScreenTime = make_shared<long>(boost::any_cast<long>(m["AutoLockScreenTime"]));
    }
    if (m.find("AutoLogin") != m.end() && !m["AutoLogin"].empty()) {
      autoLogin = make_shared<long>(boost::any_cast<long>(m["AutoLogin"]));
    }
    if (m.find("AutoUpdate") != m.end() && !m["AutoUpdate"].empty()) {
      autoUpdate = make_shared<long>(boost::any_cast<long>(m["AutoUpdate"]));
    }
    if (m.find("CustomIdleAction") != m.end() && !m["CustomIdleAction"].empty()) {
      customIdleAction = make_shared<long>(boost::any_cast<long>(m["CustomIdleAction"]));
    }
    if (m.find("CustomPowerOn") != m.end() && !m["CustomPowerOn"].empty()) {
      customPowerOn = make_shared<long>(boost::any_cast<long>(m["CustomPowerOn"]));
    }
    if (m.find("CustomResourcePackage") != m.end() && !m["CustomResourcePackage"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomResourcePackage"].type()) {
        GetDeviceConfigsResponseBodyDataCustomResourcePackage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomResourcePackage"]));
        customResourcePackage = make_shared<GetDeviceConfigsResponseBodyDataCustomResourcePackage>(model1);
      }
    }
    if (m.find("DefinePowerButton") != m.end() && !m["DefinePowerButton"].empty()) {
      definePowerButton = make_shared<long>(boost::any_cast<long>(m["DefinePowerButton"]));
    }
    if (m.find("DeviceLock") != m.end() && !m["DeviceLock"].empty()) {
      deviceLock = make_shared<long>(boost::any_cast<long>(m["DeviceLock"]));
    }
    if (m.find("DisplayLayout") != m.end() && !m["DisplayLayout"].empty()) {
      displayLayout = make_shared<string>(boost::any_cast<string>(m["DisplayLayout"]));
    }
    if (m.find("DisplayResolution") != m.end() && !m["DisplayResolution"].empty()) {
      displayResolution = make_shared<string>(boost::any_cast<string>(m["DisplayResolution"]));
    }
    if (m.find("DisplayScaleRatio") != m.end() && !m["DisplayScaleRatio"].empty()) {
      displayScaleRatio = make_shared<string>(boost::any_cast<string>(m["DisplayScaleRatio"]));
    }
    if (m.find("EnableAdb") != m.end() && !m["EnableAdb"].empty()) {
      enableAdb = make_shared<long>(boost::any_cast<long>(m["EnableAdb"]));
    }
    if (m.find("EnableAutoLockScreen") != m.end() && !m["EnableAutoLockScreen"].empty()) {
      enableAutoLockScreen = make_shared<long>(boost::any_cast<long>(m["EnableAutoLockScreen"]));
    }
    if (m.find("EnableBluetooth") != m.end() && !m["EnableBluetooth"].empty()) {
      enableBluetooth = make_shared<long>(boost::any_cast<long>(m["EnableBluetooth"]));
    }
    if (m.find("EnableLockScreenPassword") != m.end() && !m["EnableLockScreenPassword"].empty()) {
      enableLockScreenPassword = make_shared<long>(boost::any_cast<long>(m["EnableLockScreenPassword"]));
    }
    if (m.find("EnableModifyPassword") != m.end() && !m["EnableModifyPassword"].empty()) {
      enableModifyPassword = make_shared<long>(boost::any_cast<long>(m["EnableModifyPassword"]));
    }
    if (m.find("EnableScheduledPowerOff") != m.end() && !m["EnableScheduledPowerOff"].empty()) {
      enableScheduledPowerOff = make_shared<long>(boost::any_cast<long>(m["EnableScheduledPowerOff"]));
    }
    if (m.find("EnableUnlockPassword") != m.end() && !m["EnableUnlockPassword"].empty()) {
      enableUnlockPassword = make_shared<long>(boost::any_cast<long>(m["EnableUnlockPassword"]));
    }
    if (m.find("EnableWlan") != m.end() && !m["EnableWlan"].empty()) {
      enableWlan = make_shared<long>(boost::any_cast<long>(m["EnableWlan"]));
    }
    if (m.find("IdleTime") != m.end() && !m["IdleTime"].empty()) {
      idleTime = make_shared<long>(boost::any_cast<long>(m["IdleTime"]));
    }
    if (m.find("LocalUsbPrint") != m.end() && !m["LocalUsbPrint"].empty()) {
      localUsbPrint = make_shared<long>(boost::any_cast<long>(m["LocalUsbPrint"]));
    }
    if (m.find("LockPassword") != m.end() && !m["LockPassword"].empty()) {
      lockPassword = make_shared<string>(boost::any_cast<string>(m["LockPassword"]));
    }
    if (m.find("ScheduledPowerOff") != m.end() && !m["ScheduledPowerOff"].empty()) {
      scheduledPowerOff = make_shared<string>(boost::any_cast<string>(m["ScheduledPowerOff"]));
    }
    if (m.find("SecureNetworkType") != m.end() && !m["SecureNetworkType"].empty()) {
      secureNetworkType = make_shared<string>(boost::any_cast<string>(m["SecureNetworkType"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("SleepTime") != m.end() && !m["SleepTime"].empty()) {
      sleepTime = make_shared<long>(boost::any_cast<long>(m["SleepTime"]));
    }
    if (m.find("Urcl") != m.end() && !m["Urcl"].empty()) {
      urcl = make_shared<string>(boost::any_cast<string>(m["Urcl"]));
    }
    if (m.find("UsbStorage") != m.end() && !m["UsbStorage"].empty()) {
      usbStorage = make_shared<long>(boost::any_cast<long>(m["UsbStorage"]));
    }
    if (m.find("UserCustomId") != m.end() && !m["UserCustomId"].empty()) {
      userCustomId = make_shared<string>(boost::any_cast<string>(m["UserCustomId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetDeviceConfigsResponseBodyData() = default;
};
class GetDeviceConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceConfigsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDeviceConfigsResponseBody() {}

  explicit GetDeviceConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDeviceConfigsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDeviceConfigsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeviceConfigsResponseBody() = default;
};
class GetDeviceConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceConfigsResponseBody> body{};

  GetDeviceConfigsResponse() {}

  explicit GetDeviceConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceConfigsResponse() = default;
};
class GetDeviceOtaAutoStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> clientType{};

  GetDeviceOtaAutoStatusRequest() {}

  explicit GetDeviceOtaAutoStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
  }


  virtual ~GetDeviceOtaAutoStatusRequest() = default;
};
class GetDeviceOtaAutoStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> autoUpdate{};
  shared_ptr<string> autoUpdateTimeSchedule{};
  shared_ptr<long> forceUpgrade{};
  shared_ptr<long> status{};

  GetDeviceOtaAutoStatusResponseBodyData() {}

  explicit GetDeviceOtaAutoStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpdate) {
      res["AutoUpdate"] = boost::any(*autoUpdate);
    }
    if (autoUpdateTimeSchedule) {
      res["AutoUpdateTimeSchedule"] = boost::any(*autoUpdateTimeSchedule);
    }
    if (forceUpgrade) {
      res["ForceUpgrade"] = boost::any(*forceUpgrade);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoUpdate") != m.end() && !m["AutoUpdate"].empty()) {
      autoUpdate = make_shared<long>(boost::any_cast<long>(m["AutoUpdate"]));
    }
    if (m.find("AutoUpdateTimeSchedule") != m.end() && !m["AutoUpdateTimeSchedule"].empty()) {
      autoUpdateTimeSchedule = make_shared<string>(boost::any_cast<string>(m["AutoUpdateTimeSchedule"]));
    }
    if (m.find("ForceUpgrade") != m.end() && !m["ForceUpgrade"].empty()) {
      forceUpgrade = make_shared<long>(boost::any_cast<long>(m["ForceUpgrade"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetDeviceOtaAutoStatusResponseBodyData() = default;
};
class GetDeviceOtaAutoStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceOtaAutoStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDeviceOtaAutoStatusResponseBody() {}

  explicit GetDeviceOtaAutoStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDeviceOtaAutoStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDeviceOtaAutoStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeviceOtaAutoStatusResponseBody() = default;
};
class GetDeviceOtaAutoStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceOtaAutoStatusResponseBody> body{};

  GetDeviceOtaAutoStatusResponse() {}

  explicit GetDeviceOtaAutoStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceOtaAutoStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceOtaAutoStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceOtaAutoStatusResponse() = default;
};
class GetDeviceOtaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseVersion{};
  shared_ptr<string> channel{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> model{};
  shared_ptr<string> networkType{};
  shared_ptr<string> osVersion{};
  shared_ptr<string> region{};
  shared_ptr<string> regionId{};
  shared_ptr<string> targetVersionType{};
  shared_ptr<string> tenantId{};

  GetDeviceOtaInfoRequest() {}

  explicit GetDeviceOtaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseVersion) {
      res["BaseVersion"] = boost::any(*baseVersion);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (osVersion) {
      res["OsVersion"] = boost::any(*osVersion);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (targetVersionType) {
      res["TargetVersionType"] = boost::any(*targetVersionType);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseVersion") != m.end() && !m["BaseVersion"].empty()) {
      baseVersion = make_shared<string>(boost::any_cast<string>(m["BaseVersion"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("OsVersion") != m.end() && !m["OsVersion"].empty()) {
      osVersion = make_shared<string>(boost::any_cast<string>(m["OsVersion"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TargetVersionType") != m.end() && !m["TargetVersionType"].empty()) {
      targetVersionType = make_shared<string>(boost::any_cast<string>(m["TargetVersionType"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetDeviceOtaInfoRequest() = default;
};
class GetDeviceOtaInfoResponseBodyDataVersion : public Darabonba::Model {
public:
  shared_ptr<string> androidHorizontalMultiCnImageDownloadUrl{};
  shared_ptr<string> androidHorizontalMultiEnImageDownloadUrl{};
  shared_ptr<string> androidVerticalMultiCnImageDownloadUrl{};
  shared_ptr<string> androidVerticalMultiEnImageDownloadUrl{};
  shared_ptr<string> cnImageDownloadUrl{};
  shared_ptr<string> creator{};
  shared_ptr<bool> customForceUpgrade{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> enImageDownloadUrl{};
  shared_ptr<long> forceUpgrade{};
  shared_ptr<bool> isAppDownloadUrl{};
  shared_ptr<string> localDownloadUrl{};
  shared_ptr<string> md5{};
  shared_ptr<string> model{};
  shared_ptr<string> multiCnImageDownloadUrl{};
  shared_ptr<string> multiEnImageDownloadUrl{};
  shared_ptr<string> releaseNote{};
  shared_ptr<string> releaseNoteEn{};
  shared_ptr<long> size{};
  shared_ptr<string> version{};
  shared_ptr<string> versionCode{};
  shared_ptr<string> versionType{};

  GetDeviceOtaInfoResponseBodyDataVersion() {}

  explicit GetDeviceOtaInfoResponseBodyDataVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidHorizontalMultiCnImageDownloadUrl) {
      res["AndroidHorizontalMultiCnImageDownloadUrl"] = boost::any(*androidHorizontalMultiCnImageDownloadUrl);
    }
    if (androidHorizontalMultiEnImageDownloadUrl) {
      res["AndroidHorizontalMultiEnImageDownloadUrl"] = boost::any(*androidHorizontalMultiEnImageDownloadUrl);
    }
    if (androidVerticalMultiCnImageDownloadUrl) {
      res["AndroidVerticalMultiCnImageDownloadUrl"] = boost::any(*androidVerticalMultiCnImageDownloadUrl);
    }
    if (androidVerticalMultiEnImageDownloadUrl) {
      res["AndroidVerticalMultiEnImageDownloadUrl"] = boost::any(*androidVerticalMultiEnImageDownloadUrl);
    }
    if (cnImageDownloadUrl) {
      res["CnImageDownloadUrl"] = boost::any(*cnImageDownloadUrl);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (customForceUpgrade) {
      res["CustomForceUpgrade"] = boost::any(*customForceUpgrade);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (enImageDownloadUrl) {
      res["EnImageDownloadUrl"] = boost::any(*enImageDownloadUrl);
    }
    if (forceUpgrade) {
      res["ForceUpgrade"] = boost::any(*forceUpgrade);
    }
    if (isAppDownloadUrl) {
      res["IsAppDownloadUrl"] = boost::any(*isAppDownloadUrl);
    }
    if (localDownloadUrl) {
      res["LocalDownloadUrl"] = boost::any(*localDownloadUrl);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (multiCnImageDownloadUrl) {
      res["MultiCnImageDownloadUrl"] = boost::any(*multiCnImageDownloadUrl);
    }
    if (multiEnImageDownloadUrl) {
      res["MultiEnImageDownloadUrl"] = boost::any(*multiEnImageDownloadUrl);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (releaseNoteEn) {
      res["ReleaseNoteEn"] = boost::any(*releaseNoteEn);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    if (versionType) {
      res["VersionType"] = boost::any(*versionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidHorizontalMultiCnImageDownloadUrl") != m.end() && !m["AndroidHorizontalMultiCnImageDownloadUrl"].empty()) {
      androidHorizontalMultiCnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["AndroidHorizontalMultiCnImageDownloadUrl"]));
    }
    if (m.find("AndroidHorizontalMultiEnImageDownloadUrl") != m.end() && !m["AndroidHorizontalMultiEnImageDownloadUrl"].empty()) {
      androidHorizontalMultiEnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["AndroidHorizontalMultiEnImageDownloadUrl"]));
    }
    if (m.find("AndroidVerticalMultiCnImageDownloadUrl") != m.end() && !m["AndroidVerticalMultiCnImageDownloadUrl"].empty()) {
      androidVerticalMultiCnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["AndroidVerticalMultiCnImageDownloadUrl"]));
    }
    if (m.find("AndroidVerticalMultiEnImageDownloadUrl") != m.end() && !m["AndroidVerticalMultiEnImageDownloadUrl"].empty()) {
      androidVerticalMultiEnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["AndroidVerticalMultiEnImageDownloadUrl"]));
    }
    if (m.find("CnImageDownloadUrl") != m.end() && !m["CnImageDownloadUrl"].empty()) {
      cnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["CnImageDownloadUrl"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CustomForceUpgrade") != m.end() && !m["CustomForceUpgrade"].empty()) {
      customForceUpgrade = make_shared<bool>(boost::any_cast<bool>(m["CustomForceUpgrade"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("EnImageDownloadUrl") != m.end() && !m["EnImageDownloadUrl"].empty()) {
      enImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["EnImageDownloadUrl"]));
    }
    if (m.find("ForceUpgrade") != m.end() && !m["ForceUpgrade"].empty()) {
      forceUpgrade = make_shared<long>(boost::any_cast<long>(m["ForceUpgrade"]));
    }
    if (m.find("IsAppDownloadUrl") != m.end() && !m["IsAppDownloadUrl"].empty()) {
      isAppDownloadUrl = make_shared<bool>(boost::any_cast<bool>(m["IsAppDownloadUrl"]));
    }
    if (m.find("LocalDownloadUrl") != m.end() && !m["LocalDownloadUrl"].empty()) {
      localDownloadUrl = make_shared<string>(boost::any_cast<string>(m["LocalDownloadUrl"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("MultiCnImageDownloadUrl") != m.end() && !m["MultiCnImageDownloadUrl"].empty()) {
      multiCnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["MultiCnImageDownloadUrl"]));
    }
    if (m.find("MultiEnImageDownloadUrl") != m.end() && !m["MultiEnImageDownloadUrl"].empty()) {
      multiEnImageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["MultiEnImageDownloadUrl"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("ReleaseNoteEn") != m.end() && !m["ReleaseNoteEn"].empty()) {
      releaseNoteEn = make_shared<string>(boost::any_cast<string>(m["ReleaseNoteEn"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
    if (m.find("VersionType") != m.end() && !m["VersionType"].empty()) {
      versionType = make_shared<string>(boost::any_cast<string>(m["VersionType"]));
    }
  }


  virtual ~GetDeviceOtaInfoResponseBodyDataVersion() = default;
};
class GetDeviceOtaInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetDeviceOtaInfoResponseBodyDataVersion> version{};

  GetDeviceOtaInfoResponseBodyData() {}

  explicit GetDeviceOtaInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = version ? boost::any(version->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      if (typeid(map<string, boost::any>) == m["Version"].type()) {
        GetDeviceOtaInfoResponseBodyDataVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Version"]));
        version = make_shared<GetDeviceOtaInfoResponseBodyDataVersion>(model1);
      }
    }
  }


  virtual ~GetDeviceOtaInfoResponseBodyData() = default;
};
class GetDeviceOtaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceOtaInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDeviceOtaInfoResponseBody() {}

  explicit GetDeviceOtaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDeviceOtaInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDeviceOtaInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeviceOtaInfoResponseBody() = default;
};
class GetDeviceOtaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceOtaInfoResponseBody> body{};

  GetDeviceOtaInfoResponse() {}

  explicit GetDeviceOtaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceOtaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceOtaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceOtaInfoResponse() = default;
};
class GetDeviceOtaInfoTestRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseVersion{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> model{};
  shared_ptr<string> tenantId{};

  GetDeviceOtaInfoTestRequest() {}

  explicit GetDeviceOtaInfoTestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseVersion) {
      res["BaseVersion"] = boost::any(*baseVersion);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseVersion") != m.end() && !m["BaseVersion"].empty()) {
      baseVersion = make_shared<string>(boost::any_cast<string>(m["BaseVersion"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetDeviceOtaInfoTestRequest() = default;
};
class GetDeviceOtaInfoTestResponseBodyDataVersion : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<long> forceUpgrade{};
  shared_ptr<string> localDownloadUrl{};
  shared_ptr<string> md5{};
  shared_ptr<string> model{};
  shared_ptr<string> releaseNote{};
  shared_ptr<long> size{};
  shared_ptr<string> version{};
  shared_ptr<string> versionCode{};
  shared_ptr<string> versionType{};

  GetDeviceOtaInfoTestResponseBodyDataVersion() {}

  explicit GetDeviceOtaInfoTestResponseBodyDataVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (forceUpgrade) {
      res["ForceUpgrade"] = boost::any(*forceUpgrade);
    }
    if (localDownloadUrl) {
      res["LocalDownloadUrl"] = boost::any(*localDownloadUrl);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    if (versionType) {
      res["VersionType"] = boost::any(*versionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("ForceUpgrade") != m.end() && !m["ForceUpgrade"].empty()) {
      forceUpgrade = make_shared<long>(boost::any_cast<long>(m["ForceUpgrade"]));
    }
    if (m.find("LocalDownloadUrl") != m.end() && !m["LocalDownloadUrl"].empty()) {
      localDownloadUrl = make_shared<string>(boost::any_cast<string>(m["LocalDownloadUrl"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
    if (m.find("VersionType") != m.end() && !m["VersionType"].empty()) {
      versionType = make_shared<string>(boost::any_cast<string>(m["VersionType"]));
    }
  }


  virtual ~GetDeviceOtaInfoTestResponseBodyDataVersion() = default;
};
class GetDeviceOtaInfoTestResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetDeviceOtaInfoTestResponseBodyDataVersion> version{};

  GetDeviceOtaInfoTestResponseBodyData() {}

  explicit GetDeviceOtaInfoTestResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = version ? boost::any(version->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      if (typeid(map<string, boost::any>) == m["Version"].type()) {
        GetDeviceOtaInfoTestResponseBodyDataVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Version"]));
        version = make_shared<GetDeviceOtaInfoTestResponseBodyDataVersion>(model1);
      }
    }
  }


  virtual ~GetDeviceOtaInfoTestResponseBodyData() = default;
};
class GetDeviceOtaInfoTestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceOtaInfoTestResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDeviceOtaInfoTestResponseBody() {}

  explicit GetDeviceOtaInfoTestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDeviceOtaInfoTestResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDeviceOtaInfoTestResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeviceOtaInfoTestResponseBody() = default;
};
class GetDeviceOtaInfoTestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceOtaInfoTestResponseBody> body{};

  GetDeviceOtaInfoTestResponse() {}

  explicit GetDeviceOtaInfoTestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceOtaInfoTestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceOtaInfoTestResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceOtaInfoTestResponse() = default;
};
class GetDeviceOtaTaskVersionInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetDeviceOtaTaskVersionInfoRequest() {}

  explicit GetDeviceOtaTaskVersionInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDeviceOtaTaskVersionInfoRequest() = default;
};
class GetDeviceOtaTaskVersionInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> releaseNote{};
  shared_ptr<long> size{};
  shared_ptr<string> version{};

  GetDeviceOtaTaskVersionInfoResponseBodyData() {}

  explicit GetDeviceOtaTaskVersionInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetDeviceOtaTaskVersionInfoResponseBodyData() = default;
};
class GetDeviceOtaTaskVersionInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceOtaTaskVersionInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDeviceOtaTaskVersionInfoResponseBody() {}

  explicit GetDeviceOtaTaskVersionInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDeviceOtaTaskVersionInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDeviceOtaTaskVersionInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeviceOtaTaskVersionInfoResponseBody() = default;
};
class GetDeviceOtaTaskVersionInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceOtaTaskVersionInfoResponseBody> body{};

  GetDeviceOtaTaskVersionInfoResponse() {}

  explicit GetDeviceOtaTaskVersionInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceOtaTaskVersionInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceOtaTaskVersionInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceOtaTaskVersionInfoResponse() = default;
};
class GetDeviceUpgradeStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> clientUid{};
  shared_ptr<string> project{};
  shared_ptr<string> taskUid{};

  GetDeviceUpgradeStatusRequest() {}

  explicit GetDeviceUpgradeStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (clientUid) {
      res["ClientUid"] = boost::any(*clientUid);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (taskUid) {
      res["TaskUid"] = boost::any(*taskUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ClientUid") != m.end() && !m["ClientUid"].empty()) {
      clientUid = make_shared<string>(boost::any_cast<string>(m["ClientUid"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TaskUid") != m.end() && !m["TaskUid"].empty()) {
      taskUid = make_shared<string>(boost::any_cast<string>(m["TaskUid"]));
    }
  }


  virtual ~GetDeviceUpgradeStatusRequest() = default;
};
class GetDeviceUpgradeStatusResponseBodyDataAppOtaStatusDTOList : public Darabonba::Model {
public:
  shared_ptr<string> baseVersion{};
  shared_ptr<long> clientType{};
  shared_ptr<string> clientUid{};
  shared_ptr<string> note{};
  shared_ptr<string> osType{};
  shared_ptr<string> project{};
  shared_ptr<long> status{};
  shared_ptr<string> targetVersion{};
  shared_ptr<string> taskUid{};

  GetDeviceUpgradeStatusResponseBodyDataAppOtaStatusDTOList() {}

  explicit GetDeviceUpgradeStatusResponseBodyDataAppOtaStatusDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseVersion) {
      res["BaseVersion"] = boost::any(*baseVersion);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clientUid) {
      res["ClientUid"] = boost::any(*clientUid);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetVersion) {
      res["TargetVersion"] = boost::any(*targetVersion);
    }
    if (taskUid) {
      res["TaskUid"] = boost::any(*taskUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseVersion") != m.end() && !m["BaseVersion"].empty()) {
      baseVersion = make_shared<string>(boost::any_cast<string>(m["BaseVersion"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("ClientUid") != m.end() && !m["ClientUid"].empty()) {
      clientUid = make_shared<string>(boost::any_cast<string>(m["ClientUid"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TargetVersion") != m.end() && !m["TargetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["TargetVersion"]));
    }
    if (m.find("TaskUid") != m.end() && !m["TaskUid"].empty()) {
      taskUid = make_shared<string>(boost::any_cast<string>(m["TaskUid"]));
    }
  }


  virtual ~GetDeviceUpgradeStatusResponseBodyDataAppOtaStatusDTOList() = default;
};
class GetDeviceUpgradeStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetDeviceUpgradeStatusResponseBodyDataAppOtaStatusDTOList>> appOtaStatusDTOList{};

  GetDeviceUpgradeStatusResponseBodyData() {}

  explicit GetDeviceUpgradeStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appOtaStatusDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*appOtaStatusDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppOtaStatusDTOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppOtaStatusDTOList") != m.end() && !m["AppOtaStatusDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["AppOtaStatusDTOList"].type()) {
        vector<GetDeviceUpgradeStatusResponseBodyDataAppOtaStatusDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppOtaStatusDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeviceUpgradeStatusResponseBodyDataAppOtaStatusDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appOtaStatusDTOList = make_shared<vector<GetDeviceUpgradeStatusResponseBodyDataAppOtaStatusDTOList>>(expect1);
      }
    }
  }


  virtual ~GetDeviceUpgradeStatusResponseBodyData() = default;
};
class GetDeviceUpgradeStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceUpgradeStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDeviceUpgradeStatusResponseBody() {}

  explicit GetDeviceUpgradeStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDeviceUpgradeStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDeviceUpgradeStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeviceUpgradeStatusResponseBody() = default;
};
class GetDeviceUpgradeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceUpgradeStatusResponseBody> body{};

  GetDeviceUpgradeStatusResponse() {}

  explicit GetDeviceUpgradeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceUpgradeStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceUpgradeStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceUpgradeStatusResponse() = default;
};
class GetExportDeviceInfoOssUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};

  GetExportDeviceInfoOssUrlRequest() {}

  explicit GetExportDeviceInfoOssUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~GetExportDeviceInfoOssUrlRequest() = default;
};
class GetExportDeviceInfoOssUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  GetExportDeviceInfoOssUrlResponseBodyData() {}

  explicit GetExportDeviceInfoOssUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetExportDeviceInfoOssUrlResponseBodyData() = default;
};
class GetExportDeviceInfoOssUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetExportDeviceInfoOssUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetExportDeviceInfoOssUrlResponseBody() {}

  explicit GetExportDeviceInfoOssUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetExportDeviceInfoOssUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetExportDeviceInfoOssUrlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetExportDeviceInfoOssUrlResponseBody() = default;
};
class GetExportDeviceInfoOssUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExportDeviceInfoOssUrlResponseBody> body{};

  GetExportDeviceInfoOssUrlResponse() {}

  explicit GetExportDeviceInfoOssUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExportDeviceInfoOssUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExportDeviceInfoOssUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetExportDeviceInfoOssUrlResponse() = default;
};
class GetFbOssConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> dirPrefix{};
  shared_ptr<long> isDedicatedLine{};
  shared_ptr<string> region{};

  GetFbOssConfigRequest() {}

  explicit GetFbOssConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dirPrefix) {
      res["DirPrefix"] = boost::any(*dirPrefix);
    }
    if (isDedicatedLine) {
      res["IsDedicatedLine"] = boost::any(*isDedicatedLine);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirPrefix") != m.end() && !m["DirPrefix"].empty()) {
      dirPrefix = make_shared<string>(boost::any_cast<string>(m["DirPrefix"]));
    }
    if (m.find("IsDedicatedLine") != m.end() && !m["IsDedicatedLine"].empty()) {
      isDedicatedLine = make_shared<long>(boost::any_cast<long>(m["IsDedicatedLine"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetFbOssConfigRequest() = default;
};
class GetFbOssConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> ossPolicy{};
  shared_ptr<string> ossSignature{};
  shared_ptr<string> sessionId{};

  GetFbOssConfigResponseBodyData() {}

  explicit GetFbOssConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (ossPolicy) {
      res["OssPolicy"] = boost::any(*ossPolicy);
    }
    if (ossSignature) {
      res["OssSignature"] = boost::any(*ossSignature);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("OssPolicy") != m.end() && !m["OssPolicy"].empty()) {
      ossPolicy = make_shared<string>(boost::any_cast<string>(m["OssPolicy"]));
    }
    if (m.find("OssSignature") != m.end() && !m["OssSignature"].empty()) {
      ossSignature = make_shared<string>(boost::any_cast<string>(m["OssSignature"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~GetFbOssConfigResponseBodyData() = default;
};
class GetFbOssConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetFbOssConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetFbOssConfigResponseBody() {}

  explicit GetFbOssConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetFbOssConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFbOssConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFbOssConfigResponseBody() = default;
};
class GetFbOssConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFbOssConfigResponseBody> body{};

  GetFbOssConfigResponse() {}

  explicit GetFbOssConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFbOssConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFbOssConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetFbOssConfigResponse() = default;
};
class GetOssConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> type{};

  GetOssConfigRequest() {}

  explicit GetOssConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~GetOssConfigRequest() = default;
};
class GetOssConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> ossPolicy{};
  shared_ptr<string> ossSignature{};
  shared_ptr<string> securityToken{};

  GetOssConfigResponseBodyData() {}

  explicit GetOssConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (ossPolicy) {
      res["OssPolicy"] = boost::any(*ossPolicy);
    }
    if (ossSignature) {
      res["OssSignature"] = boost::any(*ossSignature);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("OssPolicy") != m.end() && !m["OssPolicy"].empty()) {
      ossPolicy = make_shared<string>(boost::any_cast<string>(m["OssPolicy"]));
    }
    if (m.find("OssSignature") != m.end() && !m["OssSignature"].empty()) {
      ossSignature = make_shared<string>(boost::any_cast<string>(m["OssSignature"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetOssConfigResponseBodyData() = default;
};
class GetOssConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetOssConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetOssConfigResponseBody() {}

  explicit GetOssConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOssConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOssConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOssConfigResponseBody() = default;
};
class GetOssConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOssConfigResponseBody> body{};

  GetOssConfigResponse() {}

  explicit GetOssConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOssConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOssConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetOssConfigResponse() = default;
};
class GetVersionDownloadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> versionName{};

  GetVersionDownloadUrlRequest() {}

  explicit GetVersionDownloadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetVersionDownloadUrlRequest() = default;
};
class GetVersionDownloadUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fullDownloadUrl{};

  GetVersionDownloadUrlResponseBodyData() {}

  explicit GetVersionDownloadUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullDownloadUrl) {
      res["FullDownloadUrl"] = boost::any(*fullDownloadUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FullDownloadUrl") != m.end() && !m["FullDownloadUrl"].empty()) {
      fullDownloadUrl = make_shared<string>(boost::any_cast<string>(m["FullDownloadUrl"]));
    }
  }


  virtual ~GetVersionDownloadUrlResponseBodyData() = default;
};
class GetVersionDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetVersionDownloadUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVersionDownloadUrlResponseBody() {}

  explicit GetVersionDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetVersionDownloadUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetVersionDownloadUrlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVersionDownloadUrlResponseBody() = default;
};
class GetVersionDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVersionDownloadUrlResponseBody> body{};

  GetVersionDownloadUrlResponse() {}

  explicit GetVersionDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVersionDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVersionDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetVersionDownloadUrlResponse() = default;
};
class ListDeviceOtaTaskByTenantRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDeviceOtaTaskByTenantRequest() {}

  explicit ListDeviceOtaTaskByTenantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDeviceOtaTaskByTenantRequest() = default;
};
class ListDeviceOtaTaskByTenantResponseBodyDataTenantDeviceOtaTasks : public Darabonba::Model {
public:
  shared_ptr<string> model{};
  shared_ptr<long> operationStatus{};
  shared_ptr<string> publishTime{};
  shared_ptr<long> status{};
  shared_ptr<long> taskId{};
  shared_ptr<long> upgradeCount{};
  shared_ptr<string> version{};

  ListDeviceOtaTaskByTenantResponseBodyDataTenantDeviceOtaTasks() {}

  explicit ListDeviceOtaTaskByTenantResponseBodyDataTenantDeviceOtaTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (operationStatus) {
      res["OperationStatus"] = boost::any(*operationStatus);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (upgradeCount) {
      res["UpgradeCount"] = boost::any(*upgradeCount);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OperationStatus") != m.end() && !m["OperationStatus"].empty()) {
      operationStatus = make_shared<long>(boost::any_cast<long>(m["OperationStatus"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("UpgradeCount") != m.end() && !m["UpgradeCount"].empty()) {
      upgradeCount = make_shared<long>(boost::any_cast<long>(m["UpgradeCount"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListDeviceOtaTaskByTenantResponseBodyDataTenantDeviceOtaTasks() = default;
};
class ListDeviceOtaTaskByTenantResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeviceOtaTaskByTenantResponseBodyDataTenantDeviceOtaTasks>> tenantDeviceOtaTasks{};

  ListDeviceOtaTaskByTenantResponseBodyData() {}

  explicit ListDeviceOtaTaskByTenantResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantDeviceOtaTasks) {
      vector<boost::any> temp1;
      for(auto item1:*tenantDeviceOtaTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TenantDeviceOtaTasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantDeviceOtaTasks") != m.end() && !m["TenantDeviceOtaTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["TenantDeviceOtaTasks"].type()) {
        vector<ListDeviceOtaTaskByTenantResponseBodyDataTenantDeviceOtaTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TenantDeviceOtaTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceOtaTaskByTenantResponseBodyDataTenantDeviceOtaTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tenantDeviceOtaTasks = make_shared<vector<ListDeviceOtaTaskByTenantResponseBodyDataTenantDeviceOtaTasks>>(expect1);
      }
    }
  }


  virtual ~ListDeviceOtaTaskByTenantResponseBodyData() = default;
};
class ListDeviceOtaTaskByTenantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDeviceOtaTaskByTenantResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDeviceOtaTaskByTenantResponseBody() {}

  explicit ListDeviceOtaTaskByTenantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDeviceOtaTaskByTenantResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDeviceOtaTaskByTenantResponseBodyData>(model1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDeviceOtaTaskByTenantResponseBody() = default;
};
class ListDeviceOtaTaskByTenantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceOtaTaskByTenantResponseBody> body{};

  ListDeviceOtaTaskByTenantResponse() {}

  explicit ListDeviceOtaTaskByTenantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceOtaTaskByTenantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceOtaTaskByTenantResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceOtaTaskByTenantResponse() = default;
};
class ListDeviceSeatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> seatNo{};
  shared_ptr<vector<string>> serialNoList{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> zoneId{};

  ListDeviceSeatsRequest() {}

  explicit ListDeviceSeatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (seatNo) {
      res["SeatNo"] = boost::any(*seatNo);
    }
    if (serialNoList) {
      res["SerialNoList"] = boost::any(*serialNoList);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("SeatNo") != m.end() && !m["SeatNo"].empty()) {
      seatNo = make_shared<string>(boost::any_cast<string>(m["SeatNo"]));
    }
    if (m.find("SerialNoList") != m.end() && !m["SerialNoList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SerialNoList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SerialNoList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serialNoList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListDeviceSeatsRequest() = default;
};
class ListDeviceSeatsResponseBodyDataDeviceSeatDTOList : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> seatName{};
  shared_ptr<string> seatNo{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> siteId{};
  shared_ptr<string> siteName{};
  shared_ptr<string> zoneId{};

  ListDeviceSeatsResponseBodyDataDeviceSeatDTOList() {}

  explicit ListDeviceSeatsResponseBodyDataDeviceSeatDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (seatName) {
      res["SeatName"] = boost::any(*seatName);
    }
    if (seatNo) {
      res["SeatNo"] = boost::any(*seatNo);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (siteId) {
      res["SiteId"] = boost::any(*siteId);
    }
    if (siteName) {
      res["SiteName"] = boost::any(*siteName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("SeatName") != m.end() && !m["SeatName"].empty()) {
      seatName = make_shared<string>(boost::any_cast<string>(m["SeatName"]));
    }
    if (m.find("SeatNo") != m.end() && !m["SeatNo"].empty()) {
      seatNo = make_shared<string>(boost::any_cast<string>(m["SeatNo"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("SiteId") != m.end() && !m["SiteId"].empty()) {
      siteId = make_shared<string>(boost::any_cast<string>(m["SiteId"]));
    }
    if (m.find("SiteName") != m.end() && !m["SiteName"].empty()) {
      siteName = make_shared<string>(boost::any_cast<string>(m["SiteName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListDeviceSeatsResponseBodyDataDeviceSeatDTOList() = default;
};
class ListDeviceSeatsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeviceSeatsResponseBodyDataDeviceSeatDTOList>> deviceSeatDTOList{};
  shared_ptr<long> totalCount{};

  ListDeviceSeatsResponseBodyData() {}

  explicit ListDeviceSeatsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceSeatDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceSeatDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceSeatDTOList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceSeatDTOList") != m.end() && !m["DeviceSeatDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceSeatDTOList"].type()) {
        vector<ListDeviceSeatsResponseBodyDataDeviceSeatDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceSeatDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceSeatsResponseBodyDataDeviceSeatDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceSeatDTOList = make_shared<vector<ListDeviceSeatsResponseBodyDataDeviceSeatDTOList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDeviceSeatsResponseBodyData() = default;
};
class ListDeviceSeatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDeviceSeatsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListDeviceSeatsResponseBody() {}

  explicit ListDeviceSeatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDeviceSeatsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDeviceSeatsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeviceSeatsResponseBody() = default;
};
class ListDeviceSeatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceSeatsResponseBody> body{};

  ListDeviceSeatsResponse() {}

  explicit ListDeviceSeatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceSeatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceSeatsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceSeatsResponse() = default;
};
class ListDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> buildId{};
  shared_ptr<long> clientType{};
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceIpV4{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceOS{};
  shared_ptr<string> devicePlatform{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> labelContent{};
  shared_ptr<string> labelId{};
  shared_ptr<string> locationInfo{};
  shared_ptr<string> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> userType{};
  shared_ptr<string> uuid{};

  ListDevicesRequest() {}

  explicit ListDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceIpV4) {
      res["DeviceIpV4"] = boost::any(*deviceIpV4);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceOS) {
      res["DeviceOS"] = boost::any(*deviceOS);
    }
    if (devicePlatform) {
      res["DevicePlatform"] = boost::any(*devicePlatform);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (labelContent) {
      res["LabelContent"] = boost::any(*labelContent);
    }
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    if (locationInfo) {
      res["LocationInfo"] = boost::any(*locationInfo);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceIpV4") != m.end() && !m["DeviceIpV4"].empty()) {
      deviceIpV4 = make_shared<string>(boost::any_cast<string>(m["DeviceIpV4"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceOS") != m.end() && !m["DeviceOS"].empty()) {
      deviceOS = make_shared<string>(boost::any_cast<string>(m["DeviceOS"]));
    }
    if (m.find("DevicePlatform") != m.end() && !m["DevicePlatform"].empty()) {
      devicePlatform = make_shared<string>(boost::any_cast<string>(m["DevicePlatform"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LabelContent") != m.end() && !m["LabelContent"].empty()) {
      labelContent = make_shared<string>(boost::any_cast<string>(m["LabelContent"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
    if (m.find("LocationInfo") != m.end() && !m["LocationInfo"].empty()) {
      locationInfo = make_shared<string>(boost::any_cast<string>(m["LocationInfo"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListDevicesRequest() = default;
};
class ListDevicesResponseBodyDataConnectConfigs : public Darabonba::Model {
public:
  shared_ptr<string> connectScript{};
  shared_ptr<string> peripheralPid{};
  shared_ptr<string> peripheralVid{};
  shared_ptr<long> redirectPolicy{};

  ListDevicesResponseBodyDataConnectConfigs() {}

  explicit ListDevicesResponseBodyDataConnectConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectScript) {
      res["ConnectScript"] = boost::any(*connectScript);
    }
    if (peripheralPid) {
      res["PeripheralPid"] = boost::any(*peripheralPid);
    }
    if (peripheralVid) {
      res["PeripheralVid"] = boost::any(*peripheralVid);
    }
    if (redirectPolicy) {
      res["RedirectPolicy"] = boost::any(*redirectPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectScript") != m.end() && !m["ConnectScript"].empty()) {
      connectScript = make_shared<string>(boost::any_cast<string>(m["ConnectScript"]));
    }
    if (m.find("PeripheralPid") != m.end() && !m["PeripheralPid"].empty()) {
      peripheralPid = make_shared<string>(boost::any_cast<string>(m["PeripheralPid"]));
    }
    if (m.find("PeripheralVid") != m.end() && !m["PeripheralVid"].empty()) {
      peripheralVid = make_shared<string>(boost::any_cast<string>(m["PeripheralVid"]));
    }
    if (m.find("RedirectPolicy") != m.end() && !m["RedirectPolicy"].empty()) {
      redirectPolicy = make_shared<long>(boost::any_cast<long>(m["RedirectPolicy"]));
    }
  }


  virtual ~ListDevicesResponseBodyDataConnectConfigs() = default;
};
class ListDevicesResponseBodyDataCustomResourcePackage : public Darabonba::Model {
public:
  shared_ptr<string> configAboutLogo{};
  shared_ptr<string> desktopWallpaper{};
  shared_ptr<string> loginPageBackground{};
  shared_ptr<string> loginPageLogo{};
  shared_ptr<string> personalCenterLogo{};
  shared_ptr<string> startLogo{};
  shared_ptr<string> startMenuLogo{};
  shared_ptr<string> upgradeLogo{};

  ListDevicesResponseBodyDataCustomResourcePackage() {}

  explicit ListDevicesResponseBodyDataCustomResourcePackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configAboutLogo) {
      res["ConfigAboutLogo"] = boost::any(*configAboutLogo);
    }
    if (desktopWallpaper) {
      res["DesktopWallpaper"] = boost::any(*desktopWallpaper);
    }
    if (loginPageBackground) {
      res["LoginPageBackground"] = boost::any(*loginPageBackground);
    }
    if (loginPageLogo) {
      res["LoginPageLogo"] = boost::any(*loginPageLogo);
    }
    if (personalCenterLogo) {
      res["PersonalCenterLogo"] = boost::any(*personalCenterLogo);
    }
    if (startLogo) {
      res["StartLogo"] = boost::any(*startLogo);
    }
    if (startMenuLogo) {
      res["StartMenuLogo"] = boost::any(*startMenuLogo);
    }
    if (upgradeLogo) {
      res["UpgradeLogo"] = boost::any(*upgradeLogo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigAboutLogo") != m.end() && !m["ConfigAboutLogo"].empty()) {
      configAboutLogo = make_shared<string>(boost::any_cast<string>(m["ConfigAboutLogo"]));
    }
    if (m.find("DesktopWallpaper") != m.end() && !m["DesktopWallpaper"].empty()) {
      desktopWallpaper = make_shared<string>(boost::any_cast<string>(m["DesktopWallpaper"]));
    }
    if (m.find("LoginPageBackground") != m.end() && !m["LoginPageBackground"].empty()) {
      loginPageBackground = make_shared<string>(boost::any_cast<string>(m["LoginPageBackground"]));
    }
    if (m.find("LoginPageLogo") != m.end() && !m["LoginPageLogo"].empty()) {
      loginPageLogo = make_shared<string>(boost::any_cast<string>(m["LoginPageLogo"]));
    }
    if (m.find("PersonalCenterLogo") != m.end() && !m["PersonalCenterLogo"].empty()) {
      personalCenterLogo = make_shared<string>(boost::any_cast<string>(m["PersonalCenterLogo"]));
    }
    if (m.find("StartLogo") != m.end() && !m["StartLogo"].empty()) {
      startLogo = make_shared<string>(boost::any_cast<string>(m["StartLogo"]));
    }
    if (m.find("StartMenuLogo") != m.end() && !m["StartMenuLogo"].empty()) {
      startMenuLogo = make_shared<string>(boost::any_cast<string>(m["StartMenuLogo"]));
    }
    if (m.find("UpgradeLogo") != m.end() && !m["UpgradeLogo"].empty()) {
      upgradeLogo = make_shared<string>(boost::any_cast<string>(m["UpgradeLogo"]));
    }
  }


  virtual ~ListDevicesResponseBodyDataCustomResourcePackage() = default;
};
class ListDevicesResponseBodyDataEndUserList : public Darabonba::Model {
public:
  shared_ptr<string> adDomain{};
  shared_ptr<string> bindTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> endUserId{};
  shared_ptr<long> id{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userType{};

  ListDevicesResponseBodyDataEndUserList() {}

  explicit ListDevicesResponseBodyDataEndUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (bindTime) {
      res["BindTime"] = boost::any(*bindTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("BindTime") != m.end() && !m["BindTime"].empty()) {
      bindTime = make_shared<string>(boost::any_cast<string>(m["BindTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~ListDevicesResponseBodyDataEndUserList() = default;
};
class ListDevicesResponseBodyDataLabelList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> labelId{};
  shared_ptr<string> tenantId{};

  ListDevicesResponseBodyDataLabelList() {}

  explicit ListDevicesResponseBodyDataLabelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListDevicesResponseBodyDataLabelList() = default;
};
class ListDevicesResponseBodyDataPeripheralConfig : public Darabonba::Model {
public:
  shared_ptr<long> defaultPolicy{};
  shared_ptr<long> policyStrategy{};
  shared_ptr<long> usbAndInternalCamera{};
  shared_ptr<long> usbPrinter{};
  shared_ptr<long> usbStorage{};

  ListDevicesResponseBodyDataPeripheralConfig() {}

  explicit ListDevicesResponseBodyDataPeripheralConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultPolicy) {
      res["DefaultPolicy"] = boost::any(*defaultPolicy);
    }
    if (policyStrategy) {
      res["PolicyStrategy"] = boost::any(*policyStrategy);
    }
    if (usbAndInternalCamera) {
      res["UsbAndInternalCamera"] = boost::any(*usbAndInternalCamera);
    }
    if (usbPrinter) {
      res["UsbPrinter"] = boost::any(*usbPrinter);
    }
    if (usbStorage) {
      res["UsbStorage"] = boost::any(*usbStorage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultPolicy") != m.end() && !m["DefaultPolicy"].empty()) {
      defaultPolicy = make_shared<long>(boost::any_cast<long>(m["DefaultPolicy"]));
    }
    if (m.find("PolicyStrategy") != m.end() && !m["PolicyStrategy"].empty()) {
      policyStrategy = make_shared<long>(boost::any_cast<long>(m["PolicyStrategy"]));
    }
    if (m.find("UsbAndInternalCamera") != m.end() && !m["UsbAndInternalCamera"].empty()) {
      usbAndInternalCamera = make_shared<long>(boost::any_cast<long>(m["UsbAndInternalCamera"]));
    }
    if (m.find("UsbPrinter") != m.end() && !m["UsbPrinter"].empty()) {
      usbPrinter = make_shared<long>(boost::any_cast<long>(m["UsbPrinter"]));
    }
    if (m.find("UsbStorage") != m.end() && !m["UsbStorage"].empty()) {
      usbStorage = make_shared<long>(boost::any_cast<long>(m["UsbStorage"]));
    }
  }


  virtual ~ListDevicesResponseBodyDataPeripheralConfig() = default;
};
class ListDevicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> activeTime{};
  shared_ptr<string> alias{};
  shared_ptr<long> autoLockScreenTime{};
  shared_ptr<long> autoLogin{};
  shared_ptr<string> autoType{};
  shared_ptr<string> bluetooth{};
  shared_ptr<string> buildId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientType{};
  shared_ptr<vector<ListDevicesResponseBodyDataConnectConfigs>> connectConfigs{};
  shared_ptr<long> customIdleAction{};
  shared_ptr<long> customPowerOn{};
  shared_ptr<string> customProperty{};
  shared_ptr<ListDevicesResponseBodyDataCustomResourcePackage> customResourcePackage{};
  shared_ptr<long> definePowerButton{};
  shared_ptr<string> deviceIpV4{};
  shared_ptr<long> deviceLock{};
  shared_ptr<long> deviceMqttConnectionStatus{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceOS{};
  shared_ptr<string> devicePlatform{};
  shared_ptr<string> displayLayout{};
  shared_ptr<string> displayResolution{};
  shared_ptr<string> displayScaleRatio{};
  shared_ptr<long> enableAdb{};
  shared_ptr<long> enableAutoLockScreen{};
  shared_ptr<long> enableBluetooth{};
  shared_ptr<long> enableLockScreenPassword{};
  shared_ptr<long> enableModifyPassword{};
  shared_ptr<long> enableScheduledPowerOff{};
  shared_ptr<long> enableUnlockPassword{};
  shared_ptr<long> enableWlan{};
  shared_ptr<vector<ListDevicesResponseBodyDataEndUserList>> endUserList{};
  shared_ptr<string> etherMac{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> gmtSync{};
  shared_ptr<long> id{};
  shared_ptr<long> idleTime{};
  shared_ptr<string> isActive{};
  shared_ptr<vector<ListDevicesResponseBodyDataLabelList>> labelList{};
  shared_ptr<string> lastLoginUser{};
  shared_ptr<long> localUsbPrint{};
  shared_ptr<string> locationInfo{};
  shared_ptr<string> lockPassword{};
  shared_ptr<string> model{};
  shared_ptr<string> orderId{};
  shared_ptr<ListDevicesResponseBodyDataPeripheralConfig> peripheralConfig{};
  shared_ptr<string> scheduledPowerOff{};
  shared_ptr<string> secureNetworkType{};
  shared_ptr<string> serialNo{};
  shared_ptr<long> sleepTime{};
  shared_ptr<string> source{};
  shared_ptr<string> tenantId{};
  shared_ptr<long> usbStorage{};
  shared_ptr<string> uuid{};
  shared_ptr<string> wlan{};

  ListDevicesResponseBodyData() {}

  explicit ListDevicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeTime) {
      res["ActiveTime"] = boost::any(*activeTime);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (autoLockScreenTime) {
      res["AutoLockScreenTime"] = boost::any(*autoLockScreenTime);
    }
    if (autoLogin) {
      res["AutoLogin"] = boost::any(*autoLogin);
    }
    if (autoType) {
      res["AutoType"] = boost::any(*autoType);
    }
    if (bluetooth) {
      res["Bluetooth"] = boost::any(*bluetooth);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (connectConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*connectConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectConfigs"] = boost::any(temp1);
    }
    if (customIdleAction) {
      res["CustomIdleAction"] = boost::any(*customIdleAction);
    }
    if (customPowerOn) {
      res["CustomPowerOn"] = boost::any(*customPowerOn);
    }
    if (customProperty) {
      res["CustomProperty"] = boost::any(*customProperty);
    }
    if (customResourcePackage) {
      res["CustomResourcePackage"] = customResourcePackage ? boost::any(customResourcePackage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (definePowerButton) {
      res["DefinePowerButton"] = boost::any(*definePowerButton);
    }
    if (deviceIpV4) {
      res["DeviceIpV4"] = boost::any(*deviceIpV4);
    }
    if (deviceLock) {
      res["DeviceLock"] = boost::any(*deviceLock);
    }
    if (deviceMqttConnectionStatus) {
      res["DeviceMqttConnectionStatus"] = boost::any(*deviceMqttConnectionStatus);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceOS) {
      res["DeviceOS"] = boost::any(*deviceOS);
    }
    if (devicePlatform) {
      res["DevicePlatform"] = boost::any(*devicePlatform);
    }
    if (displayLayout) {
      res["DisplayLayout"] = boost::any(*displayLayout);
    }
    if (displayResolution) {
      res["DisplayResolution"] = boost::any(*displayResolution);
    }
    if (displayScaleRatio) {
      res["DisplayScaleRatio"] = boost::any(*displayScaleRatio);
    }
    if (enableAdb) {
      res["EnableAdb"] = boost::any(*enableAdb);
    }
    if (enableAutoLockScreen) {
      res["EnableAutoLockScreen"] = boost::any(*enableAutoLockScreen);
    }
    if (enableBluetooth) {
      res["EnableBluetooth"] = boost::any(*enableBluetooth);
    }
    if (enableLockScreenPassword) {
      res["EnableLockScreenPassword"] = boost::any(*enableLockScreenPassword);
    }
    if (enableModifyPassword) {
      res["EnableModifyPassword"] = boost::any(*enableModifyPassword);
    }
    if (enableScheduledPowerOff) {
      res["EnableScheduledPowerOff"] = boost::any(*enableScheduledPowerOff);
    }
    if (enableUnlockPassword) {
      res["EnableUnlockPassword"] = boost::any(*enableUnlockPassword);
    }
    if (enableWlan) {
      res["EnableWlan"] = boost::any(*enableWlan);
    }
    if (endUserList) {
      vector<boost::any> temp1;
      for(auto item1:*endUserList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndUserList"] = boost::any(temp1);
    }
    if (etherMac) {
      res["EtherMac"] = boost::any(*etherMac);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (gmtSync) {
      res["GmtSync"] = boost::any(*gmtSync);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idleTime) {
      res["IdleTime"] = boost::any(*idleTime);
    }
    if (isActive) {
      res["IsActive"] = boost::any(*isActive);
    }
    if (labelList) {
      vector<boost::any> temp1;
      for(auto item1:*labelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelList"] = boost::any(temp1);
    }
    if (lastLoginUser) {
      res["LastLoginUser"] = boost::any(*lastLoginUser);
    }
    if (localUsbPrint) {
      res["LocalUsbPrint"] = boost::any(*localUsbPrint);
    }
    if (locationInfo) {
      res["LocationInfo"] = boost::any(*locationInfo);
    }
    if (lockPassword) {
      res["LockPassword"] = boost::any(*lockPassword);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (peripheralConfig) {
      res["PeripheralConfig"] = peripheralConfig ? boost::any(peripheralConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduledPowerOff) {
      res["ScheduledPowerOff"] = boost::any(*scheduledPowerOff);
    }
    if (secureNetworkType) {
      res["SecureNetworkType"] = boost::any(*secureNetworkType);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (sleepTime) {
      res["SleepTime"] = boost::any(*sleepTime);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (usbStorage) {
      res["UsbStorage"] = boost::any(*usbStorage);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    if (wlan) {
      res["Wlan"] = boost::any(*wlan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveTime") != m.end() && !m["ActiveTime"].empty()) {
      activeTime = make_shared<string>(boost::any_cast<string>(m["ActiveTime"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("AutoLockScreenTime") != m.end() && !m["AutoLockScreenTime"].empty()) {
      autoLockScreenTime = make_shared<long>(boost::any_cast<long>(m["AutoLockScreenTime"]));
    }
    if (m.find("AutoLogin") != m.end() && !m["AutoLogin"].empty()) {
      autoLogin = make_shared<long>(boost::any_cast<long>(m["AutoLogin"]));
    }
    if (m.find("AutoType") != m.end() && !m["AutoType"].empty()) {
      autoType = make_shared<string>(boost::any_cast<string>(m["AutoType"]));
    }
    if (m.find("Bluetooth") != m.end() && !m["Bluetooth"].empty()) {
      bluetooth = make_shared<string>(boost::any_cast<string>(m["Bluetooth"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ConnectConfigs") != m.end() && !m["ConnectConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectConfigs"].type()) {
        vector<ListDevicesResponseBodyDataConnectConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevicesResponseBodyDataConnectConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectConfigs = make_shared<vector<ListDevicesResponseBodyDataConnectConfigs>>(expect1);
      }
    }
    if (m.find("CustomIdleAction") != m.end() && !m["CustomIdleAction"].empty()) {
      customIdleAction = make_shared<long>(boost::any_cast<long>(m["CustomIdleAction"]));
    }
    if (m.find("CustomPowerOn") != m.end() && !m["CustomPowerOn"].empty()) {
      customPowerOn = make_shared<long>(boost::any_cast<long>(m["CustomPowerOn"]));
    }
    if (m.find("CustomProperty") != m.end() && !m["CustomProperty"].empty()) {
      customProperty = make_shared<string>(boost::any_cast<string>(m["CustomProperty"]));
    }
    if (m.find("CustomResourcePackage") != m.end() && !m["CustomResourcePackage"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomResourcePackage"].type()) {
        ListDevicesResponseBodyDataCustomResourcePackage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomResourcePackage"]));
        customResourcePackage = make_shared<ListDevicesResponseBodyDataCustomResourcePackage>(model1);
      }
    }
    if (m.find("DefinePowerButton") != m.end() && !m["DefinePowerButton"].empty()) {
      definePowerButton = make_shared<long>(boost::any_cast<long>(m["DefinePowerButton"]));
    }
    if (m.find("DeviceIpV4") != m.end() && !m["DeviceIpV4"].empty()) {
      deviceIpV4 = make_shared<string>(boost::any_cast<string>(m["DeviceIpV4"]));
    }
    if (m.find("DeviceLock") != m.end() && !m["DeviceLock"].empty()) {
      deviceLock = make_shared<long>(boost::any_cast<long>(m["DeviceLock"]));
    }
    if (m.find("DeviceMqttConnectionStatus") != m.end() && !m["DeviceMqttConnectionStatus"].empty()) {
      deviceMqttConnectionStatus = make_shared<long>(boost::any_cast<long>(m["DeviceMqttConnectionStatus"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceOS") != m.end() && !m["DeviceOS"].empty()) {
      deviceOS = make_shared<string>(boost::any_cast<string>(m["DeviceOS"]));
    }
    if (m.find("DevicePlatform") != m.end() && !m["DevicePlatform"].empty()) {
      devicePlatform = make_shared<string>(boost::any_cast<string>(m["DevicePlatform"]));
    }
    if (m.find("DisplayLayout") != m.end() && !m["DisplayLayout"].empty()) {
      displayLayout = make_shared<string>(boost::any_cast<string>(m["DisplayLayout"]));
    }
    if (m.find("DisplayResolution") != m.end() && !m["DisplayResolution"].empty()) {
      displayResolution = make_shared<string>(boost::any_cast<string>(m["DisplayResolution"]));
    }
    if (m.find("DisplayScaleRatio") != m.end() && !m["DisplayScaleRatio"].empty()) {
      displayScaleRatio = make_shared<string>(boost::any_cast<string>(m["DisplayScaleRatio"]));
    }
    if (m.find("EnableAdb") != m.end() && !m["EnableAdb"].empty()) {
      enableAdb = make_shared<long>(boost::any_cast<long>(m["EnableAdb"]));
    }
    if (m.find("EnableAutoLockScreen") != m.end() && !m["EnableAutoLockScreen"].empty()) {
      enableAutoLockScreen = make_shared<long>(boost::any_cast<long>(m["EnableAutoLockScreen"]));
    }
    if (m.find("EnableBluetooth") != m.end() && !m["EnableBluetooth"].empty()) {
      enableBluetooth = make_shared<long>(boost::any_cast<long>(m["EnableBluetooth"]));
    }
    if (m.find("EnableLockScreenPassword") != m.end() && !m["EnableLockScreenPassword"].empty()) {
      enableLockScreenPassword = make_shared<long>(boost::any_cast<long>(m["EnableLockScreenPassword"]));
    }
    if (m.find("EnableModifyPassword") != m.end() && !m["EnableModifyPassword"].empty()) {
      enableModifyPassword = make_shared<long>(boost::any_cast<long>(m["EnableModifyPassword"]));
    }
    if (m.find("EnableScheduledPowerOff") != m.end() && !m["EnableScheduledPowerOff"].empty()) {
      enableScheduledPowerOff = make_shared<long>(boost::any_cast<long>(m["EnableScheduledPowerOff"]));
    }
    if (m.find("EnableUnlockPassword") != m.end() && !m["EnableUnlockPassword"].empty()) {
      enableUnlockPassword = make_shared<long>(boost::any_cast<long>(m["EnableUnlockPassword"]));
    }
    if (m.find("EnableWlan") != m.end() && !m["EnableWlan"].empty()) {
      enableWlan = make_shared<long>(boost::any_cast<long>(m["EnableWlan"]));
    }
    if (m.find("EndUserList") != m.end() && !m["EndUserList"].empty()) {
      if (typeid(vector<boost::any>) == m["EndUserList"].type()) {
        vector<ListDevicesResponseBodyDataEndUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndUserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevicesResponseBodyDataEndUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endUserList = make_shared<vector<ListDevicesResponseBodyDataEndUserList>>(expect1);
      }
    }
    if (m.find("EtherMac") != m.end() && !m["EtherMac"].empty()) {
      etherMac = make_shared<string>(boost::any_cast<string>(m["EtherMac"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("GmtSync") != m.end() && !m["GmtSync"].empty()) {
      gmtSync = make_shared<string>(boost::any_cast<string>(m["GmtSync"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IdleTime") != m.end() && !m["IdleTime"].empty()) {
      idleTime = make_shared<long>(boost::any_cast<long>(m["IdleTime"]));
    }
    if (m.find("IsActive") != m.end() && !m["IsActive"].empty()) {
      isActive = make_shared<string>(boost::any_cast<string>(m["IsActive"]));
    }
    if (m.find("LabelList") != m.end() && !m["LabelList"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelList"].type()) {
        vector<ListDevicesResponseBodyDataLabelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevicesResponseBodyDataLabelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelList = make_shared<vector<ListDevicesResponseBodyDataLabelList>>(expect1);
      }
    }
    if (m.find("LastLoginUser") != m.end() && !m["LastLoginUser"].empty()) {
      lastLoginUser = make_shared<string>(boost::any_cast<string>(m["LastLoginUser"]));
    }
    if (m.find("LocalUsbPrint") != m.end() && !m["LocalUsbPrint"].empty()) {
      localUsbPrint = make_shared<long>(boost::any_cast<long>(m["LocalUsbPrint"]));
    }
    if (m.find("LocationInfo") != m.end() && !m["LocationInfo"].empty()) {
      locationInfo = make_shared<string>(boost::any_cast<string>(m["LocationInfo"]));
    }
    if (m.find("LockPassword") != m.end() && !m["LockPassword"].empty()) {
      lockPassword = make_shared<string>(boost::any_cast<string>(m["LockPassword"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PeripheralConfig") != m.end() && !m["PeripheralConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PeripheralConfig"].type()) {
        ListDevicesResponseBodyDataPeripheralConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PeripheralConfig"]));
        peripheralConfig = make_shared<ListDevicesResponseBodyDataPeripheralConfig>(model1);
      }
    }
    if (m.find("ScheduledPowerOff") != m.end() && !m["ScheduledPowerOff"].empty()) {
      scheduledPowerOff = make_shared<string>(boost::any_cast<string>(m["ScheduledPowerOff"]));
    }
    if (m.find("SecureNetworkType") != m.end() && !m["SecureNetworkType"].empty()) {
      secureNetworkType = make_shared<string>(boost::any_cast<string>(m["SecureNetworkType"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("SleepTime") != m.end() && !m["SleepTime"].empty()) {
      sleepTime = make_shared<long>(boost::any_cast<long>(m["SleepTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UsbStorage") != m.end() && !m["UsbStorage"].empty()) {
      usbStorage = make_shared<long>(boost::any_cast<long>(m["UsbStorage"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
    if (m.find("Wlan") != m.end() && !m["Wlan"].empty()) {
      wlan = make_shared<string>(boost::any_cast<string>(m["Wlan"]));
    }
  }


  virtual ~ListDevicesResponseBodyData() = default;
};
class ListDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListDevicesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDevicesResponseBody() {}

  explicit ListDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDevicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDevicesResponseBodyData>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDevicesResponseBody() = default;
};
class ListDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDevicesResponseBody> body{};

  ListDevicesResponse() {}

  explicit ListDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevicesResponse() = default;
};
class ListFbIssueLabelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> issueLabel{};

  ListFbIssueLabelsResponseBodyData() {}

  explicit ListFbIssueLabelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issueLabel) {
      res["IssueLabel"] = boost::any(*issueLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssueLabel") != m.end() && !m["IssueLabel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IssueLabel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IssueLabel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      issueLabel = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListFbIssueLabelsResponseBodyData() = default;
};
class ListFbIssueLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListFbIssueLabelsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListFbIssueLabelsResponseBody() {}

  explicit ListFbIssueLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListFbIssueLabelsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListFbIssueLabelsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFbIssueLabelsResponseBody() = default;
};
class ListFbIssueLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFbIssueLabelsResponseBody> body{};

  ListFbIssueLabelsResponse() {}

  explicit ListFbIssueLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFbIssueLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFbIssueLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFbIssueLabelsResponse() = default;
};
class ListFbIssueLabelsByLCRequest : public Darabonba::Model {
public:
  shared_ptr<string> caller{};
  shared_ptr<string> languageType{};

  ListFbIssueLabelsByLCRequest() {}

  explicit ListFbIssueLabelsByLCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (languageType) {
      res["LanguageType"] = boost::any(*languageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("LanguageType") != m.end() && !m["LanguageType"].empty()) {
      languageType = make_shared<string>(boost::any_cast<string>(m["LanguageType"]));
    }
  }


  virtual ~ListFbIssueLabelsByLCRequest() = default;
};
class ListFbIssueLabelsByLCResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> issueLabel{};

  ListFbIssueLabelsByLCResponseBodyData() {}

  explicit ListFbIssueLabelsByLCResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issueLabel) {
      res["IssueLabel"] = boost::any(*issueLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssueLabel") != m.end() && !m["IssueLabel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IssueLabel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IssueLabel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      issueLabel = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListFbIssueLabelsByLCResponseBodyData() = default;
};
class ListFbIssueLabelsByLCResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListFbIssueLabelsByLCResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListFbIssueLabelsByLCResponseBody() {}

  explicit ListFbIssueLabelsByLCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListFbIssueLabelsByLCResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListFbIssueLabelsByLCResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFbIssueLabelsByLCResponseBody() = default;
};
class ListFbIssueLabelsByLCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFbIssueLabelsByLCResponseBody> body{};

  ListFbIssueLabelsByLCResponse() {}

  explicit ListFbIssueLabelsByLCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFbIssueLabelsByLCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFbIssueLabelsByLCResponseBody>(model1);
      }
    }
  }


  virtual ~ListFbIssueLabelsByLCResponse() = default;
};
class ListLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelContent{};
  shared_ptr<string> labelId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListLabelsRequest() {}

  explicit ListLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelContent) {
      res["LabelContent"] = boost::any(*labelContent);
    }
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelContent") != m.end() && !m["LabelContent"].empty()) {
      labelContent = make_shared<string>(boost::any_cast<string>(m["LabelContent"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListLabelsRequest() = default;
};
class ListLabelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> labelId{};
  shared_ptr<string> tenantId{};

  ListLabelsResponseBodyData() {}

  explicit ListLabelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
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
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListLabelsResponseBodyData() = default;
};
class ListLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListLabelsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListLabelsResponseBody() {}

  explicit ListLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListLabelsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLabelsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListLabelsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListLabelsResponseBody() = default;
};
class ListLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLabelsResponseBody> body{};

  ListLabelsResponse() {}

  explicit ListLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLabelsResponse() = default;
};
class ListTenantDeviceOtaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> taskId{};

  ListTenantDeviceOtaInfoRequest() {}

  explicit ListTenantDeviceOtaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~ListTenantDeviceOtaInfoRequest() = default;
};
class ListTenantDeviceOtaInfoResponseBodyDataTenantDeviceOtaInfos : public Darabonba::Model {
public:
  shared_ptr<string> currentVersion{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> model{};

  ListTenantDeviceOtaInfoResponseBodyDataTenantDeviceOtaInfos() {}

  explicit ListTenantDeviceOtaInfoResponseBodyDataTenantDeviceOtaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentVersion) {
      res["CurrentVersion"] = boost::any(*currentVersion);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentVersion") != m.end() && !m["CurrentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["CurrentVersion"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
  }


  virtual ~ListTenantDeviceOtaInfoResponseBodyDataTenantDeviceOtaInfos() = default;
};
class ListTenantDeviceOtaInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTenantDeviceOtaInfoResponseBodyDataTenantDeviceOtaInfos>> tenantDeviceOtaInfos{};

  ListTenantDeviceOtaInfoResponseBodyData() {}

  explicit ListTenantDeviceOtaInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantDeviceOtaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*tenantDeviceOtaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TenantDeviceOtaInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantDeviceOtaInfos") != m.end() && !m["TenantDeviceOtaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["TenantDeviceOtaInfos"].type()) {
        vector<ListTenantDeviceOtaInfoResponseBodyDataTenantDeviceOtaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TenantDeviceOtaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTenantDeviceOtaInfoResponseBodyDataTenantDeviceOtaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tenantDeviceOtaInfos = make_shared<vector<ListTenantDeviceOtaInfoResponseBodyDataTenantDeviceOtaInfos>>(expect1);
      }
    }
  }


  virtual ~ListTenantDeviceOtaInfoResponseBodyData() = default;
};
class ListTenantDeviceOtaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTenantDeviceOtaInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListTenantDeviceOtaInfoResponseBody() {}

  explicit ListTenantDeviceOtaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTenantDeviceOtaInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTenantDeviceOtaInfoResponseBodyData>(model1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTenantDeviceOtaInfoResponseBody() = default;
};
class ListTenantDeviceOtaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTenantDeviceOtaInfoResponseBody> body{};

  ListTenantDeviceOtaInfoResponse() {}

  explicit ListTenantDeviceOtaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTenantDeviceOtaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTenantDeviceOtaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListTenantDeviceOtaInfoResponse() = default;
};
class ListTerminalRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> buildId{};
  shared_ptr<long> clientType{};
  shared_ptr<bool> inManage{};
  shared_ptr<string> ipv4{};
  shared_ptr<string> locationInfo{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> model{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> searchKeyword{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> terminalGroupId{};
  shared_ptr<string> uuid{};

  ListTerminalRequest() {}

  explicit ListTerminalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (inManage) {
      res["InManage"] = boost::any(*inManage);
    }
    if (ipv4) {
      res["Ipv4"] = boost::any(*ipv4);
    }
    if (locationInfo) {
      res["LocationInfo"] = boost::any(*locationInfo);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (searchKeyword) {
      res["SearchKeyword"] = boost::any(*searchKeyword);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (terminalGroupId) {
      res["TerminalGroupId"] = boost::any(*terminalGroupId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("InManage") != m.end() && !m["InManage"].empty()) {
      inManage = make_shared<bool>(boost::any_cast<bool>(m["InManage"]));
    }
    if (m.find("Ipv4") != m.end() && !m["Ipv4"].empty()) {
      ipv4 = make_shared<string>(boost::any_cast<string>(m["Ipv4"]));
    }
    if (m.find("LocationInfo") != m.end() && !m["LocationInfo"].empty()) {
      locationInfo = make_shared<string>(boost::any_cast<string>(m["LocationInfo"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("SearchKeyword") != m.end() && !m["SearchKeyword"].empty()) {
      searchKeyword = make_shared<string>(boost::any_cast<string>(m["SearchKeyword"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("TerminalGroupId") != m.end() && !m["TerminalGroupId"].empty()) {
      terminalGroupId = make_shared<string>(boost::any_cast<string>(m["TerminalGroupId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListTerminalRequest() = default;
};
class ListTerminalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<long> bindUserCount{};
  shared_ptr<string> bindUserId{};
  shared_ptr<string> buildId{};
  shared_ptr<long> clientType{};
  shared_ptr<string> desktopId{};
  shared_ptr<bool> inManage{};
  shared_ptr<string> ipv4{};
  shared_ptr<string> lastLoginUser{};
  shared_ptr<string> locationInfo{};
  shared_ptr<bool> lockSettings{};
  shared_ptr<string> loginUser{};
  shared_ptr<string> model{};
  shared_ptr<bool> onlineStatus{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> terminalGroupId{};
  shared_ptr<string> uuid{};

  ListTerminalResponseBodyData() {}

  explicit ListTerminalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (bindUserCount) {
      res["BindUserCount"] = boost::any(*bindUserCount);
    }
    if (bindUserId) {
      res["BindUserId"] = boost::any(*bindUserId);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (inManage) {
      res["InManage"] = boost::any(*inManage);
    }
    if (ipv4) {
      res["Ipv4"] = boost::any(*ipv4);
    }
    if (lastLoginUser) {
      res["LastLoginUser"] = boost::any(*lastLoginUser);
    }
    if (locationInfo) {
      res["LocationInfo"] = boost::any(*locationInfo);
    }
    if (lockSettings) {
      res["LockSettings"] = boost::any(*lockSettings);
    }
    if (loginUser) {
      res["LoginUser"] = boost::any(*loginUser);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (terminalGroupId) {
      res["TerminalGroupId"] = boost::any(*terminalGroupId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("BindUserCount") != m.end() && !m["BindUserCount"].empty()) {
      bindUserCount = make_shared<long>(boost::any_cast<long>(m["BindUserCount"]));
    }
    if (m.find("BindUserId") != m.end() && !m["BindUserId"].empty()) {
      bindUserId = make_shared<string>(boost::any_cast<string>(m["BindUserId"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("InManage") != m.end() && !m["InManage"].empty()) {
      inManage = make_shared<bool>(boost::any_cast<bool>(m["InManage"]));
    }
    if (m.find("Ipv4") != m.end() && !m["Ipv4"].empty()) {
      ipv4 = make_shared<string>(boost::any_cast<string>(m["Ipv4"]));
    }
    if (m.find("LastLoginUser") != m.end() && !m["LastLoginUser"].empty()) {
      lastLoginUser = make_shared<string>(boost::any_cast<string>(m["LastLoginUser"]));
    }
    if (m.find("LocationInfo") != m.end() && !m["LocationInfo"].empty()) {
      locationInfo = make_shared<string>(boost::any_cast<string>(m["LocationInfo"]));
    }
    if (m.find("LockSettings") != m.end() && !m["LockSettings"].empty()) {
      lockSettings = make_shared<bool>(boost::any_cast<bool>(m["LockSettings"]));
    }
    if (m.find("LoginUser") != m.end() && !m["LoginUser"].empty()) {
      loginUser = make_shared<string>(boost::any_cast<string>(m["LoginUser"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<bool>(boost::any_cast<bool>(m["OnlineStatus"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("TerminalGroupId") != m.end() && !m["TerminalGroupId"].empty()) {
      terminalGroupId = make_shared<string>(boost::any_cast<string>(m["TerminalGroupId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListTerminalResponseBodyData() = default;
};
class ListTerminalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListTerminalResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListTerminalResponseBody() {}

  explicit ListTerminalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListTerminalResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTerminalResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTerminalResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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


  virtual ~ListTerminalResponseBody() = default;
};
class ListTerminalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTerminalResponseBody> body{};

  ListTerminalResponse() {}

  explicit ListTerminalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTerminalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTerminalResponseBody>(model1);
      }
    }
  }


  virtual ~ListTerminalResponse() = default;
};
class ListTerminalsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> searchKeyword{};
  shared_ptr<string> terminalGroupId{};

  ListTerminalsRequest() {}

  explicit ListTerminalsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (searchKeyword) {
      res["SearchKeyword"] = boost::any(*searchKeyword);
    }
    if (terminalGroupId) {
      res["TerminalGroupId"] = boost::any(*terminalGroupId);
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
    if (m.find("SearchKeyword") != m.end() && !m["SearchKeyword"].empty()) {
      searchKeyword = make_shared<string>(boost::any_cast<string>(m["SearchKeyword"]));
    }
    if (m.find("TerminalGroupId") != m.end() && !m["TerminalGroupId"].empty()) {
      terminalGroupId = make_shared<string>(boost::any_cast<string>(m["TerminalGroupId"]));
    }
  }


  virtual ~ListTerminalsRequest() = default;
};
class ListTerminalsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> buildId{};
  shared_ptr<long> clientType{};
  shared_ptr<string> currentConnectDesktop{};
  shared_ptr<string> currentLoginUser{};
  shared_ptr<string> ipv4{};
  shared_ptr<string> locationInfo{};
  shared_ptr<string> model{};
  shared_ptr<bool> online{};
  shared_ptr<string> passwordFreeLoginUser{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> terminalGroupId{};
  shared_ptr<string> uuid{};

  ListTerminalsResponseBodyData() {}

  explicit ListTerminalsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (currentConnectDesktop) {
      res["CurrentConnectDesktop"] = boost::any(*currentConnectDesktop);
    }
    if (currentLoginUser) {
      res["CurrentLoginUser"] = boost::any(*currentLoginUser);
    }
    if (ipv4) {
      res["Ipv4"] = boost::any(*ipv4);
    }
    if (locationInfo) {
      res["LocationInfo"] = boost::any(*locationInfo);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (passwordFreeLoginUser) {
      res["PasswordFreeLoginUser"] = boost::any(*passwordFreeLoginUser);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (terminalGroupId) {
      res["TerminalGroupId"] = boost::any(*terminalGroupId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("CurrentConnectDesktop") != m.end() && !m["CurrentConnectDesktop"].empty()) {
      currentConnectDesktop = make_shared<string>(boost::any_cast<string>(m["CurrentConnectDesktop"]));
    }
    if (m.find("CurrentLoginUser") != m.end() && !m["CurrentLoginUser"].empty()) {
      currentLoginUser = make_shared<string>(boost::any_cast<string>(m["CurrentLoginUser"]));
    }
    if (m.find("Ipv4") != m.end() && !m["Ipv4"].empty()) {
      ipv4 = make_shared<string>(boost::any_cast<string>(m["Ipv4"]));
    }
    if (m.find("LocationInfo") != m.end() && !m["LocationInfo"].empty()) {
      locationInfo = make_shared<string>(boost::any_cast<string>(m["LocationInfo"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("PasswordFreeLoginUser") != m.end() && !m["PasswordFreeLoginUser"].empty()) {
      passwordFreeLoginUser = make_shared<string>(boost::any_cast<string>(m["PasswordFreeLoginUser"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("TerminalGroupId") != m.end() && !m["TerminalGroupId"].empty()) {
      terminalGroupId = make_shared<string>(boost::any_cast<string>(m["TerminalGroupId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListTerminalsResponseBodyData() = default;
};
class ListTerminalsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListTerminalsResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListTerminalsResponseBody() {}

  explicit ListTerminalsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListTerminalsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTerminalsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTerminalsResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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


  virtual ~ListTerminalsResponseBody() = default;
};
class ListTerminalsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTerminalsResponseBody> body{};

  ListTerminalsResponse() {}

  explicit ListTerminalsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTerminalsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTerminalsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTerminalsResponse() = default;
};
class ListTrustDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelContent{};
  shared_ptr<string> labelId{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> userCustomId{};

  ListTrustDevicesRequest() {}

  explicit ListTrustDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelContent) {
      res["LabelContent"] = boost::any(*labelContent);
    }
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (userCustomId) {
      res["UserCustomId"] = boost::any(*userCustomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelContent") != m.end() && !m["LabelContent"].empty()) {
      labelContent = make_shared<string>(boost::any_cast<string>(m["LabelContent"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("UserCustomId") != m.end() && !m["UserCustomId"].empty()) {
      userCustomId = make_shared<string>(boost::any_cast<string>(m["UserCustomId"]));
    }
  }


  virtual ~ListTrustDevicesRequest() = default;
};
class ListTrustDevicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> model{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> uuid{};

  ListTrustDevicesResponseBodyData() {}

  explicit ListTrustDevicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListTrustDevicesResponseBodyData() = default;
};
class ListTrustDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListTrustDevicesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListTrustDevicesResponseBody() {}

  explicit ListTrustDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListTrustDevicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrustDevicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTrustDevicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTrustDevicesResponseBody() = default;
};
class ListTrustDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTrustDevicesResponseBody> body{};

  ListTrustDevicesResponse() {}

  explicit ListTrustDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTrustDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrustDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrustDevicesResponse() = default;
};
class ListUserFbAcIssuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> issueId{};
  shared_ptr<string> label{};
  shared_ptr<string> reservedA{};
  shared_ptr<string> reservedB{};
  shared_ptr<string> userEmail{};

  ListUserFbAcIssuesRequest() {}

  explicit ListUserFbAcIssuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (issueId) {
      res["IssueId"] = boost::any(*issueId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (reservedA) {
      res["ReservedA"] = boost::any(*reservedA);
    }
    if (reservedB) {
      res["ReservedB"] = boost::any(*reservedB);
    }
    if (userEmail) {
      res["UserEmail"] = boost::any(*userEmail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IssueId") != m.end() && !m["IssueId"].empty()) {
      issueId = make_shared<string>(boost::any_cast<string>(m["IssueId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("ReservedA") != m.end() && !m["ReservedA"].empty()) {
      reservedA = make_shared<string>(boost::any_cast<string>(m["ReservedA"]));
    }
    if (m.find("ReservedB") != m.end() && !m["ReservedB"].empty()) {
      reservedB = make_shared<string>(boost::any_cast<string>(m["ReservedB"]));
    }
    if (m.find("UserEmail") != m.end() && !m["UserEmail"].empty()) {
      userEmail = make_shared<string>(boost::any_cast<string>(m["UserEmail"]));
    }
  }


  virtual ~ListUserFbAcIssuesRequest() = default;
};
class ListUserFbAcIssuesResponseBodyDataIssueDataListFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<long> fileSize{};
  shared_ptr<long> fileType{};
  shared_ptr<string> sessionId{};

  ListUserFbAcIssuesResponseBodyDataIssueDataListFileList() {}

  explicit ListUserFbAcIssuesResponseBodyDataIssueDataListFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["FileType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~ListUserFbAcIssuesResponseBodyDataIssueDataListFileList() = default;
};
class ListUserFbAcIssuesResponseBodyDataIssueDataList : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListUserFbAcIssuesResponseBodyDataIssueDataListFileList>> fileList{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> issueId{};
  shared_ptr<string> label{};
  shared_ptr<string> reservedA{};
  shared_ptr<string> reservedB{};
  shared_ptr<string> userEmail{};

  ListUserFbAcIssuesResponseBodyDataIssueDataList() {}

  explicit ListUserFbAcIssuesResponseBodyDataIssueDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (issueId) {
      res["IssueId"] = boost::any(*issueId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (reservedA) {
      res["ReservedA"] = boost::any(*reservedA);
    }
    if (reservedB) {
      res["ReservedB"] = boost::any(*reservedB);
    }
    if (userEmail) {
      res["UserEmail"] = boost::any(*userEmail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<ListUserFbAcIssuesResponseBodyDataIssueDataListFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserFbAcIssuesResponseBodyDataIssueDataListFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<ListUserFbAcIssuesResponseBodyDataIssueDataListFileList>>(expect1);
      }
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IssueId") != m.end() && !m["IssueId"].empty()) {
      issueId = make_shared<long>(boost::any_cast<long>(m["IssueId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("ReservedA") != m.end() && !m["ReservedA"].empty()) {
      reservedA = make_shared<string>(boost::any_cast<string>(m["ReservedA"]));
    }
    if (m.find("ReservedB") != m.end() && !m["ReservedB"].empty()) {
      reservedB = make_shared<string>(boost::any_cast<string>(m["ReservedB"]));
    }
    if (m.find("UserEmail") != m.end() && !m["UserEmail"].empty()) {
      userEmail = make_shared<string>(boost::any_cast<string>(m["UserEmail"]));
    }
  }


  virtual ~ListUserFbAcIssuesResponseBodyDataIssueDataList() = default;
};
class ListUserFbAcIssuesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserFbAcIssuesResponseBodyDataIssueDataList>> issueDataList{};
  shared_ptr<long> totalCount{};

  ListUserFbAcIssuesResponseBodyData() {}

  explicit ListUserFbAcIssuesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issueDataList) {
      vector<boost::any> temp1;
      for(auto item1:*issueDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IssueDataList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssueDataList") != m.end() && !m["IssueDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["IssueDataList"].type()) {
        vector<ListUserFbAcIssuesResponseBodyDataIssueDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IssueDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserFbAcIssuesResponseBodyDataIssueDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        issueDataList = make_shared<vector<ListUserFbAcIssuesResponseBodyDataIssueDataList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListUserFbAcIssuesResponseBodyData() = default;
};
class ListUserFbAcIssuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListUserFbAcIssuesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListUserFbAcIssuesResponseBody() {}

  explicit ListUserFbAcIssuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListUserFbAcIssuesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListUserFbAcIssuesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserFbAcIssuesResponseBody() = default;
};
class ListUserFbAcIssuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserFbAcIssuesResponseBody> body{};

  ListUserFbAcIssuesResponse() {}

  explicit ListUserFbAcIssuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserFbAcIssuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserFbAcIssuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserFbAcIssuesResponse() = default;
};
class ListUserFbIssuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientModel{};
  shared_ptr<string> clientSn{};
  shared_ptr<string> customerId{};
  shared_ptr<string> description{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> fbType{};
  shared_ptr<long> issueId{};
  shared_ptr<string> issueLabel{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userEmail{};
  shared_ptr<string> userId{};
  shared_ptr<long> wasRead{};

  ListUserFbIssuesRequest() {}

  explicit ListUserFbIssuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientModel) {
      res["ClientModel"] = boost::any(*clientModel);
    }
    if (clientSn) {
      res["ClientSn"] = boost::any(*clientSn);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (fbType) {
      res["FbType"] = boost::any(*fbType);
    }
    if (issueId) {
      res["IssueId"] = boost::any(*issueId);
    }
    if (issueLabel) {
      res["IssueLabel"] = boost::any(*issueLabel);
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
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userEmail) {
      res["UserEmail"] = boost::any(*userEmail);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (wasRead) {
      res["WasRead"] = boost::any(*wasRead);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientModel") != m.end() && !m["ClientModel"].empty()) {
      clientModel = make_shared<string>(boost::any_cast<string>(m["ClientModel"]));
    }
    if (m.find("ClientSn") != m.end() && !m["ClientSn"].empty()) {
      clientSn = make_shared<string>(boost::any_cast<string>(m["ClientSn"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FbType") != m.end() && !m["FbType"].empty()) {
      fbType = make_shared<long>(boost::any_cast<long>(m["FbType"]));
    }
    if (m.find("IssueId") != m.end() && !m["IssueId"].empty()) {
      issueId = make_shared<long>(boost::any_cast<long>(m["IssueId"]));
    }
    if (m.find("IssueLabel") != m.end() && !m["IssueLabel"].empty()) {
      issueLabel = make_shared<string>(boost::any_cast<string>(m["IssueLabel"]));
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
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserEmail") != m.end() && !m["UserEmail"].empty()) {
      userEmail = make_shared<string>(boost::any_cast<string>(m["UserEmail"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WasRead") != m.end() && !m["WasRead"].empty()) {
      wasRead = make_shared<long>(boost::any_cast<long>(m["WasRead"]));
    }
  }


  virtual ~ListUserFbIssuesRequest() = default;
};
class ListUserFbIssuesResponseBodyDataFeedbackIssueDataFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileMd5{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileSize{};
  shared_ptr<long> fileType{};
  shared_ptr<string> ossUrl{};

  ListUserFbIssuesResponseBodyDataFeedbackIssueDataFileList() {}

  explicit ListUserFbIssuesResponseBodyDataFeedbackIssueDataFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileMd5) {
      res["FileMd5"] = boost::any(*fileMd5);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (ossUrl) {
      res["OssUrl"] = boost::any(*ossUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileMd5") != m.end() && !m["FileMd5"].empty()) {
      fileMd5 = make_shared<string>(boost::any_cast<string>(m["FileMd5"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["FileType"]));
    }
    if (m.find("OssUrl") != m.end() && !m["OssUrl"].empty()) {
      ossUrl = make_shared<string>(boost::any_cast<string>(m["OssUrl"]));
    }
  }


  virtual ~ListUserFbIssuesResponseBodyDataFeedbackIssueDataFileList() = default;
};
class ListUserFbIssuesResponseBodyDataFeedbackIssueData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientModel{};
  shared_ptr<string> clientSn{};
  shared_ptr<string> customerId{};
  shared_ptr<string> description{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> fbType{};
  shared_ptr<vector<ListUserFbIssuesResponseBodyDataFeedbackIssueDataFileList>> fileList{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<long> issueId{};
  shared_ptr<string> issueLabel{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userEmail{};
  shared_ptr<string> userId{};

  ListUserFbIssuesResponseBodyDataFeedbackIssueData() {}

  explicit ListUserFbIssuesResponseBodyDataFeedbackIssueData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientModel) {
      res["ClientModel"] = boost::any(*clientModel);
    }
    if (clientSn) {
      res["ClientSn"] = boost::any(*clientSn);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (fbType) {
      res["FbType"] = boost::any(*fbType);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (issueId) {
      res["IssueId"] = boost::any(*issueId);
    }
    if (issueLabel) {
      res["IssueLabel"] = boost::any(*issueLabel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userEmail) {
      res["UserEmail"] = boost::any(*userEmail);
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
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientModel") != m.end() && !m["ClientModel"].empty()) {
      clientModel = make_shared<string>(boost::any_cast<string>(m["ClientModel"]));
    }
    if (m.find("ClientSn") != m.end() && !m["ClientSn"].empty()) {
      clientSn = make_shared<string>(boost::any_cast<string>(m["ClientSn"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FbType") != m.end() && !m["FbType"].empty()) {
      fbType = make_shared<long>(boost::any_cast<long>(m["FbType"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<ListUserFbIssuesResponseBodyDataFeedbackIssueDataFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserFbIssuesResponseBodyDataFeedbackIssueDataFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<ListUserFbIssuesResponseBodyDataFeedbackIssueDataFileList>>(expect1);
      }
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("IssueId") != m.end() && !m["IssueId"].empty()) {
      issueId = make_shared<long>(boost::any_cast<long>(m["IssueId"]));
    }
    if (m.find("IssueLabel") != m.end() && !m["IssueLabel"].empty()) {
      issueLabel = make_shared<string>(boost::any_cast<string>(m["IssueLabel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserEmail") != m.end() && !m["UserEmail"].empty()) {
      userEmail = make_shared<string>(boost::any_cast<string>(m["UserEmail"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListUserFbIssuesResponseBodyDataFeedbackIssueData() = default;
};
class ListUserFbIssuesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<vector<ListUserFbIssuesResponseBodyDataFeedbackIssueData>> feedbackIssueData{};

  ListUserFbIssuesResponseBodyData() {}

  explicit ListUserFbIssuesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (feedbackIssueData) {
      vector<boost::any> temp1;
      for(auto item1:*feedbackIssueData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeedbackIssueData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("FeedbackIssueData") != m.end() && !m["FeedbackIssueData"].empty()) {
      if (typeid(vector<boost::any>) == m["FeedbackIssueData"].type()) {
        vector<ListUserFbIssuesResponseBodyDataFeedbackIssueData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeedbackIssueData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserFbIssuesResponseBodyDataFeedbackIssueData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        feedbackIssueData = make_shared<vector<ListUserFbIssuesResponseBodyDataFeedbackIssueData>>(expect1);
      }
    }
  }


  virtual ~ListUserFbIssuesResponseBodyData() = default;
};
class ListUserFbIssuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListUserFbIssuesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListUserFbIssuesResponseBody() {}

  explicit ListUserFbIssuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListUserFbIssuesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListUserFbIssuesResponseBodyData>(model1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListUserFbIssuesResponseBody() = default;
};
class ListUserFbIssuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserFbIssuesResponseBody> body{};

  ListUserFbIssuesResponse() {}

  explicit ListUserFbIssuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserFbIssuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserFbIssuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserFbIssuesResponse() = default;
};
class ModifyDevicesSecureNetworkTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> allDevices{};
  shared_ptr<string> secureNetworkType{};
  shared_ptr<string> serialNos{};

  ModifyDevicesSecureNetworkTypeRequest() {}

  explicit ModifyDevicesSecureNetworkTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDevices) {
      res["AllDevices"] = boost::any(*allDevices);
    }
    if (secureNetworkType) {
      res["SecureNetworkType"] = boost::any(*secureNetworkType);
    }
    if (serialNos) {
      res["SerialNos"] = boost::any(*serialNos);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDevices") != m.end() && !m["AllDevices"].empty()) {
      allDevices = make_shared<long>(boost::any_cast<long>(m["AllDevices"]));
    }
    if (m.find("SecureNetworkType") != m.end() && !m["SecureNetworkType"].empty()) {
      secureNetworkType = make_shared<string>(boost::any_cast<string>(m["SecureNetworkType"]));
    }
    if (m.find("SerialNos") != m.end() && !m["SerialNos"].empty()) {
      serialNos = make_shared<string>(boost::any_cast<string>(m["SerialNos"]));
    }
  }


  virtual ~ModifyDevicesSecureNetworkTypeRequest() = default;
};
class ModifyDevicesSecureNetworkTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyDevicesSecureNetworkTypeResponseBody() {}

  explicit ModifyDevicesSecureNetworkTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDevicesSecureNetworkTypeResponseBody() = default;
};
class ModifyDevicesSecureNetworkTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDevicesSecureNetworkTypeResponseBody> body{};

  ModifyDevicesSecureNetworkTypeResponse() {}

  explicit ModifyDevicesSecureNetworkTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDevicesSecureNetworkTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDevicesSecureNetworkTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDevicesSecureNetworkTypeResponse() = default;
};
class ModifySecureNetworkTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> secureNetworkType{};
  shared_ptr<string> serialNo{};

  ModifySecureNetworkTypeRequest() {}

  explicit ModifySecureNetworkTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secureNetworkType) {
      res["SecureNetworkType"] = boost::any(*secureNetworkType);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecureNetworkType") != m.end() && !m["SecureNetworkType"].empty()) {
      secureNetworkType = make_shared<string>(boost::any_cast<string>(m["SecureNetworkType"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~ModifySecureNetworkTypeRequest() = default;
};
class ModifySecureNetworkTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifySecureNetworkTypeResponseBody() {}

  explicit ModifySecureNetworkTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifySecureNetworkTypeResponseBody() = default;
};
class ModifySecureNetworkTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySecureNetworkTypeResponseBody> body{};

  ModifySecureNetworkTypeResponse() {}

  explicit ModifySecureNetworkTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySecureNetworkTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecureNetworkTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecureNetworkTypeResponse() = default;
};
class RegisterDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> bluetooth{};
  shared_ptr<string> buildId{};
  shared_ptr<string> chipId{};
  shared_ptr<string> clientId{};
  shared_ptr<long> clientType{};
  shared_ptr<string> cpu{};
  shared_ptr<string> customId{};
  shared_ptr<string> etherMac{};
  shared_ptr<string> memory{};
  shared_ptr<string> model{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> storage{};
  shared_ptr<string> token{};
  shared_ptr<string> wlan{};

  RegisterDeviceRequest() {}

  explicit RegisterDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bluetooth) {
      res["Bluetooth"] = boost::any(*bluetooth);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (chipId) {
      res["ChipId"] = boost::any(*chipId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (etherMac) {
      res["EtherMac"] = boost::any(*etherMac);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (wlan) {
      res["Wlan"] = boost::any(*wlan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bluetooth") != m.end() && !m["Bluetooth"].empty()) {
      bluetooth = make_shared<string>(boost::any_cast<string>(m["Bluetooth"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("ChipId") != m.end() && !m["ChipId"].empty()) {
      chipId = make_shared<string>(boost::any_cast<string>(m["ChipId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("EtherMac") != m.end() && !m["EtherMac"].empty()) {
      etherMac = make_shared<string>(boost::any_cast<string>(m["EtherMac"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<string>(boost::any_cast<string>(m["Storage"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Wlan") != m.end() && !m["Wlan"].empty()) {
      wlan = make_shared<string>(boost::any_cast<string>(m["Wlan"]));
    }
  }


  virtual ~RegisterDeviceRequest() = default;
};
class RegisterDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uuid{};

  RegisterDeviceResponseBodyData() {}

  explicit RegisterDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~RegisterDeviceResponseBodyData() = default;
};
class RegisterDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RegisterDeviceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RegisterDeviceResponseBody() {}

  explicit RegisterDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RegisterDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RegisterDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterDeviceResponseBody() = default;
};
class RegisterDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterDeviceResponseBody> body{};

  RegisterDeviceResponse() {}

  explicit RegisterDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterDeviceResponse() = default;
};
class ReportAppOtaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseVersion{};
  shared_ptr<long> clientType{};
  shared_ptr<string> clientUid{};
  shared_ptr<string> note{};
  shared_ptr<string> osType{};
  shared_ptr<string> project{};
  shared_ptr<long> status{};
  shared_ptr<string> targetVersion{};
  shared_ptr<string> taskUid{};

  ReportAppOtaInfoRequest() {}

  explicit ReportAppOtaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseVersion) {
      res["BaseVersion"] = boost::any(*baseVersion);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clientUid) {
      res["ClientUid"] = boost::any(*clientUid);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetVersion) {
      res["TargetVersion"] = boost::any(*targetVersion);
    }
    if (taskUid) {
      res["TaskUid"] = boost::any(*taskUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseVersion") != m.end() && !m["BaseVersion"].empty()) {
      baseVersion = make_shared<string>(boost::any_cast<string>(m["BaseVersion"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("ClientUid") != m.end() && !m["ClientUid"].empty()) {
      clientUid = make_shared<string>(boost::any_cast<string>(m["ClientUid"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TargetVersion") != m.end() && !m["TargetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["TargetVersion"]));
    }
    if (m.find("TaskUid") != m.end() && !m["TaskUid"].empty()) {
      taskUid = make_shared<string>(boost::any_cast<string>(m["TaskUid"]));
    }
  }


  virtual ~ReportAppOtaInfoRequest() = default;
};
class ReportAppOtaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReportAppOtaInfoResponseBody() {}

  explicit ReportAppOtaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReportAppOtaInfoResponseBody() = default;
};
class ReportAppOtaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportAppOtaInfoResponseBody> body{};

  ReportAppOtaInfoResponse() {}

  explicit ReportAppOtaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportAppOtaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportAppOtaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ReportAppOtaInfoResponse() = default;
};
class ReportDeviceOtaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseVersion{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> model{};
  shared_ptr<string> note{};
  shared_ptr<long> status{};
  shared_ptr<string> targetVersion{};

  ReportDeviceOtaInfoRequest() {}

  explicit ReportDeviceOtaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseVersion) {
      res["BaseVersion"] = boost::any(*baseVersion);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetVersion) {
      res["TargetVersion"] = boost::any(*targetVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseVersion") != m.end() && !m["BaseVersion"].empty()) {
      baseVersion = make_shared<string>(boost::any_cast<string>(m["BaseVersion"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TargetVersion") != m.end() && !m["TargetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["TargetVersion"]));
    }
  }


  virtual ~ReportDeviceOtaInfoRequest() = default;
};
class ReportDeviceOtaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReportDeviceOtaInfoResponseBody() {}

  explicit ReportDeviceOtaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReportDeviceOtaInfoResponseBody() = default;
};
class ReportDeviceOtaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportDeviceOtaInfoResponseBody> body{};

  ReportDeviceOtaInfoResponse() {}

  explicit ReportDeviceOtaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportDeviceOtaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportDeviceOtaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ReportDeviceOtaInfoResponse() = default;
};
class ReportUserFbAcIssueRequestFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<long> fileSize{};
  shared_ptr<long> fileType{};
  shared_ptr<string> sessionId{};

  ReportUserFbAcIssueRequestFileList() {}

  explicit ReportUserFbAcIssueRequestFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["FileType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~ReportUserFbAcIssueRequestFileList() = default;
};
class ReportUserFbAcIssueRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> errorMsg{};
  shared_ptr<vector<ReportUserFbAcIssueRequestFileList>> fileList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> labels{};
  shared_ptr<string> reservedA{};
  shared_ptr<string> reservedB{};
  shared_ptr<string> userEmail{};

  ReportUserFbAcIssueRequest() {}

  explicit ReportUserFbAcIssueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (reservedA) {
      res["ReservedA"] = boost::any(*reservedA);
    }
    if (reservedB) {
      res["ReservedB"] = boost::any(*reservedB);
    }
    if (userEmail) {
      res["UserEmail"] = boost::any(*userEmail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<ReportUserFbAcIssueRequestFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReportUserFbAcIssueRequestFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<ReportUserFbAcIssueRequestFileList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("ReservedA") != m.end() && !m["ReservedA"].empty()) {
      reservedA = make_shared<string>(boost::any_cast<string>(m["ReservedA"]));
    }
    if (m.find("ReservedB") != m.end() && !m["ReservedB"].empty()) {
      reservedB = make_shared<string>(boost::any_cast<string>(m["ReservedB"]));
    }
    if (m.find("UserEmail") != m.end() && !m["UserEmail"].empty()) {
      userEmail = make_shared<string>(boost::any_cast<string>(m["UserEmail"]));
    }
  }


  virtual ~ReportUserFbAcIssueRequest() = default;
};
class ReportUserFbAcIssueShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> fileListShrink{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> labels{};
  shared_ptr<string> reservedA{};
  shared_ptr<string> reservedB{};
  shared_ptr<string> userEmail{};

  ReportUserFbAcIssueShrinkRequest() {}

  explicit ReportUserFbAcIssueShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (fileListShrink) {
      res["FileList"] = boost::any(*fileListShrink);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (reservedA) {
      res["ReservedA"] = boost::any(*reservedA);
    }
    if (reservedB) {
      res["ReservedB"] = boost::any(*reservedB);
    }
    if (userEmail) {
      res["UserEmail"] = boost::any(*userEmail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      fileListShrink = make_shared<string>(boost::any_cast<string>(m["FileList"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("ReservedA") != m.end() && !m["ReservedA"].empty()) {
      reservedA = make_shared<string>(boost::any_cast<string>(m["ReservedA"]));
    }
    if (m.find("ReservedB") != m.end() && !m["ReservedB"].empty()) {
      reservedB = make_shared<string>(boost::any_cast<string>(m["ReservedB"]));
    }
    if (m.find("UserEmail") != m.end() && !m["UserEmail"].empty()) {
      userEmail = make_shared<string>(boost::any_cast<string>(m["UserEmail"]));
    }
  }


  virtual ~ReportUserFbAcIssueShrinkRequest() = default;
};
class ReportUserFbAcIssueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> issueId{};

  ReportUserFbAcIssueResponseBodyData() {}

  explicit ReportUserFbAcIssueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issueId) {
      res["IssueId"] = boost::any(*issueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssueId") != m.end() && !m["IssueId"].empty()) {
      issueId = make_shared<long>(boost::any_cast<long>(m["IssueId"]));
    }
  }


  virtual ~ReportUserFbAcIssueResponseBodyData() = default;
};
class ReportUserFbAcIssueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ReportUserFbAcIssueResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReportUserFbAcIssueResponseBody() {}

  explicit ReportUserFbAcIssueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ReportUserFbAcIssueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReportUserFbAcIssueResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReportUserFbAcIssueResponseBody() = default;
};
class ReportUserFbAcIssueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportUserFbAcIssueResponseBody> body{};

  ReportUserFbAcIssueResponse() {}

  explicit ReportUserFbAcIssueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportUserFbAcIssueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportUserFbAcIssueResponseBody>(model1);
      }
    }
  }


  virtual ~ReportUserFbAcIssueResponse() = default;
};
class ReportUserFbIssueRequestFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileMd5{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileSize{};
  shared_ptr<long> fileType{};
  shared_ptr<string> ossUrl{};
  shared_ptr<string> sessionId{};

  ReportUserFbIssueRequestFileList() {}

  explicit ReportUserFbIssueRequestFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileMd5) {
      res["FileMd5"] = boost::any(*fileMd5);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (ossUrl) {
      res["OssUrl"] = boost::any(*ossUrl);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileMd5") != m.end() && !m["FileMd5"].empty()) {
      fileMd5 = make_shared<string>(boost::any_cast<string>(m["FileMd5"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["FileType"]));
    }
    if (m.find("OssUrl") != m.end() && !m["OssUrl"].empty()) {
      ossUrl = make_shared<string>(boost::any_cast<string>(m["OssUrl"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~ReportUserFbIssueRequestFileList() = default;
};
class ReportUserFbIssueRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientModel{};
  shared_ptr<string> clientOsName{};
  shared_ptr<string> clientSn{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> customerId{};
  shared_ptr<string> description{};
  shared_ptr<string> desktopId{};
  shared_ptr<long> desktopType{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> fbType{};
  shared_ptr<vector<ReportUserFbIssueRequestFileList>> fileList{};
  shared_ptr<string> issueLabel{};
  shared_ptr<long> occurTime{};
  shared_ptr<string> reservedA{};
  shared_ptr<string> reservedB{};
  shared_ptr<string> telNo{};
  shared_ptr<string> title{};
  shared_ptr<string> userEmail{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> wyId{};

  ReportUserFbIssueRequest() {}

  explicit ReportUserFbIssueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientModel) {
      res["ClientModel"] = boost::any(*clientModel);
    }
    if (clientOsName) {
      res["ClientOsName"] = boost::any(*clientOsName);
    }
    if (clientSn) {
      res["ClientSn"] = boost::any(*clientSn);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (fbType) {
      res["FbType"] = boost::any(*fbType);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (issueLabel) {
      res["IssueLabel"] = boost::any(*issueLabel);
    }
    if (occurTime) {
      res["OccurTime"] = boost::any(*occurTime);
    }
    if (reservedA) {
      res["ReservedA"] = boost::any(*reservedA);
    }
    if (reservedB) {
      res["ReservedB"] = boost::any(*reservedB);
    }
    if (telNo) {
      res["TelNo"] = boost::any(*telNo);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userEmail) {
      res["UserEmail"] = boost::any(*userEmail);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (wyId) {
      res["WyId"] = boost::any(*wyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientModel") != m.end() && !m["ClientModel"].empty()) {
      clientModel = make_shared<string>(boost::any_cast<string>(m["ClientModel"]));
    }
    if (m.find("ClientOsName") != m.end() && !m["ClientOsName"].empty()) {
      clientOsName = make_shared<string>(boost::any_cast<string>(m["ClientOsName"]));
    }
    if (m.find("ClientSn") != m.end() && !m["ClientSn"].empty()) {
      clientSn = make_shared<string>(boost::any_cast<string>(m["ClientSn"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<long>(boost::any_cast<long>(m["DesktopType"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FbType") != m.end() && !m["FbType"].empty()) {
      fbType = make_shared<long>(boost::any_cast<long>(m["FbType"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<ReportUserFbIssueRequestFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReportUserFbIssueRequestFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<ReportUserFbIssueRequestFileList>>(expect1);
      }
    }
    if (m.find("IssueLabel") != m.end() && !m["IssueLabel"].empty()) {
      issueLabel = make_shared<string>(boost::any_cast<string>(m["IssueLabel"]));
    }
    if (m.find("OccurTime") != m.end() && !m["OccurTime"].empty()) {
      occurTime = make_shared<long>(boost::any_cast<long>(m["OccurTime"]));
    }
    if (m.find("ReservedA") != m.end() && !m["ReservedA"].empty()) {
      reservedA = make_shared<string>(boost::any_cast<string>(m["ReservedA"]));
    }
    if (m.find("ReservedB") != m.end() && !m["ReservedB"].empty()) {
      reservedB = make_shared<string>(boost::any_cast<string>(m["ReservedB"]));
    }
    if (m.find("TelNo") != m.end() && !m["TelNo"].empty()) {
      telNo = make_shared<string>(boost::any_cast<string>(m["TelNo"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserEmail") != m.end() && !m["UserEmail"].empty()) {
      userEmail = make_shared<string>(boost::any_cast<string>(m["UserEmail"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WyId") != m.end() && !m["WyId"].empty()) {
      wyId = make_shared<string>(boost::any_cast<string>(m["WyId"]));
    }
  }


  virtual ~ReportUserFbIssueRequest() = default;
};
class ReportUserFbIssueShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientModel{};
  shared_ptr<string> clientOsName{};
  shared_ptr<string> clientSn{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> customerId{};
  shared_ptr<string> description{};
  shared_ptr<string> desktopId{};
  shared_ptr<long> desktopType{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> fbType{};
  shared_ptr<string> fileListShrink{};
  shared_ptr<string> issueLabel{};
  shared_ptr<long> occurTime{};
  shared_ptr<string> reservedA{};
  shared_ptr<string> reservedB{};
  shared_ptr<string> telNo{};
  shared_ptr<string> title{};
  shared_ptr<string> userEmail{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> wyId{};

  ReportUserFbIssueShrinkRequest() {}

  explicit ReportUserFbIssueShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientModel) {
      res["ClientModel"] = boost::any(*clientModel);
    }
    if (clientOsName) {
      res["ClientOsName"] = boost::any(*clientOsName);
    }
    if (clientSn) {
      res["ClientSn"] = boost::any(*clientSn);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (fbType) {
      res["FbType"] = boost::any(*fbType);
    }
    if (fileListShrink) {
      res["FileList"] = boost::any(*fileListShrink);
    }
    if (issueLabel) {
      res["IssueLabel"] = boost::any(*issueLabel);
    }
    if (occurTime) {
      res["OccurTime"] = boost::any(*occurTime);
    }
    if (reservedA) {
      res["ReservedA"] = boost::any(*reservedA);
    }
    if (reservedB) {
      res["ReservedB"] = boost::any(*reservedB);
    }
    if (telNo) {
      res["TelNo"] = boost::any(*telNo);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userEmail) {
      res["UserEmail"] = boost::any(*userEmail);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (wyId) {
      res["WyId"] = boost::any(*wyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientModel") != m.end() && !m["ClientModel"].empty()) {
      clientModel = make_shared<string>(boost::any_cast<string>(m["ClientModel"]));
    }
    if (m.find("ClientOsName") != m.end() && !m["ClientOsName"].empty()) {
      clientOsName = make_shared<string>(boost::any_cast<string>(m["ClientOsName"]));
    }
    if (m.find("ClientSn") != m.end() && !m["ClientSn"].empty()) {
      clientSn = make_shared<string>(boost::any_cast<string>(m["ClientSn"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<long>(boost::any_cast<long>(m["DesktopType"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FbType") != m.end() && !m["FbType"].empty()) {
      fbType = make_shared<long>(boost::any_cast<long>(m["FbType"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      fileListShrink = make_shared<string>(boost::any_cast<string>(m["FileList"]));
    }
    if (m.find("IssueLabel") != m.end() && !m["IssueLabel"].empty()) {
      issueLabel = make_shared<string>(boost::any_cast<string>(m["IssueLabel"]));
    }
    if (m.find("OccurTime") != m.end() && !m["OccurTime"].empty()) {
      occurTime = make_shared<long>(boost::any_cast<long>(m["OccurTime"]));
    }
    if (m.find("ReservedA") != m.end() && !m["ReservedA"].empty()) {
      reservedA = make_shared<string>(boost::any_cast<string>(m["ReservedA"]));
    }
    if (m.find("ReservedB") != m.end() && !m["ReservedB"].empty()) {
      reservedB = make_shared<string>(boost::any_cast<string>(m["ReservedB"]));
    }
    if (m.find("TelNo") != m.end() && !m["TelNo"].empty()) {
      telNo = make_shared<string>(boost::any_cast<string>(m["TelNo"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserEmail") != m.end() && !m["UserEmail"].empty()) {
      userEmail = make_shared<string>(boost::any_cast<string>(m["UserEmail"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WyId") != m.end() && !m["WyId"].empty()) {
      wyId = make_shared<string>(boost::any_cast<string>(m["WyId"]));
    }
  }


  virtual ~ReportUserFbIssueShrinkRequest() = default;
};
class ReportUserFbIssueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> issueId{};

  ReportUserFbIssueResponseBodyData() {}

  explicit ReportUserFbIssueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issueId) {
      res["IssueId"] = boost::any(*issueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssueId") != m.end() && !m["IssueId"].empty()) {
      issueId = make_shared<long>(boost::any_cast<long>(m["IssueId"]));
    }
  }


  virtual ~ReportUserFbIssueResponseBodyData() = default;
};
class ReportUserFbIssueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ReportUserFbIssueResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReportUserFbIssueResponseBody() {}

  explicit ReportUserFbIssueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ReportUserFbIssueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReportUserFbIssueResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReportUserFbIssueResponseBody() = default;
};
class ReportUserFbIssueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportUserFbIssueResponseBody> body{};

  ReportUserFbIssueResponse() {}

  explicit ReportUserFbIssueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportUserFbIssueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportUserFbIssueResponseBody>(model1);
      }
    }
  }


  virtual ~ReportUserFbIssueResponse() = default;
};
class SendOpsMessageToTerminalsRequest : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> opsAction{};
  shared_ptr<vector<string>> uuids{};
  shared_ptr<bool> waitForAck{};

  SendOpsMessageToTerminalsRequest() {}

  explicit SendOpsMessageToTerminalsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (opsAction) {
      res["OpsAction"] = boost::any(*opsAction);
    }
    if (uuids) {
      res["Uuids"] = boost::any(*uuids);
    }
    if (waitForAck) {
      res["WaitForAck"] = boost::any(*waitForAck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("OpsAction") != m.end() && !m["OpsAction"].empty()) {
      opsAction = make_shared<string>(boost::any_cast<string>(m["OpsAction"]));
    }
    if (m.find("Uuids") != m.end() && !m["Uuids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Uuids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Uuids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      uuids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WaitForAck") != m.end() && !m["WaitForAck"].empty()) {
      waitForAck = make_shared<bool>(boost::any_cast<bool>(m["WaitForAck"]));
    }
  }


  virtual ~SendOpsMessageToTerminalsRequest() = default;
};
class SendOpsMessageToTerminalsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendOpsMessageToTerminalsResponseBody() {}

  explicit SendOpsMessageToTerminalsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendOpsMessageToTerminalsResponseBody() = default;
};
class SendOpsMessageToTerminalsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendOpsMessageToTerminalsResponseBody> body{};

  SendOpsMessageToTerminalsResponse() {}

  explicit SendOpsMessageToTerminalsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendOpsMessageToTerminalsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendOpsMessageToTerminalsResponseBody>(model1);
      }
    }
  }


  virtual ~SendOpsMessageToTerminalsResponse() = default;
};
class SetDeviceOtaAutoStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoUpdate{};
  shared_ptr<string> autoUpdateTimeSchedule{};
  shared_ptr<long> clientType{};
  shared_ptr<long> forceUpgrade{};
  shared_ptr<string> status{};

  SetDeviceOtaAutoStatusRequest() {}

  explicit SetDeviceOtaAutoStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpdate) {
      res["AutoUpdate"] = boost::any(*autoUpdate);
    }
    if (autoUpdateTimeSchedule) {
      res["AutoUpdateTimeSchedule"] = boost::any(*autoUpdateTimeSchedule);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (forceUpgrade) {
      res["ForceUpgrade"] = boost::any(*forceUpgrade);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoUpdate") != m.end() && !m["AutoUpdate"].empty()) {
      autoUpdate = make_shared<long>(boost::any_cast<long>(m["AutoUpdate"]));
    }
    if (m.find("AutoUpdateTimeSchedule") != m.end() && !m["AutoUpdateTimeSchedule"].empty()) {
      autoUpdateTimeSchedule = make_shared<string>(boost::any_cast<string>(m["AutoUpdateTimeSchedule"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("ForceUpgrade") != m.end() && !m["ForceUpgrade"].empty()) {
      forceUpgrade = make_shared<long>(boost::any_cast<long>(m["ForceUpgrade"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SetDeviceOtaAutoStatusRequest() = default;
};
class SetDeviceOtaAutoStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetDeviceOtaAutoStatusResponseBody() {}

  explicit SetDeviceOtaAutoStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetDeviceOtaAutoStatusResponseBody() = default;
};
class SetDeviceOtaAutoStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDeviceOtaAutoStatusResponseBody> body{};

  SetDeviceOtaAutoStatusResponse() {}

  explicit SetDeviceOtaAutoStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDeviceOtaAutoStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDeviceOtaAutoStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetDeviceOtaAutoStatusResponse() = default;
};
class SetDeviceOtaTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> operationStatus{};
  shared_ptr<long> taskId{};

  SetDeviceOtaTaskStatusRequest() {}

  explicit SetDeviceOtaTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationStatus) {
      res["OperationStatus"] = boost::any(*operationStatus);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationStatus") != m.end() && !m["OperationStatus"].empty()) {
      operationStatus = make_shared<long>(boost::any_cast<long>(m["OperationStatus"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~SetDeviceOtaTaskStatusRequest() = default;
};
class SetDeviceOtaTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetDeviceOtaTaskStatusResponseBody() {}

  explicit SetDeviceOtaTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetDeviceOtaTaskStatusResponseBody() = default;
};
class SetDeviceOtaTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDeviceOtaTaskStatusResponseBody> body{};

  SetDeviceOtaTaskStatusResponse() {}

  explicit SetDeviceOtaTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDeviceOtaTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDeviceOtaTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetDeviceOtaTaskStatusResponse() = default;
};
class UnbindAccountLessLoginUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};
  shared_ptr<string> uuid{};

  UnbindAccountLessLoginUserRequest() {}

  explicit UnbindAccountLessLoginUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~UnbindAccountLessLoginUserRequest() = default;
};
class UnbindAccountLessLoginUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnbindAccountLessLoginUserResponseBody() {}

  explicit UnbindAccountLessLoginUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindAccountLessLoginUserResponseBody() = default;
};
class UnbindAccountLessLoginUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindAccountLessLoginUserResponseBody> body{};

  UnbindAccountLessLoginUserResponse() {}

  explicit UnbindAccountLessLoginUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindAccountLessLoginUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindAccountLessLoginUserResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindAccountLessLoginUserResponse() = default;
};
class UnbindDeviceSeatsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> serialNoList{};

  UnbindDeviceSeatsRequest() {}

  explicit UnbindDeviceSeatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNoList) {
      res["SerialNoList"] = boost::any(*serialNoList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNoList") != m.end() && !m["SerialNoList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SerialNoList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SerialNoList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serialNoList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UnbindDeviceSeatsRequest() = default;
};
class UnbindDeviceSeatsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> serialNoListShrink{};

  UnbindDeviceSeatsShrinkRequest() {}

  explicit UnbindDeviceSeatsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNoListShrink) {
      res["SerialNoList"] = boost::any(*serialNoListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNoList") != m.end() && !m["SerialNoList"].empty()) {
      serialNoListShrink = make_shared<string>(boost::any_cast<string>(m["SerialNoList"]));
    }
  }


  virtual ~UnbindDeviceSeatsShrinkRequest() = default;
};
class UnbindDeviceSeatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnbindDeviceSeatsResponseBody() {}

  explicit UnbindDeviceSeatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindDeviceSeatsResponseBody() = default;
};
class UnbindDeviceSeatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindDeviceSeatsResponseBody> body{};

  UnbindDeviceSeatsResponse() {}

  explicit UnbindDeviceSeatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindDeviceSeatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindDeviceSeatsResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindDeviceSeatsResponse() = default;
};
class UpdateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> uuid{};

  UpdateAliasRequest() {}

  explicit UpdateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~UpdateAliasRequest() = default;
};
class UpdateAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateAliasResponseBody() {}

  explicit UpdateAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAliasResponseBody() = default;
};
class UpdateAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAliasResponseBody> body{};

  UpdateAliasResponse() {}

  explicit UpdateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAliasResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAliasResponse() = default;
};
class UpdateDeviceBindedEndUserRequestSourceAdEndUsers : public Darabonba::Model {
public:
  shared_ptr<string> adDomain{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> endUserId{};

  UpdateDeviceBindedEndUserRequestSourceAdEndUsers() {}

  explicit UpdateDeviceBindedEndUserRequestSourceAdEndUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
  }


  virtual ~UpdateDeviceBindedEndUserRequestSourceAdEndUsers() = default;
};
class UpdateDeviceBindedEndUserRequestTargetAdEndUsers : public Darabonba::Model {
public:
  shared_ptr<string> adDomain{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> endUserId{};

  UpdateDeviceBindedEndUserRequestTargetAdEndUsers() {}

  explicit UpdateDeviceBindedEndUserRequestTargetAdEndUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
  }


  virtual ~UpdateDeviceBindedEndUserRequestTargetAdEndUsers() = default;
};
class UpdateDeviceBindedEndUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> serialNo{};
  shared_ptr<vector<UpdateDeviceBindedEndUserRequestSourceAdEndUsers>> sourceAdEndUsers{};
  shared_ptr<string> sourceEndUserIds{};
  shared_ptr<vector<UpdateDeviceBindedEndUserRequestTargetAdEndUsers>> targetAdEndUsers{};
  shared_ptr<string> targetEndUserIds{};
  shared_ptr<string> userType{};

  UpdateDeviceBindedEndUserRequest() {}

  explicit UpdateDeviceBindedEndUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (sourceAdEndUsers) {
      vector<boost::any> temp1;
      for(auto item1:*sourceAdEndUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceAdEndUsers"] = boost::any(temp1);
    }
    if (sourceEndUserIds) {
      res["SourceEndUserIds"] = boost::any(*sourceEndUserIds);
    }
    if (targetAdEndUsers) {
      vector<boost::any> temp1;
      for(auto item1:*targetAdEndUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TargetAdEndUsers"] = boost::any(temp1);
    }
    if (targetEndUserIds) {
      res["TargetEndUserIds"] = boost::any(*targetEndUserIds);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("SourceAdEndUsers") != m.end() && !m["SourceAdEndUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceAdEndUsers"].type()) {
        vector<UpdateDeviceBindedEndUserRequestSourceAdEndUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceAdEndUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDeviceBindedEndUserRequestSourceAdEndUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceAdEndUsers = make_shared<vector<UpdateDeviceBindedEndUserRequestSourceAdEndUsers>>(expect1);
      }
    }
    if (m.find("SourceEndUserIds") != m.end() && !m["SourceEndUserIds"].empty()) {
      sourceEndUserIds = make_shared<string>(boost::any_cast<string>(m["SourceEndUserIds"]));
    }
    if (m.find("TargetAdEndUsers") != m.end() && !m["TargetAdEndUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["TargetAdEndUsers"].type()) {
        vector<UpdateDeviceBindedEndUserRequestTargetAdEndUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TargetAdEndUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDeviceBindedEndUserRequestTargetAdEndUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetAdEndUsers = make_shared<vector<UpdateDeviceBindedEndUserRequestTargetAdEndUsers>>(expect1);
      }
    }
    if (m.find("TargetEndUserIds") != m.end() && !m["TargetEndUserIds"].empty()) {
      targetEndUserIds = make_shared<string>(boost::any_cast<string>(m["TargetEndUserIds"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~UpdateDeviceBindedEndUserRequest() = default;
};
class UpdateDeviceBindedEndUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateDeviceBindedEndUserResponseBody() {}

  explicit UpdateDeviceBindedEndUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDeviceBindedEndUserResponseBody() = default;
};
class UpdateDeviceBindedEndUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeviceBindedEndUserResponseBody> body{};

  UpdateDeviceBindedEndUserResponse() {}

  explicit UpdateDeviceBindedEndUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDeviceBindedEndUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeviceBindedEndUserResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeviceBindedEndUserResponse() = default;
};
class UpdateLabelRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelContent{};
  shared_ptr<string> labelId{};

  UpdateLabelRequest() {}

  explicit UpdateLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelContent) {
      res["LabelContent"] = boost::any(*labelContent);
    }
    if (labelId) {
      res["LabelId"] = boost::any(*labelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelContent") != m.end() && !m["LabelContent"].empty()) {
      labelContent = make_shared<string>(boost::any_cast<string>(m["LabelContent"]));
    }
    if (m.find("LabelId") != m.end() && !m["LabelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["LabelId"]));
    }
  }


  virtual ~UpdateLabelRequest() = default;
};
class UpdateLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateLabelResponseBody() {}

  explicit UpdateLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLabelResponseBody() = default;
};
class UpdateLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLabelResponseBody> body{};

  UpdateLabelResponse() {}

  explicit UpdateLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLabelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLabelResponse() = default;
};
class UpdateTerminalPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayLayout{};
  shared_ptr<string> displayResolution{};
  shared_ptr<string> displayScaleRatio{};
  shared_ptr<long> enableAutoLockScreen{};
  shared_ptr<long> enableAutoLogin{};
  shared_ptr<long> enableBluetooth{};
  shared_ptr<long> enableModifyPassword{};
  shared_ptr<long> enableScheduledShutdown{};
  shared_ptr<long> enableSwitchPersonal{};
  shared_ptr<long> enableWlan{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<long> idleTimeoutAction{};
  shared_ptr<string> name{};
  shared_ptr<long> powerButtonDefine{};
  shared_ptr<long> powerButtonDefineForAs{};
  shared_ptr<long> powerButtonDefineForNs{};
  shared_ptr<long> powerOnBehavior{};
  shared_ptr<string> scheduledShutdown{};
  shared_ptr<long> settingLock{};
  shared_ptr<string> terminalPolicyId{};

  UpdateTerminalPolicyRequest() {}

  explicit UpdateTerminalPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayLayout) {
      res["DisplayLayout"] = boost::any(*displayLayout);
    }
    if (displayResolution) {
      res["DisplayResolution"] = boost::any(*displayResolution);
    }
    if (displayScaleRatio) {
      res["DisplayScaleRatio"] = boost::any(*displayScaleRatio);
    }
    if (enableAutoLockScreen) {
      res["EnableAutoLockScreen"] = boost::any(*enableAutoLockScreen);
    }
    if (enableAutoLogin) {
      res["EnableAutoLogin"] = boost::any(*enableAutoLogin);
    }
    if (enableBluetooth) {
      res["EnableBluetooth"] = boost::any(*enableBluetooth);
    }
    if (enableModifyPassword) {
      res["EnableModifyPassword"] = boost::any(*enableModifyPassword);
    }
    if (enableScheduledShutdown) {
      res["EnableScheduledShutdown"] = boost::any(*enableScheduledShutdown);
    }
    if (enableSwitchPersonal) {
      res["EnableSwitchPersonal"] = boost::any(*enableSwitchPersonal);
    }
    if (enableWlan) {
      res["EnableWlan"] = boost::any(*enableWlan);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (idleTimeoutAction) {
      res["IdleTimeoutAction"] = boost::any(*idleTimeoutAction);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (powerButtonDefine) {
      res["PowerButtonDefine"] = boost::any(*powerButtonDefine);
    }
    if (powerButtonDefineForAs) {
      res["PowerButtonDefineForAs"] = boost::any(*powerButtonDefineForAs);
    }
    if (powerButtonDefineForNs) {
      res["PowerButtonDefineForNs"] = boost::any(*powerButtonDefineForNs);
    }
    if (powerOnBehavior) {
      res["PowerOnBehavior"] = boost::any(*powerOnBehavior);
    }
    if (scheduledShutdown) {
      res["ScheduledShutdown"] = boost::any(*scheduledShutdown);
    }
    if (settingLock) {
      res["SettingLock"] = boost::any(*settingLock);
    }
    if (terminalPolicyId) {
      res["TerminalPolicyId"] = boost::any(*terminalPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayLayout") != m.end() && !m["DisplayLayout"].empty()) {
      displayLayout = make_shared<string>(boost::any_cast<string>(m["DisplayLayout"]));
    }
    if (m.find("DisplayResolution") != m.end() && !m["DisplayResolution"].empty()) {
      displayResolution = make_shared<string>(boost::any_cast<string>(m["DisplayResolution"]));
    }
    if (m.find("DisplayScaleRatio") != m.end() && !m["DisplayScaleRatio"].empty()) {
      displayScaleRatio = make_shared<string>(boost::any_cast<string>(m["DisplayScaleRatio"]));
    }
    if (m.find("EnableAutoLockScreen") != m.end() && !m["EnableAutoLockScreen"].empty()) {
      enableAutoLockScreen = make_shared<long>(boost::any_cast<long>(m["EnableAutoLockScreen"]));
    }
    if (m.find("EnableAutoLogin") != m.end() && !m["EnableAutoLogin"].empty()) {
      enableAutoLogin = make_shared<long>(boost::any_cast<long>(m["EnableAutoLogin"]));
    }
    if (m.find("EnableBluetooth") != m.end() && !m["EnableBluetooth"].empty()) {
      enableBluetooth = make_shared<long>(boost::any_cast<long>(m["EnableBluetooth"]));
    }
    if (m.find("EnableModifyPassword") != m.end() && !m["EnableModifyPassword"].empty()) {
      enableModifyPassword = make_shared<long>(boost::any_cast<long>(m["EnableModifyPassword"]));
    }
    if (m.find("EnableScheduledShutdown") != m.end() && !m["EnableScheduledShutdown"].empty()) {
      enableScheduledShutdown = make_shared<long>(boost::any_cast<long>(m["EnableScheduledShutdown"]));
    }
    if (m.find("EnableSwitchPersonal") != m.end() && !m["EnableSwitchPersonal"].empty()) {
      enableSwitchPersonal = make_shared<long>(boost::any_cast<long>(m["EnableSwitchPersonal"]));
    }
    if (m.find("EnableWlan") != m.end() && !m["EnableWlan"].empty()) {
      enableWlan = make_shared<long>(boost::any_cast<long>(m["EnableWlan"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("IdleTimeoutAction") != m.end() && !m["IdleTimeoutAction"].empty()) {
      idleTimeoutAction = make_shared<long>(boost::any_cast<long>(m["IdleTimeoutAction"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PowerButtonDefine") != m.end() && !m["PowerButtonDefine"].empty()) {
      powerButtonDefine = make_shared<long>(boost::any_cast<long>(m["PowerButtonDefine"]));
    }
    if (m.find("PowerButtonDefineForAs") != m.end() && !m["PowerButtonDefineForAs"].empty()) {
      powerButtonDefineForAs = make_shared<long>(boost::any_cast<long>(m["PowerButtonDefineForAs"]));
    }
    if (m.find("PowerButtonDefineForNs") != m.end() && !m["PowerButtonDefineForNs"].empty()) {
      powerButtonDefineForNs = make_shared<long>(boost::any_cast<long>(m["PowerButtonDefineForNs"]));
    }
    if (m.find("PowerOnBehavior") != m.end() && !m["PowerOnBehavior"].empty()) {
      powerOnBehavior = make_shared<long>(boost::any_cast<long>(m["PowerOnBehavior"]));
    }
    if (m.find("ScheduledShutdown") != m.end() && !m["ScheduledShutdown"].empty()) {
      scheduledShutdown = make_shared<string>(boost::any_cast<string>(m["ScheduledShutdown"]));
    }
    if (m.find("SettingLock") != m.end() && !m["SettingLock"].empty()) {
      settingLock = make_shared<long>(boost::any_cast<long>(m["SettingLock"]));
    }
    if (m.find("TerminalPolicyId") != m.end() && !m["TerminalPolicyId"].empty()) {
      terminalPolicyId = make_shared<string>(boost::any_cast<string>(m["TerminalPolicyId"]));
    }
  }


  virtual ~UpdateTerminalPolicyRequest() = default;
};
class UpdateTerminalPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTerminalPolicyResponseBody() {}

  explicit UpdateTerminalPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTerminalPolicyResponseBody() = default;
};
class UpdateTerminalPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTerminalPolicyResponseBody> body{};

  UpdateTerminalPolicyResponse() {}

  explicit UpdateTerminalPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTerminalPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTerminalPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTerminalPolicyResponse() = default;
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
  ActivateDeviceResponse activateDeviceWithOptions(shared_ptr<ActivateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateDeviceResponse activateDevice(shared_ptr<ActivateDeviceRequest> request);
  AddDeviceFromSNResponse addDeviceFromSNWithOptions(shared_ptr<AddDeviceFromSNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDeviceFromSNResponse addDeviceFromSN(shared_ptr<AddDeviceFromSNRequest> request);
  AddDeviceSeatsAndLabelsResponse addDeviceSeatsAndLabelsWithOptions(shared_ptr<AddDeviceSeatsAndLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDeviceSeatsAndLabelsResponse addDeviceSeatsAndLabels(shared_ptr<AddDeviceSeatsAndLabelsRequest> request);
  AddDevicesFromCSVResponse addDevicesFromCSVWithOptions(shared_ptr<AddDevicesFromCSVRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDevicesFromCSVResponse addDevicesFromCSV(shared_ptr<AddDevicesFromCSVRequest> request);
  AddLabelsResponse addLabelsWithOptions(shared_ptr<AddLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddLabelsResponse addLabels(shared_ptr<AddLabelsRequest> request);
  AddOrUpdateDeviceSeatsResponse addOrUpdateDeviceSeatsWithOptions(shared_ptr<AddOrUpdateDeviceSeatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddOrUpdateDeviceSeatsResponse addOrUpdateDeviceSeats(shared_ptr<AddOrUpdateDeviceSeatsRequest> request);
  AddTerminalResponse addTerminalWithOptions(shared_ptr<AddTerminalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTerminalResponse addTerminal(shared_ptr<AddTerminalRequest> request);
  AttachEndUsersResponse attachEndUsersWithOptions(shared_ptr<AttachEndUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachEndUsersResponse attachEndUsers(shared_ptr<AttachEndUsersRequest> request);
  AttachLabelResponse attachLabelWithOptions(shared_ptr<AttachLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachLabelResponse attachLabel(shared_ptr<AttachLabelRequest> request);
  AttachLabelsResponse attachLabelsWithOptions(shared_ptr<AttachLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachLabelsResponse attachLabels(shared_ptr<AttachLabelsRequest> request);
  BindAccountLessLoginUserResponse bindAccountLessLoginUserWithOptions(shared_ptr<BindAccountLessLoginUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAccountLessLoginUserResponse bindAccountLessLoginUser(shared_ptr<BindAccountLessLoginUserRequest> request);
  CheckUuidValidResponse checkUuidValidWithOptions(shared_ptr<CheckUuidValidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckUuidValidResponse checkUuidValid(shared_ptr<CheckUuidValidRequest> request);
  CreateAppOtaTaskResponse createAppOtaTaskWithOptions(shared_ptr<CreateAppOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppOtaTaskResponse createAppOtaTask(shared_ptr<CreateAppOtaTaskRequest> request);
  CreateAppOtaVersionResponse createAppOtaVersionWithOptions(shared_ptr<CreateAppOtaVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppOtaVersionResponse createAppOtaVersion(shared_ptr<CreateAppOtaVersionRequest> request);
  DeleteAppOtaVersionsResponse deleteAppOtaVersionsWithOptions(shared_ptr<DeleteAppOtaVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppOtaVersionsResponse deleteAppOtaVersions(shared_ptr<DeleteAppOtaVersionsRequest> request);
  DeleteDevicesResponse deleteDevicesWithOptions(shared_ptr<DeleteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDevicesResponse deleteDevices(shared_ptr<DeleteDevicesRequest> request);
  DeleteLabelResponse deleteLabelWithOptions(shared_ptr<DeleteLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLabelResponse deleteLabel(shared_ptr<DeleteLabelRequest> request);
  DescribeAppOtaVersionResponse describeAppOtaVersionWithOptions(shared_ptr<DescribeAppOtaVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppOtaVersionResponse describeAppOtaVersion(shared_ptr<DescribeAppOtaVersionRequest> request);
  DescribeDeviceSeatsResponse describeDeviceSeatsWithOptions(shared_ptr<DescribeDeviceSeatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceSeatsResponse describeDeviceSeats(shared_ptr<DescribeDeviceSeatsRequest> request);
  DescribeDeviceVersionDetailResponse describeDeviceVersionDetailWithOptions(shared_ptr<DescribeDeviceVersionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceVersionDetailResponse describeDeviceVersionDetail(shared_ptr<DescribeDeviceVersionDetailRequest> request);
  DescribeSnLabelCountsResponse describeSnLabelCountsWithOptions(shared_ptr<DescribeSnLabelCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSnLabelCountsResponse describeSnLabelCounts(shared_ptr<DescribeSnLabelCountsRequest> request);
  DescribeWorkZonesResponse describeWorkZonesWithOptions(shared_ptr<DescribeWorkZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWorkZonesResponse describeWorkZones(shared_ptr<DescribeWorkZonesRequest> request);
  DetachEndUsersResponse detachEndUsersWithOptions(shared_ptr<DetachEndUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachEndUsersResponse detachEndUsers(shared_ptr<DetachEndUsersRequest> request);
  DetachLabelResponse detachLabelWithOptions(shared_ptr<DetachLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachLabelResponse detachLabel(shared_ptr<DetachLabelRequest> request);
  DetachLabelsResponse detachLabelsWithOptions(shared_ptr<DetachLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachLabelsResponse detachLabels(shared_ptr<DetachLabelsRequest> request);
  GenerateOssUrlResponse generateOssUrlWithOptions(shared_ptr<GenerateOssUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateOssUrlResponse generateOssUrl(shared_ptr<GenerateOssUrlRequest> request);
  GetAppOtaLatestVersionResponse getAppOtaLatestVersionWithOptions(shared_ptr<GetAppOtaLatestVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppOtaLatestVersionResponse getAppOtaLatestVersion(shared_ptr<GetAppOtaLatestVersionRequest> request);
  GetDeviceConfigsResponse getDeviceConfigsWithOptions(shared_ptr<GetDeviceConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceConfigsResponse getDeviceConfigs(shared_ptr<GetDeviceConfigsRequest> request);
  GetDeviceOtaAutoStatusResponse getDeviceOtaAutoStatusWithOptions(shared_ptr<GetDeviceOtaAutoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceOtaAutoStatusResponse getDeviceOtaAutoStatus(shared_ptr<GetDeviceOtaAutoStatusRequest> request);
  GetDeviceOtaInfoResponse getDeviceOtaInfoWithOptions(shared_ptr<GetDeviceOtaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceOtaInfoResponse getDeviceOtaInfo(shared_ptr<GetDeviceOtaInfoRequest> request);
  GetDeviceOtaInfoTestResponse getDeviceOtaInfoTestWithOptions(shared_ptr<GetDeviceOtaInfoTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceOtaInfoTestResponse getDeviceOtaInfoTest(shared_ptr<GetDeviceOtaInfoTestRequest> request);
  GetDeviceOtaTaskVersionInfoResponse getDeviceOtaTaskVersionInfoWithOptions(shared_ptr<GetDeviceOtaTaskVersionInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceOtaTaskVersionInfoResponse getDeviceOtaTaskVersionInfo(shared_ptr<GetDeviceOtaTaskVersionInfoRequest> request);
  GetDeviceUpgradeStatusResponse getDeviceUpgradeStatusWithOptions(shared_ptr<GetDeviceUpgradeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceUpgradeStatusResponse getDeviceUpgradeStatus(shared_ptr<GetDeviceUpgradeStatusRequest> request);
  GetExportDeviceInfoOssUrlResponse getExportDeviceInfoOssUrlWithOptions(shared_ptr<GetExportDeviceInfoOssUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExportDeviceInfoOssUrlResponse getExportDeviceInfoOssUrl(shared_ptr<GetExportDeviceInfoOssUrlRequest> request);
  GetFbOssConfigResponse getFbOssConfigWithOptions(shared_ptr<GetFbOssConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFbOssConfigResponse getFbOssConfig(shared_ptr<GetFbOssConfigRequest> request);
  GetOssConfigResponse getOssConfigWithOptions(shared_ptr<GetOssConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOssConfigResponse getOssConfig(shared_ptr<GetOssConfigRequest> request);
  GetVersionDownloadUrlResponse getVersionDownloadUrlWithOptions(shared_ptr<GetVersionDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVersionDownloadUrlResponse getVersionDownloadUrl(shared_ptr<GetVersionDownloadUrlRequest> request);
  ListDeviceOtaTaskByTenantResponse listDeviceOtaTaskByTenantWithOptions(shared_ptr<ListDeviceOtaTaskByTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceOtaTaskByTenantResponse listDeviceOtaTaskByTenant(shared_ptr<ListDeviceOtaTaskByTenantRequest> request);
  ListDeviceSeatsResponse listDeviceSeatsWithOptions(shared_ptr<ListDeviceSeatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceSeatsResponse listDeviceSeats(shared_ptr<ListDeviceSeatsRequest> request);
  ListDevicesResponse listDevicesWithOptions(shared_ptr<ListDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevicesResponse listDevices(shared_ptr<ListDevicesRequest> request);
  ListFbIssueLabelsResponse listFbIssueLabelsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFbIssueLabelsResponse listFbIssueLabels();
  ListFbIssueLabelsByLCResponse listFbIssueLabelsByLCWithOptions(shared_ptr<ListFbIssueLabelsByLCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFbIssueLabelsByLCResponse listFbIssueLabelsByLC(shared_ptr<ListFbIssueLabelsByLCRequest> request);
  ListLabelsResponse listLabelsWithOptions(shared_ptr<ListLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLabelsResponse listLabels(shared_ptr<ListLabelsRequest> request);
  ListTenantDeviceOtaInfoResponse listTenantDeviceOtaInfoWithOptions(shared_ptr<ListTenantDeviceOtaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTenantDeviceOtaInfoResponse listTenantDeviceOtaInfo(shared_ptr<ListTenantDeviceOtaInfoRequest> request);
  ListTerminalResponse listTerminalWithOptions(shared_ptr<ListTerminalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTerminalResponse listTerminal(shared_ptr<ListTerminalRequest> request);
  ListTerminalsResponse listTerminalsWithOptions(shared_ptr<ListTerminalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTerminalsResponse listTerminals(shared_ptr<ListTerminalsRequest> request);
  ListTrustDevicesResponse listTrustDevicesWithOptions(shared_ptr<ListTrustDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrustDevicesResponse listTrustDevices(shared_ptr<ListTrustDevicesRequest> request);
  ListUserFbAcIssuesResponse listUserFbAcIssuesWithOptions(shared_ptr<ListUserFbAcIssuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserFbAcIssuesResponse listUserFbAcIssues(shared_ptr<ListUserFbAcIssuesRequest> request);
  ListUserFbIssuesResponse listUserFbIssuesWithOptions(shared_ptr<ListUserFbIssuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserFbIssuesResponse listUserFbIssues(shared_ptr<ListUserFbIssuesRequest> request);
  ModifyDevicesSecureNetworkTypeResponse modifyDevicesSecureNetworkTypeWithOptions(shared_ptr<ModifyDevicesSecureNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDevicesSecureNetworkTypeResponse modifyDevicesSecureNetworkType(shared_ptr<ModifyDevicesSecureNetworkTypeRequest> request);
  ModifySecureNetworkTypeResponse modifySecureNetworkTypeWithOptions(shared_ptr<ModifySecureNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecureNetworkTypeResponse modifySecureNetworkType(shared_ptr<ModifySecureNetworkTypeRequest> request);
  RegisterDeviceResponse registerDeviceWithOptions(shared_ptr<RegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDeviceResponse registerDevice(shared_ptr<RegisterDeviceRequest> request);
  ReportAppOtaInfoResponse reportAppOtaInfoWithOptions(shared_ptr<ReportAppOtaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportAppOtaInfoResponse reportAppOtaInfo(shared_ptr<ReportAppOtaInfoRequest> request);
  ReportDeviceOtaInfoResponse reportDeviceOtaInfoWithOptions(shared_ptr<ReportDeviceOtaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportDeviceOtaInfoResponse reportDeviceOtaInfo(shared_ptr<ReportDeviceOtaInfoRequest> request);
  ReportUserFbAcIssueResponse reportUserFbAcIssueWithOptions(shared_ptr<ReportUserFbAcIssueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportUserFbAcIssueResponse reportUserFbAcIssue(shared_ptr<ReportUserFbAcIssueRequest> request);
  ReportUserFbIssueResponse reportUserFbIssueWithOptions(shared_ptr<ReportUserFbIssueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportUserFbIssueResponse reportUserFbIssue(shared_ptr<ReportUserFbIssueRequest> request);
  SendOpsMessageToTerminalsResponse sendOpsMessageToTerminalsWithOptions(shared_ptr<SendOpsMessageToTerminalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendOpsMessageToTerminalsResponse sendOpsMessageToTerminals(shared_ptr<SendOpsMessageToTerminalsRequest> request);
  SetDeviceOtaAutoStatusResponse setDeviceOtaAutoStatusWithOptions(shared_ptr<SetDeviceOtaAutoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDeviceOtaAutoStatusResponse setDeviceOtaAutoStatus(shared_ptr<SetDeviceOtaAutoStatusRequest> request);
  SetDeviceOtaTaskStatusResponse setDeviceOtaTaskStatusWithOptions(shared_ptr<SetDeviceOtaTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDeviceOtaTaskStatusResponse setDeviceOtaTaskStatus(shared_ptr<SetDeviceOtaTaskStatusRequest> request);
  UnbindAccountLessLoginUserResponse unbindAccountLessLoginUserWithOptions(shared_ptr<UnbindAccountLessLoginUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindAccountLessLoginUserResponse unbindAccountLessLoginUser(shared_ptr<UnbindAccountLessLoginUserRequest> request);
  UnbindDeviceSeatsResponse unbindDeviceSeatsWithOptions(shared_ptr<UnbindDeviceSeatsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindDeviceSeatsResponse unbindDeviceSeats(shared_ptr<UnbindDeviceSeatsRequest> request);
  UpdateAliasResponse updateAliasWithOptions(shared_ptr<UpdateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAliasResponse updateAlias(shared_ptr<UpdateAliasRequest> request);
  UpdateDeviceBindedEndUserResponse updateDeviceBindedEndUserWithOptions(shared_ptr<UpdateDeviceBindedEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeviceBindedEndUserResponse updateDeviceBindedEndUser(shared_ptr<UpdateDeviceBindedEndUserRequest> request);
  UpdateLabelResponse updateLabelWithOptions(shared_ptr<UpdateLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLabelResponse updateLabel(shared_ptr<UpdateLabelRequest> request);
  UpdateTerminalPolicyResponse updateTerminalPolicyWithOptions(shared_ptr<UpdateTerminalPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTerminalPolicyResponse updateTerminalPolicy(shared_ptr<UpdateTerminalPolicyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Wyota20210420

#endif
