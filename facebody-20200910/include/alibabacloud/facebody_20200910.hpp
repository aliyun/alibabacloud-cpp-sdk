// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FACEBODY20200910_H_
#define ALIBABACLOUD_FACEBODY20200910_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Facebody20200910 {
class DetectIPCPedestrianOptimizedRequest : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<vector<uint8_t>> imageData{};
  shared_ptr<long> width{};

  DetectIPCPedestrianOptimizedRequest() {}

  explicit DetectIPCPedestrianOptimizedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["height"] = boost::any(*height);
    }
    if (imageData) {
      res["imageData"] = boost::any(*imageData);
    }
    if (width) {
      res["width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("height") != m.end() && !m["height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["height"]));
    }
    if (m.find("imageData") != m.end() && !m["imageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["imageData"]));
    }
    if (m.find("width") != m.end() && !m["width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["width"]));
    }
  }


  virtual ~DetectIPCPedestrianOptimizedRequest() = default;
};
class DetectIPCPedestrianOptimizedResponseBodyDataImageInfoListElements : public Darabonba::Model {
public:
  shared_ptr<vector<long>> boxes{};
  shared_ptr<double> score{};

  DetectIPCPedestrianOptimizedResponseBodyDataImageInfoListElements() {}

  explicit DetectIPCPedestrianOptimizedResponseBodyDataImageInfoListElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Boxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      boxes = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~DetectIPCPedestrianOptimizedResponseBodyDataImageInfoListElements() = default;
};
class DetectIPCPedestrianOptimizedResponseBodyDataImageInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<DetectIPCPedestrianOptimizedResponseBodyDataImageInfoListElements>> elements{};

  DetectIPCPedestrianOptimizedResponseBodyDataImageInfoList() {}

  explicit DetectIPCPedestrianOptimizedResponseBodyDataImageInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<DetectIPCPedestrianOptimizedResponseBodyDataImageInfoListElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectIPCPedestrianOptimizedResponseBodyDataImageInfoListElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectIPCPedestrianOptimizedResponseBodyDataImageInfoListElements>>(expect1);
      }
    }
  }


  virtual ~DetectIPCPedestrianOptimizedResponseBodyDataImageInfoList() = default;
};
class DetectIPCPedestrianOptimizedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectIPCPedestrianOptimizedResponseBodyDataImageInfoList>> imageInfoList{};

  DetectIPCPedestrianOptimizedResponseBodyData() {}

  explicit DetectIPCPedestrianOptimizedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*imageInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageInfoList") != m.end() && !m["ImageInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageInfoList"].type()) {
        vector<DetectIPCPedestrianOptimizedResponseBodyDataImageInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectIPCPedestrianOptimizedResponseBodyDataImageInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageInfoList = make_shared<vector<DetectIPCPedestrianOptimizedResponseBodyDataImageInfoList>>(expect1);
      }
    }
  }


  virtual ~DetectIPCPedestrianOptimizedResponseBodyData() = default;
};
class DetectIPCPedestrianOptimizedResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectIPCPedestrianOptimizedResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DetectIPCPedestrianOptimizedResponseBody() {}

  explicit DetectIPCPedestrianOptimizedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectIPCPedestrianOptimizedResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectIPCPedestrianOptimizedResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectIPCPedestrianOptimizedResponseBody() = default;
};
class DetectIPCPedestrianOptimizedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectIPCPedestrianOptimizedResponseBody> body{};

  DetectIPCPedestrianOptimizedResponse() {}

  explicit DetectIPCPedestrianOptimizedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectIPCPedestrianOptimizedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectIPCPedestrianOptimizedResponseBody>(model1);
      }
    }
  }


  virtual ~DetectIPCPedestrianOptimizedResponse() = default;
};
class ExecuteServerSideVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateName{};
  shared_ptr<string> certificateNumber{};
  shared_ptr<string> facialPictureData{};
  shared_ptr<string> facialPictureUrl{};
  shared_ptr<string> sceneType{};

  ExecuteServerSideVerificationRequest() {}

  explicit ExecuteServerSideVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateName) {
      res["certificateName"] = boost::any(*certificateName);
    }
    if (certificateNumber) {
      res["certificateNumber"] = boost::any(*certificateNumber);
    }
    if (facialPictureData) {
      res["facialPictureData"] = boost::any(*facialPictureData);
    }
    if (facialPictureUrl) {
      res["facialPictureUrl"] = boost::any(*facialPictureUrl);
    }
    if (sceneType) {
      res["sceneType"] = boost::any(*sceneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("certificateName") != m.end() && !m["certificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["certificateName"]));
    }
    if (m.find("certificateNumber") != m.end() && !m["certificateNumber"].empty()) {
      certificateNumber = make_shared<string>(boost::any_cast<string>(m["certificateNumber"]));
    }
    if (m.find("facialPictureData") != m.end() && !m["facialPictureData"].empty()) {
      facialPictureData = make_shared<string>(boost::any_cast<string>(m["facialPictureData"]));
    }
    if (m.find("facialPictureUrl") != m.end() && !m["facialPictureUrl"].empty()) {
      facialPictureUrl = make_shared<string>(boost::any_cast<string>(m["facialPictureUrl"]));
    }
    if (m.find("sceneType") != m.end() && !m["sceneType"].empty()) {
      sceneType = make_shared<string>(boost::any_cast<string>(m["sceneType"]));
    }
  }


  virtual ~ExecuteServerSideVerificationRequest() = default;
};
class ExecuteServerSideVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> pass{};
  shared_ptr<string> reason{};
  shared_ptr<string> verificationToken{};

  ExecuteServerSideVerificationResponseBodyData() {}

  explicit ExecuteServerSideVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pass) {
      res["Pass"] = boost::any(*pass);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (verificationToken) {
      res["VerificationToken"] = boost::any(*verificationToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pass") != m.end() && !m["Pass"].empty()) {
      pass = make_shared<bool>(boost::any_cast<bool>(m["Pass"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("VerificationToken") != m.end() && !m["VerificationToken"].empty()) {
      verificationToken = make_shared<string>(boost::any_cast<string>(m["VerificationToken"]));
    }
  }


  virtual ~ExecuteServerSideVerificationResponseBodyData() = default;
};
class ExecuteServerSideVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteServerSideVerificationResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ExecuteServerSideVerificationResponseBody() {}

  explicit ExecuteServerSideVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExecuteServerSideVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExecuteServerSideVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExecuteServerSideVerificationResponseBody() = default;
};
class ExecuteServerSideVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteServerSideVerificationResponseBody> body{};

  ExecuteServerSideVerificationResponse() {}

  explicit ExecuteServerSideVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteServerSideVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteServerSideVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteServerSideVerificationResponse() = default;
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
  DetectIPCPedestrianOptimizedResponse detectIPCPedestrianOptimizedWithOptions(shared_ptr<DetectIPCPedestrianOptimizedRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectIPCPedestrianOptimizedResponse detectIPCPedestrianOptimized(shared_ptr<DetectIPCPedestrianOptimizedRequest> request);
  ExecuteServerSideVerificationResponse executeServerSideVerificationWithOptions(shared_ptr<ExecuteServerSideVerificationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteServerSideVerificationResponse executeServerSideVerification(shared_ptr<ExecuteServerSideVerificationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Facebody20200910

#endif
