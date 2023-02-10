// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AISEARCH20230101_H_
#define ALIBABACLOUD_AISEARCH20230101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Aisearch20230101 {
class Box : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  Box() {}

  explicit Box(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~Box() = default;
};
class AddImageRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Box>> boxes{};
  shared_ptr<string> customContent{};
  shared_ptr<long> detectLimit{};
  shared_ptr<long> intAttr{};
  shared_ptr<string> picContent{};
  shared_ptr<string> picName{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> strAttr{};

  AddImageRequest() {}

  explicit AddImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      vector<boost::any> temp1;
      for(auto item1:*boxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Boxes"] = boost::any(temp1);
    }
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (detectLimit) {
      res["DetectLimit"] = boost::any(*detectLimit);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (picContent) {
      res["PicContent"] = boost::any(*picContent);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<Box> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Box model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<Box>>(expect1);
      }
    }
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("DetectLimit") != m.end() && !m["DetectLimit"].empty()) {
      detectLimit = make_shared<long>(boost::any_cast<long>(m["DetectLimit"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContent = make_shared<string>(boost::any_cast<string>(m["PicContent"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
  }


  virtual ~AddImageRequest() = default;
};
class AddImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Box>> boxes{};
  shared_ptr<string> customContent{};
  shared_ptr<long> detectLimit{};
  shared_ptr<long> intAttr{};
  shared_ptr<Darabonba::Stream> picContentObject{};
  shared_ptr<string> picName{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> strAttr{};

  AddImageAdvanceRequest() {}

  explicit AddImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      vector<boost::any> temp1;
      for(auto item1:*boxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Boxes"] = boost::any(temp1);
    }
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (detectLimit) {
      res["DetectLimit"] = boost::any(*detectLimit);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (picContentObject) {
      res["PicContent"] = boost::any(*picContentObject);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<Box> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Box model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<Box>>(expect1);
      }
    }
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("DetectLimit") != m.end() && !m["DetectLimit"].empty()) {
      detectLimit = make_shared<long>(boost::any_cast<long>(m["DetectLimit"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContentObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicContent"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
  }


  virtual ~AddImageAdvanceRequest() = default;
};
class AddImageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> boxesShrink{};
  shared_ptr<string> customContent{};
  shared_ptr<long> detectLimit{};
  shared_ptr<long> intAttr{};
  shared_ptr<string> picContent{};
  shared_ptr<string> picName{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> strAttr{};

  AddImageShrinkRequest() {}

  explicit AddImageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxesShrink) {
      res["Boxes"] = boost::any(*boxesShrink);
    }
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (detectLimit) {
      res["DetectLimit"] = boost::any(*detectLimit);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (picContent) {
      res["PicContent"] = boost::any(*picContent);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      boxesShrink = make_shared<string>(boost::any_cast<string>(m["Boxes"]));
    }
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("DetectLimit") != m.end() && !m["DetectLimit"].empty()) {
      detectLimit = make_shared<long>(boost::any_cast<long>(m["DetectLimit"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContent = make_shared<string>(boost::any_cast<string>(m["PicContent"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
  }


  virtual ~AddImageShrinkRequest() = default;
};
class AddImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddImageResponseBody() {}

  explicit AddImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddImageResponseBody() = default;
};
class AddImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageResponseBody> body{};

  AddImageResponse() {}

  explicit AddImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageResponse() = default;
};
class CheckOssIncrementMetaExistRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> key{};
  shared_ptr<string> ossPath{};

  CheckOssIncrementMetaExistRequest() {}

  explicit CheckOssIncrementMetaExistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
  }


  virtual ~CheckOssIncrementMetaExistRequest() = default;
};
class CheckOssIncrementMetaExistResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> exist{};

  CheckOssIncrementMetaExistResponseBodyData() {}

  explicit CheckOssIncrementMetaExistResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exist) {
      res["Exist"] = boost::any(*exist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exist") != m.end() && !m["Exist"].empty()) {
      exist = make_shared<bool>(boost::any_cast<bool>(m["Exist"]));
    }
  }


  virtual ~CheckOssIncrementMetaExistResponseBodyData() = default;
};
class CheckOssIncrementMetaExistResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckOssIncrementMetaExistResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckOssIncrementMetaExistResponseBody() {}

  explicit CheckOssIncrementMetaExistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CheckOssIncrementMetaExistResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckOssIncrementMetaExistResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckOssIncrementMetaExistResponseBody() = default;
};
class CheckOssIncrementMetaExistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckOssIncrementMetaExistResponseBody> body{};

  CheckOssIncrementMetaExistResponse() {}

  explicit CheckOssIncrementMetaExistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckOssIncrementMetaExistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckOssIncrementMetaExistResponseBody>(model1);
      }
    }
  }


  virtual ~CheckOssIncrementMetaExistResponse() = default;
};
class CreateBatchTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> callbackAddress{};
  shared_ptr<string> ossPath{};

  CreateBatchTasksRequest() {}

  explicit CreateBatchTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (callbackAddress) {
      res["CallbackAddress"] = boost::any(*callbackAddress);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CallbackAddress") != m.end() && !m["CallbackAddress"].empty()) {
      callbackAddress = make_shared<string>(boost::any_cast<string>(m["CallbackAddress"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
  }


  virtual ~CreateBatchTasksRequest() = default;
};
class CreateBatchTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> status{};

  CreateBatchTasksResponseBodyData() {}

  explicit CreateBatchTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateBatchTasksResponseBodyData() = default;
};
class CreateBatchTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateBatchTasksResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateBatchTasksResponseBody() {}

  explicit CreateBatchTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateBatchTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateBatchTasksResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateBatchTasksResponseBody() = default;
};
class CreateBatchTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBatchTasksResponseBody> body{};

  CreateBatchTasksResponse() {}

  explicit CreateBatchTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBatchTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBatchTasksResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBatchTasksResponse() = default;
};
class CreateDumpMetaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> status{};

  CreateDumpMetaResponseBodyData() {}

  explicit CreateDumpMetaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateDumpMetaResponseBodyData() = default;
};
class CreateDumpMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateDumpMetaResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDumpMetaResponseBody() {}

  explicit CreateDumpMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateDumpMetaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDumpMetaResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateDumpMetaResponseBody() = default;
};
class CreateDumpMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDumpMetaResponseBody> body{};

  CreateDumpMetaResponse() {}

  explicit CreateDumpMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDumpMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDumpMetaResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDumpMetaResponse() = default;
};
class DeleteImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> picName{};

  DeleteImageRequest() {}

  explicit DeleteImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
  }


  virtual ~DeleteImageRequest() = default;
};
class DeleteImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> picNames{};

  DeleteImageResponseBodyData() {}

  explicit DeleteImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picNames) {
      res["PicNames"] = boost::any(*picNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicNames") != m.end() && !m["PicNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PicNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PicNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      picNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteImageResponseBodyData() = default;
};
class DeleteImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteImageResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteImageResponseBody() {}

  explicit DeleteImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteImageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteImageResponseBody() = default;
};
class DeleteImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteImageResponseBody> body{};

  DeleteImageResponse() {}

  explicit DeleteImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImageResponse() = default;
};
class GetImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> picName{};

  GetImageRequest() {}

  explicit GetImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
  }


  virtual ~GetImageRequest() = default;
};
class GetImageResponseBodyDataBoxes : public Darabonba::Model {
public:
  shared_ptr<vector<long>> bbox{};
  shared_ptr<double> confidence{};

