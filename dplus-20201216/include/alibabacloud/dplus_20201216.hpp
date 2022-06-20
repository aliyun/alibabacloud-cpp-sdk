// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DPLUS20201216_H_
#define ALIBABACLOUD_DPLUS20201216_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dplus20201216 {
class AePredictCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};

  AePredictCategoryRequest() {}

  explicit AePredictCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~AePredictCategoryRequest() = default;
};
class AePredictCategoryAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};

  AePredictCategoryAdvanceRequest() {}

  explicit AePredictCategoryAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
  }


  virtual ~AePredictCategoryAdvanceRequest() = default;
};
class AePredictCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  AePredictCategoryResponse() {}

  explicit AePredictCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~AePredictCategoryResponse() = default;
};
class AePropRecRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};

  AePropRecRequest() {}

  explicit AePropRecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~AePropRecRequest() = default;
};
class AePropRecAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};

  AePropRecAdvanceRequest() {}

  explicit AePropRecAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
  }


  virtual ~AePropRecAdvanceRequest() = default;
};
class AePropRecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  AePropRecResponse() {}

  explicit AePropRecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~AePropRecResponse() = default;
};
class AlivisionImgdupRequest : public Darabonba::Model {
public:
  shared_ptr<long> imageHeight{};
  shared_ptr<long> imageWidth{};
  shared_ptr<long> outputImageNum{};
  shared_ptr<string> picNumList{};
  shared_ptr<string> picUrlList{};

  AlivisionImgdupRequest() {}

  explicit AlivisionImgdupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (outputImageNum) {
      res["OutputImageNum"] = boost::any(*outputImageNum);
    }
    if (picNumList) {
      res["PicNumList"] = boost::any(*picNumList);
    }
    if (picUrlList) {
      res["PicUrlList"] = boost::any(*picUrlList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("OutputImageNum") != m.end() && !m["OutputImageNum"].empty()) {
      outputImageNum = make_shared<long>(boost::any_cast<long>(m["OutputImageNum"]));
    }
    if (m.find("PicNumList") != m.end() && !m["PicNumList"].empty()) {
      picNumList = make_shared<string>(boost::any_cast<string>(m["PicNumList"]));
    }
    if (m.find("PicUrlList") != m.end() && !m["PicUrlList"].empty()) {
      picUrlList = make_shared<string>(boost::any_cast<string>(m["PicUrlList"]));
    }
  }


  virtual ~AlivisionImgdupRequest() = default;
};
class AlivisionImgdupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  AlivisionImgdupResponse() {}

  explicit AlivisionImgdupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~AlivisionImgdupResponse() = default;
};
class CreateImageAmazonTaskRequest : public Darabonba::Model {
public:
  shared_ptr<bool> gif{};
  shared_ptr<vector<string>> imgUrlList{};
  shared_ptr<string> templateMode{};
  shared_ptr<vector<string>> textList{};

  CreateImageAmazonTaskRequest() {}

