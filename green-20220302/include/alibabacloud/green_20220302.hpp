// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GREEN20220302_H_
#define ALIBABACLOUD_GREEN20220302_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Green20220302 {
class DescribeFileModerationResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  DescribeFileModerationResultRequest() {}

  explicit DescribeFileModerationResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeFileModerationResultRequest() = default;
};
class DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> label{};

  DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult() {}

  explicit DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult() = default;
};
class DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation : public Darabonba::Model {
public:
  shared_ptr<long> h{};
  shared_ptr<long> w{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation() {}

  explicit DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<long>(boost::any_cast<long>(m["H"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<long>(boost::any_cast<long>(m["W"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation() = default;
};
class DescribeFileModerationResultResponseBodyDataPageResultImageResult : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult>> labelResult{};
  shared_ptr<DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation> location{};
  shared_ptr<string> service{};

  DescribeFileModerationResultResponseBodyDataPageResultImageResult() {}

  explicit DescribeFileModerationResultResponseBodyDataPageResultImageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (labelResult) {
      vector<boost::any> temp1;
      for(auto item1:*labelResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelResult"] = boost::any(temp1);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LabelResult") != m.end() && !m["LabelResult"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelResult"].type()) {
        vector<DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelResult = make_shared<vector<DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult>>(expect1);
      }
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation>(model1);
      }
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~DescribeFileModerationResultResponseBodyDataPageResultImageResult() = default;
};
class DescribeFileModerationResultResponseBodyDataPageResultTextResult : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> labels{};
  shared_ptr<string> riskTips{};
  shared_ptr<string> riskWords{};
  shared_ptr<string> service{};
  shared_ptr<string> text{};
  shared_ptr<string> textSegment{};

  DescribeFileModerationResultResponseBodyDataPageResultTextResult() {}

  explicit DescribeFileModerationResultResponseBodyDataPageResultTextResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (riskTips) {
      res["RiskTips"] = boost::any(*riskTips);
    }
    if (riskWords) {
      res["RiskWords"] = boost::any(*riskWords);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (textSegment) {
      res["TextSegment"] = boost::any(*textSegment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("RiskTips") != m.end() && !m["RiskTips"].empty()) {
      riskTips = make_shared<string>(boost::any_cast<string>(m["RiskTips"]));
    }
    if (m.find("RiskWords") != m.end() && !m["RiskWords"].empty()) {
      riskWords = make_shared<string>(boost::any_cast<string>(m["RiskWords"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TextSegment") != m.end() && !m["TextSegment"].empty()) {
      textSegment = make_shared<string>(boost::any_cast<string>(m["TextSegment"]));
    }
  }


  virtual ~DescribeFileModerationResultResponseBodyDataPageResultTextResult() = default;
};
class DescribeFileModerationResultResponseBodyDataPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileModerationResultResponseBodyDataPageResultImageResult>> imageResult{};
  shared_ptr<string> imageUrl{};
  shared_ptr<long> pageNum{};
  shared_ptr<vector<DescribeFileModerationResultResponseBodyDataPageResultTextResult>> textResult{};
  shared_ptr<string> textUrl{};

  DescribeFileModerationResultResponseBodyDataPageResult() {}

  explicit DescribeFileModerationResultResponseBodyDataPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageResult) {
      vector<boost::any> temp1;
      for(auto item1:*imageResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageResult"] = boost::any(temp1);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (textResult) {
      vector<boost::any> temp1;
      for(auto item1:*textResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TextResult"] = boost::any(temp1);
    }
    if (textUrl) {
      res["TextUrl"] = boost::any(*textUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageResult") != m.end() && !m["ImageResult"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageResult"].type()) {
        vector<DescribeFileModerationResultResponseBodyDataPageResultImageResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileModerationResultResponseBodyDataPageResultImageResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageResult = make_shared<vector<DescribeFileModerationResultResponseBodyDataPageResultImageResult>>(expect1);
      }
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("TextResult") != m.end() && !m["TextResult"].empty()) {
      if (typeid(vector<boost::any>) == m["TextResult"].type()) {
        vector<DescribeFileModerationResultResponseBodyDataPageResultTextResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TextResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileModerationResultResponseBodyDataPageResultTextResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textResult = make_shared<vector<DescribeFileModerationResultResponseBodyDataPageResultTextResult>>(expect1);
      }
    }
    if (m.find("TextUrl") != m.end() && !m["TextUrl"].empty()) {
      textUrl = make_shared<string>(boost::any_cast<string>(m["TextUrl"]));
    }
  }


  virtual ~DescribeFileModerationResultResponseBodyDataPageResult() = default;
};
class DescribeFileModerationResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> docType{};
  shared_ptr<vector<DescribeFileModerationResultResponseBodyDataPageResult>> pageResult{};
  shared_ptr<string> url{};

  DescribeFileModerationResultResponseBodyData() {}

  explicit DescribeFileModerationResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (pageResult) {
      vector<boost::any> temp1;
      for(auto item1:*pageResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageResult"] = boost::any(temp1);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(vector<boost::any>) == m["PageResult"].type()) {
        vector<DescribeFileModerationResultResponseBodyDataPageResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileModerationResultResponseBodyDataPageResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageResult = make_shared<vector<DescribeFileModerationResultResponseBodyDataPageResult>>(expect1);
      }
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeFileModerationResultResponseBodyData() = default;
};
class DescribeFileModerationResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeFileModerationResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeFileModerationResultResponseBody() {}

  explicit DescribeFileModerationResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFileModerationResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeFileModerationResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFileModerationResultResponseBody() = default;
};
class DescribeFileModerationResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFileModerationResultResponseBody> body{};

  DescribeFileModerationResultResponse() {}

  explicit DescribeFileModerationResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFileModerationResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFileModerationResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFileModerationResultResponse() = default;
};
class DescribeImageModerationResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> reqId{};

  DescribeImageModerationResultRequest() {}

  explicit DescribeImageModerationResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
  }


  virtual ~DescribeImageModerationResultRequest() = default;
};
class DescribeImageModerationResultResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> label{};

  DescribeImageModerationResultResponseBodyDataResult() {}

  explicit DescribeImageModerationResultResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeImageModerationResultResponseBodyDataResult() = default;
};
class DescribeImageModerationResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> frame{};
  shared_ptr<long> frameNum{};
  shared_ptr<string> reqId{};
  shared_ptr<vector<DescribeImageModerationResultResponseBodyDataResult>> result{};

  DescribeImageModerationResultResponseBodyData() {}

  explicit DescribeImageModerationResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (frame) {
      res["Frame"] = boost::any(*frame);
    }
    if (frameNum) {
      res["FrameNum"] = boost::any(*frameNum);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
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
    if (m.find("Frame") != m.end() && !m["Frame"].empty()) {
      frame = make_shared<string>(boost::any_cast<string>(m["Frame"]));
    }
    if (m.find("FrameNum") != m.end() && !m["FrameNum"].empty()) {
      frameNum = make_shared<long>(boost::any_cast<long>(m["FrameNum"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeImageModerationResultResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageModerationResultResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeImageModerationResultResponseBodyDataResult>>(expect1);
      }
    }
  }


  virtual ~DescribeImageModerationResultResponseBodyData() = default;
};
class DescribeImageModerationResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeImageModerationResultResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  DescribeImageModerationResultResponseBody() {}

  explicit DescribeImageModerationResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImageModerationResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeImageModerationResultResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeImageModerationResultResponseBody() = default;
};
class DescribeImageModerationResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeImageModerationResultResponseBody> body{};

  DescribeImageModerationResultResponse() {}

  explicit DescribeImageModerationResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImageModerationResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageModerationResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageModerationResultResponse() = default;
};
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
  shared_ptr<vector<string>> riskWords{};

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
    if (riskWords) {
      res["RiskWords"] = boost::any(*riskWords);
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
    if (m.find("RiskWords") != m.end() && !m["RiskWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RiskWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RiskWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      riskWords = make_shared<vector<string>>(toVec1);
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
        DescribeImageResultExtResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageResultExtResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageResultExtResponse() = default;
};
class DescribeUploadTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> bucketName{};
  shared_ptr<long> expiration{};
  shared_ptr<string> fileNamePrefix{};
  shared_ptr<string> ossInternalEndPoint{};
  shared_ptr<string> ossInternetEndPoint{};
  shared_ptr<string> securityToken{};

  DescribeUploadTokenResponseBodyData() {}

  explicit DescribeUploadTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (fileNamePrefix) {
      res["FileNamePrefix"] = boost::any(*fileNamePrefix);
    }
    if (ossInternalEndPoint) {
      res["OssInternalEndPoint"] = boost::any(*ossInternalEndPoint);
    }
    if (ossInternetEndPoint) {
      res["OssInternetEndPoint"] = boost::any(*ossInternetEndPoint);
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
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<long>(boost::any_cast<long>(m["Expiration"]));
    }
    if (m.find("FileNamePrefix") != m.end() && !m["FileNamePrefix"].empty()) {
      fileNamePrefix = make_shared<string>(boost::any_cast<string>(m["FileNamePrefix"]));
    }
    if (m.find("OssInternalEndPoint") != m.end() && !m["OssInternalEndPoint"].empty()) {
      ossInternalEndPoint = make_shared<string>(boost::any_cast<string>(m["OssInternalEndPoint"]));
    }
    if (m.find("OssInternetEndPoint") != m.end() && !m["OssInternetEndPoint"].empty()) {
      ossInternetEndPoint = make_shared<string>(boost::any_cast<string>(m["OssInternetEndPoint"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeUploadTokenResponseBodyData() = default;
};
class DescribeUploadTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeUploadTokenResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  DescribeUploadTokenResponseBody() {}

  explicit DescribeUploadTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUploadTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeUploadTokenResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUploadTokenResponseBody() = default;
};
class DescribeUploadTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUploadTokenResponseBody> body{};

  DescribeUploadTokenResponse() {}

  explicit DescribeUploadTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUploadTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUploadTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUploadTokenResponse() = default;
};
class DescribeUrlModerationResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> reqId{};

  DescribeUrlModerationResultRequest() {}

  explicit DescribeUrlModerationResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
  }


  virtual ~DescribeUrlModerationResultRequest() = default;
};
class DescribeUrlModerationResultResponseBodyDataExtraInfo : public Darabonba::Model {
public:
  shared_ptr<string> icpNo{};
  shared_ptr<string> icpType{};

  DescribeUrlModerationResultResponseBodyDataExtraInfo() {}

  explicit DescribeUrlModerationResultResponseBodyDataExtraInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (icpNo) {
      res["IcpNo"] = boost::any(*icpNo);
    }
    if (icpType) {
      res["IcpType"] = boost::any(*icpType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IcpNo") != m.end() && !m["IcpNo"].empty()) {
      icpNo = make_shared<string>(boost::any_cast<string>(m["IcpNo"]));
    }
    if (m.find("IcpType") != m.end() && !m["IcpType"].empty()) {
      icpType = make_shared<string>(boost::any_cast<string>(m["IcpType"]));
    }
  }


  virtual ~DescribeUrlModerationResultResponseBodyDataExtraInfo() = default;
};
class DescribeUrlModerationResultResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> label{};

  DescribeUrlModerationResultResponseBodyDataResult() {}

  explicit DescribeUrlModerationResultResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeUrlModerationResultResponseBodyDataResult() = default;
};
class DescribeUrlModerationResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<DescribeUrlModerationResultResponseBodyDataExtraInfo> extraInfo{};
  shared_ptr<string> reqId{};
  shared_ptr<vector<DescribeUrlModerationResultResponseBodyDataResult>> result{};