  GetImageResponseBodyDataBoxes() {}

  explicit GetImageResponseBodyDataBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bbox) {
      res["Bbox"] = boost::any(*bbox);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bbox") != m.end() && !m["Bbox"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Bbox"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Bbox"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      bbox = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~GetImageResponseBodyDataBoxes() = default;
};
class GetImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetImageResponseBodyDataBoxes>> boxes{};
  shared_ptr<string> customContent{};
  shared_ptr<long> intAttr{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<string> strAttr{};

  GetImageResponseBodyData() {}

  explicit GetImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      vector<boost::any> temp1;
      for(auto item1:*boxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Boxes"] = boost::any(temp1);
    }
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<GetImageResponseBodyDataBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImageResponseBodyDataBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<GetImageResponseBodyDataBoxes>>(expect1);
      }
    }
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
  }


  virtual ~GetImageResponseBodyData() = default;
};
class GetImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetImageResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetImageResponseBody() {}

  explicit GetImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetImageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetImageResponseBody() = default;
};
class GetImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageResponseBody> body{};

  GetImageResponse() {}

  explicit GetImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageResponse() = default;
};
class GetInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> qps{};
  shared_ptr<string> region{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> utcCreateTime{};
  shared_ptr<long> utcExpireTime{};

  GetInstanceResponseBodyData() {}

  explicit GetInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    if (utcExpireTime) {
      res["UtcExpireTime"] = boost::any(*utcExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["UtcCreateTime"]));
    }
    if (m.find("UtcExpireTime") != m.end() && !m["UtcExpireTime"].empty()) {
      utcExpireTime = make_shared<long>(boost::any_cast<long>(m["UtcExpireTime"]));
    }
  }


  virtual ~GetInstanceResponseBodyData() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class ListBatchTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<long> id{};
  shared_ptr<string> ossPath{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListBatchTasksRequest() {}

  explicit ListBatchTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
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
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListBatchTasksRequest() = default;
};
class ListBatchTasksResponseBodyDataIncrements : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> callbackAddress{};
  shared_ptr<string> callbackTaskStatus{};
  shared_ptr<string> errorUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> msg{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> status{};
  shared_ptr<string> utcCreateTime{};
  shared_ptr<string> utcUpdateTime{};

  ListBatchTasksResponseBodyDataIncrements() {}

  explicit ListBatchTasksResponseBodyDataIncrements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (callbackAddress) {
      res["CallbackAddress"] = boost::any(*callbackAddress);
    }
    if (callbackTaskStatus) {
      res["CallbackTaskStatus"] = boost::any(*callbackTaskStatus);
    }
    if (errorUrl) {
      res["ErrorUrl"] = boost::any(*errorUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    if (utcUpdateTime) {
      res["UtcUpdateTime"] = boost::any(*utcUpdateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CallbackAddress") != m.end() && !m["CallbackAddress"].empty()) {
      callbackAddress = make_shared<string>(boost::any_cast<string>(m["CallbackAddress"]));
    }
    if (m.find("CallbackTaskStatus") != m.end() && !m["CallbackTaskStatus"].empty()) {
      callbackTaskStatus = make_shared<string>(boost::any_cast<string>(m["CallbackTaskStatus"]));
    }
    if (m.find("ErrorUrl") != m.end() && !m["ErrorUrl"].empty()) {
      errorUrl = make_shared<string>(boost::any_cast<string>(m["ErrorUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<string>(boost::any_cast<string>(m["UtcCreateTime"]));
    }
    if (m.find("UtcUpdateTime") != m.end() && !m["UtcUpdateTime"].empty()) {
      utcUpdateTime = make_shared<string>(boost::any_cast<string>(m["UtcUpdateTime"]));
    }
  }


  virtual ~ListBatchTasksResponseBodyDataIncrements() = default;
};
class ListBatchTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListBatchTasksResponseBodyDataIncrements>> increments{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListBatchTasksResponseBodyData() {}

  explicit ListBatchTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (increments) {
      vector<boost::any> temp1;
      for(auto item1:*increments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Increments"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Increments") != m.end() && !m["Increments"].empty()) {
      if (typeid(vector<boost::any>) == m["Increments"].type()) {
        vector<ListBatchTasksResponseBodyDataIncrements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Increments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBatchTasksResponseBodyDataIncrements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        increments = make_shared<vector<ListBatchTasksResponseBodyDataIncrements>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListBatchTasksResponseBodyData() = default;
};
class ListBatchTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListBatchTasksResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListBatchTasksResponseBody() {}

  explicit ListBatchTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListBatchTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListBatchTasksResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListBatchTasksResponseBody() = default;
};
class ListBatchTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBatchTasksResponseBody> body{};

  ListBatchTasksResponse() {}

  explicit ListBatchTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBatchTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBatchTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListBatchTasksResponse() = default;
};
class ListDumpMetaRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDumpMetaRequest() {}

  explicit ListDumpMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDumpMetaRequest() = default;
};
class ListDumpMetaResponseBodyDataDumpMetaList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> metaUrl{};
  shared_ptr<string> msg{};
  shared_ptr<string> status{};
  shared_ptr<string> utcCreateTime{};
  shared_ptr<string> utcUpdateTime{};

  ListDumpMetaResponseBodyDataDumpMetaList() {}

  explicit ListDumpMetaResponseBodyDataDumpMetaList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metaUrl) {
      res["MetaUrl"] = boost::any(*metaUrl);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    if (utcUpdateTime) {
      res["UtcUpdateTime"] = boost::any(*utcUpdateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MetaUrl") != m.end() && !m["MetaUrl"].empty()) {
      metaUrl = make_shared<string>(boost::any_cast<string>(m["MetaUrl"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<string>(boost::any_cast<string>(m["UtcCreateTime"]));
    }
    if (m.find("UtcUpdateTime") != m.end() && !m["UtcUpdateTime"].empty()) {
      utcUpdateTime = make_shared<string>(boost::any_cast<string>(m["UtcUpdateTime"]));
    }
  }


  virtual ~ListDumpMetaResponseBodyDataDumpMetaList() = default;
};
class ListDumpMetaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDumpMetaResponseBodyDataDumpMetaList>> dumpMetaList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListDumpMetaResponseBodyData() {}

  explicit ListDumpMetaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dumpMetaList) {
      vector<boost::any> temp1;
      for(auto item1:*dumpMetaList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DumpMetaList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DumpMetaList") != m.end() && !m["DumpMetaList"].empty()) {
      if (typeid(vector<boost::any>) == m["DumpMetaList"].type()) {
        vector<ListDumpMetaResponseBodyDataDumpMetaList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DumpMetaList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDumpMetaResponseBodyDataDumpMetaList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dumpMetaList = make_shared<vector<ListDumpMetaResponseBodyDataDumpMetaList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDumpMetaResponseBodyData() = default;
};
class ListDumpMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDumpMetaResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDumpMetaResponseBody() {}

  explicit ListDumpMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDumpMetaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDumpMetaResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDumpMetaResponseBody() = default;
};
class ListDumpMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDumpMetaResponseBody> body{};

  ListDumpMetaResponse() {}

  explicit ListDumpMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDumpMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDumpMetaResponseBody>(model1);
      }
    }
  }


  virtual ~ListDumpMetaResponse() = default;
};
class ListInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> serviceType{};

  ListInstanceRequest() {}

  explicit ListInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
  }


  virtual ~ListInstanceRequest() = default;
};
class ListInstanceResponseBodyDataInstances : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> qps{};
  shared_ptr<string> region{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<long> utcCreateTime{};
  shared_ptr<long> utcExpireTime{};

  ListInstanceResponseBodyDataInstances() {}

  explicit ListInstanceResponseBodyDataInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    if (utcExpireTime) {
      res["UtcExpireTime"] = boost::any(*utcExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["UtcCreateTime"]));
    }
    if (m.find("UtcExpireTime") != m.end() && !m["UtcExpireTime"].empty()) {
      utcExpireTime = make_shared<long>(boost::any_cast<long>(m["UtcExpireTime"]));
    }
  }


  virtual ~ListInstanceResponseBodyDataInstances() = default;
};
class ListInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstanceResponseBodyDataInstances>> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListInstanceResponseBodyData() {}

  explicit ListInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstanceResponseBodyDataInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceResponseBodyDataInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstanceResponseBodyDataInstances>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListInstanceResponseBodyData() = default;
};
class ListInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListInstanceResponseBody() {}

  explicit ListInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListInstanceResponseBody() = default;
};
class ListInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceResponseBody> body{};

  ListInstanceResponse() {}

  explicit ListInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceResponse() = default;
};
class ListOssBucketAndPathRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> ossPath{};

  ListOssBucketAndPathRequest() {}

  explicit ListOssBucketAndPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
  }


  virtual ~ListOssBucketAndPathRequest() = default;
};
class ListOssBucketAndPathResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bucketList{};
  shared_ptr<vector<string>> pathList{};

  ListOssBucketAndPathResponseBodyData() {}

  explicit ListOssBucketAndPathResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketList) {
      res["BucketList"] = boost::any(*bucketList);
    }
    if (pathList) {
      res["PathList"] = boost::any(*pathList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketList") != m.end() && !m["BucketList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BucketList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BucketList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bucketList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PathList") != m.end() && !m["PathList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PathList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PathList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pathList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListOssBucketAndPathResponseBodyData() = default;
};
class ListOssBucketAndPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListOssBucketAndPathResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListOssBucketAndPathResponseBody() {}

  explicit ListOssBucketAndPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListOssBucketAndPathResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListOssBucketAndPathResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListOssBucketAndPathResponseBody() = default;
};
class ListOssBucketAndPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOssBucketAndPathResponseBody> body{};

  ListOssBucketAndPathResponse() {}

  explicit ListOssBucketAndPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOssBucketAndPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOssBucketAndPathResponseBody>(model1);
      }
    }
  }


  virtual ~ListOssBucketAndPathResponse() = default;
};
class ResetInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<long> utcCreateTime{};
  shared_ptr<long> utcExpireTime{};

  ResetInstanceResponseBodyData() {}

  explicit ResetInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    if (utcExpireTime) {
      res["UtcExpireTime"] = boost::any(*utcExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["UtcCreateTime"]));
    }
    if (m.find("UtcExpireTime") != m.end() && !m["UtcExpireTime"].empty()) {
      utcExpireTime = make_shared<long>(boost::any_cast<long>(m["UtcExpireTime"]));
    }
  }


  virtual ~ResetInstanceResponseBodyData() = default;
};
class ResetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ResetInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResetInstanceResponseBody() {}

  explicit ResetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ResetInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ResetInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ResetInstanceResponseBody() = default;
};
class ResetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetInstanceResponseBody> body{};

  ResetInstanceResponse() {}

  explicit ResetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ResetInstanceResponse() = default;
};
class SearchImageByNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<long> num{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<long> start{};
  shared_ptr<string> text{};