  explicit CreateImageAmazonTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gif) {
      res["Gif"] = boost::any(*gif);
    }
    if (imgUrlList) {
      res["ImgUrlList"] = boost::any(*imgUrlList);
    }
    if (templateMode) {
      res["TemplateMode"] = boost::any(*templateMode);
    }
    if (textList) {
      res["TextList"] = boost::any(*textList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gif") != m.end() && !m["Gif"].empty()) {
      gif = make_shared<bool>(boost::any_cast<bool>(m["Gif"]));
    }
    if (m.find("ImgUrlList") != m.end() && !m["ImgUrlList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImgUrlList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImgUrlList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imgUrlList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateMode") != m.end() && !m["TemplateMode"].empty()) {
      templateMode = make_shared<string>(boost::any_cast<string>(m["TemplateMode"]));
    }
    if (m.find("TextList") != m.end() && !m["TextList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TextList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TextList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      textList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateImageAmazonTaskRequest() = default;
};
class CreateImageAmazonTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> gif{};
  shared_ptr<string> imgUrlListShrink{};
  shared_ptr<string> templateMode{};
  shared_ptr<string> textListShrink{};

  CreateImageAmazonTaskShrinkRequest() {}

  explicit CreateImageAmazonTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gif) {
      res["Gif"] = boost::any(*gif);
    }
    if (imgUrlListShrink) {
      res["ImgUrlList"] = boost::any(*imgUrlListShrink);
    }
    if (templateMode) {
      res["TemplateMode"] = boost::any(*templateMode);
    }
    if (textListShrink) {
      res["TextList"] = boost::any(*textListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gif") != m.end() && !m["Gif"].empty()) {
      gif = make_shared<bool>(boost::any_cast<bool>(m["Gif"]));
    }
    if (m.find("ImgUrlList") != m.end() && !m["ImgUrlList"].empty()) {
      imgUrlListShrink = make_shared<string>(boost::any_cast<string>(m["ImgUrlList"]));
    }
    if (m.find("TemplateMode") != m.end() && !m["TemplateMode"].empty()) {
      templateMode = make_shared<string>(boost::any_cast<string>(m["TemplateMode"]));
    }
    if (m.find("TextList") != m.end() && !m["TextList"].empty()) {
      textListShrink = make_shared<string>(boost::any_cast<string>(m["TextList"]));
    }
  }


  virtual ~CreateImageAmazonTaskShrinkRequest() = default;
};
class CreateImageAmazonTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  CreateImageAmazonTaskResponseBody() {}

  explicit CreateImageAmazonTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~CreateImageAmazonTaskResponseBody() = default;
};
class CreateImageAmazonTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateImageAmazonTaskResponseBody> body{};

  CreateImageAmazonTaskResponse() {}

  explicit CreateImageAmazonTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageAmazonTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageAmazonTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageAmazonTaskResponse() = default;
};
class CreateRemoveWorkTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> itemIdentity{};
  shared_ptr<string> picUrl{};

  CreateRemoveWorkTaskRequest() {}

  explicit CreateRemoveWorkTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemIdentity) {
      res["ItemIdentity"] = boost::any(*itemIdentity);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemIdentity") != m.end() && !m["ItemIdentity"].empty()) {
      itemIdentity = make_shared<string>(boost::any_cast<string>(m["ItemIdentity"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~CreateRemoveWorkTaskRequest() = default;
};
class CreateRemoveWorkTaskAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};
  shared_ptr<string> itemIdentity{};

  CreateRemoveWorkTaskAdvanceRequest() {}

  explicit CreateRemoveWorkTaskAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    if (itemIdentity) {
      res["ItemIdentity"] = boost::any(*itemIdentity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
    if (m.find("ItemIdentity") != m.end() && !m["ItemIdentity"].empty()) {
      itemIdentity = make_shared<string>(boost::any_cast<string>(m["ItemIdentity"]));
    }
  }


  virtual ~CreateRemoveWorkTaskAdvanceRequest() = default;
};
class CreateRemoveWorkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  CreateRemoveWorkTaskResponseBody() {}

  explicit CreateRemoveWorkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~CreateRemoveWorkTaskResponseBody() = default;
};
class CreateRemoveWorkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRemoveWorkTaskResponseBody> body{};

  CreateRemoveWorkTaskResponse() {}

  explicit CreateRemoveWorkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRemoveWorkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRemoveWorkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRemoveWorkTaskResponse() = default;
};
class FaceshifterTRequest : public Darabonba::Model {
public:
  shared_ptr<long> age{};
  shared_ptr<long> gender{};
  shared_ptr<string> picUrl{};
  shared_ptr<long> race{};

  FaceshifterTRequest() {}

  explicit FaceshifterTRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (race) {
      res["Race"] = boost::any(*race);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["Gender"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("Race") != m.end() && !m["Race"].empty()) {
      race = make_shared<long>(boost::any_cast<long>(m["Race"]));
    }
  }