  DescribeUrlModerationResultResponseBodyData() {}

  explicit DescribeUrlModerationResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (extraInfo) {
      res["ExtraInfo"] = extraInfo ? boost::any(extraInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
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
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtraInfo"].type()) {
        DescribeUrlModerationResultResponseBodyDataExtraInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]));
        extraInfo = make_shared<DescribeUrlModerationResultResponseBodyDataExtraInfo>(model1);
      }
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeUrlModerationResultResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUrlModerationResultResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeUrlModerationResultResponseBodyDataResult>>(expect1);
      }
    }
  }


  virtual ~DescribeUrlModerationResultResponseBodyData() = default;
};
class DescribeUrlModerationResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeUrlModerationResultResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  DescribeUrlModerationResultResponseBody() {}

  explicit DescribeUrlModerationResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUrlModerationResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeUrlModerationResultResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUrlModerationResultResponseBody() = default;
};
class DescribeUrlModerationResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUrlModerationResultResponseBody> body{};

  DescribeUrlModerationResultResponse() {}

  explicit DescribeUrlModerationResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUrlModerationResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUrlModerationResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUrlModerationResultResponse() = default;
};
class FileModerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  FileModerationRequest() {}

  explicit FileModerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FileModerationRequest() = default;
};
class FileModerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  FileModerationResponseBodyData() {}

  explicit FileModerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FileModerationResponseBodyData() = default;
};
class FileModerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<FileModerationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  FileModerationResponseBody() {}

  explicit FileModerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FileModerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FileModerationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FileModerationResponseBody() = default;
};
class FileModerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FileModerationResponseBody> body{};

  FileModerationResponse() {}

  explicit FileModerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FileModerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FileModerationResponseBody>(model1);
      }
    }
  }


  virtual ~FileModerationResponse() = default;
};
class ImageAsyncModerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  ImageAsyncModerationRequest() {}

  explicit ImageAsyncModerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImageAsyncModerationRequest() = default;
};
class ImageAsyncModerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> reqId{};

  ImageAsyncModerationResponseBodyData() {}

  explicit ImageAsyncModerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
  }


  virtual ~ImageAsyncModerationResponseBodyData() = default;
};
class ImageAsyncModerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ImageAsyncModerationResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  ImageAsyncModerationResponseBody() {}

  explicit ImageAsyncModerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageAsyncModerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImageAsyncModerationResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ImageAsyncModerationResponseBody() = default;
};
class ImageAsyncModerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImageAsyncModerationResponseBody> body{};

  ImageAsyncModerationResponse() {}

  explicit ImageAsyncModerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageAsyncModerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageAsyncModerationResponseBody>(model1);
      }
    }
  }


  virtual ~ImageAsyncModerationResponse() = default;
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
        TextModerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextModerationResponseBody>(model1);
      }
    }
  }


  virtual ~TextModerationResponse() = default;
};
class TextModerationPlusRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  TextModerationPlusRequest() {}

  explicit TextModerationPlusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TextModerationPlusRequest() = default;
};
class TextModerationPlusResponseBodyDataAdvice : public Darabonba::Model {
public:
  shared_ptr<string> answer{};