  SearchImageByNameRequest() {}

  explicit SearchImageByNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~SearchImageByNameRequest() = default;
};
class SearchImageByNameResponseBodyDataPicInfos : public Darabonba::Model {
public:
  shared_ptr<vector<long>> bbox{};
  shared_ptr<double> confidence{};

  SearchImageByNameResponseBodyDataPicInfos() {}

  explicit SearchImageByNameResponseBodyDataPicInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bbox) {
      res["Bbox"] = boost::any(*bbox);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bbox") != m.end() && !m["Bbox"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Bbox"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Bbox"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      bbox = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyDataPicInfos() = default;
};
class SearchImageByNameResponseBodyDataPicListOtherBoxes : public Darabonba::Model {
public:
  shared_ptr<vector<long>> bbox{};
  shared_ptr<double> confidence{};

  SearchImageByNameResponseBodyDataPicListOtherBoxes() {}

  explicit SearchImageByNameResponseBodyDataPicListOtherBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bbox) {
      res["Bbox"] = boost::any(*bbox);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bbox") != m.end() && !m["Bbox"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Bbox"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Bbox"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      bbox = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyDataPicListOtherBoxes() = default;
};
class SearchImageByNameResponseBodyDataPicListSimilarBoxes : public Darabonba::Model {
public:
  shared_ptr<vector<long>> bbox{};
  shared_ptr<double> confidence{};
  shared_ptr<double> score{};