  virtual ~FaceshifterTRequest() = default;
};
class FaceshifterTAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};
  shared_ptr<long> age{};
  shared_ptr<long> gender{};
  shared_ptr<long> race{};

  FaceshifterTAdvanceRequest() {}

  explicit FaceshifterTAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (race) {
      res["Race"] = boost::any(*race);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["Gender"]));
    }
    if (m.find("Race") != m.end() && !m["Race"].empty()) {
      race = make_shared<long>(boost::any_cast<long>(m["Race"]));
    }
  }


  virtual ~FaceshifterTAdvanceRequest() = default;
};
class FaceshifterTResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  FaceshifterTResponse() {}

  explicit FaceshifterTResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~FaceshifterTResponse() = default;
};
class GetTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  GetTaskResultRequest() {}

  explicit GetTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetTaskResultRequest() = default;
};
class GetTaskResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> result{};
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<long> taskId{};

  GetTaskResultResponseBodyData() {}

  explicit GetTaskResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetTaskResultResponseBodyData() = default;
};
class GetTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTaskResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTaskResultResponseBody() {}

  explicit GetTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTaskResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTaskResultResponseBody() = default;
};
class GetTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResultResponseBody> body{};

  GetTaskResultResponse() {}

  explicit GetTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResultResponse() = default;
};
class GetTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  GetTaskStatusRequest() {}

  explicit GetTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetTaskStatusRequest() = default;
};
class GetTaskStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<long> taskId{};

  GetTaskStatusResponseBodyData() {}

  explicit GetTaskStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetTaskStatusResponseBodyData() = default;
};
class GetTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTaskStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTaskStatusResponseBody() {}

  explicit GetTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTaskStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTaskStatusResponseBody() = default;
};
class GetTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskStatusResponseBody> body{};

  GetTaskStatusResponse() {}

  explicit GetTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskStatusResponse() = default;
};
class KuajingSegRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};
  shared_ptr<string> returnPicFormat{};
  shared_ptr<string> returnPicType{};

  KuajingSegRequest() {}

  explicit KuajingSegRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (returnPicFormat) {
      res["ReturnPicFormat"] = boost::any(*returnPicFormat);
    }
    if (returnPicType) {
      res["ReturnPicType"] = boost::any(*returnPicType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("ReturnPicFormat") != m.end() && !m["ReturnPicFormat"].empty()) {
      returnPicFormat = make_shared<string>(boost::any_cast<string>(m["ReturnPicFormat"]));
    }
    if (m.find("ReturnPicType") != m.end() && !m["ReturnPicType"].empty()) {
      returnPicType = make_shared<string>(boost::any_cast<string>(m["ReturnPicType"]));
    }
  }


  virtual ~KuajingSegRequest() = default;
};
class KuajingSegAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};
  shared_ptr<string> returnPicFormat{};
  shared_ptr<string> returnPicType{};

  KuajingSegAdvanceRequest() {}

  explicit KuajingSegAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    if (returnPicFormat) {
      res["ReturnPicFormat"] = boost::any(*returnPicFormat);
    }
    if (returnPicType) {
      res["ReturnPicType"] = boost::any(*returnPicType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
    if (m.find("ReturnPicFormat") != m.end() && !m["ReturnPicFormat"].empty()) {
      returnPicFormat = make_shared<string>(boost::any_cast<string>(m["ReturnPicFormat"]));
    }
    if (m.find("ReturnPicType") != m.end() && !m["ReturnPicType"].empty()) {
      returnPicType = make_shared<string>(boost::any_cast<string>(m["ReturnPicType"]));
    }
  }


  virtual ~KuajingSegAdvanceRequest() = default;
};
class KuajingSegResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  KuajingSegResponse() {}

  explicit KuajingSegResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~KuajingSegResponse() = default;
};
class RemoveWordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};

  RemoveWordsRequest() {}

  explicit RemoveWordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~RemoveWordsRequest() = default;
};
class RemoveWordsAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};

  RemoveWordsAdvanceRequest() {}

  explicit RemoveWordsAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
  }


  virtual ~RemoveWordsAdvanceRequest() = default;
};
class RemoveWordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  RemoveWordsResponse() {}

  explicit RemoveWordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RemoveWordsResponse() = default;
};
class ReplaceBackgroundRequest : public Darabonba::Model {
public:
  shared_ptr<string> backgroundId{};
  shared_ptr<long> num{};
  shared_ptr<string> picBackgroundUrl{};
  shared_ptr<string> picUrl{};

  ReplaceBackgroundRequest() {}

