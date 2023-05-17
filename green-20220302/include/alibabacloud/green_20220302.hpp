// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GREEN20220302_H_
#define ALIBABACLOUD_GREEN20220302_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Green20220302 {
class DescribeImageResultExtRequest : public Darabonba::Model {
public:
  shared_ptr<string> infoType{};
  shared_ptr<string> reqId{};

  DescribeImageResultExtRequest() {}

  explicit DescribeImageResultExtRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (infoType) {
      res["InfoType"] = boost::any(*infoType);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InfoType") != m.end() && !m["InfoType"].empty()) {
      infoType = make_shared<string>(boost::any_cast<string>(m["InfoType"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
  }


  virtual ~DescribeImageResultExtRequest() = default;
};
class DescribeImageResultExtResponseBodyDataCustomImage : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> libId{};
  shared_ptr<string> libName{};

  DescribeImageResultExtResponseBodyDataCustomImage() {}

  explicit DescribeImageResultExtResponseBodyDataCustomImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
  }


  virtual ~DescribeImageResultExtResponseBodyDataCustomImage() = default;
};
class DescribeImageResultExtResponseBodyDataPublicFigure : public Darabonba::Model {
public:
  shared_ptr<string> figureId{};

  DescribeImageResultExtResponseBodyDataPublicFigure() {}

  explicit DescribeImageResultExtResponseBodyDataPublicFigure(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figureId) {
      res["FigureId"] = boost::any(*figureId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FigureId") != m.end() && !m["FigureId"].empty()) {
      figureId = make_shared<string>(boost::any_cast<string>(m["FigureId"]));
    }
  }


  virtual ~DescribeImageResultExtResponseBodyDataPublicFigure() = default;
};
class DescribeImageResultExtResponseBodyDataTextInImage : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ocrDatas{};

  DescribeImageResultExtResponseBodyDataTextInImage() {}