  SearchImageByNameResponseBodyDataPicListSimilarBoxes() {}

  explicit SearchImageByNameResponseBodyDataPicListSimilarBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bbox) {
      res["Bbox"] = boost::any(*bbox);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bbox") != m.end() && !m["Bbox"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Bbox"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Bbox"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      bbox = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyDataPicListSimilarBoxes() = default;
};
class SearchImageByNameResponseBodyDataPicList : public Darabonba::Model {
public:
  shared_ptr<string> customContent{};
  shared_ptr<long> intAttr{};
  shared_ptr<vector<SearchImageByNameResponseBodyDataPicListOtherBoxes>> otherBoxes{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<double> score{};
  shared_ptr<vector<SearchImageByNameResponseBodyDataPicListSimilarBoxes>> similarBoxes{};
  shared_ptr<string> strAttr{};

  SearchImageByNameResponseBodyDataPicList() {}

  explicit SearchImageByNameResponseBodyDataPicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (otherBoxes) {
      vector<boost::any> temp1;
      for(auto item1:*otherBoxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OtherBoxes"] = boost::any(temp1);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (similarBoxes) {
      vector<boost::any> temp1;
      for(auto item1:*similarBoxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimilarBoxes"] = boost::any(temp1);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("OtherBoxes") != m.end() && !m["OtherBoxes"].empty()) {
      if (typeid(vector<boost::any>) == m["OtherBoxes"].type()) {
        vector<SearchImageByNameResponseBodyDataPicListOtherBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OtherBoxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByNameResponseBodyDataPicListOtherBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        otherBoxes = make_shared<vector<SearchImageByNameResponseBodyDataPicListOtherBoxes>>(expect1);
      }
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("SimilarBoxes") != m.end() && !m["SimilarBoxes"].empty()) {
      if (typeid(vector<boost::any>) == m["SimilarBoxes"].type()) {
        vector<SearchImageByNameResponseBodyDataPicListSimilarBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimilarBoxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByNameResponseBodyDataPicListSimilarBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        similarBoxes = make_shared<vector<SearchImageByNameResponseBodyDataPicListSimilarBoxes>>(expect1);
      }
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyDataPicList() = default;
};
class SearchImageByNameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageByNameResponseBodyDataPicInfos>> picInfos{};
  shared_ptr<vector<SearchImageByNameResponseBodyDataPicList>> picList{};

  SearchImageByNameResponseBodyData() {}

  explicit SearchImageByNameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picInfos) {
      vector<boost::any> temp1;
      for(auto item1:*picInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PicInfos"] = boost::any(temp1);
    }
    if (picList) {
      vector<boost::any> temp1;
      for(auto item1:*picList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PicList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicInfos") != m.end() && !m["PicInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["PicInfos"].type()) {
        vector<SearchImageByNameResponseBodyDataPicInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PicInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByNameResponseBodyDataPicInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        picInfos = make_shared<vector<SearchImageByNameResponseBodyDataPicInfos>>(expect1);
      }
    }
    if (m.find("PicList") != m.end() && !m["PicList"].empty()) {
      if (typeid(vector<boost::any>) == m["PicList"].type()) {
        vector<SearchImageByNameResponseBodyDataPicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByNameResponseBodyDataPicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        picList = make_shared<vector<SearchImageByNameResponseBodyDataPicList>>(expect1);
      }
    }
  }


  virtual ~SearchImageByNameResponseBodyData() = default;
};
class SearchImageByNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchImageByNameResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchImageByNameResponseBody() {}

  explicit SearchImageByNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SearchImageByNameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchImageByNameResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchImageByNameResponseBody() = default;
};
class SearchImageByNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchImageByNameResponseBody> body{};