  explicit ReplaceBackgroundRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backgroundId) {
      res["BackgroundId"] = boost::any(*backgroundId);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picBackgroundUrl) {
      res["PicBackgroundUrl"] = boost::any(*picBackgroundUrl);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackgroundId") != m.end() && !m["BackgroundId"].empty()) {
      backgroundId = make_shared<string>(boost::any_cast<string>(m["BackgroundId"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicBackgroundUrl") != m.end() && !m["PicBackgroundUrl"].empty()) {
      picBackgroundUrl = make_shared<string>(boost::any_cast<string>(m["PicBackgroundUrl"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~ReplaceBackgroundRequest() = default;
};
class ReplaceBackgroundAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};
  shared_ptr<string> backgroundId{};
  shared_ptr<long> num{};
  shared_ptr<string> picBackgroundUrl{};

  ReplaceBackgroundAdvanceRequest() {}

  explicit ReplaceBackgroundAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    if (backgroundId) {
      res["BackgroundId"] = boost::any(*backgroundId);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picBackgroundUrl) {
      res["PicBackgroundUrl"] = boost::any(*picBackgroundUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
    if (m.find("BackgroundId") != m.end() && !m["BackgroundId"].empty()) {
      backgroundId = make_shared<string>(boost::any_cast<string>(m["BackgroundId"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicBackgroundUrl") != m.end() && !m["PicBackgroundUrl"].empty()) {
      picBackgroundUrl = make_shared<string>(boost::any_cast<string>(m["PicBackgroundUrl"]));
    }
  }


  virtual ~ReplaceBackgroundAdvanceRequest() = default;
};
class ReplaceBackgroundResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  ReplaceBackgroundResponse() {}

  explicit ReplaceBackgroundResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ReplaceBackgroundResponse() = default;
};
class SeleteCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<string> pid{};
  shared_ptr<string> query{};
  shared_ptr<long> start{};

  SeleteCommodityRequest() {}

  explicit SeleteCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~SeleteCommodityRequest() = default;
};
class SeleteCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  SeleteCommodityResponse() {}

  explicit SeleteCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~SeleteCommodityResponse() = default;
};
class SeleteCommodityByBToBRequest : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<string> pid{};
  shared_ptr<string> query{};
  shared_ptr<long> start{};

  SeleteCommodityByBToBRequest() {}

  explicit SeleteCommodityByBToBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~SeleteCommodityByBToBRequest() = default;
};
class SeleteCommodityByBToBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  SeleteCommodityByBToBResponse() {}

  explicit SeleteCommodityByBToBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~SeleteCommodityByBToBResponse() = default;
};
class TbPredictCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};

  TbPredictCategoryRequest() {}

  explicit TbPredictCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~TbPredictCategoryRequest() = default;
};
class TbPredictCategoryAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};

  TbPredictCategoryAdvanceRequest() {}

  explicit TbPredictCategoryAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
  }


  virtual ~TbPredictCategoryAdvanceRequest() = default;
};
class TbPredictCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  TbPredictCategoryResponse() {}

  explicit TbPredictCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~TbPredictCategoryResponse() = default;
};
class TbPropRecRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};

  TbPropRecRequest() {}

  explicit TbPropRecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~TbPropRecRequest() = default;
};
class TbPropRecAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};

  TbPropRecAdvanceRequest() {}

  explicit TbPropRecAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
  }


  virtual ~TbPropRecAdvanceRequest() = default;
};
class TbPropRecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  TbPropRecResponse() {}

  explicit TbPropRecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~TbPropRecResponse() = default;
};
class TransferUrlByBtoBRequest : public Darabonba::Model {
public:
  shared_ptr<long> offerId{};
  shared_ptr<string> pid{};

  TransferUrlByBtoBRequest() {}