  TextModerationPlusResponseBodyDataAdvice() {}

  explicit TextModerationPlusResponseBodyDataAdvice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = boost::any(*answer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["Answer"]));
    }
  }


  virtual ~TextModerationPlusResponseBodyDataAdvice() = default;
};
class TextModerationPlusResponseBodyDataResultCustomizedHit : public Darabonba::Model {
public:
  shared_ptr<string> keyWords{};
  shared_ptr<string> libName{};

  TextModerationPlusResponseBodyDataResultCustomizedHit() {}

  explicit TextModerationPlusResponseBodyDataResultCustomizedHit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWords) {
      res["KeyWords"] = boost::any(*keyWords);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      keyWords = make_shared<string>(boost::any_cast<string>(m["KeyWords"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
  }


  virtual ~TextModerationPlusResponseBodyDataResultCustomizedHit() = default;
};
class TextModerationPlusResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<vector<TextModerationPlusResponseBodyDataResultCustomizedHit>> customizedHit{};
  shared_ptr<string> label{};
  shared_ptr<string> riskWords{};

  TextModerationPlusResponseBodyDataResult() {}

  explicit TextModerationPlusResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (customizedHit) {
      vector<boost::any> temp1;
      for(auto item1:*customizedHit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomizedHit"] = boost::any(temp1);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (riskWords) {
      res["RiskWords"] = boost::any(*riskWords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("CustomizedHit") != m.end() && !m["CustomizedHit"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomizedHit"].type()) {
        vector<TextModerationPlusResponseBodyDataResultCustomizedHit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomizedHit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TextModerationPlusResponseBodyDataResultCustomizedHit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customizedHit = make_shared<vector<TextModerationPlusResponseBodyDataResultCustomizedHit>>(expect1);
      }
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("RiskWords") != m.end() && !m["RiskWords"].empty()) {
      riskWords = make_shared<string>(boost::any_cast<string>(m["RiskWords"]));
    }
  }


  virtual ~TextModerationPlusResponseBodyDataResult() = default;
};
class TextModerationPlusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<TextModerationPlusResponseBodyDataAdvice>> advice{};
  shared_ptr<vector<TextModerationPlusResponseBodyDataResult>> result{};
  shared_ptr<double> score{};

  TextModerationPlusResponseBodyData() {}

  explicit TextModerationPlusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advice) {
      vector<boost::any> temp1;
      for(auto item1:*advice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Advice"] = boost::any(temp1);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Advice") != m.end() && !m["Advice"].empty()) {
      if (typeid(vector<boost::any>) == m["Advice"].type()) {
        vector<TextModerationPlusResponseBodyDataAdvice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Advice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TextModerationPlusResponseBodyDataAdvice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        advice = make_shared<vector<TextModerationPlusResponseBodyDataAdvice>>(expect1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<TextModerationPlusResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TextModerationPlusResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<TextModerationPlusResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~TextModerationPlusResponseBodyData() = default;
};
class TextModerationPlusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TextModerationPlusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TextModerationPlusResponseBody() {}

  explicit TextModerationPlusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextModerationPlusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TextModerationPlusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TextModerationPlusResponseBody() = default;
};
class TextModerationPlusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextModerationPlusResponseBody> body{};

  TextModerationPlusResponse() {}

  explicit TextModerationPlusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextModerationPlusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextModerationPlusResponseBody>(model1);
      }
    }
  }


  virtual ~TextModerationPlusResponse() = default;
};
class UrlAsyncModerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  UrlAsyncModerationRequest() {}

  explicit UrlAsyncModerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UrlAsyncModerationRequest() = default;
};
class UrlAsyncModerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> reqId{};

  UrlAsyncModerationResponseBodyData() {}

  explicit UrlAsyncModerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
  }


  virtual ~UrlAsyncModerationResponseBodyData() = default;
};
class UrlAsyncModerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<UrlAsyncModerationResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  UrlAsyncModerationResponseBody() {}

  explicit UrlAsyncModerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UrlAsyncModerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UrlAsyncModerationResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UrlAsyncModerationResponseBody() = default;
};
class UrlAsyncModerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UrlAsyncModerationResponseBody> body{};

  UrlAsyncModerationResponse() {}

  explicit UrlAsyncModerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UrlAsyncModerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UrlAsyncModerationResponseBody>(model1);
      }
    }
  }


  virtual ~UrlAsyncModerationResponse() = default;
};
class VideoModerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  VideoModerationRequest() {}

  explicit VideoModerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoModerationRequest() = default;
};
class VideoModerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> taskId{};

  VideoModerationResponseBodyData() {}

  explicit VideoModerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~VideoModerationResponseBodyData() = default;
};
class VideoModerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<VideoModerationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VideoModerationResponseBody() {}

  explicit VideoModerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoModerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VideoModerationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VideoModerationResponseBody() = default;
};
class VideoModerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoModerationResponseBody> body{};

  VideoModerationResponse() {}

  explicit VideoModerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoModerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoModerationResponseBody>(model1);
      }
    }
  }


  virtual ~VideoModerationResponse() = default;
};
class VideoModerationCancelRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  VideoModerationCancelRequest() {}

  explicit VideoModerationCancelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoModerationCancelRequest() = default;
};
class VideoModerationCancelResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VideoModerationCancelResponseBody() {}

  explicit VideoModerationCancelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoModerationCancelResponseBody() = default;
};
class VideoModerationCancelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoModerationCancelResponseBody> body{};

  VideoModerationCancelResponse() {}

  explicit VideoModerationCancelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoModerationCancelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoModerationCancelResponseBody>(model1);
      }
    }
  }


  virtual ~VideoModerationCancelResponse() = default;
};
class VideoModerationResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  VideoModerationResultRequest() {}

  explicit VideoModerationResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoModerationResultRequest() = default;
};
class VideoModerationResultResponseBodyDataAudioResultAudioSummarys : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<long> labelSum{};

  VideoModerationResultResponseBodyDataAudioResultAudioSummarys() {}

  explicit VideoModerationResultResponseBodyDataAudioResultAudioSummarys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (labelSum) {
      res["LabelSum"] = boost::any(*labelSum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("LabelSum") != m.end() && !m["LabelSum"].empty()) {
      labelSum = make_shared<long>(boost::any_cast<long>(m["LabelSum"]));
    }
  }


  virtual ~VideoModerationResultResponseBodyDataAudioResultAudioSummarys() = default;
};
class VideoModerationResultResponseBodyDataAudioResultSliceDetails : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> extend{};
  shared_ptr<string> labels{};
  shared_ptr<string> riskTips{};
  shared_ptr<string> riskWords{};
  shared_ptr<double> score{};
  shared_ptr<long> startTime{};
  shared_ptr<long> startTimestamp{};
  shared_ptr<string> text{};
  shared_ptr<string> url{};

  VideoModerationResultResponseBodyDataAudioResultSliceDetails() {}

  explicit VideoModerationResultResponseBodyDataAudioResultSliceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoModerationResultResponseBodyDataAudioResultSliceDetails() = default;
};
class VideoModerationResultResponseBodyDataAudioResult : public Darabonba::Model {
public:
  shared_ptr<vector<VideoModerationResultResponseBodyDataAudioResultAudioSummarys>> audioSummarys{};
  shared_ptr<vector<VideoModerationResultResponseBodyDataAudioResultSliceDetails>> sliceDetails{};