  SearchImageByNameResponse() {}

  explicit SearchImageByNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchImageByNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchImageByNameResponseBody>(model1);
      }
    }
  }


  virtual ~SearchImageByNameResponse() = default;
};
class SearchImageByPicRequest : public Darabonba::Model {
public:
  shared_ptr<Box> box{};
  shared_ptr<long> detectLimit{};
  shared_ptr<string> filter{};
  shared_ptr<long> num{};
  shared_ptr<string> picContent{};
  shared_ptr<string> picUrl{};
  shared_ptr<long> start{};
  shared_ptr<string> text{};

  SearchImageByPicRequest() {}

  explicit SearchImageByPicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (box) {
      res["Box"] = box ? boost::any(box->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectLimit) {
      res["DetectLimit"] = boost::any(*detectLimit);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picContent) {
      res["PicContent"] = boost::any(*picContent);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      if (typeid(map<string, boost::any>) == m["Box"].type()) {
        Box model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Box"]));
        box = make_shared<Box>(model1);
      }
    }
    if (m.find("DetectLimit") != m.end() && !m["DetectLimit"].empty()) {
      detectLimit = make_shared<long>(boost::any_cast<long>(m["DetectLimit"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContent = make_shared<string>(boost::any_cast<string>(m["PicContent"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~SearchImageByPicRequest() = default;
};
class SearchImageByPicAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Box> box{};
  shared_ptr<long> detectLimit{};
  shared_ptr<string> filter{};
  shared_ptr<long> num{};
  shared_ptr<Darabonba::Stream> picContentObject{};
  shared_ptr<string> picUrl{};
  shared_ptr<long> start{};
  shared_ptr<string> text{};

  SearchImageByPicAdvanceRequest() {}

  explicit SearchImageByPicAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (box) {
      res["Box"] = box ? boost::any(box->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectLimit) {
      res["DetectLimit"] = boost::any(*detectLimit);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picContentObject) {
      res["PicContent"] = boost::any(*picContentObject);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      if (typeid(map<string, boost::any>) == m["Box"].type()) {
        Box model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Box"]));
        box = make_shared<Box>(model1);
      }
    }
    if (m.find("DetectLimit") != m.end() && !m["DetectLimit"].empty()) {
      detectLimit = make_shared<long>(boost::any_cast<long>(m["DetectLimit"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContentObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicContent"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~SearchImageByPicAdvanceRequest() = default;
};
class SearchImageByPicShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> boxShrink{};
  shared_ptr<long> detectLimit{};
  shared_ptr<string> filter{};
  shared_ptr<long> num{};
  shared_ptr<string> picContent{};
  shared_ptr<string> picUrl{};
  shared_ptr<long> start{};
  shared_ptr<string> text{};

  SearchImageByPicShrinkRequest() {}

  explicit SearchImageByPicShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxShrink) {
      res["Box"] = boost::any(*boxShrink);
    }
    if (detectLimit) {
      res["DetectLimit"] = boost::any(*detectLimit);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picContent) {
      res["PicContent"] = boost::any(*picContent);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      boxShrink = make_shared<string>(boost::any_cast<string>(m["Box"]));
    }
    if (m.find("DetectLimit") != m.end() && !m["DetectLimit"].empty()) {
      detectLimit = make_shared<long>(boost::any_cast<long>(m["DetectLimit"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContent = make_shared<string>(boost::any_cast<string>(m["PicContent"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~SearchImageByPicShrinkRequest() = default;
};
class SearchImageByPicResponseBodyDataPicInfos : public Darabonba::Model {
public:
  shared_ptr<vector<long>> bbox{};
  shared_ptr<double> confidence{};

  SearchImageByPicResponseBodyDataPicInfos() {}

  explicit SearchImageByPicResponseBodyDataPicInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bbox) {
      res["Bbox"] = boost::any(*bbox);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bbox") != m.end() && !m["Bbox"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Bbox"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Bbox"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      bbox = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyDataPicInfos() = default;
};
class SearchImageByPicResponseBodyDataPicListOtherBoxes : public Darabonba::Model {
public:
  shared_ptr<vector<long>> bbox{};
  shared_ptr<double> confidence{};

  SearchImageByPicResponseBodyDataPicListOtherBoxes() {}

  explicit SearchImageByPicResponseBodyDataPicListOtherBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bbox) {
      res["Bbox"] = boost::any(*bbox);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bbox") != m.end() && !m["Bbox"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Bbox"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Bbox"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      bbox = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyDataPicListOtherBoxes() = default;
};
class SearchImageByPicResponseBodyDataPicListSimilarBoxes : public Darabonba::Model {
public:
  shared_ptr<vector<long>> bbox{};
  shared_ptr<double> confidence{};
  shared_ptr<double> score{};

  SearchImageByPicResponseBodyDataPicListSimilarBoxes() {}

  explicit SearchImageByPicResponseBodyDataPicListSimilarBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bbox) {
      res["Bbox"] = boost::any(*bbox);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bbox") != m.end() && !m["Bbox"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Bbox"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Bbox"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      bbox = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyDataPicListSimilarBoxes() = default;
};
class SearchImageByPicResponseBodyDataPicList : public Darabonba::Model {
public:
  shared_ptr<string> customContent{};
  shared_ptr<long> intAttr{};
  shared_ptr<vector<SearchImageByPicResponseBodyDataPicListOtherBoxes>> otherBoxes{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<double> score{};
  shared_ptr<vector<SearchImageByPicResponseBodyDataPicListSimilarBoxes>> similarBoxes{};
  shared_ptr<string> strAttr{};

  SearchImageByPicResponseBodyDataPicList() {}

  explicit SearchImageByPicResponseBodyDataPicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (otherBoxes) {
      vector<boost::any> temp1;
      for(auto item1:*otherBoxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OtherBoxes"] = boost::any(temp1);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (similarBoxes) {
      vector<boost::any> temp1;
      for(auto item1:*similarBoxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimilarBoxes"] = boost::any(temp1);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("OtherBoxes") != m.end() && !m["OtherBoxes"].empty()) {
      if (typeid(vector<boost::any>) == m["OtherBoxes"].type()) {
        vector<SearchImageByPicResponseBodyDataPicListOtherBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OtherBoxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByPicResponseBodyDataPicListOtherBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        otherBoxes = make_shared<vector<SearchImageByPicResponseBodyDataPicListOtherBoxes>>(expect1);
      }
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("SimilarBoxes") != m.end() && !m["SimilarBoxes"].empty()) {
      if (typeid(vector<boost::any>) == m["SimilarBoxes"].type()) {
        vector<SearchImageByPicResponseBodyDataPicListSimilarBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimilarBoxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByPicResponseBodyDataPicListSimilarBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        similarBoxes = make_shared<vector<SearchImageByPicResponseBodyDataPicListSimilarBoxes>>(expect1);
      }
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyDataPicList() = default;
};
class SearchImageByPicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageByPicResponseBodyDataPicInfos>> picInfos{};
  shared_ptr<vector<SearchImageByPicResponseBodyDataPicList>> picList{};

  SearchImageByPicResponseBodyData() {}

  explicit SearchImageByPicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picInfos) {
      vector<boost::any> temp1;
      for(auto item1:*picInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PicInfos"] = boost::any(temp1);
    }
    if (picList) {
      vector<boost::any> temp1;
      for(auto item1:*picList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PicList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicInfos") != m.end() && !m["PicInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["PicInfos"].type()) {
        vector<SearchImageByPicResponseBodyDataPicInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PicInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByPicResponseBodyDataPicInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        picInfos = make_shared<vector<SearchImageByPicResponseBodyDataPicInfos>>(expect1);
      }
    }
    if (m.find("PicList") != m.end() && !m["PicList"].empty()) {
      if (typeid(vector<boost::any>) == m["PicList"].type()) {
        vector<SearchImageByPicResponseBodyDataPicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByPicResponseBodyDataPicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        picList = make_shared<vector<SearchImageByPicResponseBodyDataPicList>>(expect1);
      }
    }
  }


  virtual ~SearchImageByPicResponseBodyData() = default;
};
class SearchImageByPicResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchImageByPicResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchImageByPicResponseBody() {}

  explicit SearchImageByPicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SearchImageByPicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchImageByPicResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchImageByPicResponseBody() = default;
};
class SearchImageByPicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchImageByPicResponseBody> body{};

  SearchImageByPicResponse() {}

  explicit SearchImageByPicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchImageByPicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchImageByPicResponseBody>(model1);
      }
    }
  }


  virtual ~SearchImageByPicResponse() = default;
};
class StopBatchTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopBatchTasksResponseBody() {}

  explicit StopBatchTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopBatchTasksResponseBody() = default;
};
class StopBatchTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopBatchTasksResponseBody> body{};

  StopBatchTasksResponse() {}

  explicit StopBatchTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopBatchTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopBatchTasksResponseBody>(model1);
      }
    }
  }


  virtual ~StopBatchTasksResponse() = default;
};
class StopDumpMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopDumpMetaResponseBody() {}

  explicit StopDumpMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopDumpMetaResponseBody() = default;
};
class StopDumpMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopDumpMetaResponseBody> body{};

  StopDumpMetaResponse() {}

  explicit StopDumpMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDumpMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDumpMetaResponseBody>(model1);
      }
    }
  }


  virtual ~StopDumpMetaResponse() = default;
};
class UpdateImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> customContent{};
  shared_ptr<long> intAttr{};
  shared_ptr<string> picName{};
  shared_ptr<string> strAttr{};

  UpdateImageRequest() {}

  explicit UpdateImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
  }


  virtual ~UpdateImageRequest() = default;
};
class UpdateImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateImageResponseBody() {}

  explicit UpdateImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateImageResponseBody() = default;
};
class UpdateImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateImageResponseBody> body{};