  explicit TransferUrlByBtoBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offerId) {
      res["OfferId"] = boost::any(*offerId);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OfferId") != m.end() && !m["OfferId"].empty()) {
      offerId = make_shared<long>(boost::any_cast<long>(m["OfferId"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
  }


  virtual ~TransferUrlByBtoBRequest() = default;
};
class TransferUrlByBtoBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  TransferUrlByBtoBResponse() {}

  explicit TransferUrlByBtoBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~TransferUrlByBtoBResponse() = default;
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
  AePredictCategoryResponse aePredictCategoryWithOptions(shared_ptr<AePredictCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AePredictCategoryResponse aePredictCategory(shared_ptr<AePredictCategoryRequest> request);
  AePredictCategoryResponse aePredictCategoryAdvance(shared_ptr<AePredictCategoryAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AePropRecResponse aePropRecWithOptions(shared_ptr<AePropRecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AePropRecResponse aePropRec(shared_ptr<AePropRecRequest> request);
  AePropRecResponse aePropRecAdvance(shared_ptr<AePropRecAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AlivisionImgdupResponse alivisionImgdupWithOptions(shared_ptr<AlivisionImgdupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AlivisionImgdupResponse alivisionImgdup(shared_ptr<AlivisionImgdupRequest> request);
  CreateImageAmazonTaskResponse createImageAmazonTaskWithOptions(shared_ptr<CreateImageAmazonTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageAmazonTaskResponse createImageAmazonTask(shared_ptr<CreateImageAmazonTaskRequest> request);
  CreateRemoveWorkTaskResponse createRemoveWorkTaskWithOptions(shared_ptr<CreateRemoveWorkTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRemoveWorkTaskResponse createRemoveWorkTask(shared_ptr<CreateRemoveWorkTaskRequest> request);
  CreateRemoveWorkTaskResponse createRemoveWorkTaskAdvance(shared_ptr<CreateRemoveWorkTaskAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceshifterTResponse faceshifterTWithOptions(shared_ptr<FaceshifterTRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceshifterTResponse faceshifterT(shared_ptr<FaceshifterTRequest> request);
  FaceshifterTResponse faceshifterTAdvance(shared_ptr<FaceshifterTAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResultResponse getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResultResponse getTaskResult(shared_ptr<GetTaskResultRequest> request);
  GetTaskStatusResponse getTaskStatusWithOptions(shared_ptr<GetTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskStatusResponse getTaskStatus(shared_ptr<GetTaskStatusRequest> request);
  KuajingSegResponse kuajingSegWithOptions(shared_ptr<KuajingSegRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KuajingSegResponse kuajingSeg(shared_ptr<KuajingSegRequest> request);
  KuajingSegResponse kuajingSegAdvance(shared_ptr<KuajingSegAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveWordsResponse removeWordsWithOptions(shared_ptr<RemoveWordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveWordsResponse removeWords(shared_ptr<RemoveWordsRequest> request);
  RemoveWordsResponse removeWordsAdvance(shared_ptr<RemoveWordsAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceBackgroundResponse replaceBackgroundWithOptions(shared_ptr<ReplaceBackgroundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceBackgroundResponse replaceBackground(shared_ptr<ReplaceBackgroundRequest> request);
  ReplaceBackgroundResponse replaceBackgroundAdvance(shared_ptr<ReplaceBackgroundAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SeleteCommodityResponse seleteCommodityWithOptions(shared_ptr<SeleteCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SeleteCommodityResponse seleteCommodity(shared_ptr<SeleteCommodityRequest> request);
  SeleteCommodityByBToBResponse seleteCommodityByBToBWithOptions(shared_ptr<SeleteCommodityByBToBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SeleteCommodityByBToBResponse seleteCommodityByBToB(shared_ptr<SeleteCommodityByBToBRequest> request);
  TbPredictCategoryResponse tbPredictCategoryWithOptions(shared_ptr<TbPredictCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TbPredictCategoryResponse tbPredictCategory(shared_ptr<TbPredictCategoryRequest> request);
  TbPredictCategoryResponse tbPredictCategoryAdvance(shared_ptr<TbPredictCategoryAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TbPropRecResponse tbPropRecWithOptions(shared_ptr<TbPropRecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TbPropRecResponse tbPropRec(shared_ptr<TbPropRecRequest> request);
  TbPropRecResponse tbPropRecAdvance(shared_ptr<TbPropRecAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferUrlByBtoBResponse transferUrlByBtoBWithOptions(shared_ptr<TransferUrlByBtoBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferUrlByBtoBResponse transferUrlByBtoB(shared_ptr<TransferUrlByBtoBRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dplus20201216

#endif