  explicit DescribeImageResultExtResponseBodyDataTextInImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ocrDatas) {
      res["OcrDatas"] = boost::any(*ocrDatas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OcrDatas") != m.end() && !m["OcrDatas"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OcrDatas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OcrDatas"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ocrDatas = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeImageResultExtResponseBodyDataTextInImage() = default;
};
class DescribeImageResultExtResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeImageResultExtResponseBodyDataCustomImage>> customImage{};
  shared_ptr<vector<DescribeImageResultExtResponseBodyDataPublicFigure>> publicFigure{};
  shared_ptr<DescribeImageResultExtResponseBodyDataTextInImage> textInImage{};

  DescribeImageResultExtResponseBodyData() {}

  explicit DescribeImageResultExtResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customImage) {
      vector<boost::any> temp1;
      for(auto item1:*customImage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomImage"] = boost::any(temp1);
    }
    if (publicFigure) {
      vector<boost::any> temp1;
      for(auto item1:*publicFigure){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PublicFigure"] = boost::any(temp1);
    }
    if (textInImage) {
      res["TextInImage"] = textInImage ? boost::any(textInImage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomImage") != m.end() && !m["CustomImage"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomImage"].type()) {
        vector<DescribeImageResultExtResponseBodyDataCustomImage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomImage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageResultExtResponseBodyDataCustomImage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customImage = make_shared<vector<DescribeImageResultExtResponseBodyDataCustomImage>>(expect1);
      }
    }
    if (m.find("PublicFigure") != m.end() && !m["PublicFigure"].empty()) {
      if (typeid(vector<boost::any>) == m["PublicFigure"].type()) {
        vector<DescribeImageResultExtResponseBodyDataPublicFigure> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PublicFigure"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageResultExtResponseBodyDataPublicFigure model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        publicFigure = make_shared<vector<DescribeImageResultExtResponseBodyDataPublicFigure>>(expect1);
      }
    }
    if (m.find("TextInImage") != m.end() && !m["TextInImage"].empty()) {
      if (typeid(map<string, boost::any>) == m["TextInImage"].type()) {
        DescribeImageResultExtResponseBodyDataTextInImage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TextInImage"]));
        textInImage = make_shared<DescribeImageResultExtResponseBodyDataTextInImage>(model1);
      }
    }
  }


  virtual ~DescribeImageResultExtResponseBodyData() = default;
};
class DescribeImageResultExtResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeImageResultExtResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  DescribeImageResultExtResponseBody() {}

  explicit DescribeImageResultExtResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeImageResultExtResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeImageResultExtResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeImageResultExtResponseBody() = default;
};
class DescribeImageResultExtResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeImageResultExtResponseBody> body{};

  DescribeImageResultExtResponse() {}

  explicit DescribeImageResultExtResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImageResultExtResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageResultExtResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageResultExtResponse() = default;
};
class ImageModerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  ImageModerationRequest() {}

  explicit ImageModerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~ImageModerationRequest() = default;
};
class ImageModerationResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> label{};

  ImageModerationResponseBodyDataResult() {}

  explicit ImageModerationResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~ImageModerationResponseBodyDataResult() = default;
};
class ImageModerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<vector<ImageModerationResponseBodyDataResult>> result{};

  ImageModerationResponseBodyData() {}

  explicit ImageModerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ImageModerationResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImageModerationResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ImageModerationResponseBodyDataResult>>(expect1);
      }
    }
  }


  virtual ~ImageModerationResponseBodyData() = default;
};
class ImageModerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ImageModerationResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  ImageModerationResponseBody() {}

  explicit ImageModerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ImageModerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImageModerationResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ImageModerationResponseBody() = default;
};
class ImageModerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImageModerationResponseBody> body{};

  ImageModerationResponse() {}

  explicit ImageModerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageModerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageModerationResponseBody>(model1);
      }
    }
  }


  virtual ~ImageModerationResponse() = default;
};
class TextModerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  TextModerationRequest() {}

  explicit TextModerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~TextModerationRequest() = default;
};
class TextModerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> labels{};
  shared_ptr<string> reason{};

  TextModerationResponseBodyData() {}

  explicit TextModerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (reason) {
      res["reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["labels"]));
    }
    if (m.find("reason") != m.end() && !m["reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["reason"]));
    }
  }


  virtual ~TextModerationResponseBodyData() = default;
};
class TextModerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TextModerationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TextModerationResponseBody() {}

  explicit TextModerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TextModerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TextModerationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TextModerationResponseBody() = default;
};
class TextModerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextModerationResponseBody> body{};

  TextModerationResponse() {}

  explicit TextModerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextModerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextModerationResponseBody>(model1);
      }
    }
  }


  virtual ~TextModerationResponse() = default;
};
class VoiceModerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  VoiceModerationRequest() {}

  explicit VoiceModerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~VoiceModerationRequest() = default;
};
class VoiceModerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  VoiceModerationResponseBodyData() {}

  explicit VoiceModerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoiceModerationResponseBodyData() = default;
};
class VoiceModerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<VoiceModerationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VoiceModerationResponseBody() {}

  explicit VoiceModerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        VoiceModerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VoiceModerationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VoiceModerationResponseBody() = default;
};
class VoiceModerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceModerationResponseBody> body{};

  VoiceModerationResponse() {}

  explicit VoiceModerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceModerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceModerationResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceModerationResponse() = default;
};
class VoiceModerationCancelRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  VoiceModerationCancelRequest() {}

  explicit VoiceModerationCancelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~VoiceModerationCancelRequest() = default;
};
class VoiceModerationCancelResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VoiceModerationCancelResponseBody() {}

  explicit VoiceModerationCancelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VoiceModerationCancelResponseBody() = default;
};
class VoiceModerationCancelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceModerationCancelResponseBody> body{};

  VoiceModerationCancelResponse() {}

  explicit VoiceModerationCancelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceModerationCancelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceModerationCancelResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceModerationCancelResponse() = default;
};
class VoiceModerationResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  VoiceModerationResultRequest() {}

  explicit VoiceModerationResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~VoiceModerationResultRequest() = default;
};
class VoiceModerationResultResponseBodyDataSliceDetails : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> extend{};
  shared_ptr<string> labels{};
  shared_ptr<map<string, boost::any>> originAlgoResult{};
  shared_ptr<string> riskTips{};
  shared_ptr<string> riskWords{};
  shared_ptr<double> score{};
  shared_ptr<long> startTime{};
  shared_ptr<long> startTimestamp{};
  shared_ptr<string> text{};
  shared_ptr<string> url{};

  VoiceModerationResultResponseBodyDataSliceDetails() {}

  explicit VoiceModerationResultResponseBodyDataSliceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (originAlgoResult) {
      res["OriginAlgoResult"] = boost::any(*originAlgoResult);
    }
    if (riskTips) {
      res["RiskTips"] = boost::any(*riskTips);
    }
    if (riskWords) {
      res["RiskWords"] = boost::any(*riskWords);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("OriginAlgoResult") != m.end() && !m["OriginAlgoResult"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OriginAlgoResult"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      originAlgoResult = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RiskTips") != m.end() && !m["RiskTips"].empty()) {
      riskTips = make_shared<string>(boost::any_cast<string>(m["RiskTips"]));
    }
    if (m.find("RiskWords") != m.end() && !m["RiskWords"].empty()) {
      riskWords = make_shared<string>(boost::any_cast<string>(m["RiskWords"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~VoiceModerationResultResponseBodyDataSliceDetails() = default;
};
class VoiceModerationResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};
  shared_ptr<vector<VoiceModerationResultResponseBodyDataSliceDetails>> sliceDetails{};
  shared_ptr<string> taskId{};
  shared_ptr<string> url{};

  VoiceModerationResultResponseBodyData() {}

  explicit VoiceModerationResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (sliceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*sliceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SliceDetails"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("SliceDetails") != m.end() && !m["SliceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SliceDetails"].type()) {
        vector<VoiceModerationResultResponseBodyDataSliceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SliceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VoiceModerationResultResponseBodyDataSliceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sliceDetails = make_shared<vector<VoiceModerationResultResponseBodyDataSliceDetails>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~VoiceModerationResultResponseBodyData() = default;
};
class VoiceModerationResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<VoiceModerationResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VoiceModerationResultResponseBody() {}

  explicit VoiceModerationResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        VoiceModerationResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VoiceModerationResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VoiceModerationResultResponseBody() = default;
};
class VoiceModerationResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceModerationResultResponseBody> body{};

  VoiceModerationResultResponse() {}

  explicit VoiceModerationResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoiceModerationResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceModerationResultResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceModerationResultResponse() = default;
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
  DescribeImageResultExtResponse describeImageResultExtWithOptions(shared_ptr<DescribeImageResultExtRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageResultExtResponse describeImageResultExt(shared_ptr<DescribeImageResultExtRequest> request);
  ImageModerationResponse imageModerationWithOptions(shared_ptr<ImageModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageModerationResponse imageModeration(shared_ptr<ImageModerationRequest> request);
  TextModerationResponse textModerationWithOptions(shared_ptr<TextModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TextModerationResponse textModeration(shared_ptr<TextModerationRequest> request);
  VoiceModerationResponse voiceModerationWithOptions(shared_ptr<VoiceModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceModerationResponse voiceModeration(shared_ptr<VoiceModerationRequest> request);
  VoiceModerationCancelResponse voiceModerationCancelWithOptions(shared_ptr<VoiceModerationCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceModerationCancelResponse voiceModerationCancel(shared_ptr<VoiceModerationCancelRequest> request);
  VoiceModerationResultResponse voiceModerationResultWithOptions(shared_ptr<VoiceModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceModerationResultResponse voiceModerationResult(shared_ptr<VoiceModerationResultRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Green20220302

#endif