  VideoModerationResultResponseBodyDataAudioResult() {}

  explicit VideoModerationResultResponseBodyDataAudioResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioSummarys) {
      vector<boost::any> temp1;
      for(auto item1:*audioSummarys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioSummarys"] = boost::any(temp1);
    }
    if (sliceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*sliceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SliceDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioSummarys") != m.end() && !m["AudioSummarys"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioSummarys"].type()) {
        vector<VideoModerationResultResponseBodyDataAudioResultAudioSummarys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioSummarys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoModerationResultResponseBodyDataAudioResultAudioSummarys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioSummarys = make_shared<vector<VideoModerationResultResponseBodyDataAudioResultAudioSummarys>>(expect1);
      }
    }
    if (m.find("SliceDetails") != m.end() && !m["SliceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SliceDetails"].type()) {
        vector<VideoModerationResultResponseBodyDataAudioResultSliceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SliceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoModerationResultResponseBodyDataAudioResultSliceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sliceDetails = make_shared<vector<VideoModerationResultResponseBodyDataAudioResultSliceDetails>>(expect1);
      }
    }
  }


  virtual ~VideoModerationResultResponseBodyDataAudioResult() = default;
};
class VideoModerationResultResponseBodyDataFrameResultFrameSummarys : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<long> labelSum{};

  VideoModerationResultResponseBodyDataFrameResultFrameSummarys() {}

  explicit VideoModerationResultResponseBodyDataFrameResultFrameSummarys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (labelSum) {
      res["LabelSum"] = boost::any(*labelSum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("LabelSum") != m.end() && !m["LabelSum"].empty()) {
      labelSum = make_shared<long>(boost::any_cast<long>(m["LabelSum"]));
    }
  }


  virtual ~VideoModerationResultResponseBodyDataFrameResultFrameSummarys() = default;
};
class VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> libId{};

  VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage() {}

  explicit VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
  }


  virtual ~VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage() = default;
};
class VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure : public Darabonba::Model {
public:
  shared_ptr<string> figureId{};

  VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure() {}

  explicit VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure() = default;
};
class VideoModerationResultResponseBodyDataFrameResultFramesResultsResult : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> label{};

  VideoModerationResultResponseBodyDataFrameResultFramesResultsResult() {}

  explicit VideoModerationResultResponseBodyDataFrameResultFramesResultsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VideoModerationResultResponseBodyDataFrameResultFramesResultsResult() = default;
};
class VideoModerationResultResponseBodyDataFrameResultFramesResults : public Darabonba::Model {
public:
  shared_ptr<vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage>> customImage{};
  shared_ptr<vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure>> publicFigure{};
  shared_ptr<vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsResult>> result{};
  shared_ptr<string> service{};
  shared_ptr<map<string, boost::any>> textInImage{};

  VideoModerationResultResponseBodyDataFrameResultFramesResults() {}

  explicit VideoModerationResultResponseBodyDataFrameResultFramesResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (textInImage) {
      res["TextInImage"] = boost::any(*textInImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomImage") != m.end() && !m["CustomImage"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomImage"].type()) {
        vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomImage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customImage = make_shared<vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage>>(expect1);
      }
    }
    if (m.find("PublicFigure") != m.end() && !m["PublicFigure"].empty()) {
      if (typeid(vector<boost::any>) == m["PublicFigure"].type()) {
        vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PublicFigure"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        publicFigure = make_shared<vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure>>(expect1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoModerationResultResponseBodyDataFrameResultFramesResultsResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<VideoModerationResultResponseBodyDataFrameResultFramesResultsResult>>(expect1);
      }
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("TextInImage") != m.end() && !m["TextInImage"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TextInImage"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      textInImage = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~VideoModerationResultResponseBodyDataFrameResultFramesResults() = default;
};
class VideoModerationResultResponseBodyDataFrameResultFrames : public Darabonba::Model {
public:
  shared_ptr<double> offset{};
  shared_ptr<vector<VideoModerationResultResponseBodyDataFrameResultFramesResults>> results{};
  shared_ptr<string> tempUrl{};
  shared_ptr<long> timestamp{};

  VideoModerationResultResponseBodyDataFrameResultFrames() {}

  explicit VideoModerationResultResponseBodyDataFrameResultFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (tempUrl) {
      res["TempUrl"] = boost::any(*tempUrl);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<double>(boost::any_cast<double>(m["Offset"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<VideoModerationResultResponseBodyDataFrameResultFramesResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoModerationResultResponseBodyDataFrameResultFramesResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<VideoModerationResultResponseBodyDataFrameResultFramesResults>>(expect1);
      }
    }
    if (m.find("TempUrl") != m.end() && !m["TempUrl"].empty()) {
      tempUrl = make_shared<string>(boost::any_cast<string>(m["TempUrl"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~VideoModerationResultResponseBodyDataFrameResultFrames() = default;
};
class VideoModerationResultResponseBodyDataFrameResult : public Darabonba::Model {
public:
  shared_ptr<long> frameNum{};
  shared_ptr<vector<VideoModerationResultResponseBodyDataFrameResultFrameSummarys>> frameSummarys{};
  shared_ptr<vector<VideoModerationResultResponseBodyDataFrameResultFrames>> frames{};

  VideoModerationResultResponseBodyDataFrameResult() {}

  explicit VideoModerationResultResponseBodyDataFrameResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frameNum) {
      res["FrameNum"] = boost::any(*frameNum);
    }
    if (frameSummarys) {
      vector<boost::any> temp1;
      for(auto item1:*frameSummarys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FrameSummarys"] = boost::any(temp1);
    }
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Frames"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrameNum") != m.end() && !m["FrameNum"].empty()) {
      frameNum = make_shared<long>(boost::any_cast<long>(m["FrameNum"]));
    }
    if (m.find("FrameSummarys") != m.end() && !m["FrameSummarys"].empty()) {
      if (typeid(vector<boost::any>) == m["FrameSummarys"].type()) {
        vector<VideoModerationResultResponseBodyDataFrameResultFrameSummarys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FrameSummarys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoModerationResultResponseBodyDataFrameResultFrameSummarys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frameSummarys = make_shared<vector<VideoModerationResultResponseBodyDataFrameResultFrameSummarys>>(expect1);
      }
    }
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      if (typeid(vector<boost::any>) == m["Frames"].type()) {
        vector<VideoModerationResultResponseBodyDataFrameResultFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoModerationResultResponseBodyDataFrameResultFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<VideoModerationResultResponseBodyDataFrameResultFrames>>(expect1);
      }
    }
  }


  virtual ~VideoModerationResultResponseBodyDataFrameResult() = default;
};
class VideoModerationResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<VideoModerationResultResponseBodyDataAudioResult> audioResult{};
  shared_ptr<string> dataId{};
  shared_ptr<VideoModerationResultResponseBodyDataFrameResult> frameResult{};
  shared_ptr<string> liveId{};
  shared_ptr<string> taskId{};

  VideoModerationResultResponseBodyData() {}

  explicit VideoModerationResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioResult) {
      res["AudioResult"] = audioResult ? boost::any(audioResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (frameResult) {
      res["FrameResult"] = frameResult ? boost::any(frameResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioResult") != m.end() && !m["AudioResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["AudioResult"].type()) {
        VideoModerationResultResponseBodyDataAudioResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AudioResult"]));
        audioResult = make_shared<VideoModerationResultResponseBodyDataAudioResult>(model1);
      }
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("FrameResult") != m.end() && !m["FrameResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FrameResult"].type()) {
        VideoModerationResultResponseBodyDataFrameResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FrameResult"]));
        frameResult = make_shared<VideoModerationResultResponseBodyDataFrameResult>(model1);
      }
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~VideoModerationResultResponseBodyData() = default;
};
class VideoModerationResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<VideoModerationResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VideoModerationResultResponseBody() {}

  explicit VideoModerationResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoModerationResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VideoModerationResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VideoModerationResultResponseBody() = default;
};
class VideoModerationResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoModerationResultResponseBody> body{};

  VideoModerationResultResponse() {}

  explicit VideoModerationResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoModerationResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoModerationResultResponseBody>(model1);
      }
    }
  }


  virtual ~VideoModerationResultResponse() = default;
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
  shared_ptr<string> dataId{};
  shared_ptr<string> taskId{};

  VoiceModerationResponseBodyData() {}

  explicit VoiceModerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
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
  shared_ptr<string> dataId{};
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
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
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
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
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
  DescribeFileModerationResultResponse describeFileModerationResultWithOptions(shared_ptr<DescribeFileModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileModerationResultResponse describeFileModerationResult(shared_ptr<DescribeFileModerationResultRequest> request);
  DescribeImageModerationResultResponse describeImageModerationResultWithOptions(shared_ptr<DescribeImageModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageModerationResultResponse describeImageModerationResult(shared_ptr<DescribeImageModerationResultRequest> request);
  DescribeImageResultExtResponse describeImageResultExtWithOptions(shared_ptr<DescribeImageResultExtRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageResultExtResponse describeImageResultExt(shared_ptr<DescribeImageResultExtRequest> request);
  DescribeUploadTokenResponse describeUploadTokenWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUploadTokenResponse describeUploadToken();
  DescribeUrlModerationResultResponse describeUrlModerationResultWithOptions(shared_ptr<DescribeUrlModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUrlModerationResultResponse describeUrlModerationResult(shared_ptr<DescribeUrlModerationResultRequest> request);
  FileModerationResponse fileModerationWithOptions(shared_ptr<FileModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FileModerationResponse fileModeration(shared_ptr<FileModerationRequest> request);
  ImageAsyncModerationResponse imageAsyncModerationWithOptions(shared_ptr<ImageAsyncModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageAsyncModerationResponse imageAsyncModeration(shared_ptr<ImageAsyncModerationRequest> request);
  ImageModerationResponse imageModerationWithOptions(shared_ptr<ImageModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageModerationResponse imageModeration(shared_ptr<ImageModerationRequest> request);
  TextModerationResponse textModerationWithOptions(shared_ptr<TextModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TextModerationResponse textModeration(shared_ptr<TextModerationRequest> request);
  TextModerationPlusResponse textModerationPlusWithOptions(shared_ptr<TextModerationPlusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TextModerationPlusResponse textModerationPlus(shared_ptr<TextModerationPlusRequest> request);
  UrlAsyncModerationResponse urlAsyncModerationWithOptions(shared_ptr<UrlAsyncModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UrlAsyncModerationResponse urlAsyncModeration(shared_ptr<UrlAsyncModerationRequest> request);
  VideoModerationResponse videoModerationWithOptions(shared_ptr<VideoModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoModerationResponse videoModeration(shared_ptr<VideoModerationRequest> request);
  VideoModerationCancelResponse videoModerationCancelWithOptions(shared_ptr<VideoModerationCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoModerationCancelResponse videoModerationCancel(shared_ptr<VideoModerationCancelRequest> request);
  VideoModerationResultResponse videoModerationResultWithOptions(shared_ptr<VideoModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoModerationResultResponse videoModerationResult(shared_ptr<VideoModerationResultRequest> request);
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