  UpdateImageResponse() {}

  explicit UpdateImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateImageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateImageResponse() = default;
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
  AddImageResponse addImageWithOptions(shared_ptr<string> InstanceName,
                                       shared_ptr<string> ProductId,
                                       shared_ptr<AddImageRequest> tmpReq,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageResponse addImage(shared_ptr<string> InstanceName, shared_ptr<string> ProductId, shared_ptr<AddImageRequest> request);
  AddImageResponse addImageAdvance(shared_ptr<string> InstanceName,
                                   shared_ptr<string> ProductId,
                                   shared_ptr<AddImageAdvanceRequest> request,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckOssIncrementMetaExistResponse checkOssIncrementMetaExistWithOptions(shared_ptr<CheckOssIncrementMetaExistRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckOssIncrementMetaExistResponse checkOssIncrementMetaExist(shared_ptr<CheckOssIncrementMetaExistRequest> request);
  CreateBatchTasksResponse createBatchTasksWithOptions(shared_ptr<string> InstanceName,
                                                       shared_ptr<CreateBatchTasksRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBatchTasksResponse createBatchTasks(shared_ptr<string> InstanceName, shared_ptr<CreateBatchTasksRequest> request);
  CreateDumpMetaResponse createDumpMetaWithOptions(shared_ptr<string> InstanceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDumpMetaResponse createDumpMeta(shared_ptr<string> InstanceName);
  DeleteImageResponse deleteImageWithOptions(shared_ptr<string> InstanceName,
                                             shared_ptr<string> ProductId,
                                             shared_ptr<DeleteImageRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageResponse deleteImage(shared_ptr<string> InstanceName, shared_ptr<string> ProductId, shared_ptr<DeleteImageRequest> request);
  GetImageResponse getImageWithOptions(shared_ptr<string> InstanceName,
                                       shared_ptr<string> ProductId,
                                       shared_ptr<GetImageRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageResponse getImage(shared_ptr<string> InstanceName, shared_ptr<string> ProductId, shared_ptr<GetImageRequest> request);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> InstanceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> InstanceName);
  ListBatchTasksResponse listBatchTasksWithOptions(shared_ptr<string> InstanceName,
                                                   shared_ptr<ListBatchTasksRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBatchTasksResponse listBatchTasks(shared_ptr<string> InstanceName, shared_ptr<ListBatchTasksRequest> request);
  ListDumpMetaResponse listDumpMetaWithOptions(shared_ptr<string> InstanceName,
                                               shared_ptr<ListDumpMetaRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDumpMetaResponse listDumpMeta(shared_ptr<string> InstanceName, shared_ptr<ListDumpMetaRequest> request);
  ListInstanceResponse listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceResponse listInstance(shared_ptr<ListInstanceRequest> request);
  ListOssBucketAndPathResponse listOssBucketAndPathWithOptions(shared_ptr<ListOssBucketAndPathRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOssBucketAndPathResponse listOssBucketAndPath(shared_ptr<ListOssBucketAndPathRequest> request);
  ResetInstanceResponse resetInstanceWithOptions(shared_ptr<string> InstanceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetInstanceResponse resetInstance(shared_ptr<string> InstanceName);
  SearchImageByNameResponse searchImageByNameWithOptions(shared_ptr<string> InstanceName,
                                                         shared_ptr<SearchImageByNameRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchImageByNameResponse searchImageByName(shared_ptr<string> InstanceName, shared_ptr<SearchImageByNameRequest> request);
  SearchImageByPicResponse searchImageByPicWithOptions(shared_ptr<string> InstanceName,
                                                       shared_ptr<SearchImageByPicRequest> tmpReq,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchImageByPicResponse searchImageByPic(shared_ptr<string> InstanceName, shared_ptr<SearchImageByPicRequest> request);
  SearchImageByPicResponse searchImageByPicAdvance(shared_ptr<string> InstanceName,
                                                   shared_ptr<SearchImageByPicAdvanceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopBatchTasksResponse stopBatchTasksWithOptions(shared_ptr<string> InstanceName,
                                                   shared_ptr<string> Id,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopBatchTasksResponse stopBatchTasks(shared_ptr<string> InstanceName, shared_ptr<string> Id);
  StopDumpMetaResponse stopDumpMetaWithOptions(shared_ptr<string> InstanceName,
                                               shared_ptr<string> Id,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDumpMetaResponse stopDumpMeta(shared_ptr<string> InstanceName, shared_ptr<string> Id);
  UpdateImageResponse updateImageWithOptions(shared_ptr<string> InstanceName,
                                             shared_ptr<string> ProductId,
                                             shared_ptr<UpdateImageRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageResponse updateImage(shared_ptr<string> InstanceName, shared_ptr<string> ProductId, shared_ptr<UpdateImageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aisearch20230101

#endif
