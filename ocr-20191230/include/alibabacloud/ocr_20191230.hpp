// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OCR20191230_H_
#define ALIBABACLOUD_OCR20191230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ocr20191230 {
class DetectCardScreenshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectCardScreenshotRequest() {}

  explicit DetectCardScreenshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~DetectCardScreenshotRequest() = default;
};
class DetectCardScreenshotAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectCardScreenshotAdvanceRequest() {}

  explicit DetectCardScreenshotAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~DetectCardScreenshotAdvanceRequest() = default;
};
class DetectCardScreenshotResponseBodyDataSpoofResultResultMap : public Darabonba::Model {
public:
  shared_ptr<double> screenScore{};
  shared_ptr<double> screenThreshold{};

  DetectCardScreenshotResponseBodyDataSpoofResultResultMap() {}

  explicit DetectCardScreenshotResponseBodyDataSpoofResultResultMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (screenScore) {
      res["ScreenScore"] = boost::any(*screenScore);
    }
    if (screenThreshold) {
      res["ScreenThreshold"] = boost::any(*screenThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScreenScore") != m.end() && !m["ScreenScore"].empty()) {
      screenScore = make_shared<double>(boost::any_cast<double>(m["ScreenScore"]));
    }
    if (m.find("ScreenThreshold") != m.end() && !m["ScreenThreshold"].empty()) {
      screenThreshold = make_shared<double>(boost::any_cast<double>(m["ScreenThreshold"]));
    }
  }


  virtual ~DetectCardScreenshotResponseBodyDataSpoofResultResultMap() = default;
};
class DetectCardScreenshotResponseBodyDataSpoofResult : public Darabonba::Model {
public:
  shared_ptr<bool> isSpoof{};
  shared_ptr<DetectCardScreenshotResponseBodyDataSpoofResultResultMap> resultMap{};

  DetectCardScreenshotResponseBodyDataSpoofResult() {}

  explicit DetectCardScreenshotResponseBodyDataSpoofResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSpoof) {
      res["IsSpoof"] = boost::any(*isSpoof);
    }
    if (resultMap) {
      res["ResultMap"] = resultMap ? boost::any(resultMap->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSpoof") != m.end() && !m["IsSpoof"].empty()) {
      isSpoof = make_shared<bool>(boost::any_cast<bool>(m["IsSpoof"]));
    }
    if (m.find("ResultMap") != m.end() && !m["ResultMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultMap"].type()) {
        DetectCardScreenshotResponseBodyDataSpoofResultResultMap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultMap"]));
        resultMap = make_shared<DetectCardScreenshotResponseBodyDataSpoofResultResultMap>(model1);
      }
    }
  }


  virtual ~DetectCardScreenshotResponseBodyDataSpoofResult() = default;
};
class DetectCardScreenshotResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isBlur{};
  shared_ptr<bool> isCard{};
  shared_ptr<DetectCardScreenshotResponseBodyDataSpoofResult> spoofResult{};

  DetectCardScreenshotResponseBodyData() {}

  explicit DetectCardScreenshotResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBlur) {
      res["IsBlur"] = boost::any(*isBlur);
    }
    if (isCard) {
      res["IsCard"] = boost::any(*isCard);
    }
    if (spoofResult) {
      res["SpoofResult"] = spoofResult ? boost::any(spoofResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBlur") != m.end() && !m["IsBlur"].empty()) {
      isBlur = make_shared<bool>(boost::any_cast<bool>(m["IsBlur"]));
    }
    if (m.find("IsCard") != m.end() && !m["IsCard"].empty()) {
      isCard = make_shared<bool>(boost::any_cast<bool>(m["IsCard"]));
    }
    if (m.find("SpoofResult") != m.end() && !m["SpoofResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpoofResult"].type()) {
        DetectCardScreenshotResponseBodyDataSpoofResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpoofResult"]));
        spoofResult = make_shared<DetectCardScreenshotResponseBodyDataSpoofResult>(model1);
      }
    }
  }


  virtual ~DetectCardScreenshotResponseBodyData() = default;
};
class DetectCardScreenshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectCardScreenshotResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DetectCardScreenshotResponseBody() {}

  explicit DetectCardScreenshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectCardScreenshotResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectCardScreenshotResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectCardScreenshotResponseBody() = default;
};
class DetectCardScreenshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectCardScreenshotResponseBody> body{};

  DetectCardScreenshotResponse() {}

  explicit DetectCardScreenshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectCardScreenshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectCardScreenshotResponseBody>(model1);
      }
    }
  }


  virtual ~DetectCardScreenshotResponse() = default;
};
class GetAsyncJobResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetAsyncJobResultRequest() {}

  explicit GetAsyncJobResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncJobResultRequest() = default;
};
class GetAsyncJobResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> jobId{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};

  GetAsyncJobResultResponseBodyData() {}

  explicit GetAsyncJobResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBodyData() = default;
};
class GetAsyncJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAsyncJobResultResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetAsyncJobResultResponseBody() {}

  explicit GetAsyncJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncJobResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsyncJobResultResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBody() = default;
};
class GetAsyncJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsyncJobResultResponseBody> body{};

  GetAsyncJobResultResponse() {}

  explicit GetAsyncJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponse() = default;
};
class RecognizeAccountPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeAccountPageRequest() {}

  explicit RecognizeAccountPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeAccountPageRequest() = default;
};
class RecognizeAccountPageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeAccountPageAdvanceRequest() {}

  explicit RecognizeAccountPageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeAccountPageAdvanceRequest() = default;
};
class RecognizeAccountPageResponseBodyDataInvalidStampAreas : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeAccountPageResponseBodyDataInvalidStampAreas() {}

  explicit RecognizeAccountPageResponseBodyDataInvalidStampAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAccountPageResponseBodyDataInvalidStampAreas() = default;
};
class RecognizeAccountPageResponseBodyDataOtherStampAreas : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeAccountPageResponseBodyDataOtherStampAreas() {}

  explicit RecognizeAccountPageResponseBodyDataOtherStampAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAccountPageResponseBodyDataOtherStampAreas() = default;
};
class RecognizeAccountPageResponseBodyDataRegisterStampAreas : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeAccountPageResponseBodyDataRegisterStampAreas() {}

  explicit RecognizeAccountPageResponseBodyDataRegisterStampAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAccountPageResponseBodyDataRegisterStampAreas() = default;
};
class RecognizeAccountPageResponseBodyDataTitleArea : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeAccountPageResponseBodyDataTitleArea() {}

  explicit RecognizeAccountPageResponseBodyDataTitleArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAccountPageResponseBodyDataTitleArea() = default;
};
class RecognizeAccountPageResponseBodyDataUndertakeStampAreas : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeAccountPageResponseBodyDataUndertakeStampAreas() {}

  explicit RecognizeAccountPageResponseBodyDataUndertakeStampAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAccountPageResponseBodyDataUndertakeStampAreas() = default;
};
class RecognizeAccountPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> angle{};
  shared_ptr<string> birthDate{};
  shared_ptr<string> birthPlace{};
  shared_ptr<string> gender{};
  shared_ptr<string> IDNumber{};
  shared_ptr<vector<RecognizeAccountPageResponseBodyDataInvalidStampAreas>> invalidStampAreas{};
  shared_ptr<string> name{};
  shared_ptr<string> nationality{};
  shared_ptr<string> nativePlace{};
  shared_ptr<vector<RecognizeAccountPageResponseBodyDataOtherStampAreas>> otherStampAreas{};
  shared_ptr<vector<RecognizeAccountPageResponseBodyDataRegisterStampAreas>> registerStampAreas{};
  shared_ptr<string> relation{};
  shared_ptr<RecognizeAccountPageResponseBodyDataTitleArea> titleArea{};
  shared_ptr<vector<RecognizeAccountPageResponseBodyDataUndertakeStampAreas>> undertakeStampAreas{};

  RecognizeAccountPageResponseBodyData() {}

  explicit RecognizeAccountPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (birthDate) {
      res["BirthDate"] = boost::any(*birthDate);
    }
    if (birthPlace) {
      res["BirthPlace"] = boost::any(*birthPlace);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (IDNumber) {
      res["IDNumber"] = boost::any(*IDNumber);
    }
    if (invalidStampAreas) {
      vector<boost::any> temp1;
      for(auto item1:*invalidStampAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvalidStampAreas"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (nativePlace) {
      res["NativePlace"] = boost::any(*nativePlace);
    }
    if (otherStampAreas) {
      vector<boost::any> temp1;
      for(auto item1:*otherStampAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OtherStampAreas"] = boost::any(temp1);
    }
    if (registerStampAreas) {
      vector<boost::any> temp1;
      for(auto item1:*registerStampAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegisterStampAreas"] = boost::any(temp1);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (titleArea) {
      res["TitleArea"] = titleArea ? boost::any(titleArea->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (undertakeStampAreas) {
      vector<boost::any> temp1;
      for(auto item1:*undertakeStampAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UndertakeStampAreas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      birthDate = make_shared<string>(boost::any_cast<string>(m["BirthDate"]));
    }
    if (m.find("BirthPlace") != m.end() && !m["BirthPlace"].empty()) {
      birthPlace = make_shared<string>(boost::any_cast<string>(m["BirthPlace"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("IDNumber") != m.end() && !m["IDNumber"].empty()) {
      IDNumber = make_shared<string>(boost::any_cast<string>(m["IDNumber"]));
    }
    if (m.find("InvalidStampAreas") != m.end() && !m["InvalidStampAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["InvalidStampAreas"].type()) {
        vector<RecognizeAccountPageResponseBodyDataInvalidStampAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvalidStampAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAccountPageResponseBodyDataInvalidStampAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invalidStampAreas = make_shared<vector<RecognizeAccountPageResponseBodyDataInvalidStampAreas>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("NativePlace") != m.end() && !m["NativePlace"].empty()) {
      nativePlace = make_shared<string>(boost::any_cast<string>(m["NativePlace"]));
    }
    if (m.find("OtherStampAreas") != m.end() && !m["OtherStampAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["OtherStampAreas"].type()) {
        vector<RecognizeAccountPageResponseBodyDataOtherStampAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OtherStampAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAccountPageResponseBodyDataOtherStampAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        otherStampAreas = make_shared<vector<RecognizeAccountPageResponseBodyDataOtherStampAreas>>(expect1);
      }
    }
    if (m.find("RegisterStampAreas") != m.end() && !m["RegisterStampAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["RegisterStampAreas"].type()) {
        vector<RecognizeAccountPageResponseBodyDataRegisterStampAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegisterStampAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAccountPageResponseBodyDataRegisterStampAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        registerStampAreas = make_shared<vector<RecognizeAccountPageResponseBodyDataRegisterStampAreas>>(expect1);
      }
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("TitleArea") != m.end() && !m["TitleArea"].empty()) {
      if (typeid(map<string, boost::any>) == m["TitleArea"].type()) {
        RecognizeAccountPageResponseBodyDataTitleArea model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TitleArea"]));
        titleArea = make_shared<RecognizeAccountPageResponseBodyDataTitleArea>(model1);
      }
    }
    if (m.find("UndertakeStampAreas") != m.end() && !m["UndertakeStampAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["UndertakeStampAreas"].type()) {
        vector<RecognizeAccountPageResponseBodyDataUndertakeStampAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UndertakeStampAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAccountPageResponseBodyDataUndertakeStampAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        undertakeStampAreas = make_shared<vector<RecognizeAccountPageResponseBodyDataUndertakeStampAreas>>(expect1);
      }
    }
  }


  virtual ~RecognizeAccountPageResponseBodyData() = default;
};
class RecognizeAccountPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeAccountPageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeAccountPageResponseBody() {}

  explicit RecognizeAccountPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeAccountPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeAccountPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeAccountPageResponseBody() = default;
};
class RecognizeAccountPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeAccountPageResponseBody> body{};

  RecognizeAccountPageResponse() {}

  explicit RecognizeAccountPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeAccountPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeAccountPageResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeAccountPageResponse() = default;
};
class RecognizeBankCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBankCardRequest() {}

  explicit RecognizeBankCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeBankCardRequest() = default;
};
class RecognizeBankCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBankCardAdvanceRequest() {}

  explicit RecognizeBankCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeBankCardAdvanceRequest() = default;
};
class RecognizeBankCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bankName{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> validDate{};

  RecognizeBankCardResponseBodyData() {}

  explicit RecognizeBankCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bankName) {
      res["BankName"] = boost::any(*bankName);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (validDate) {
      res["ValidDate"] = boost::any(*validDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BankName") != m.end() && !m["BankName"].empty()) {
      bankName = make_shared<string>(boost::any_cast<string>(m["BankName"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ValidDate") != m.end() && !m["ValidDate"].empty()) {
      validDate = make_shared<string>(boost::any_cast<string>(m["ValidDate"]));
    }
  }


  virtual ~RecognizeBankCardResponseBodyData() = default;
};
class RecognizeBankCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeBankCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeBankCardResponseBody() {}

  explicit RecognizeBankCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBankCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBankCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBankCardResponseBody() = default;
};
class RecognizeBankCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBankCardResponseBody> body{};

  RecognizeBankCardResponse() {}

  explicit RecognizeBankCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBankCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBankCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBankCardResponse() = default;
};
class RecognizeBusinessCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBusinessCardRequest() {}

  explicit RecognizeBusinessCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeBusinessCardRequest() = default;
};
class RecognizeBusinessCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBusinessCardAdvanceRequest() {}

  explicit RecognizeBusinessCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeBusinessCardAdvanceRequest() = default;
};
class RecognizeBusinessCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<vector<string>> cellPhoneNumbers{};
  shared_ptr<vector<string>> companies{};
  shared_ptr<vector<string>> departments{};
  shared_ptr<vector<string>> emails{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> officePhoneNumbers{};
  shared_ptr<vector<string>> titles{};

  RecognizeBusinessCardResponseBodyData() {}

  explicit RecognizeBusinessCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (cellPhoneNumbers) {
      res["CellPhoneNumbers"] = boost::any(*cellPhoneNumbers);
    }
    if (companies) {
      res["Companies"] = boost::any(*companies);
    }
    if (departments) {
      res["Departments"] = boost::any(*departments);
    }
    if (emails) {
      res["Emails"] = boost::any(*emails);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (officePhoneNumbers) {
      res["OfficePhoneNumbers"] = boost::any(*officePhoneNumbers);
    }
    if (titles) {
      res["Titles"] = boost::any(*titles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CellPhoneNumbers") != m.end() && !m["CellPhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CellPhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CellPhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cellPhoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Companies") != m.end() && !m["Companies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Companies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Companies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      companies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Departments") != m.end() && !m["Departments"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Departments"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Departments"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      departments = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Emails") != m.end() && !m["Emails"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Emails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Emails"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      emails = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OfficePhoneNumbers") != m.end() && !m["OfficePhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficePhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficePhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officePhoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Titles") != m.end() && !m["Titles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Titles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Titles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      titles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecognizeBusinessCardResponseBodyData() = default;
};
class RecognizeBusinessCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeBusinessCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeBusinessCardResponseBody() {}

  explicit RecognizeBusinessCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBusinessCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBusinessCardResponseBody() = default;
};
class RecognizeBusinessCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBusinessCardResponseBody> body{};

  RecognizeBusinessCardResponse() {}

  explicit RecognizeBusinessCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBusinessCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessCardResponse() = default;
};
class RecognizeBusinessLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBusinessLicenseRequest() {}

  explicit RecognizeBusinessLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeBusinessLicenseRequest() = default;
};
class RecognizeBusinessLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBusinessLicenseAdvanceRequest() {}

  explicit RecognizeBusinessLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeBusinessLicenseAdvanceRequest() = default;
};
class RecognizeBusinessLicenseResponseBodyDataEmblem : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeBusinessLicenseResponseBodyDataEmblem() {}

  explicit RecognizeBusinessLicenseResponseBodyDataEmblem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBusinessLicenseResponseBodyDataEmblem() = default;
};
class RecognizeBusinessLicenseResponseBodyDataQRCode : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeBusinessLicenseResponseBodyDataQRCode() {}

  explicit RecognizeBusinessLicenseResponseBodyDataQRCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBusinessLicenseResponseBodyDataQRCode() = default;
};
class RecognizeBusinessLicenseResponseBodyDataStamp : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeBusinessLicenseResponseBodyDataStamp() {}

  explicit RecognizeBusinessLicenseResponseBodyDataStamp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBusinessLicenseResponseBodyDataStamp() = default;
};
class RecognizeBusinessLicenseResponseBodyDataTitle : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeBusinessLicenseResponseBodyDataTitle() {}

  explicit RecognizeBusinessLicenseResponseBodyDataTitle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBusinessLicenseResponseBodyDataTitle() = default;
};
class RecognizeBusinessLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<double> angle{};
  shared_ptr<string> business{};
  shared_ptr<string> capital{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataEmblem> emblem{};
  shared_ptr<string> establishDate{};
  shared_ptr<string> legalPerson{};
  shared_ptr<string> name{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataQRCode> QRCode{};
  shared_ptr<string> registerNumber{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataStamp> stamp{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataTitle> title{};
  shared_ptr<string> type{};
  shared_ptr<string> validPeriod{};

  RecognizeBusinessLicenseResponseBodyData() {}

  explicit RecognizeBusinessLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (capital) {
      res["Capital"] = boost::any(*capital);
    }
    if (emblem) {
      res["Emblem"] = emblem ? boost::any(emblem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (establishDate) {
      res["EstablishDate"] = boost::any(*establishDate);
    }
    if (legalPerson) {
      res["LegalPerson"] = boost::any(*legalPerson);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (QRCode) {
      res["QRCode"] = QRCode ? boost::any(QRCode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (registerNumber) {
      res["RegisterNumber"] = boost::any(*registerNumber);
    }
    if (stamp) {
      res["Stamp"] = stamp ? boost::any(stamp->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = title ? boost::any(title->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (validPeriod) {
      res["ValidPeriod"] = boost::any(*validPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("Capital") != m.end() && !m["Capital"].empty()) {
      capital = make_shared<string>(boost::any_cast<string>(m["Capital"]));
    }
    if (m.find("Emblem") != m.end() && !m["Emblem"].empty()) {
      if (typeid(map<string, boost::any>) == m["Emblem"].type()) {
        RecognizeBusinessLicenseResponseBodyDataEmblem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Emblem"]));
        emblem = make_shared<RecognizeBusinessLicenseResponseBodyDataEmblem>(model1);
      }
    }
    if (m.find("EstablishDate") != m.end() && !m["EstablishDate"].empty()) {
      establishDate = make_shared<string>(boost::any_cast<string>(m["EstablishDate"]));
    }
    if (m.find("LegalPerson") != m.end() && !m["LegalPerson"].empty()) {
      legalPerson = make_shared<string>(boost::any_cast<string>(m["LegalPerson"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QRCode") != m.end() && !m["QRCode"].empty()) {
      if (typeid(map<string, boost::any>) == m["QRCode"].type()) {
        RecognizeBusinessLicenseResponseBodyDataQRCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QRCode"]));
        QRCode = make_shared<RecognizeBusinessLicenseResponseBodyDataQRCode>(model1);
      }
    }
    if (m.find("RegisterNumber") != m.end() && !m["RegisterNumber"].empty()) {
      registerNumber = make_shared<string>(boost::any_cast<string>(m["RegisterNumber"]));
    }
    if (m.find("Stamp") != m.end() && !m["Stamp"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stamp"].type()) {
        RecognizeBusinessLicenseResponseBodyDataStamp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stamp"]));
        stamp = make_shared<RecognizeBusinessLicenseResponseBodyDataStamp>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      if (typeid(map<string, boost::any>) == m["Title"].type()) {
        RecognizeBusinessLicenseResponseBodyDataTitle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Title"]));
        title = make_shared<RecognizeBusinessLicenseResponseBodyDataTitle>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ValidPeriod") != m.end() && !m["ValidPeriod"].empty()) {
      validPeriod = make_shared<string>(boost::any_cast<string>(m["ValidPeriod"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyData() = default;
};
class RecognizeBusinessLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeBusinessLicenseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeBusinessLicenseResponseBody() {}

  explicit RecognizeBusinessLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBusinessLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBody() = default;
};
class RecognizeBusinessLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBusinessLicenseResponseBody> body{};

  RecognizeBusinessLicenseResponse() {}

  explicit RecognizeBusinessLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBusinessLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessLicenseResponse() = default;
};
class RecognizeCharacterRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<long> minHeight{};
  shared_ptr<bool> outputProbability{};

  RecognizeCharacterRequest() {}

  explicit RecognizeCharacterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (minHeight) {
      res["MinHeight"] = boost::any(*minHeight);
    }
    if (outputProbability) {
      res["OutputProbability"] = boost::any(*outputProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("MinHeight") != m.end() && !m["MinHeight"].empty()) {
      minHeight = make_shared<long>(boost::any_cast<long>(m["MinHeight"]));
    }
    if (m.find("OutputProbability") != m.end() && !m["OutputProbability"].empty()) {
      outputProbability = make_shared<bool>(boost::any_cast<bool>(m["OutputProbability"]));
    }
  }


  virtual ~RecognizeCharacterRequest() = default;
};
class RecognizeCharacterAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> minHeight{};
  shared_ptr<bool> outputProbability{};

  RecognizeCharacterAdvanceRequest() {}

  explicit RecognizeCharacterAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (minHeight) {
      res["MinHeight"] = boost::any(*minHeight);
    }
    if (outputProbability) {
      res["OutputProbability"] = boost::any(*outputProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("MinHeight") != m.end() && !m["MinHeight"].empty()) {
      minHeight = make_shared<long>(boost::any_cast<long>(m["MinHeight"]));
    }
    if (m.find("OutputProbability") != m.end() && !m["OutputProbability"].empty()) {
      outputProbability = make_shared<bool>(boost::any_cast<bool>(m["OutputProbability"]));
    }
  }


  virtual ~RecognizeCharacterAdvanceRequest() = default;
};
class RecognizeCharacterResponseBodyDataResultsTextRectangles : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeCharacterResponseBodyDataResultsTextRectangles() {}

  explicit RecognizeCharacterResponseBodyDataResultsTextRectangles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
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
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
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


  virtual ~RecognizeCharacterResponseBodyDataResultsTextRectangles() = default;
};
class RecognizeCharacterResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<double> probability{};
  shared_ptr<string> text{};
  shared_ptr<RecognizeCharacterResponseBodyDataResultsTextRectangles> textRectangles{};

  RecognizeCharacterResponseBodyDataResults() {}

  explicit RecognizeCharacterResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (probability) {
      res["Probability"] = boost::any(*probability);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (textRectangles) {
      res["TextRectangles"] = textRectangles ? boost::any(textRectangles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Probability") != m.end() && !m["Probability"].empty()) {
      probability = make_shared<double>(boost::any_cast<double>(m["Probability"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TextRectangles") != m.end() && !m["TextRectangles"].empty()) {
      if (typeid(map<string, boost::any>) == m["TextRectangles"].type()) {
        RecognizeCharacterResponseBodyDataResultsTextRectangles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TextRectangles"]));
        textRectangles = make_shared<RecognizeCharacterResponseBodyDataResultsTextRectangles>(model1);
      }
    }
  }


  virtual ~RecognizeCharacterResponseBodyDataResults() = default;
};
class RecognizeCharacterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeCharacterResponseBodyDataResults>> results{};

  RecognizeCharacterResponseBodyData() {}

  explicit RecognizeCharacterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeCharacterResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeCharacterResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeCharacterResponseBodyDataResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeCharacterResponseBodyData() = default;
};
class RecognizeCharacterResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeCharacterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeCharacterResponseBody() {}

  explicit RecognizeCharacterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCharacterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeCharacterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCharacterResponseBody() = default;
};
class RecognizeCharacterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCharacterResponseBody> body{};

  RecognizeCharacterResponse() {}

  explicit RecognizeCharacterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCharacterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCharacterResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCharacterResponse() = default;
};
class RecognizeChinapassportRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeChinapassportRequest() {}

  explicit RecognizeChinapassportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeChinapassportRequest() = default;
};
class RecognizeChinapassportAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeChinapassportAdvanceRequest() {}

  explicit RecognizeChinapassportAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeChinapassportAdvanceRequest() = default;
};
class RecognizeChinapassportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authority{};
  shared_ptr<string> birthDate{};
  shared_ptr<string> birthDay{};
  shared_ptr<string> birthPlace{};
  shared_ptr<string> birthPlaceRaw{};
  shared_ptr<string> country{};
  shared_ptr<string> expiryDate{};
  shared_ptr<string> expiryDay{};
  shared_ptr<string> issueDate{};
  shared_ptr<string> issuePlace{};
  shared_ptr<string> issuePlaceRaw{};
  shared_ptr<string> lineOne{};
  shared_ptr<string> lineZero{};
  shared_ptr<string> name{};
  shared_ptr<string> nameChinese{};
  shared_ptr<string> nameChineseRaw{};
  shared_ptr<string> passportNo{};
  shared_ptr<string> personId{};
  shared_ptr<string> sex{};
  shared_ptr<string> sourceCountry{};
  shared_ptr<bool> success{};
  shared_ptr<string> type{};

  RecognizeChinapassportResponseBodyData() {}

  explicit RecognizeChinapassportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (birthDate) {
      res["BirthDate"] = boost::any(*birthDate);
    }
    if (birthDay) {
      res["BirthDay"] = boost::any(*birthDay);
    }
    if (birthPlace) {
      res["BirthPlace"] = boost::any(*birthPlace);
    }
    if (birthPlaceRaw) {
      res["BirthPlaceRaw"] = boost::any(*birthPlaceRaw);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (expiryDate) {
      res["ExpiryDate"] = boost::any(*expiryDate);
    }
    if (expiryDay) {
      res["ExpiryDay"] = boost::any(*expiryDay);
    }
    if (issueDate) {
      res["IssueDate"] = boost::any(*issueDate);
    }
    if (issuePlace) {
      res["IssuePlace"] = boost::any(*issuePlace);
    }
    if (issuePlaceRaw) {
      res["IssuePlaceRaw"] = boost::any(*issuePlaceRaw);
    }
    if (lineOne) {
      res["LineOne"] = boost::any(*lineOne);
    }
    if (lineZero) {
      res["LineZero"] = boost::any(*lineZero);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nameChinese) {
      res["NameChinese"] = boost::any(*nameChinese);
    }
    if (nameChineseRaw) {
      res["NameChineseRaw"] = boost::any(*nameChineseRaw);
    }
    if (passportNo) {
      res["PassportNo"] = boost::any(*passportNo);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
    if (sourceCountry) {
      res["SourceCountry"] = boost::any(*sourceCountry);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      birthDate = make_shared<string>(boost::any_cast<string>(m["BirthDate"]));
    }
    if (m.find("BirthDay") != m.end() && !m["BirthDay"].empty()) {
      birthDay = make_shared<string>(boost::any_cast<string>(m["BirthDay"]));
    }
    if (m.find("BirthPlace") != m.end() && !m["BirthPlace"].empty()) {
      birthPlace = make_shared<string>(boost::any_cast<string>(m["BirthPlace"]));
    }
    if (m.find("BirthPlaceRaw") != m.end() && !m["BirthPlaceRaw"].empty()) {
      birthPlaceRaw = make_shared<string>(boost::any_cast<string>(m["BirthPlaceRaw"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("ExpiryDate") != m.end() && !m["ExpiryDate"].empty()) {
      expiryDate = make_shared<string>(boost::any_cast<string>(m["ExpiryDate"]));
    }
    if (m.find("ExpiryDay") != m.end() && !m["ExpiryDay"].empty()) {
      expiryDay = make_shared<string>(boost::any_cast<string>(m["ExpiryDay"]));
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      issueDate = make_shared<string>(boost::any_cast<string>(m["IssueDate"]));
    }
    if (m.find("IssuePlace") != m.end() && !m["IssuePlace"].empty()) {
      issuePlace = make_shared<string>(boost::any_cast<string>(m["IssuePlace"]));
    }
    if (m.find("IssuePlaceRaw") != m.end() && !m["IssuePlaceRaw"].empty()) {
      issuePlaceRaw = make_shared<string>(boost::any_cast<string>(m["IssuePlaceRaw"]));
    }
    if (m.find("LineOne") != m.end() && !m["LineOne"].empty()) {
      lineOne = make_shared<string>(boost::any_cast<string>(m["LineOne"]));
    }
    if (m.find("LineZero") != m.end() && !m["LineZero"].empty()) {
      lineZero = make_shared<string>(boost::any_cast<string>(m["LineZero"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NameChinese") != m.end() && !m["NameChinese"].empty()) {
      nameChinese = make_shared<string>(boost::any_cast<string>(m["NameChinese"]));
    }
    if (m.find("NameChineseRaw") != m.end() && !m["NameChineseRaw"].empty()) {
      nameChineseRaw = make_shared<string>(boost::any_cast<string>(m["NameChineseRaw"]));
    }
    if (m.find("PassportNo") != m.end() && !m["PassportNo"].empty()) {
      passportNo = make_shared<string>(boost::any_cast<string>(m["PassportNo"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
    if (m.find("SourceCountry") != m.end() && !m["SourceCountry"].empty()) {
      sourceCountry = make_shared<string>(boost::any_cast<string>(m["SourceCountry"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RecognizeChinapassportResponseBodyData() = default;
};
class RecognizeChinapassportResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeChinapassportResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeChinapassportResponseBody() {}

  explicit RecognizeChinapassportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeChinapassportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeChinapassportResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeChinapassportResponseBody() = default;
};
class RecognizeChinapassportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeChinapassportResponseBody> body{};

  RecognizeChinapassportResponse() {}

  explicit RecognizeChinapassportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeChinapassportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeChinapassportResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeChinapassportResponse() = default;
};
class RecognizeDriverLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeDriverLicenseRequest() {}

  explicit RecognizeDriverLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDriverLicenseRequest() = default;
};
class RecognizeDriverLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeDriverLicenseAdvanceRequest() {}

  explicit RecognizeDriverLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDriverLicenseAdvanceRequest() = default;
};
class RecognizeDriverLicenseResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> archiveNumber{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> record{};

  RecognizeDriverLicenseResponseBodyDataBackResult() {}

  explicit RecognizeDriverLicenseResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveNumber) {
      res["ArchiveNumber"] = boost::any(*archiveNumber);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (record) {
      res["Record"] = boost::any(*record);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveNumber") != m.end() && !m["ArchiveNumber"].empty()) {
      archiveNumber = make_shared<string>(boost::any_cast<string>(m["ArchiveNumber"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      record = make_shared<string>(boost::any_cast<string>(m["Record"]));
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyDataBackResult() = default;
};
class RecognizeDriverLicenseResponseBodyDataFaceResult : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> endDate{};
  shared_ptr<string> gender{};
  shared_ptr<string> issueDate{};
  shared_ptr<string> issueUnit{};
  shared_ptr<string> licenseNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> startDate{};
  shared_ptr<string> vehicleType{};

  RecognizeDriverLicenseResponseBodyDataFaceResult() {}

  explicit RecognizeDriverLicenseResponseBodyDataFaceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (issueDate) {
      res["IssueDate"] = boost::any(*issueDate);
    }
    if (issueUnit) {
      res["IssueUnit"] = boost::any(*issueUnit);
    }
    if (licenseNumber) {
      res["LicenseNumber"] = boost::any(*licenseNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      issueDate = make_shared<string>(boost::any_cast<string>(m["IssueDate"]));
    }
    if (m.find("IssueUnit") != m.end() && !m["IssueUnit"].empty()) {
      issueUnit = make_shared<string>(boost::any_cast<string>(m["IssueUnit"]));
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      licenseNumber = make_shared<string>(boost::any_cast<string>(m["LicenseNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyDataFaceResult() = default;
};
class RecognizeDriverLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeDriverLicenseResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeDriverLicenseResponseBodyDataFaceResult> faceResult{};

  RecognizeDriverLicenseResponseBodyData() {}

  explicit RecognizeDriverLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceResult) {
      res["FaceResult"] = faceResult ? boost::any(faceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeDriverLicenseResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeDriverLicenseResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FaceResult") != m.end() && !m["FaceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceResult"].type()) {
        RecognizeDriverLicenseResponseBodyDataFaceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceResult"]));
        faceResult = make_shared<RecognizeDriverLicenseResponseBodyDataFaceResult>(model1);
      }
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyData() = default;
};
class RecognizeDriverLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeDriverLicenseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeDriverLicenseResponseBody() {}

  explicit RecognizeDriverLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDriverLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeDriverLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeDriverLicenseResponseBody() = default;
};
class RecognizeDriverLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeDriverLicenseResponseBody> body{};

  RecognizeDriverLicenseResponse() {}

  explicit RecognizeDriverLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDriverLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeDriverLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeDriverLicenseResponse() = default;
};
class RecognizeDrivingLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeDrivingLicenseRequest() {}

  explicit RecognizeDrivingLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDrivingLicenseRequest() = default;
};
class RecognizeDrivingLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeDrivingLicenseAdvanceRequest() {}

  explicit RecognizeDrivingLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDrivingLicenseAdvanceRequest() = default;
};
class RecognizeDrivingLicenseResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> approvedLoad{};
  shared_ptr<string> approvedPassengerCapacity{};
  shared_ptr<string> energyType{};
  shared_ptr<string> fileNumber{};
  shared_ptr<string> grossMass{};
  shared_ptr<string> inspectionRecord{};
  shared_ptr<string> overallDimension{};
  shared_ptr<string> plateNumber{};
  shared_ptr<string> tractionMass{};
  shared_ptr<string> unladenMass{};

  RecognizeDrivingLicenseResponseBodyDataBackResult() {}

  explicit RecognizeDrivingLicenseResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvedLoad) {
      res["ApprovedLoad"] = boost::any(*approvedLoad);
    }
    if (approvedPassengerCapacity) {
      res["ApprovedPassengerCapacity"] = boost::any(*approvedPassengerCapacity);
    }
    if (energyType) {
      res["EnergyType"] = boost::any(*energyType);
    }
    if (fileNumber) {
      res["FileNumber"] = boost::any(*fileNumber);
    }
    if (grossMass) {
      res["GrossMass"] = boost::any(*grossMass);
    }
    if (inspectionRecord) {
      res["InspectionRecord"] = boost::any(*inspectionRecord);
    }
    if (overallDimension) {
      res["OverallDimension"] = boost::any(*overallDimension);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (tractionMass) {
      res["TractionMass"] = boost::any(*tractionMass);
    }
    if (unladenMass) {
      res["UnladenMass"] = boost::any(*unladenMass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovedLoad") != m.end() && !m["ApprovedLoad"].empty()) {
      approvedLoad = make_shared<string>(boost::any_cast<string>(m["ApprovedLoad"]));
    }
    if (m.find("ApprovedPassengerCapacity") != m.end() && !m["ApprovedPassengerCapacity"].empty()) {
      approvedPassengerCapacity = make_shared<string>(boost::any_cast<string>(m["ApprovedPassengerCapacity"]));
    }
    if (m.find("EnergyType") != m.end() && !m["EnergyType"].empty()) {
      energyType = make_shared<string>(boost::any_cast<string>(m["EnergyType"]));
    }
    if (m.find("FileNumber") != m.end() && !m["FileNumber"].empty()) {
      fileNumber = make_shared<string>(boost::any_cast<string>(m["FileNumber"]));
    }
    if (m.find("GrossMass") != m.end() && !m["GrossMass"].empty()) {
      grossMass = make_shared<string>(boost::any_cast<string>(m["GrossMass"]));
    }
    if (m.find("InspectionRecord") != m.end() && !m["InspectionRecord"].empty()) {
      inspectionRecord = make_shared<string>(boost::any_cast<string>(m["InspectionRecord"]));
    }
    if (m.find("OverallDimension") != m.end() && !m["OverallDimension"].empty()) {
      overallDimension = make_shared<string>(boost::any_cast<string>(m["OverallDimension"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("TractionMass") != m.end() && !m["TractionMass"].empty()) {
      tractionMass = make_shared<string>(boost::any_cast<string>(m["TractionMass"]));
    }
    if (m.find("UnladenMass") != m.end() && !m["UnladenMass"].empty()) {
      unladenMass = make_shared<string>(boost::any_cast<string>(m["UnladenMass"]));
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyDataBackResult() = default;
};
class RecognizeDrivingLicenseResponseBodyDataFaceResult : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> engineNumber{};
  shared_ptr<string> issueDate{};
  shared_ptr<string> model{};
  shared_ptr<string> owner{};
  shared_ptr<string> plateNumber{};
  shared_ptr<string> registerDate{};
  shared_ptr<string> useCharacter{};
  shared_ptr<string> vehicleType{};
  shared_ptr<string> vin{};

  RecognizeDrivingLicenseResponseBodyDataFaceResult() {}

  explicit RecognizeDrivingLicenseResponseBodyDataFaceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (engineNumber) {
      res["EngineNumber"] = boost::any(*engineNumber);
    }
    if (issueDate) {
      res["IssueDate"] = boost::any(*issueDate);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (registerDate) {
      res["RegisterDate"] = boost::any(*registerDate);
    }
    if (useCharacter) {
      res["UseCharacter"] = boost::any(*useCharacter);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    if (vin) {
      res["Vin"] = boost::any(*vin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("EngineNumber") != m.end() && !m["EngineNumber"].empty()) {
      engineNumber = make_shared<string>(boost::any_cast<string>(m["EngineNumber"]));
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      issueDate = make_shared<string>(boost::any_cast<string>(m["IssueDate"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("RegisterDate") != m.end() && !m["RegisterDate"].empty()) {
      registerDate = make_shared<string>(boost::any_cast<string>(m["RegisterDate"]));
    }
    if (m.find("UseCharacter") != m.end() && !m["UseCharacter"].empty()) {
      useCharacter = make_shared<string>(boost::any_cast<string>(m["UseCharacter"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
    if (m.find("Vin") != m.end() && !m["Vin"].empty()) {
      vin = make_shared<string>(boost::any_cast<string>(m["Vin"]));
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyDataFaceResult() = default;
};
class RecognizeDrivingLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeDrivingLicenseResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeDrivingLicenseResponseBodyDataFaceResult> faceResult{};

  RecognizeDrivingLicenseResponseBodyData() {}

  explicit RecognizeDrivingLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceResult) {
      res["FaceResult"] = faceResult ? boost::any(faceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeDrivingLicenseResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeDrivingLicenseResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FaceResult") != m.end() && !m["FaceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceResult"].type()) {
        RecognizeDrivingLicenseResponseBodyDataFaceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceResult"]));
        faceResult = make_shared<RecognizeDrivingLicenseResponseBodyDataFaceResult>(model1);
      }
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyData() = default;
};
class RecognizeDrivingLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeDrivingLicenseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeDrivingLicenseResponseBody() {}

  explicit RecognizeDrivingLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDrivingLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeDrivingLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBody() = default;
};
class RecognizeDrivingLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeDrivingLicenseResponseBody> body{};

  RecognizeDrivingLicenseResponse() {}

  explicit RecognizeDrivingLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDrivingLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeDrivingLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeDrivingLicenseResponse() = default;
};
class RecognizeIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeIdentityCardRequest() {}

  explicit RecognizeIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeIdentityCardRequest() = default;
};
class RecognizeIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeIdentityCardAdvanceRequest() {}

  explicit RecognizeIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeIdentityCardAdvanceRequest() = default;
};
class RecognizeIdentityCardResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> issue{};
  shared_ptr<string> startDate{};

  RecognizeIdentityCardResponseBodyDataBackResult() {}

  explicit RecognizeIdentityCardResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (issue) {
      res["Issue"] = boost::any(*issue);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Issue") != m.end() && !m["Issue"].empty()) {
      issue = make_shared<string>(boost::any_cast<string>(m["Issue"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataBackResult() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultCardAreas : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIdentityCardResponseBodyDataFrontResultCardAreas() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultCardAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultCardAreas() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<double> width{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle : public Darabonba::Model {
public:
  shared_ptr<double> angle{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter> center{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize> size{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (center) {
      res["Center"] = center ? boost::any(center->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (size) {
      res["Size"] = size ? boost::any(size->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("Center") != m.end() && !m["Center"].empty()) {
      if (typeid(map<string, boost::any>) == m["Center"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Center"]));
        center = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter>(model1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      if (typeid(map<string, boost::any>) == m["Size"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Size"]));
        size = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResult : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> birthDate{};
  shared_ptr<vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>> cardAreas{};
  shared_ptr<vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>> faceRectVertices{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle> faceRectangle{};
  shared_ptr<string> gender{};
  shared_ptr<string> IDNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> nationality{};

  RecognizeIdentityCardResponseBodyDataFrontResult() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (birthDate) {
      res["BirthDate"] = boost::any(*birthDate);
    }
    if (cardAreas) {
      vector<boost::any> temp1;
      for(auto item1:*cardAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CardAreas"] = boost::any(temp1);
    }
    if (faceRectVertices) {
      vector<boost::any> temp1;
      for(auto item1:*faceRectVertices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceRectVertices"] = boost::any(temp1);
    }
    if (faceRectangle) {
      res["FaceRectangle"] = faceRectangle ? boost::any(faceRectangle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (IDNumber) {
      res["IDNumber"] = boost::any(*IDNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      birthDate = make_shared<string>(boost::any_cast<string>(m["BirthDate"]));
    }
    if (m.find("CardAreas") != m.end() && !m["CardAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["CardAreas"].type()) {
        vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CardAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIdentityCardResponseBodyDataFrontResultCardAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cardAreas = make_shared<vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>>(expect1);
      }
    }
    if (m.find("FaceRectVertices") != m.end() && !m["FaceRectVertices"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceRectVertices"].type()) {
        vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceRectVertices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceRectVertices = make_shared<vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>>(expect1);
      }
    }
    if (m.find("FaceRectangle") != m.end() && !m["FaceRectangle"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRectangle"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRectangle"]));
        faceRectangle = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle>(model1);
      }
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("IDNumber") != m.end() && !m["IDNumber"].empty()) {
      IDNumber = make_shared<string>(boost::any_cast<string>(m["IDNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResult() = default;
};
class RecognizeIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeIdentityCardResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResult> frontResult{};

  RecognizeIdentityCardResponseBodyData() {}

  explicit RecognizeIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (frontResult) {
      res["FrontResult"] = frontResult ? boost::any(frontResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeIdentityCardResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeIdentityCardResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FrontResult") != m.end() && !m["FrontResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FrontResult"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FrontResult"]));
        frontResult = make_shared<RecognizeIdentityCardResponseBodyDataFrontResult>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyData() = default;
};
class RecognizeIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeIdentityCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeIdentityCardResponseBody() {}

  explicit RecognizeIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeIdentityCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBody() = default;
};
class RecognizeIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeIdentityCardResponseBody> body{};

  RecognizeIdentityCardResponse() {}

  explicit RecognizeIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponse() = default;
};
class RecognizeIndonesiaIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  RecognizeIndonesiaIdentityCardRequest() {}

  explicit RecognizeIndonesiaIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardRequest() = default;
};
class RecognizeIndonesiaIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};

  RecognizeIndonesiaIdentityCardAdvanceRequest() {}

  explicit RecognizeIndonesiaIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrlObject) {
      res["ImageUrlObject"] = boost::any(*imageUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardAdvanceRequest() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLine() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLine() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLine() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLine() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLine() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLine() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLine() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLine() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLine() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLine() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataBirthDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataBirthDateKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataBirthDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataBirthDateKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataBirthDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataBirthDateKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataBirthDate() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataBirthDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataBirthDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataBirthDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataBirthDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataBirthDate() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlaceKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlaceKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlaceKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlaceKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlace : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlaceKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlace() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlaceKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlaceKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlaceKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlace() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataCardBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataCardBoxKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataCardBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataCardBoxKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataCardBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataCardBoxKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataCardBox() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataCardBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataCardBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataCardBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataCardBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataCardBox() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDateKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDateKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDateKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDate() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDate() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataGenderKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataGenderKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataGenderKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataGenderKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataGender : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataGenderKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataGender() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataGender(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataGenderKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataGenderKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataGenderKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataGender() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataHeightKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataHeightKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataHeightKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataHeightKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataHeight : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataHeightKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataHeight() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataHeight(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataHeightKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataHeightKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataHeightKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataHeight() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataIdNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataIdNumberKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataIdNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataIdNumberKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataIdNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataIdNumberKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataIdNumber() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataIdNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataIdNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataIdNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataIdNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataIdNumber() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumberKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumberKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumberKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumber() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumber() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatusKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatusKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatusKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatusKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatus : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatusKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatus() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatusKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatusKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatusKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatus() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLineKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLineKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLine() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLine() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLineKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLineKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLine() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLine() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataNationalityKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataNationalityKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataNationalityKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataNationalityKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataNationality : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataNationalityKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataNationality() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataNationality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataNationalityKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataNationalityKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataNationalityKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataNationality() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataOccupationKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataOccupationKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataOccupationKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataOccupationKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataOccupation : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataOccupationKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataOccupation() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataOccupation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataOccupationKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataOccupationKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataOccupationKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataOccupation() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBoxKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBoxKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBoxKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBox() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBox() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataProvinceKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataProvinceKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataProvinceKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataProvinceKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataProvince : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataProvinceKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataProvince() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataProvince(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataProvinceKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataProvinceKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataProvinceKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataProvince() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataReligionKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataReligionKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataReligionKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataReligionKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataReligion : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataReligionKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataReligion() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataReligion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataReligionKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataReligionKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataReligionKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataReligion() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataSexKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIndonesiaIdentityCardResponseBodyDataSexKeyPoints() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataSexKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataSexKeyPoints() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyDataSex : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeIndonesiaIdentityCardResponseBodyDataSexKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeIndonesiaIdentityCardResponseBodyDataSex() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyDataSex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeIndonesiaIdentityCardResponseBodyDataSexKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIndonesiaIdentityCardResponseBodyDataSexKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeIndonesiaIdentityCardResponseBodyDataSexKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyDataSex() = default;
};
class RecognizeIndonesiaIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLine> addressFifthLine{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLine> addressFirstLine{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLine> addressFourthLine{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLine> addressSecondLine{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLine> addressThirdLine{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataBirthDate> birthDate{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlace> birthPlace{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataCardBox> cardBox{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDate> expiryDate{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataGender> gender{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataHeight> height{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataIdNumber> idNumber{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumber> licenseNumber{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatus> maritalStatus{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLine> nameFirstLine{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLine> nameSecondLine{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataNationality> nationality{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataOccupation> occupation{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBox> portraitBox{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataProvince> province{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataReligion> religion{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyDataSex> sex{};

  RecognizeIndonesiaIdentityCardResponseBodyData() {}

  explicit RecognizeIndonesiaIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressFifthLine) {
      res["AddressFifthLine"] = addressFifthLine ? boost::any(addressFifthLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressFirstLine) {
      res["AddressFirstLine"] = addressFirstLine ? boost::any(addressFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressFourthLine) {
      res["AddressFourthLine"] = addressFourthLine ? boost::any(addressFourthLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressSecondLine) {
      res["AddressSecondLine"] = addressSecondLine ? boost::any(addressSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressThirdLine) {
      res["AddressThirdLine"] = addressThirdLine ? boost::any(addressThirdLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthDate) {
      res["BirthDate"] = birthDate ? boost::any(birthDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthPlace) {
      res["BirthPlace"] = birthPlace ? boost::any(birthPlace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cardBox) {
      res["CardBox"] = cardBox ? boost::any(cardBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expiryDate) {
      res["ExpiryDate"] = expiryDate ? boost::any(expiryDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gender) {
      res["Gender"] = gender ? boost::any(gender->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (height) {
      res["Height"] = height ? boost::any(height->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idNumber) {
      res["IdNumber"] = idNumber ? boost::any(idNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (licenseNumber) {
      res["LicenseNumber"] = licenseNumber ? boost::any(licenseNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maritalStatus) {
      res["MaritalStatus"] = maritalStatus ? boost::any(maritalStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nameFirstLine) {
      res["NameFirstLine"] = nameFirstLine ? boost::any(nameFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nameSecondLine) {
      res["NameSecondLine"] = nameSecondLine ? boost::any(nameSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nationality) {
      res["Nationality"] = nationality ? boost::any(nationality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (occupation) {
      res["Occupation"] = occupation ? boost::any(occupation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (portraitBox) {
      res["PortraitBox"] = portraitBox ? boost::any(portraitBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (province) {
      res["Province"] = province ? boost::any(province->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (religion) {
      res["Religion"] = religion ? boost::any(religion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sex) {
      res["Sex"] = sex ? boost::any(sex->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressFifthLine") != m.end() && !m["AddressFifthLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressFifthLine"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressFifthLine"]));
        addressFifthLine = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFifthLine>(model1);
      }
    }
    if (m.find("AddressFirstLine") != m.end() && !m["AddressFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressFirstLine"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressFirstLine"]));
        addressFirstLine = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFirstLine>(model1);
      }
    }
    if (m.find("AddressFourthLine") != m.end() && !m["AddressFourthLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressFourthLine"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressFourthLine"]));
        addressFourthLine = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataAddressFourthLine>(model1);
      }
    }
    if (m.find("AddressSecondLine") != m.end() && !m["AddressSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressSecondLine"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressSecondLine"]));
        addressSecondLine = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataAddressSecondLine>(model1);
      }
    }
    if (m.find("AddressThirdLine") != m.end() && !m["AddressThirdLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressThirdLine"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressThirdLine"]));
        addressThirdLine = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataAddressThirdLine>(model1);
      }
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthDate"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataBirthDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthDate"]));
        birthDate = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataBirthDate>(model1);
      }
    }
    if (m.find("BirthPlace") != m.end() && !m["BirthPlace"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthPlace"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthPlace"]));
        birthPlace = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataBirthPlace>(model1);
      }
    }
    if (m.find("CardBox") != m.end() && !m["CardBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["CardBox"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataCardBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CardBox"]));
        cardBox = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataCardBox>(model1);
      }
    }
    if (m.find("ExpiryDate") != m.end() && !m["ExpiryDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExpiryDate"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExpiryDate"]));
        expiryDate = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataExpiryDate>(model1);
      }
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      if (typeid(map<string, boost::any>) == m["Gender"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataGender model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Gender"]));
        gender = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataGender>(model1);
      }
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      if (typeid(map<string, boost::any>) == m["Height"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataHeight model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Height"]));
        height = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataHeight>(model1);
      }
    }
    if (m.find("IdNumber") != m.end() && !m["IdNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdNumber"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataIdNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdNumber"]));
        idNumber = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataIdNumber>(model1);
      }
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["LicenseNumber"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LicenseNumber"]));
        licenseNumber = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataLicenseNumber>(model1);
      }
    }
    if (m.find("MaritalStatus") != m.end() && !m["MaritalStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["MaritalStatus"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MaritalStatus"]));
        maritalStatus = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataMaritalStatus>(model1);
      }
    }
    if (m.find("NameFirstLine") != m.end() && !m["NameFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["NameFirstLine"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NameFirstLine"]));
        nameFirstLine = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataNameFirstLine>(model1);
      }
    }
    if (m.find("NameSecondLine") != m.end() && !m["NameSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["NameSecondLine"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NameSecondLine"]));
        nameSecondLine = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataNameSecondLine>(model1);
      }
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nationality"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataNationality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nationality"]));
        nationality = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataNationality>(model1);
      }
    }
    if (m.find("Occupation") != m.end() && !m["Occupation"].empty()) {
      if (typeid(map<string, boost::any>) == m["Occupation"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataOccupation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Occupation"]));
        occupation = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataOccupation>(model1);
      }
    }
    if (m.find("PortraitBox") != m.end() && !m["PortraitBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["PortraitBox"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PortraitBox"]));
        portraitBox = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataPortraitBox>(model1);
      }
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      if (typeid(map<string, boost::any>) == m["Province"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataProvince model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Province"]));
        province = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataProvince>(model1);
      }
    }
    if (m.find("Religion") != m.end() && !m["Religion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Religion"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataReligion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Religion"]));
        religion = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataReligion>(model1);
      }
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sex"].type()) {
        RecognizeIndonesiaIdentityCardResponseBodyDataSex model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sex"]));
        sex = make_shared<RecognizeIndonesiaIdentityCardResponseBodyDataSex>(model1);
      }
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBodyData() = default;
};
class RecognizeIndonesiaIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeIndonesiaIdentityCardResponseBody() {}

  explicit RecognizeIndonesiaIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIndonesiaIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeIndonesiaIdentityCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponseBody() = default;
};
class RecognizeIndonesiaIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeIndonesiaIdentityCardResponseBody> body{};

  RecognizeIndonesiaIdentityCardResponse() {}

  explicit RecognizeIndonesiaIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIndonesiaIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeIndonesiaIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeIndonesiaIdentityCardResponse() = default;
};
class RecognizeLicensePlateRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeLicensePlateRequest() {}

  explicit RecognizeLicensePlateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeLicensePlateRequest() = default;
};
class RecognizeLicensePlateAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeLicensePlateAdvanceRequest() {}

  explicit RecognizeLicensePlateAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeLicensePlateAdvanceRequest() = default;
};
class RecognizeLicensePlateResponseBodyDataPlatesPositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeLicensePlateResponseBodyDataPlatesPositions() {}

  explicit RecognizeLicensePlateResponseBodyDataPlatesPositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyDataPlatesPositions() = default;
};
class RecognizeLicensePlateResponseBodyDataPlatesRoi : public Darabonba::Model {
public:
  shared_ptr<long> h{};
  shared_ptr<long> w{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeLicensePlateResponseBodyDataPlatesRoi() {}

  explicit RecognizeLicensePlateResponseBodyDataPlatesRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeLicensePlateResponseBodyDataPlatesRoi() = default;
};
class RecognizeLicensePlateResponseBodyDataPlates : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> plateNumber{};
  shared_ptr<string> plateType{};
  shared_ptr<double> plateTypeConfidence{};
  shared_ptr<vector<RecognizeLicensePlateResponseBodyDataPlatesPositions>> positions{};
  shared_ptr<RecognizeLicensePlateResponseBodyDataPlatesRoi> roi{};

  RecognizeLicensePlateResponseBodyDataPlates() {}

  explicit RecognizeLicensePlateResponseBodyDataPlates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (plateType) {
      res["PlateType"] = boost::any(*plateType);
    }
    if (plateTypeConfidence) {
      res["PlateTypeConfidence"] = boost::any(*plateTypeConfidence);
    }
    if (positions) {
      vector<boost::any> temp1;
      for(auto item1:*positions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Positions"] = boost::any(temp1);
    }
    if (roi) {
      res["Roi"] = roi ? boost::any(roi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("PlateType") != m.end() && !m["PlateType"].empty()) {
      plateType = make_shared<string>(boost::any_cast<string>(m["PlateType"]));
    }
    if (m.find("PlateTypeConfidence") != m.end() && !m["PlateTypeConfidence"].empty()) {
      plateTypeConfidence = make_shared<double>(boost::any_cast<double>(m["PlateTypeConfidence"]));
    }
    if (m.find("Positions") != m.end() && !m["Positions"].empty()) {
      if (typeid(vector<boost::any>) == m["Positions"].type()) {
        vector<RecognizeLicensePlateResponseBodyDataPlatesPositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Positions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLicensePlateResponseBodyDataPlatesPositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        positions = make_shared<vector<RecognizeLicensePlateResponseBodyDataPlatesPositions>>(expect1);
      }
    }
    if (m.find("Roi") != m.end() && !m["Roi"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roi"].type()) {
        RecognizeLicensePlateResponseBodyDataPlatesRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roi"]));
        roi = make_shared<RecognizeLicensePlateResponseBodyDataPlatesRoi>(model1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyDataPlates() = default;
};
class RecognizeLicensePlateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeLicensePlateResponseBodyDataPlates>> plates{};

  RecognizeLicensePlateResponseBodyData() {}

  explicit RecognizeLicensePlateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plates) {
      vector<boost::any> temp1;
      for(auto item1:*plates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Plates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Plates") != m.end() && !m["Plates"].empty()) {
      if (typeid(vector<boost::any>) == m["Plates"].type()) {
        vector<RecognizeLicensePlateResponseBodyDataPlates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Plates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLicensePlateResponseBodyDataPlates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        plates = make_shared<vector<RecognizeLicensePlateResponseBodyDataPlates>>(expect1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyData() = default;
};
class RecognizeLicensePlateResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeLicensePlateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeLicensePlateResponseBody() {}

  explicit RecognizeLicensePlateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeLicensePlateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeLicensePlateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeLicensePlateResponseBody() = default;
};
class RecognizeLicensePlateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeLicensePlateResponseBody> body{};

  RecognizeLicensePlateResponse() {}

  explicit RecognizeLicensePlateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeLicensePlateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeLicensePlateResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponse() = default;
};
class RecognizeMalaysiaIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  RecognizeMalaysiaIdentityCardRequest() {}

  explicit RecognizeMalaysiaIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardRequest() = default;
};
class RecognizeMalaysiaIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};

  RecognizeMalaysiaIdentityCardAdvanceRequest() {}

  explicit RecognizeMalaysiaIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrlObject) {
      res["ImageUrlObject"] = boost::any(*imageUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardAdvanceRequest() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLine() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLine() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLine() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLine() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLine() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLine() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLine() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLine() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLine() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLine() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataCardBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataCardBoxKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataCardBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataCardBoxKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataCardBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataCardBoxKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataCardBox() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataCardBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataCardBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataCardBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataCardBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataCardBox() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataDriveClassKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataDriveClassKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataDriveClassKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataDriveClassKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataDriveClass : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataDriveClassKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataDriveClass() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataDriveClass(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataDriveClassKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataDriveClassKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataDriveClassKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataDriveClass() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDateKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDateKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDateKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDate() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDate() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataIdNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataIdNumberKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataIdNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataIdNumberKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataIdNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataIdNumberKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataIdNumber() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataIdNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataIdNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataIdNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataIdNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataIdNumber() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataIssueDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataIssueDateKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataIssueDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataIssueDateKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataIssueDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataIssueDateKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataIssueDate() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataIssueDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataIssueDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataIssueDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataIssueDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataIssueDate() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLineKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLineKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLine() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLine() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLineKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLineKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLine() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLine() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataNationalityKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataNationalityKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataNationalityKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataNationalityKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataNationality : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataNationalityKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataNationality() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataNationality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataNationalityKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataNationalityKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataNationalityKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataNationality() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBoxKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBoxKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBoxKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBox() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBox() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataSexKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeMalaysiaIdentityCardResponseBodyDataSexKeyPoints() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataSexKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataSexKeyPoints() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyDataSex : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeMalaysiaIdentityCardResponseBodyDataSexKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeMalaysiaIdentityCardResponseBodyDataSex() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyDataSex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeMalaysiaIdentityCardResponseBodyDataSexKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeMalaysiaIdentityCardResponseBodyDataSexKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeMalaysiaIdentityCardResponseBodyDataSexKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyDataSex() = default;
};
class RecognizeMalaysiaIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLine> addressFifthLine{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLine> addressFirstLine{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLine> addressFourthLine{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLine> addressSecondLine{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLine> addressThirdLine{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataCardBox> cardBox{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataDriveClass> driveClass{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDate> expiryDate{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataIdNumber> idNumber{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataIssueDate> issueDate{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLine> nameFirstLine{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLine> nameSecondLine{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataNationality> nationality{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBox> portraitBox{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyDataSex> sex{};

  RecognizeMalaysiaIdentityCardResponseBodyData() {}

  explicit RecognizeMalaysiaIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressFifthLine) {
      res["AddressFifthLine"] = addressFifthLine ? boost::any(addressFifthLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressFirstLine) {
      res["AddressFirstLine"] = addressFirstLine ? boost::any(addressFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressFourthLine) {
      res["AddressFourthLine"] = addressFourthLine ? boost::any(addressFourthLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressSecondLine) {
      res["AddressSecondLine"] = addressSecondLine ? boost::any(addressSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressThirdLine) {
      res["AddressThirdLine"] = addressThirdLine ? boost::any(addressThirdLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cardBox) {
      res["CardBox"] = cardBox ? boost::any(cardBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (driveClass) {
      res["DriveClass"] = driveClass ? boost::any(driveClass->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expiryDate) {
      res["ExpiryDate"] = expiryDate ? boost::any(expiryDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idNumber) {
      res["IdNumber"] = idNumber ? boost::any(idNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (issueDate) {
      res["IssueDate"] = issueDate ? boost::any(issueDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nameFirstLine) {
      res["NameFirstLine"] = nameFirstLine ? boost::any(nameFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nameSecondLine) {
      res["NameSecondLine"] = nameSecondLine ? boost::any(nameSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nationality) {
      res["Nationality"] = nationality ? boost::any(nationality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (portraitBox) {
      res["PortraitBox"] = portraitBox ? boost::any(portraitBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sex) {
      res["Sex"] = sex ? boost::any(sex->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressFifthLine") != m.end() && !m["AddressFifthLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressFifthLine"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressFifthLine"]));
        addressFifthLine = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFifthLine>(model1);
      }
    }
    if (m.find("AddressFirstLine") != m.end() && !m["AddressFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressFirstLine"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressFirstLine"]));
        addressFirstLine = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFirstLine>(model1);
      }
    }
    if (m.find("AddressFourthLine") != m.end() && !m["AddressFourthLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressFourthLine"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressFourthLine"]));
        addressFourthLine = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataAddressFourthLine>(model1);
      }
    }
    if (m.find("AddressSecondLine") != m.end() && !m["AddressSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressSecondLine"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressSecondLine"]));
        addressSecondLine = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataAddressSecondLine>(model1);
      }
    }
    if (m.find("AddressThirdLine") != m.end() && !m["AddressThirdLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressThirdLine"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressThirdLine"]));
        addressThirdLine = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataAddressThirdLine>(model1);
      }
    }
    if (m.find("CardBox") != m.end() && !m["CardBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["CardBox"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataCardBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CardBox"]));
        cardBox = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataCardBox>(model1);
      }
    }
    if (m.find("DriveClass") != m.end() && !m["DriveClass"].empty()) {
      if (typeid(map<string, boost::any>) == m["DriveClass"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataDriveClass model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DriveClass"]));
        driveClass = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataDriveClass>(model1);
      }
    }
    if (m.find("ExpiryDate") != m.end() && !m["ExpiryDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExpiryDate"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExpiryDate"]));
        expiryDate = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataExpiryDate>(model1);
      }
    }
    if (m.find("IdNumber") != m.end() && !m["IdNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdNumber"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataIdNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdNumber"]));
        idNumber = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataIdNumber>(model1);
      }
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["IssueDate"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataIssueDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IssueDate"]));
        issueDate = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataIssueDate>(model1);
      }
    }
    if (m.find("NameFirstLine") != m.end() && !m["NameFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["NameFirstLine"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NameFirstLine"]));
        nameFirstLine = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataNameFirstLine>(model1);
      }
    }
    if (m.find("NameSecondLine") != m.end() && !m["NameSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["NameSecondLine"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NameSecondLine"]));
        nameSecondLine = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataNameSecondLine>(model1);
      }
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nationality"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataNationality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nationality"]));
        nationality = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataNationality>(model1);
      }
    }
    if (m.find("PortraitBox") != m.end() && !m["PortraitBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["PortraitBox"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PortraitBox"]));
        portraitBox = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataPortraitBox>(model1);
      }
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sex"].type()) {
        RecognizeMalaysiaIdentityCardResponseBodyDataSex model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sex"]));
        sex = make_shared<RecognizeMalaysiaIdentityCardResponseBodyDataSex>(model1);
      }
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBodyData() = default;
};
class RecognizeMalaysiaIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeMalaysiaIdentityCardResponseBody() {}

  explicit RecognizeMalaysiaIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeMalaysiaIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeMalaysiaIdentityCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponseBody() = default;
};
class RecognizeMalaysiaIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeMalaysiaIdentityCardResponseBody> body{};

  RecognizeMalaysiaIdentityCardResponse() {}

  explicit RecognizeMalaysiaIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeMalaysiaIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeMalaysiaIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeMalaysiaIdentityCardResponse() = default;
};
class RecognizePassportMRZRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizePassportMRZRequest() {}

  explicit RecognizePassportMRZRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizePassportMRZRequest() = default;
};
class RecognizePassportMRZAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizePassportMRZAdvanceRequest() {}

  explicit RecognizePassportMRZAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizePassportMRZAdvanceRequest() = default;
};
class RecognizePassportMRZResponseBodyDataRegions : public Darabonba::Model {
public:
  shared_ptr<vector<double>> bandBoxes{};
  shared_ptr<string> content{};
  shared_ptr<double> detectionScore{};
  shared_ptr<string> name{};
  shared_ptr<double> recognitionScore{};

  RecognizePassportMRZResponseBodyDataRegions() {}

  explicit RecognizePassportMRZResponseBodyDataRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandBoxes) {
      res["BandBoxes"] = boost::any(*bandBoxes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (detectionScore) {
      res["DetectionScore"] = boost::any(*detectionScore);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (recognitionScore) {
      res["RecognitionScore"] = boost::any(*recognitionScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandBoxes") != m.end() && !m["BandBoxes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["BandBoxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BandBoxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      bandBoxes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DetectionScore") != m.end() && !m["DetectionScore"].empty()) {
      detectionScore = make_shared<double>(boost::any_cast<double>(m["DetectionScore"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RecognitionScore") != m.end() && !m["RecognitionScore"].empty()) {
      recognitionScore = make_shared<double>(boost::any_cast<double>(m["RecognitionScore"]));
    }
  }


  virtual ~RecognizePassportMRZResponseBodyDataRegions() = default;
};
class RecognizePassportMRZResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizePassportMRZResponseBodyDataRegions>> regions{};

  RecognizePassportMRZResponseBodyData() {}

  explicit RecognizePassportMRZResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<RecognizePassportMRZResponseBodyDataRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePassportMRZResponseBodyDataRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<RecognizePassportMRZResponseBodyDataRegions>>(expect1);
      }
    }
  }


  virtual ~RecognizePassportMRZResponseBodyData() = default;
};
class RecognizePassportMRZResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizePassportMRZResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizePassportMRZResponseBody() {}

  explicit RecognizePassportMRZResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePassportMRZResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizePassportMRZResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizePassportMRZResponseBody() = default;
};
class RecognizePassportMRZResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizePassportMRZResponseBody> body{};

  RecognizePassportMRZResponse() {}

  explicit RecognizePassportMRZResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePassportMRZResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePassportMRZResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePassportMRZResponse() = default;
};
class RecognizePdfRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileURL{};

  RecognizePdfRequest() {}

  explicit RecognizePdfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
  }


  virtual ~RecognizePdfRequest() = default;
};
class RecognizePdfAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> fileURLObject{};

  RecognizePdfAdvanceRequest() {}

  explicit RecognizePdfAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!fileURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("fileURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURLObject) {
      res["FileURLObject"] = boost::any(*fileURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURLObject") != m.end() && !m["FileURLObject"].empty()) {
      fileURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileURLObject"]));
    }
  }


  virtual ~RecognizePdfAdvanceRequest() = default;
};
class RecognizePdfResponseBodyDataWordsInfoPositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizePdfResponseBodyDataWordsInfoPositions() {}

  explicit RecognizePdfResponseBodyDataWordsInfoPositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizePdfResponseBodyDataWordsInfoPositions() = default;
};
class RecognizePdfResponseBodyDataWordsInfo : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<long> height{};
  shared_ptr<vector<RecognizePdfResponseBodyDataWordsInfoPositions>> positions{};
  shared_ptr<long> width{};
  shared_ptr<string> word{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizePdfResponseBodyDataWordsInfo() {}

  explicit RecognizePdfResponseBodyDataWordsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (positions) {
      vector<boost::any> temp1;
      for(auto item1:*positions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Positions"] = boost::any(temp1);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (word) {
      res["Word"] = boost::any(*word);
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
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Positions") != m.end() && !m["Positions"].empty()) {
      if (typeid(vector<boost::any>) == m["Positions"].type()) {
        vector<RecognizePdfResponseBodyDataWordsInfoPositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Positions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePdfResponseBodyDataWordsInfoPositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        positions = make_shared<vector<RecognizePdfResponseBodyDataWordsInfoPositions>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizePdfResponseBodyDataWordsInfo() = default;
};
class RecognizePdfResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<long> height{};
  shared_ptr<long> orgHeight{};
  shared_ptr<long> orgWidth{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> width{};
  shared_ptr<vector<RecognizePdfResponseBodyDataWordsInfo>> wordsInfo{};

  RecognizePdfResponseBodyData() {}

  explicit RecognizePdfResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (orgHeight) {
      res["OrgHeight"] = boost::any(*orgHeight);
    }
    if (orgWidth) {
      res["OrgWidth"] = boost::any(*orgWidth);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (wordsInfo) {
      vector<boost::any> temp1;
      for(auto item1:*wordsInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WordsInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("OrgHeight") != m.end() && !m["OrgHeight"].empty()) {
      orgHeight = make_shared<long>(boost::any_cast<long>(m["OrgHeight"]));
    }
    if (m.find("OrgWidth") != m.end() && !m["OrgWidth"].empty()) {
      orgWidth = make_shared<long>(boost::any_cast<long>(m["OrgWidth"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("WordsInfo") != m.end() && !m["WordsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["WordsInfo"].type()) {
        vector<RecognizePdfResponseBodyDataWordsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WordsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePdfResponseBodyDataWordsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wordsInfo = make_shared<vector<RecognizePdfResponseBodyDataWordsInfo>>(expect1);
      }
    }
  }


  virtual ~RecognizePdfResponseBodyData() = default;
};
class RecognizePdfResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizePdfResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizePdfResponseBody() {}

  explicit RecognizePdfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePdfResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizePdfResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizePdfResponseBody() = default;
};
class RecognizePdfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizePdfResponseBody> body{};

  RecognizePdfResponse() {}

  explicit RecognizePdfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePdfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePdfResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePdfResponse() = default;
};
class RecognizePoiNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizePoiNameRequest() {}

  explicit RecognizePoiNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizePoiNameRequest() = default;
};
class RecognizePoiNameAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizePoiNameAdvanceRequest() {}

  explicit RecognizePoiNameAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizePoiNameAdvanceRequest() = default;
};
class RecognizePoiNameResponseBodyDataSignboardsTexts : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<vector<long>> points{};
  shared_ptr<double> score{};
  shared_ptr<string> tag{};
  shared_ptr<string> type{};

  RecognizePoiNameResponseBodyDataSignboardsTexts() {}

  explicit RecognizePoiNameResponseBodyDataSignboardsTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (points) {
      res["Points"] = boost::any(*points);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Points"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Points"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      points = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RecognizePoiNameResponseBodyDataSignboardsTexts() = default;
};
class RecognizePoiNameResponseBodyDataSignboards : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizePoiNameResponseBodyDataSignboardsTexts>> texts{};

  RecognizePoiNameResponseBodyDataSignboards() {}

  explicit RecognizePoiNameResponseBodyDataSignboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<RecognizePoiNameResponseBodyDataSignboardsTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePoiNameResponseBodyDataSignboardsTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<RecognizePoiNameResponseBodyDataSignboardsTexts>>(expect1);
      }
    }
  }


  virtual ~RecognizePoiNameResponseBodyDataSignboards() = default;
};
class RecognizePoiNameResponseBodyDataSummary : public Darabonba::Model {
public:
  shared_ptr<string> brand{};
  shared_ptr<double> score{};

  RecognizePoiNameResponseBodyDataSummary() {}

  explicit RecognizePoiNameResponseBodyDataSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~RecognizePoiNameResponseBodyDataSummary() = default;
};
class RecognizePoiNameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizePoiNameResponseBodyDataSignboards>> signboards{};
  shared_ptr<RecognizePoiNameResponseBodyDataSummary> summary{};

  RecognizePoiNameResponseBodyData() {}

  explicit RecognizePoiNameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (signboards) {
      vector<boost::any> temp1;
      for(auto item1:*signboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Signboards"] = boost::any(temp1);
    }
    if (summary) {
      res["Summary"] = summary ? boost::any(summary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Signboards") != m.end() && !m["Signboards"].empty()) {
      if (typeid(vector<boost::any>) == m["Signboards"].type()) {
        vector<RecognizePoiNameResponseBodyDataSignboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Signboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePoiNameResponseBodyDataSignboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        signboards = make_shared<vector<RecognizePoiNameResponseBodyDataSignboards>>(expect1);
      }
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Summary"].type()) {
        RecognizePoiNameResponseBodyDataSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Summary"]));
        summary = make_shared<RecognizePoiNameResponseBodyDataSummary>(model1);
      }
    }
  }


  virtual ~RecognizePoiNameResponseBodyData() = default;
};
class RecognizePoiNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizePoiNameResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizePoiNameResponseBody() {}

  explicit RecognizePoiNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePoiNameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizePoiNameResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizePoiNameResponseBody() = default;
};
class RecognizePoiNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizePoiNameResponseBody> body{};

  RecognizePoiNameResponse() {}

  explicit RecognizePoiNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePoiNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePoiNameResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePoiNameResponse() = default;
};
class RecognizeQrCodeRequestTasks : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeQrCodeRequestTasks() {}

  explicit RecognizeQrCodeRequestTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeQrCodeRequestTasks() = default;
};
class RecognizeQrCodeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeQrCodeRequestTasks>> tasks{};

  RecognizeQrCodeRequest() {}

  explicit RecognizeQrCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<RecognizeQrCodeRequestTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeRequestTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<RecognizeQrCodeRequestTasks>>(expect1);
      }
    }
  }


  virtual ~RecognizeQrCodeRequest() = default;
};
class RecognizeQrCodeResponseBodyDataElementsResults : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<vector<string>> qrCodesData{};
  shared_ptr<double> rate{};
  shared_ptr<string> suggestion{};

  RecognizeQrCodeResponseBodyDataElementsResults() {}

  explicit RecognizeQrCodeResponseBodyDataElementsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (qrCodesData) {
      res["QrCodesData"] = boost::any(*qrCodesData);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("QrCodesData") != m.end() && !m["QrCodesData"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QrCodesData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QrCodesData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      qrCodesData = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
  }


  virtual ~RecognizeQrCodeResponseBodyDataElementsResults() = default;
};
class RecognizeQrCodeResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<RecognizeQrCodeResponseBodyDataElementsResults>> results{};
  shared_ptr<string> taskId{};

  RecognizeQrCodeResponseBodyDataElements() {}

  explicit RecognizeQrCodeResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeQrCodeResponseBodyDataElementsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeResponseBodyDataElementsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeQrCodeResponseBodyDataElementsResults>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~RecognizeQrCodeResponseBodyDataElements() = default;
};
class RecognizeQrCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeQrCodeResponseBodyDataElements>> elements{};

  RecognizeQrCodeResponseBodyData() {}

  explicit RecognizeQrCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizeQrCodeResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeQrCodeResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeQrCodeResponseBodyData() = default;
};
class RecognizeQrCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeQrCodeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeQrCodeResponseBody() {}

  explicit RecognizeQrCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQrCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeQrCodeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeQrCodeResponseBody() = default;
};
class RecognizeQrCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeQrCodeResponseBody> body{};

  RecognizeQrCodeResponse() {}

  explicit RecognizeQrCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQrCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeQrCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeQrCodeResponse() = default;
};
class RecognizeQuotaInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeQuotaInvoiceRequest() {}

  explicit RecognizeQuotaInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceRequest() = default;
};
class RecognizeQuotaInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeQuotaInvoiceAdvanceRequest() {}

  explicit RecognizeQuotaInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceAdvanceRequest() = default;
};
class RecognizeQuotaInvoiceResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<string> invoiceAmount{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDetails{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> sumAmount{};

  RecognizeQuotaInvoiceResponseBodyDataContent() {}

  explicit RecognizeQuotaInvoiceResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoiceAmount) {
      res["InvoiceAmount"] = boost::any(*invoiceAmount);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDetails) {
      res["InvoiceDetails"] = boost::any(*invoiceDetails);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (sumAmount) {
      res["SumAmount"] = boost::any(*sumAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvoiceAmount") != m.end() && !m["InvoiceAmount"].empty()) {
      invoiceAmount = make_shared<string>(boost::any_cast<string>(m["InvoiceAmount"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDetails") != m.end() && !m["InvoiceDetails"].empty()) {
      invoiceDetails = make_shared<string>(boost::any_cast<string>(m["InvoiceDetails"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("SumAmount") != m.end() && !m["SumAmount"].empty()) {
      sumAmount = make_shared<string>(boost::any_cast<string>(m["SumAmount"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBodyDataContent() = default;
};
class RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions() {}

  explicit RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions() = default;
};
class RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions>> valuePositions{};
  shared_ptr<double> valueScore{};

  RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos() {}

  explicit RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (valuePositions) {
      vector<boost::any> temp1;
      for(auto item1:*valuePositions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ValuePositions"] = boost::any(temp1);
    }
    if (valueScore) {
      res["ValueScore"] = boost::any(*valueScore);
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
    if (m.find("ValuePositions") != m.end() && !m["ValuePositions"].empty()) {
      if (typeid(vector<boost::any>) == m["ValuePositions"].type()) {
        vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ValuePositions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valuePositions = make_shared<vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions>>(expect1);
      }
    }
    if (m.find("ValueScore") != m.end() && !m["ValueScore"].empty()) {
      valueScore = make_shared<double>(boost::any_cast<double>(m["ValueScore"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos() = default;
};
class RecognizeQuotaInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<RecognizeQuotaInvoiceResponseBodyDataContent> content{};
  shared_ptr<long> height{};
  shared_ptr<vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos>> keyValueInfos{};
  shared_ptr<long> orgHeight{};
  shared_ptr<long> orgWidth{};
  shared_ptr<long> width{};

  RecognizeQuotaInvoiceResponseBodyData() {}

  explicit RecognizeQuotaInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (keyValueInfos) {
      vector<boost::any> temp1;
      for(auto item1:*keyValueInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyValueInfos"] = boost::any(temp1);
    }
    if (orgHeight) {
      res["OrgHeight"] = boost::any(*orgHeight);
    }
    if (orgWidth) {
      res["OrgWidth"] = boost::any(*orgWidth);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        RecognizeQuotaInvoiceResponseBodyDataContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<RecognizeQuotaInvoiceResponseBodyDataContent>(model1);
      }
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("KeyValueInfos") != m.end() && !m["KeyValueInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyValueInfos"].type()) {
        vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyValueInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyValueInfos = make_shared<vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos>>(expect1);
      }
    }
    if (m.find("OrgHeight") != m.end() && !m["OrgHeight"].empty()) {
      orgHeight = make_shared<long>(boost::any_cast<long>(m["OrgHeight"]));
    }
    if (m.find("OrgWidth") != m.end() && !m["OrgWidth"].empty()) {
      orgWidth = make_shared<long>(boost::any_cast<long>(m["OrgWidth"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBodyData() = default;
};
class RecognizeQuotaInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeQuotaInvoiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeQuotaInvoiceResponseBody() {}

  explicit RecognizeQuotaInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQuotaInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeQuotaInvoiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBody() = default;
};
class RecognizeQuotaInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeQuotaInvoiceResponseBody> body{};

  RecognizeQuotaInvoiceResponse() {}

  explicit RecognizeQuotaInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQuotaInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeQuotaInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeQuotaInvoiceResponse() = default;
};
class RecognizeRussiaIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  RecognizeRussiaIdentityCardRequest() {}

  explicit RecognizeRussiaIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardRequest() = default;
};
class RecognizeRussiaIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};

  RecognizeRussiaIdentityCardAdvanceRequest() {}

  explicit RecognizeRussiaIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrlObject) {
      res["ImageUrlObject"] = boost::any(*imageUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardAdvanceRequest() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataBirthDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataBirthDateKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataBirthDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataBirthDateKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataBirthDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataBirthDateKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataBirthDate() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataBirthDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataBirthDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataBirthDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataBirthDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataBirthDate() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLineKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLineKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLine() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLine() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLineKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLineKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLine() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLine() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLineKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLineKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLine() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLine() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataCardBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataCardBoxKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataCardBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataCardBoxKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataCardBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataCardBoxKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataCardBox() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataCardBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataCardBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataCardBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataCardBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataCardBox() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataGivenNameKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataGivenNameKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataGivenNameKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataGivenNameKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataGivenName : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataGivenNameKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataGivenName() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataGivenName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataGivenNameKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataGivenNameKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataGivenNameKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataGivenName() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataIdNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataIdNumberKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataIdNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataIdNumberKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataIdNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataIdNumberKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataIdNumber() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataIdNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataIdNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataIdNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataIdNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataIdNumber() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataPaternalNameKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataPaternalNameKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataPaternalNameKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataPaternalNameKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataPaternalName : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataPaternalNameKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataPaternalName() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataPaternalName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataPaternalNameKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataPaternalNameKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataPaternalNameKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataPaternalName() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataPortraitBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataPortraitBoxKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataPortraitBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataPortraitBoxKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataPortraitBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataPortraitBoxKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataPortraitBox() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataPortraitBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataPortraitBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataPortraitBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataPortraitBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataPortraitBox() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataSexKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataSexKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataSexKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataSexKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataSex : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataSexKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataSex() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataSex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataSexKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataSexKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataSexKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataSex() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLineKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLineKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLine() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLine() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLineKeyPoints() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLineKeyPoints() = default;
};
class RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLine() {}

  explicit RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLine() = default;
};
class RecognizeRussiaIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataBirthDate> birthDate{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLine> birthPlaceFirstLine{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLine> birthPlaceSecondLine{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLine> birthPlaceThirdLine{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataCardBox> cardBox{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataGivenName> givenName{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataIdNumber> idNumber{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataPaternalName> paternalName{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataPortraitBox> portraitBox{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataSex> sex{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLine> surnameFirstLine{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLine> surnameSecondLine{};

  RecognizeRussiaIdentityCardResponseBodyData() {}

  explicit RecognizeRussiaIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (birthDate) {
      res["BirthDate"] = birthDate ? boost::any(birthDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthPlaceFirstLine) {
      res["BirthPlaceFirstLine"] = birthPlaceFirstLine ? boost::any(birthPlaceFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthPlaceSecondLine) {
      res["BirthPlaceSecondLine"] = birthPlaceSecondLine ? boost::any(birthPlaceSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthPlaceThirdLine) {
      res["BirthPlaceThirdLine"] = birthPlaceThirdLine ? boost::any(birthPlaceThirdLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cardBox) {
      res["CardBox"] = cardBox ? boost::any(cardBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (givenName) {
      res["GivenName"] = givenName ? boost::any(givenName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idNumber) {
      res["IdNumber"] = idNumber ? boost::any(idNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paternalName) {
      res["PaternalName"] = paternalName ? boost::any(paternalName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (portraitBox) {
      res["PortraitBox"] = portraitBox ? boost::any(portraitBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sex) {
      res["Sex"] = sex ? boost::any(sex->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (surnameFirstLine) {
      res["SurnameFirstLine"] = surnameFirstLine ? boost::any(surnameFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (surnameSecondLine) {
      res["SurnameSecondLine"] = surnameSecondLine ? boost::any(surnameSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthDate"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataBirthDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthDate"]));
        birthDate = make_shared<RecognizeRussiaIdentityCardResponseBodyDataBirthDate>(model1);
      }
    }
    if (m.find("BirthPlaceFirstLine") != m.end() && !m["BirthPlaceFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthPlaceFirstLine"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthPlaceFirstLine"]));
        birthPlaceFirstLine = make_shared<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceFirstLine>(model1);
      }
    }
    if (m.find("BirthPlaceSecondLine") != m.end() && !m["BirthPlaceSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthPlaceSecondLine"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthPlaceSecondLine"]));
        birthPlaceSecondLine = make_shared<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceSecondLine>(model1);
      }
    }
    if (m.find("BirthPlaceThirdLine") != m.end() && !m["BirthPlaceThirdLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthPlaceThirdLine"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthPlaceThirdLine"]));
        birthPlaceThirdLine = make_shared<RecognizeRussiaIdentityCardResponseBodyDataBirthPlaceThirdLine>(model1);
      }
    }
    if (m.find("CardBox") != m.end() && !m["CardBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["CardBox"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataCardBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CardBox"]));
        cardBox = make_shared<RecognizeRussiaIdentityCardResponseBodyDataCardBox>(model1);
      }
    }
    if (m.find("GivenName") != m.end() && !m["GivenName"].empty()) {
      if (typeid(map<string, boost::any>) == m["GivenName"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataGivenName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GivenName"]));
        givenName = make_shared<RecognizeRussiaIdentityCardResponseBodyDataGivenName>(model1);
      }
    }
    if (m.find("IdNumber") != m.end() && !m["IdNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdNumber"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataIdNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdNumber"]));
        idNumber = make_shared<RecognizeRussiaIdentityCardResponseBodyDataIdNumber>(model1);
      }
    }
    if (m.find("PaternalName") != m.end() && !m["PaternalName"].empty()) {
      if (typeid(map<string, boost::any>) == m["PaternalName"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataPaternalName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PaternalName"]));
        paternalName = make_shared<RecognizeRussiaIdentityCardResponseBodyDataPaternalName>(model1);
      }
    }
    if (m.find("PortraitBox") != m.end() && !m["PortraitBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["PortraitBox"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataPortraitBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PortraitBox"]));
        portraitBox = make_shared<RecognizeRussiaIdentityCardResponseBodyDataPortraitBox>(model1);
      }
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sex"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataSex model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sex"]));
        sex = make_shared<RecognizeRussiaIdentityCardResponseBodyDataSex>(model1);
      }
    }
    if (m.find("SurnameFirstLine") != m.end() && !m["SurnameFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["SurnameFirstLine"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SurnameFirstLine"]));
        surnameFirstLine = make_shared<RecognizeRussiaIdentityCardResponseBodyDataSurnameFirstLine>(model1);
      }
    }
    if (m.find("SurnameSecondLine") != m.end() && !m["SurnameSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["SurnameSecondLine"].type()) {
        RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SurnameSecondLine"]));
        surnameSecondLine = make_shared<RecognizeRussiaIdentityCardResponseBodyDataSurnameSecondLine>(model1);
      }
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBodyData() = default;
};
class RecognizeRussiaIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeRussiaIdentityCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeRussiaIdentityCardResponseBody() {}

  explicit RecognizeRussiaIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeRussiaIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeRussiaIdentityCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponseBody() = default;
};
class RecognizeRussiaIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeRussiaIdentityCardResponseBody> body{};

  RecognizeRussiaIdentityCardResponse() {}

  explicit RecognizeRussiaIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeRussiaIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeRussiaIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeRussiaIdentityCardResponse() = default;
};
class RecognizeStampRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeStampRequest() {}

  explicit RecognizeStampRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeStampRequest() = default;
};
class RecognizeStampAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeStampAdvanceRequest() {}

  explicit RecognizeStampAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeStampAdvanceRequest() = default;
};
class RecognizeStampResponseBodyDataResultsGeneralText : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> content{};

  RecognizeStampResponseBodyDataResultsGeneralText() {}

  explicit RecognizeStampResponseBodyDataResultsGeneralText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~RecognizeStampResponseBodyDataResultsGeneralText() = default;
};
class RecognizeStampResponseBodyDataResultsRoi : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeStampResponseBodyDataResultsRoi() {}

  explicit RecognizeStampResponseBodyDataResultsRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeStampResponseBodyDataResultsRoi() = default;
};
class RecognizeStampResponseBodyDataResultsText : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> content{};

  RecognizeStampResponseBodyDataResultsText() {}

  explicit RecognizeStampResponseBodyDataResultsText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~RecognizeStampResponseBodyDataResultsText() = default;
};
class RecognizeStampResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeStampResponseBodyDataResultsGeneralText>> generalText{};
  shared_ptr<RecognizeStampResponseBodyDataResultsRoi> roi{};
  shared_ptr<RecognizeStampResponseBodyDataResultsText> text{};

  RecognizeStampResponseBodyDataResults() {}

  explicit RecognizeStampResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generalText) {
      vector<boost::any> temp1;
      for(auto item1:*generalText){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GeneralText"] = boost::any(temp1);
    }
    if (roi) {
      res["Roi"] = roi ? boost::any(roi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["Text"] = text ? boost::any(text->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeneralText") != m.end() && !m["GeneralText"].empty()) {
      if (typeid(vector<boost::any>) == m["GeneralText"].type()) {
        vector<RecognizeStampResponseBodyDataResultsGeneralText> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GeneralText"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeStampResponseBodyDataResultsGeneralText model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        generalText = make_shared<vector<RecognizeStampResponseBodyDataResultsGeneralText>>(expect1);
      }
    }
    if (m.find("Roi") != m.end() && !m["Roi"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roi"].type()) {
        RecognizeStampResponseBodyDataResultsRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roi"]));
        roi = make_shared<RecognizeStampResponseBodyDataResultsRoi>(model1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      if (typeid(map<string, boost::any>) == m["Text"].type()) {
        RecognizeStampResponseBodyDataResultsText model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Text"]));
        text = make_shared<RecognizeStampResponseBodyDataResultsText>(model1);
      }
    }
  }


  virtual ~RecognizeStampResponseBodyDataResults() = default;
};
class RecognizeStampResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeStampResponseBodyDataResults>> results{};

  RecognizeStampResponseBodyData() {}

  explicit RecognizeStampResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeStampResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeStampResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeStampResponseBodyDataResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeStampResponseBodyData() = default;
};
class RecognizeStampResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeStampResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeStampResponseBody() {}

  explicit RecognizeStampResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeStampResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeStampResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeStampResponseBody() = default;
};
class RecognizeStampResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeStampResponseBody> body{};

  RecognizeStampResponse() {}

  explicit RecognizeStampResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeStampResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeStampResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeStampResponse() = default;
};
class RecognizeTableRequest : public Darabonba::Model {
public:
  shared_ptr<bool> assureDirection{};
  shared_ptr<bool> hasLine{};
  shared_ptr<string> imageURL{};
  shared_ptr<string> outputFormat{};
  shared_ptr<bool> skipDetection{};
  shared_ptr<bool> useFinanceModel{};

  RecognizeTableRequest() {}

  explicit RecognizeTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assureDirection) {
      res["AssureDirection"] = boost::any(*assureDirection);
    }
    if (hasLine) {
      res["HasLine"] = boost::any(*hasLine);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (skipDetection) {
      res["SkipDetection"] = boost::any(*skipDetection);
    }
    if (useFinanceModel) {
      res["UseFinanceModel"] = boost::any(*useFinanceModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssureDirection") != m.end() && !m["AssureDirection"].empty()) {
      assureDirection = make_shared<bool>(boost::any_cast<bool>(m["AssureDirection"]));
    }
    if (m.find("HasLine") != m.end() && !m["HasLine"].empty()) {
      hasLine = make_shared<bool>(boost::any_cast<bool>(m["HasLine"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("SkipDetection") != m.end() && !m["SkipDetection"].empty()) {
      skipDetection = make_shared<bool>(boost::any_cast<bool>(m["SkipDetection"]));
    }
    if (m.find("UseFinanceModel") != m.end() && !m["UseFinanceModel"].empty()) {
      useFinanceModel = make_shared<bool>(boost::any_cast<bool>(m["UseFinanceModel"]));
    }
  }


  virtual ~RecognizeTableRequest() = default;
};
class RecognizeTableAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<bool> assureDirection{};
  shared_ptr<bool> hasLine{};
  shared_ptr<string> outputFormat{};
  shared_ptr<bool> skipDetection{};
  shared_ptr<bool> useFinanceModel{};

  RecognizeTableAdvanceRequest() {}

  explicit RecognizeTableAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (assureDirection) {
      res["AssureDirection"] = boost::any(*assureDirection);
    }
    if (hasLine) {
      res["HasLine"] = boost::any(*hasLine);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (skipDetection) {
      res["SkipDetection"] = boost::any(*skipDetection);
    }
    if (useFinanceModel) {
      res["UseFinanceModel"] = boost::any(*useFinanceModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("AssureDirection") != m.end() && !m["AssureDirection"].empty()) {
      assureDirection = make_shared<bool>(boost::any_cast<bool>(m["AssureDirection"]));
    }
    if (m.find("HasLine") != m.end() && !m["HasLine"].empty()) {
      hasLine = make_shared<bool>(boost::any_cast<bool>(m["HasLine"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("SkipDetection") != m.end() && !m["SkipDetection"].empty()) {
      skipDetection = make_shared<bool>(boost::any_cast<bool>(m["SkipDetection"]));
    }
    if (m.find("UseFinanceModel") != m.end() && !m["UseFinanceModel"].empty()) {
      useFinanceModel = make_shared<bool>(boost::any_cast<bool>(m["UseFinanceModel"]));
    }
  }


  virtual ~RecognizeTableAdvanceRequest() = default;
};
class RecognizeTableResponseBodyDataTablesTableRowsTableColumns : public Darabonba::Model {
public:
  shared_ptr<long> endColumn{};
  shared_ptr<long> endRow{};
  shared_ptr<long> height{};
  shared_ptr<long> startColumn{};
  shared_ptr<long> startRow{};
  shared_ptr<vector<string>> texts{};
  shared_ptr<long> width{};

  RecognizeTableResponseBodyDataTablesTableRowsTableColumns() {}

  explicit RecognizeTableResponseBodyDataTablesTableRowsTableColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endColumn) {
      res["EndColumn"] = boost::any(*endColumn);
    }
    if (endRow) {
      res["EndRow"] = boost::any(*endRow);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (startColumn) {
      res["StartColumn"] = boost::any(*startColumn);
    }
    if (startRow) {
      res["StartRow"] = boost::any(*startRow);
    }
    if (texts) {
      res["Texts"] = boost::any(*texts);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndColumn") != m.end() && !m["EndColumn"].empty()) {
      endColumn = make_shared<long>(boost::any_cast<long>(m["EndColumn"]));
    }
    if (m.find("EndRow") != m.end() && !m["EndRow"].empty()) {
      endRow = make_shared<long>(boost::any_cast<long>(m["EndRow"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("StartColumn") != m.end() && !m["StartColumn"].empty()) {
      startColumn = make_shared<long>(boost::any_cast<long>(m["StartColumn"]));
    }
    if (m.find("StartRow") != m.end() && !m["StartRow"].empty()) {
      startRow = make_shared<long>(boost::any_cast<long>(m["StartRow"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Texts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      texts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeTableResponseBodyDataTablesTableRowsTableColumns() = default;
};
class RecognizeTableResponseBodyDataTablesTableRows : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns>> tableColumns{};

  RecognizeTableResponseBodyDataTablesTableRows() {}

  explicit RecognizeTableResponseBodyDataTablesTableRows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableColumns) {
      vector<boost::any> temp1;
      for(auto item1:*tableColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableColumns"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableColumns") != m.end() && !m["TableColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["TableColumns"].type()) {
        vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTablesTableRowsTableColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableColumns = make_shared<vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns>>(expect1);
      }
    }
  }


  virtual ~RecognizeTableResponseBodyDataTablesTableRows() = default;
};
class RecognizeTableResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> head{};
  shared_ptr<vector<RecognizeTableResponseBodyDataTablesTableRows>> tableRows{};
  shared_ptr<vector<string>> tail{};

  RecognizeTableResponseBodyDataTables() {}

  explicit RecognizeTableResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (head) {
      res["Head"] = boost::any(*head);
    }
    if (tableRows) {
      vector<boost::any> temp1;
      for(auto item1:*tableRows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableRows"] = boost::any(temp1);
    }
    if (tail) {
      res["Tail"] = boost::any(*tail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Head") != m.end() && !m["Head"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Head"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Head"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      head = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TableRows") != m.end() && !m["TableRows"].empty()) {
      if (typeid(vector<boost::any>) == m["TableRows"].type()) {
        vector<RecognizeTableResponseBodyDataTablesTableRows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableRows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTablesTableRows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableRows = make_shared<vector<RecognizeTableResponseBodyDataTablesTableRows>>(expect1);
      }
    }
    if (m.find("Tail") != m.end() && !m["Tail"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tail"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tail"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tail = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecognizeTableResponseBodyDataTables() = default;
};
class RecognizeTableResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileContent{};
  shared_ptr<vector<RecognizeTableResponseBodyDataTables>> tables{};

  RecognizeTableResponseBodyData() {}

  explicit RecognizeTableResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileContent) {
      res["FileContent"] = boost::any(*fileContent);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileContent") != m.end() && !m["FileContent"].empty()) {
      fileContent = make_shared<string>(boost::any_cast<string>(m["FileContent"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<RecognizeTableResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<RecognizeTableResponseBodyDataTables>>(expect1);
      }
    }
  }


  virtual ~RecognizeTableResponseBodyData() = default;
};
class RecognizeTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTableResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTableResponseBody() {}

  explicit RecognizeTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTableResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTableResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTableResponseBody() = default;
};
class RecognizeTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTableResponseBody> body{};

  RecognizeTableResponse() {}

  explicit RecognizeTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTableResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTableResponse() = default;
};
class RecognizeTakeoutOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTakeoutOrderRequest() {}

  explicit RecognizeTakeoutOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeTakeoutOrderRequest() = default;
};
class RecognizeTakeoutOrderAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTakeoutOrderAdvanceRequest() {}

  explicit RecognizeTakeoutOrderAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeTakeoutOrderAdvanceRequest() = default;
};
class RecognizeTakeoutOrderResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<vector<long>> boxes{};
  shared_ptr<string> name{};
  shared_ptr<double> score{};
  shared_ptr<string> value{};

  RecognizeTakeoutOrderResponseBodyDataElements() {}

  explicit RecognizeTakeoutOrderResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~RecognizeTakeoutOrderResponseBodyDataElements() = default;
};
class RecognizeTakeoutOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTakeoutOrderResponseBodyDataElements>> elements{};

  RecognizeTakeoutOrderResponseBodyData() {}

  explicit RecognizeTakeoutOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizeTakeoutOrderResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTakeoutOrderResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeTakeoutOrderResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeTakeoutOrderResponseBodyData() = default;
};
class RecognizeTakeoutOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTakeoutOrderResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTakeoutOrderResponseBody() {}

  explicit RecognizeTakeoutOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTakeoutOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTakeoutOrderResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTakeoutOrderResponseBody() = default;
};
class RecognizeTakeoutOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTakeoutOrderResponseBody> body{};

  RecognizeTakeoutOrderResponse() {}

  explicit RecognizeTakeoutOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTakeoutOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTakeoutOrderResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTakeoutOrderResponse() = default;
};
class RecognizeTaxiInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTaxiInvoiceRequest() {}

  explicit RecognizeTaxiInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceRequest() = default;
};
class RecognizeTaxiInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTaxiInvoiceAdvanceRequest() {}

  explicit RecognizeTaxiInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceAdvanceRequest() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi : public Darabonba::Model {
public:
  shared_ptr<double> h{};
  shared_ptr<double> w{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize : public Darabonba::Model {
public:
  shared_ptr<double> h{};
  shared_ptr<double> w{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi : public Darabonba::Model {
public:
  shared_ptr<double> angle{};
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter> center{};
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize> size{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (center) {
      res["Center"] = center ? boost::any(center->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (size) {
      res["Size"] = size ? boost::any(size->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("Center") != m.end() && !m["Center"].empty()) {
      if (typeid(map<string, boost::any>) == m["Center"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Center"]));
        center = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter>(model1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      if (typeid(map<string, boost::any>) == m["Size"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Size"]));
        size = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItems : public Darabonba::Model {
public:
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi> itemRoi{};
  shared_ptr<string> text{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItems() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemRoi) {
      res["ItemRoi"] = itemRoi ? boost::any(itemRoi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemRoi") != m.end() && !m["ItemRoi"].empty()) {
      if (typeid(map<string, boost::any>) == m["ItemRoi"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ItemRoi"]));
        itemRoi = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi>(model1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItems() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoices : public Darabonba::Model {
public:
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi> invoiceRoi{};
  shared_ptr<vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>> items{};
  shared_ptr<long> rotateType{};

  RecognizeTaxiInvoiceResponseBodyDataInvoices() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoiceRoi) {
      res["InvoiceRoi"] = invoiceRoi ? boost::any(invoiceRoi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (rotateType) {
      res["RotateType"] = boost::any(*rotateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvoiceRoi") != m.end() && !m["InvoiceRoi"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvoiceRoi"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvoiceRoi"]));
        invoiceRoi = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi>(model1);
      }
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTaxiInvoiceResponseBodyDataInvoicesItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>>(expect1);
      }
    }
    if (m.find("RotateType") != m.end() && !m["RotateType"].empty()) {
      rotateType = make_shared<long>(boost::any_cast<long>(m["RotateType"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoices() = default;
};
class RecognizeTaxiInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTaxiInvoiceResponseBodyDataInvoices>> invoices{};

  RecognizeTaxiInvoiceResponseBodyData() {}

  explicit RecognizeTaxiInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoices) {
      vector<boost::any> temp1;
      for(auto item1:*invoices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Invoices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invoices") != m.end() && !m["Invoices"].empty()) {
      if (typeid(vector<boost::any>) == m["Invoices"].type()) {
        vector<RecognizeTaxiInvoiceResponseBodyDataInvoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Invoices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTaxiInvoiceResponseBodyDataInvoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invoices = make_shared<vector<RecognizeTaxiInvoiceResponseBodyDataInvoices>>(expect1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyData() = default;
};
class RecognizeTaxiInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTaxiInvoiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTaxiInvoiceResponseBody() {}

  explicit RecognizeTaxiInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTaxiInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTaxiInvoiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBody() = default;
};
class RecognizeTaxiInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTaxiInvoiceResponseBody> body{};

  RecognizeTaxiInvoiceResponse() {}

  explicit RecognizeTaxiInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTaxiInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTaxiInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponse() = default;
};
class RecognizeTicketInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTicketInvoiceRequest() {}

  explicit RecognizeTicketInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeTicketInvoiceRequest() = default;
};
class RecognizeTicketInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTicketInvoiceAdvanceRequest() {}

  explicit RecognizeTicketInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeTicketInvoiceAdvanceRequest() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResultsContent : public Darabonba::Model {
public:
  shared_ptr<string> antiFakeCode{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDate{};
  shared_ptr<string> invoiceNumber{};
  shared_ptr<string> payeeName{};
  shared_ptr<string> payeeRegisterNo{};
  shared_ptr<string> payerName{};
  shared_ptr<string> payerRegisterNo{};
  shared_ptr<string> sumAmount{};

  RecognizeTicketInvoiceResponseBodyDataResultsContent() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResultsContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiFakeCode) {
      res["AntiFakeCode"] = boost::any(*antiFakeCode);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDate) {
      res["InvoiceDate"] = boost::any(*invoiceDate);
    }
    if (invoiceNumber) {
      res["InvoiceNumber"] = boost::any(*invoiceNumber);
    }
    if (payeeName) {
      res["PayeeName"] = boost::any(*payeeName);
    }
    if (payeeRegisterNo) {
      res["PayeeRegisterNo"] = boost::any(*payeeRegisterNo);
    }
    if (payerName) {
      res["PayerName"] = boost::any(*payerName);
    }
    if (payerRegisterNo) {
      res["PayerRegisterNo"] = boost::any(*payerRegisterNo);
    }
    if (sumAmount) {
      res["SumAmount"] = boost::any(*sumAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiFakeCode") != m.end() && !m["AntiFakeCode"].empty()) {
      antiFakeCode = make_shared<string>(boost::any_cast<string>(m["AntiFakeCode"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDate") != m.end() && !m["InvoiceDate"].empty()) {
      invoiceDate = make_shared<string>(boost::any_cast<string>(m["InvoiceDate"]));
    }
    if (m.find("InvoiceNumber") != m.end() && !m["InvoiceNumber"].empty()) {
      invoiceNumber = make_shared<string>(boost::any_cast<string>(m["InvoiceNumber"]));
    }
    if (m.find("PayeeName") != m.end() && !m["PayeeName"].empty()) {
      payeeName = make_shared<string>(boost::any_cast<string>(m["PayeeName"]));
    }
    if (m.find("PayeeRegisterNo") != m.end() && !m["PayeeRegisterNo"].empty()) {
      payeeRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayeeRegisterNo"]));
    }
    if (m.find("PayerName") != m.end() && !m["PayerName"].empty()) {
      payerName = make_shared<string>(boost::any_cast<string>(m["PayerName"]));
    }
    if (m.find("PayerRegisterNo") != m.end() && !m["PayerRegisterNo"].empty()) {
      payerRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayerRegisterNo"]));
    }
    if (m.find("SumAmount") != m.end() && !m["SumAmount"].empty()) {
      sumAmount = make_shared<string>(boost::any_cast<string>(m["SumAmount"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResultsContent() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions>> valuePositions{};
  shared_ptr<double> valueScore{};

  RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (valuePositions) {
      vector<boost::any> temp1;
      for(auto item1:*valuePositions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ValuePositions"] = boost::any(temp1);
    }
    if (valueScore) {
      res["ValueScore"] = boost::any(*valueScore);
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
    if (m.find("ValuePositions") != m.end() && !m["ValuePositions"].empty()) {
      if (typeid(vector<boost::any>) == m["ValuePositions"].type()) {
        vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ValuePositions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valuePositions = make_shared<vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions>>(expect1);
      }
    }
    if (m.find("ValueScore") != m.end() && !m["ValueScore"].empty()) {
      valueScore = make_shared<double>(boost::any_cast<double>(m["ValueScore"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<RecognizeTicketInvoiceResponseBodyDataResultsContent> content{};
  shared_ptr<long> index{};
  shared_ptr<vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos>> keyValueInfos{};
  shared_ptr<vector<RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle>> sliceRectangle{};
  shared_ptr<string> type{};

  RecognizeTicketInvoiceResponseBodyDataResults() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (keyValueInfos) {
      vector<boost::any> temp1;
      for(auto item1:*keyValueInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyValueInfos"] = boost::any(temp1);
    }
    if (sliceRectangle) {
      vector<boost::any> temp1;
      for(auto item1:*sliceRectangle){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SliceRectangle"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        RecognizeTicketInvoiceResponseBodyDataResultsContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<RecognizeTicketInvoiceResponseBodyDataResultsContent>(model1);
      }
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("KeyValueInfos") != m.end() && !m["KeyValueInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyValueInfos"].type()) {
        vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyValueInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyValueInfos = make_shared<vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos>>(expect1);
      }
    }
    if (m.find("SliceRectangle") != m.end() && !m["SliceRectangle"].empty()) {
      if (typeid(vector<boost::any>) == m["SliceRectangle"].type()) {
        vector<RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SliceRectangle"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sliceRectangle = make_shared<vector<RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResults() = default;
};
class RecognizeTicketInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> height{};
  shared_ptr<long> orgHeight{};
  shared_ptr<long> orgWidth{};
  shared_ptr<vector<RecognizeTicketInvoiceResponseBodyDataResults>> results{};
  shared_ptr<long> width{};

  RecognizeTicketInvoiceResponseBodyData() {}

  explicit RecognizeTicketInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (orgHeight) {
      res["OrgHeight"] = boost::any(*orgHeight);
    }
    if (orgWidth) {
      res["OrgWidth"] = boost::any(*orgWidth);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("OrgHeight") != m.end() && !m["OrgHeight"].empty()) {
      orgHeight = make_shared<long>(boost::any_cast<long>(m["OrgHeight"]));
    }
    if (m.find("OrgWidth") != m.end() && !m["OrgWidth"].empty()) {
      orgWidth = make_shared<long>(boost::any_cast<long>(m["OrgWidth"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeTicketInvoiceResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTicketInvoiceResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeTicketInvoiceResponseBodyDataResults>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyData() = default;
};
class RecognizeTicketInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTicketInvoiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTicketInvoiceResponseBody() {}

  explicit RecognizeTicketInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTicketInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTicketInvoiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBody() = default;
};
class RecognizeTicketInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTicketInvoiceResponseBody> body{};

  RecognizeTicketInvoiceResponse() {}

  explicit RecognizeTicketInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTicketInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTicketInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTicketInvoiceResponse() = default;
};
class RecognizeTrainTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTrainTicketRequest() {}

  explicit RecognizeTrainTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeTrainTicketRequest() = default;
};
class RecognizeTrainTicketAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTrainTicketAdvanceRequest() {}

  explicit RecognizeTrainTicketAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeTrainTicketAdvanceRequest() = default;
};
class RecognizeTrainTicketResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> departureStation{};
  shared_ptr<string> destination{};
  shared_ptr<string> level{};
  shared_ptr<string> name{};
  shared_ptr<string> number{};
  shared_ptr<double> price{};
  shared_ptr<string> seat{};

  RecognizeTrainTicketResponseBodyData() {}

  explicit RecognizeTrainTicketResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (departureStation) {
      res["DepartureStation"] = boost::any(*departureStation);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DepartureStation") != m.end() && !m["DepartureStation"].empty()) {
      departureStation = make_shared<string>(boost::any_cast<string>(m["DepartureStation"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
  }


  virtual ~RecognizeTrainTicketResponseBodyData() = default;
};
class RecognizeTrainTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTrainTicketResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTrainTicketResponseBody() {}

  explicit RecognizeTrainTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTrainTicketResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTrainTicketResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTrainTicketResponseBody() = default;
};
class RecognizeTrainTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTrainTicketResponseBody> body{};

  RecognizeTrainTicketResponse() {}

  explicit RecognizeTrainTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTrainTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTrainTicketResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTrainTicketResponse() = default;
};
class RecognizeTurkeyIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  RecognizeTurkeyIdentityCardRequest() {}

  explicit RecognizeTurkeyIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardRequest() = default;
};
class RecognizeTurkeyIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};

  RecognizeTurkeyIdentityCardAdvanceRequest() {}

  explicit RecognizeTurkeyIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrlObject) {
      res["ImageUrlObject"] = boost::any(*imageUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardAdvanceRequest() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryToolsKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryToolsKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryToolsKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryToolsKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryTools : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryToolsKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryTools() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryToolsKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryToolsKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryToolsKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryTools() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataBirthDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataBirthDateKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataBirthDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataBirthDateKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataBirthDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataBirthDateKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataBirthDate() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataBirthDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataBirthDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataBirthDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataBirthDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataBirthDate() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataBirthPlaceKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataBirthPlaceKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataBirthPlaceKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataBirthPlaceKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataBirthPlace : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataBirthPlaceKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataBirthPlace() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataBirthPlace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataBirthPlaceKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataBirthPlaceKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataBirthPlaceKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataBirthPlace() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataBloodTypeKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataBloodTypeKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataBloodTypeKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataBloodTypeKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataBloodType : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataBloodTypeKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataBloodType() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataBloodType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataBloodTypeKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataBloodTypeKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataBloodTypeKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataBloodType() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataCardBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataCardBoxKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataCardBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataCardBoxKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataCardBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataCardBoxKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataCardBox() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataCardBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataCardBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataCardBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataCardBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataCardBox() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataCiltKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataCiltKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataCiltKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataCiltKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataCilt : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataCiltKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataCilt() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataCilt(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataCiltKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataCiltKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataCiltKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataCilt() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumberKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumberKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumber() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumber() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataDriveClassKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataDriveClassKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataDriveClassKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataDriveClassKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataDriveClass : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataDriveClassKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataDriveClass() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataDriveClass(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataDriveClassKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataDriveClassKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataDriveClassKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataDriveClass() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataDueDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataDueDateKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataDueDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataDueDateKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataDueDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataDueDateKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataDueDate() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataDueDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataDueDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataDueDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataDueDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataDueDate() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyenKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyenKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyenKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyenKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyen : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyenKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyen() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyenKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyenKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyenKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyen() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataEntryNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataEntryNumberKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataEntryNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataEntryNumberKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataEntryNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataEntryNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataEntryNumber() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataEntryNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataEntryNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataEntryNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataEntryNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataEntryNumber() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataExpiryDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataExpiryDateKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataExpiryDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataExpiryDateKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataExpiryDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataExpiryDateKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataExpiryDate() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataExpiryDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataExpiryDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataExpiryDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataExpiryDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataExpiryDate() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataFatherNameKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataFatherNameKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataFatherNameKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataFatherNameKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataFatherName : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataFatherNameKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataFatherName() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataFatherName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataFatherNameKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataFatherNameKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataFatherNameKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataFatherName() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataForeignersIdKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataForeignersIdKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataForeignersIdKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataForeignersIdKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataForeignersId : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataForeignersIdKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataForeignersId() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataForeignersId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataForeignersIdKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataForeignersIdKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataForeignersIdKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataForeignersId() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataGenderKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataGenderKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataGenderKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataGenderKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataGender : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataGenderKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataGender() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataGender(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataGenderKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataGenderKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataGenderKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataGender() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataGivenNameKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataGivenNameKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataGivenNameKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataGivenNameKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataGivenName : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataGivenNameKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataGivenName() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataGivenName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataGivenNameKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataGivenNameKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataGivenNameKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataGivenName() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIdNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataIdNumberKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIdNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIdNumberKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIdNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataIdNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataIdNumber() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIdNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataIdNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataIdNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataIdNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIdNumber() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIssueByKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataIssueByKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIssueByKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIssueByKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIssueBy : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueByKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataIssueBy() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIssueBy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueByKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataIssueByKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueByKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIssueBy() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIssueCountyKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataIssueCountyKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIssueCountyKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIssueCountyKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIssueCounty : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueCountyKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataIssueCounty() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIssueCounty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueCountyKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataIssueCountyKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueCountyKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIssueCounty() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIssueDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataIssueDateKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIssueDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIssueDateKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIssueDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueDateKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataIssueDate() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIssueDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataIssueDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataIssueDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIssueDate() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIssuePlaceKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataIssuePlaceKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIssuePlaceKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIssuePlaceKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataIssuePlace : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataIssuePlaceKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataIssuePlace() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataIssuePlace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataIssuePlaceKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataIssuePlaceKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataIssuePlaceKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataIssuePlace() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataKutukKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataKutukKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataKutukKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataKutukKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataKutuk : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataKutukKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataKutuk() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataKutuk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataKutukKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataKutukKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataKutukKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataKutuk() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumberKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumberKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumber() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumber() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatusKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatusKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatusKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatusKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatus : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatusKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatus() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatusKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatusKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatusKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatus() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataMotherNameKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataMotherNameKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataMotherNameKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataMotherNameKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataMotherName : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataMotherNameKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataMotherName() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataMotherName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataMotherNameKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataMotherNameKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataMotherNameKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataMotherName() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataNameKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataNameKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataNameKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataNameKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataName : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataNameKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataName() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataNameKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataNameKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataNameKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataName() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataNationalityKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataNationalityKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataNationalityKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataNationalityKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataNationality : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataNationalityKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataNationality() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataNationality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataNationalityKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataNationalityKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataNationalityKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataNationality() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillageKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillageKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillageKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillageKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillage : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillageKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillage() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillageKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillageKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillageKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillage() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataPageNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataPageNumberKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataPageNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataPageNumberKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataPageNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataPageNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataPageNumber() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataPageNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataPageNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataPageNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataPageNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataPageNumber() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataPassportNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataPassportNumberKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataPassportNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataPassportNumberKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataPassportNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataPassportNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataPassportNumber() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataPassportNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataPassportNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataPassportNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataPassportNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataPassportNumber() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataPortraitBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataPortraitBoxKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataPortraitBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataPortraitBoxKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataPortraitBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataPortraitBoxKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataPortraitBox() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataPortraitBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataPortraitBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataPortraitBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataPortraitBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataPortraitBox() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataProvinceKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataProvinceKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataProvinceKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataProvinceKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataProvince : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataProvinceKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataProvince() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataProvince(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataProvinceKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataProvinceKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataProvinceKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataProvince() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidenceKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidenceKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidenceKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidenceKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidence : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidenceKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidence() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidence(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidenceKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidenceKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidenceKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidence() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssueKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssueKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssueKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssueKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssue : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssueKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssue() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssueKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssueKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssueKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssue() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumberKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumberKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumber() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumber() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataReligionKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataReligionKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataReligionKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataReligionKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataReligion : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataReligionKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataReligion() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataReligion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataReligionKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataReligionKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataReligionKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataReligion() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataSayfaKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataSayfaKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataSayfaKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataSayfaKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataSayfa : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataSayfaKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataSayfa() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataSayfa(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataSayfaKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataSayfaKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataSayfaKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataSayfa() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataSeriKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataSeriKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataSeriKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataSeriKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataSeri : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataSeriKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataSeri() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataSeri(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataSeriKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataSeriKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataSeriKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataSeri() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataSexKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataSexKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataSexKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataSexKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataSex : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataSexKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataSex() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataSex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataSexKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataSexKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataSexKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataSex() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataSurnameKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataSurnameKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataSurnameKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataSurnameKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataSurname : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataSurnameKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataSurname() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataSurname(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataSurnameKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataSurnameKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataSurnameKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataSurname() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermitKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermitKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermitKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermitKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermit : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermitKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermit() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermitKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermitKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermitKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermit() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataValidUntilKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataValidUntilKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataValidUntilKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataValidUntilKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataValidUntil : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataValidUntilKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataValidUntil() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataValidUntil(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataValidUntilKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataValidUntilKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataValidUntilKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataValidUntil() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataVillageKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataVillageKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataVillageKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataVillageKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataVillage : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataVillageKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataVillage() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataVillage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataVillageKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataVillageKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataVillageKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataVillage() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumberKeyPoints() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumberKeyPoints() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumber() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumber() = default;
};
class RecognizeTurkeyIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryTools> auxiliaryTools{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataBirthDate> birthDate{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataBirthPlace> birthPlace{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataBloodType> bloodType{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataCardBox> cardBox{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataCilt> cilt{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumber> documentNumber{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataDriveClass> driveClass{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataDueDate> dueDate{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyen> duzenleyen{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataEntryNumber> entryNumber{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataExpiryDate> expiryDate{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataFatherName> fatherName{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataForeignersId> foreignersId{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataGender> gender{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataGivenName> givenName{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataIdNumber> idNumber{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataIssueBy> issueBy{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataIssueCounty> issueCounty{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataIssueDate> issueDate{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataIssuePlace> issuePlace{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataKutuk> kutuk{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumber> licenseNumber{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatus> maritalStatus{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataMotherName> motherName{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataName> name{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataNationality> nationality{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillage> neighborhoodVillage{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataPageNumber> pageNumber{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataPassportNumber> passportNumber{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataPortraitBox> portraitBox{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataProvince> province{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidence> provinceOfResidence{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssue> reasonOfIssue{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumber> registerNumber{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataReligion> religion{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataSayfa> sayfa{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataSeri> seri{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataSex> sex{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataSurname> surname{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermit> typeOfResidencePermit{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataValidUntil> validUntil{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataVillage> village{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumber> volumeNumber{};

  RecognizeTurkeyIdentityCardResponseBodyData() {}

  explicit RecognizeTurkeyIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auxiliaryTools) {
      res["AuxiliaryTools"] = auxiliaryTools ? boost::any(auxiliaryTools->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthDate) {
      res["BirthDate"] = birthDate ? boost::any(birthDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthPlace) {
      res["BirthPlace"] = birthPlace ? boost::any(birthPlace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bloodType) {
      res["BloodType"] = bloodType ? boost::any(bloodType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cardBox) {
      res["CardBox"] = cardBox ? boost::any(cardBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cilt) {
      res["Cilt"] = cilt ? boost::any(cilt->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (documentNumber) {
      res["DocumentNumber"] = documentNumber ? boost::any(documentNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (driveClass) {
      res["DriveClass"] = driveClass ? boost::any(driveClass->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dueDate) {
      res["DueDate"] = dueDate ? boost::any(dueDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duzenleyen) {
      res["Duzenleyen"] = duzenleyen ? boost::any(duzenleyen->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (entryNumber) {
      res["EntryNumber"] = entryNumber ? boost::any(entryNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expiryDate) {
      res["ExpiryDate"] = expiryDate ? boost::any(expiryDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fatherName) {
      res["FatherName"] = fatherName ? boost::any(fatherName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (foreignersId) {
      res["ForeignersId"] = foreignersId ? boost::any(foreignersId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gender) {
      res["Gender"] = gender ? boost::any(gender->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (givenName) {
      res["GivenName"] = givenName ? boost::any(givenName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idNumber) {
      res["IdNumber"] = idNumber ? boost::any(idNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (issueBy) {
      res["IssueBy"] = issueBy ? boost::any(issueBy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (issueCounty) {
      res["IssueCounty"] = issueCounty ? boost::any(issueCounty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (issueDate) {
      res["IssueDate"] = issueDate ? boost::any(issueDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (issuePlace) {
      res["IssuePlace"] = issuePlace ? boost::any(issuePlace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (kutuk) {
      res["Kutuk"] = kutuk ? boost::any(kutuk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (licenseNumber) {
      res["LicenseNumber"] = licenseNumber ? boost::any(licenseNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maritalStatus) {
      res["MaritalStatus"] = maritalStatus ? boost::any(maritalStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (motherName) {
      res["MotherName"] = motherName ? boost::any(motherName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = name ? boost::any(name->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nationality) {
      res["Nationality"] = nationality ? boost::any(nationality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (neighborhoodVillage) {
      res["NeighborhoodVillage"] = neighborhoodVillage ? boost::any(neighborhoodVillage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = pageNumber ? boost::any(pageNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passportNumber) {
      res["PassportNumber"] = passportNumber ? boost::any(passportNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (portraitBox) {
      res["PortraitBox"] = portraitBox ? boost::any(portraitBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (province) {
      res["Province"] = province ? boost::any(province->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (provinceOfResidence) {
      res["ProvinceOfResidence"] = provinceOfResidence ? boost::any(provinceOfResidence->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reasonOfIssue) {
      res["ReasonOfIssue"] = reasonOfIssue ? boost::any(reasonOfIssue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (registerNumber) {
      res["RegisterNumber"] = registerNumber ? boost::any(registerNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (religion) {
      res["Religion"] = religion ? boost::any(religion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sayfa) {
      res["Sayfa"] = sayfa ? boost::any(sayfa->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seri) {
      res["Seri"] = seri ? boost::any(seri->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sex) {
      res["Sex"] = sex ? boost::any(sex->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (surname) {
      res["Surname"] = surname ? boost::any(surname->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (typeOfResidencePermit) {
      res["TypeOfResidencePermit"] = typeOfResidencePermit ? boost::any(typeOfResidencePermit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (validUntil) {
      res["ValidUntil"] = validUntil ? boost::any(validUntil->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (village) {
      res["Village"] = village ? boost::any(village->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (volumeNumber) {
      res["VolumeNumber"] = volumeNumber ? boost::any(volumeNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuxiliaryTools") != m.end() && !m["AuxiliaryTools"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuxiliaryTools"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryTools model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuxiliaryTools"]));
        auxiliaryTools = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataAuxiliaryTools>(model1);
      }
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthDate"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataBirthDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthDate"]));
        birthDate = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataBirthDate>(model1);
      }
    }
    if (m.find("BirthPlace") != m.end() && !m["BirthPlace"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthPlace"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataBirthPlace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthPlace"]));
        birthPlace = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataBirthPlace>(model1);
      }
    }
    if (m.find("BloodType") != m.end() && !m["BloodType"].empty()) {
      if (typeid(map<string, boost::any>) == m["BloodType"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataBloodType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BloodType"]));
        bloodType = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataBloodType>(model1);
      }
    }
    if (m.find("CardBox") != m.end() && !m["CardBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["CardBox"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataCardBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CardBox"]));
        cardBox = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataCardBox>(model1);
      }
    }
    if (m.find("Cilt") != m.end() && !m["Cilt"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cilt"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataCilt model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cilt"]));
        cilt = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataCilt>(model1);
      }
    }
    if (m.find("DocumentNumber") != m.end() && !m["DocumentNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["DocumentNumber"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DocumentNumber"]));
        documentNumber = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataDocumentNumber>(model1);
      }
    }
    if (m.find("DriveClass") != m.end() && !m["DriveClass"].empty()) {
      if (typeid(map<string, boost::any>) == m["DriveClass"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataDriveClass model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DriveClass"]));
        driveClass = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataDriveClass>(model1);
      }
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["DueDate"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataDueDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DueDate"]));
        dueDate = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataDueDate>(model1);
      }
    }
    if (m.find("Duzenleyen") != m.end() && !m["Duzenleyen"].empty()) {
      if (typeid(map<string, boost::any>) == m["Duzenleyen"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyen model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Duzenleyen"]));
        duzenleyen = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataDuzenleyen>(model1);
      }
    }
    if (m.find("EntryNumber") != m.end() && !m["EntryNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["EntryNumber"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataEntryNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EntryNumber"]));
        entryNumber = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataEntryNumber>(model1);
      }
    }
    if (m.find("ExpiryDate") != m.end() && !m["ExpiryDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExpiryDate"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataExpiryDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExpiryDate"]));
        expiryDate = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataExpiryDate>(model1);
      }
    }
    if (m.find("FatherName") != m.end() && !m["FatherName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FatherName"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataFatherName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FatherName"]));
        fatherName = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataFatherName>(model1);
      }
    }
    if (m.find("ForeignersId") != m.end() && !m["ForeignersId"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForeignersId"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataForeignersId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForeignersId"]));
        foreignersId = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataForeignersId>(model1);
      }
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      if (typeid(map<string, boost::any>) == m["Gender"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataGender model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Gender"]));
        gender = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataGender>(model1);
      }
    }
    if (m.find("GivenName") != m.end() && !m["GivenName"].empty()) {
      if (typeid(map<string, boost::any>) == m["GivenName"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataGivenName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GivenName"]));
        givenName = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataGivenName>(model1);
      }
    }
    if (m.find("IdNumber") != m.end() && !m["IdNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdNumber"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataIdNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdNumber"]));
        idNumber = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataIdNumber>(model1);
      }
    }
    if (m.find("IssueBy") != m.end() && !m["IssueBy"].empty()) {
      if (typeid(map<string, boost::any>) == m["IssueBy"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataIssueBy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IssueBy"]));
        issueBy = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataIssueBy>(model1);
      }
    }
    if (m.find("IssueCounty") != m.end() && !m["IssueCounty"].empty()) {
      if (typeid(map<string, boost::any>) == m["IssueCounty"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataIssueCounty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IssueCounty"]));
        issueCounty = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataIssueCounty>(model1);
      }
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["IssueDate"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataIssueDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IssueDate"]));
        issueDate = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataIssueDate>(model1);
      }
    }
    if (m.find("IssuePlace") != m.end() && !m["IssuePlace"].empty()) {
      if (typeid(map<string, boost::any>) == m["IssuePlace"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataIssuePlace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IssuePlace"]));
        issuePlace = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataIssuePlace>(model1);
      }
    }
    if (m.find("Kutuk") != m.end() && !m["Kutuk"].empty()) {
      if (typeid(map<string, boost::any>) == m["Kutuk"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataKutuk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Kutuk"]));
        kutuk = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataKutuk>(model1);
      }
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["LicenseNumber"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LicenseNumber"]));
        licenseNumber = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataLicenseNumber>(model1);
      }
    }
    if (m.find("MaritalStatus") != m.end() && !m["MaritalStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["MaritalStatus"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MaritalStatus"]));
        maritalStatus = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataMaritalStatus>(model1);
      }
    }
    if (m.find("MotherName") != m.end() && !m["MotherName"].empty()) {
      if (typeid(map<string, boost::any>) == m["MotherName"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataMotherName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MotherName"]));
        motherName = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataMotherName>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      if (typeid(map<string, boost::any>) == m["Name"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Name"]));
        name = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataName>(model1);
      }
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nationality"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataNationality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nationality"]));
        nationality = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataNationality>(model1);
      }
    }
    if (m.find("NeighborhoodVillage") != m.end() && !m["NeighborhoodVillage"].empty()) {
      if (typeid(map<string, boost::any>) == m["NeighborhoodVillage"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NeighborhoodVillage"]));
        neighborhoodVillage = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataNeighborhoodVillage>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageNumber"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataPageNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageNumber"]));
        pageNumber = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataPageNumber>(model1);
      }
    }
    if (m.find("PassportNumber") != m.end() && !m["PassportNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["PassportNumber"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataPassportNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PassportNumber"]));
        passportNumber = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataPassportNumber>(model1);
      }
    }
    if (m.find("PortraitBox") != m.end() && !m["PortraitBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["PortraitBox"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataPortraitBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PortraitBox"]));
        portraitBox = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataPortraitBox>(model1);
      }
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      if (typeid(map<string, boost::any>) == m["Province"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataProvince model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Province"]));
        province = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataProvince>(model1);
      }
    }
    if (m.find("ProvinceOfResidence") != m.end() && !m["ProvinceOfResidence"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProvinceOfResidence"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidence model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProvinceOfResidence"]));
        provinceOfResidence = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataProvinceOfResidence>(model1);
      }
    }
    if (m.find("ReasonOfIssue") != m.end() && !m["ReasonOfIssue"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReasonOfIssue"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReasonOfIssue"]));
        reasonOfIssue = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataReasonOfIssue>(model1);
      }
    }
    if (m.find("RegisterNumber") != m.end() && !m["RegisterNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegisterNumber"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegisterNumber"]));
        registerNumber = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataRegisterNumber>(model1);
      }
    }
    if (m.find("Religion") != m.end() && !m["Religion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Religion"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataReligion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Religion"]));
        religion = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataReligion>(model1);
      }
    }
    if (m.find("Sayfa") != m.end() && !m["Sayfa"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sayfa"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataSayfa model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sayfa"]));
        sayfa = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataSayfa>(model1);
      }
    }
    if (m.find("Seri") != m.end() && !m["Seri"].empty()) {
      if (typeid(map<string, boost::any>) == m["Seri"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataSeri model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Seri"]));
        seri = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataSeri>(model1);
      }
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sex"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataSex model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sex"]));
        sex = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataSex>(model1);
      }
    }
    if (m.find("Surname") != m.end() && !m["Surname"].empty()) {
      if (typeid(map<string, boost::any>) == m["Surname"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataSurname model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Surname"]));
        surname = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataSurname>(model1);
      }
    }
    if (m.find("TypeOfResidencePermit") != m.end() && !m["TypeOfResidencePermit"].empty()) {
      if (typeid(map<string, boost::any>) == m["TypeOfResidencePermit"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TypeOfResidencePermit"]));
        typeOfResidencePermit = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataTypeOfResidencePermit>(model1);
      }
    }
    if (m.find("ValidUntil") != m.end() && !m["ValidUntil"].empty()) {
      if (typeid(map<string, boost::any>) == m["ValidUntil"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataValidUntil model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ValidUntil"]));
        validUntil = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataValidUntil>(model1);
      }
    }
    if (m.find("Village") != m.end() && !m["Village"].empty()) {
      if (typeid(map<string, boost::any>) == m["Village"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataVillage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Village"]));
        village = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataVillage>(model1);
      }
    }
    if (m.find("VolumeNumber") != m.end() && !m["VolumeNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["VolumeNumber"].type()) {
        RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VolumeNumber"]));
        volumeNumber = make_shared<RecognizeTurkeyIdentityCardResponseBodyDataVolumeNumber>(model1);
      }
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBodyData() = default;
};
class RecognizeTurkeyIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeTurkeyIdentityCardResponseBody() {}

  explicit RecognizeTurkeyIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTurkeyIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTurkeyIdentityCardResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponseBody() = default;
};
class RecognizeTurkeyIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTurkeyIdentityCardResponseBody> body{};

  RecognizeTurkeyIdentityCardResponse() {}

  explicit RecognizeTurkeyIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTurkeyIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTurkeyIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTurkeyIdentityCardResponse() = default;
};
class RecognizeUkraineIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  RecognizeUkraineIdentityCardRequest() {}

  explicit RecognizeUkraineIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardRequest() = default;
};
class RecognizeUkraineIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};

  RecognizeUkraineIdentityCardAdvanceRequest() {}

  explicit RecognizeUkraineIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrlObject) {
      res["ImageUrlObject"] = boost::any(*imageUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardAdvanceRequest() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataBirthDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataBirthDateKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataBirthDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataBirthDateKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataBirthDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataBirthDateKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataBirthDate() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataBirthDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataBirthDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataBirthDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataBirthDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataBirthDate() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataCardBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataCardBoxKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataCardBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataCardBoxKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataCardBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataCardBoxKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataCardBox() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataCardBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataCardBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataCardBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataCardBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataCardBox() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataDocumentNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataDocumentNumberKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataDocumentNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataDocumentNumberKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataDocumentNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataDocumentNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataDocumentNumber() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataDocumentNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataDocumentNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataDocumentNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataDocumentNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataDocumentNumber() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataExpiryDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataExpiryDateKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataExpiryDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataExpiryDateKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataExpiryDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataExpiryDateKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataExpiryDate() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataExpiryDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataExpiryDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataExpiryDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataExpiryDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataExpiryDate() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataNameEnglishKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataNameEnglishKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataNameEnglishKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataNameEnglishKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataNameEnglish : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataNameEnglishKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataNameEnglish() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataNameEnglish(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataNameEnglishKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataNameEnglishKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataNameEnglishKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataNameEnglish() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataNameUkraineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataNameUkraineKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataNameUkraineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataNameUkraineKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataNameUkraine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataNameUkraineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataNameUkraine() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataNameUkraine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataNameUkraineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataNameUkraineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataNameUkraineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataNameUkraine() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataNationalityKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataNationalityKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataNationalityKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataNationalityKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataNationality : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataNationalityKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataNationality() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataNationality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataNationalityKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataNationalityKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataNationalityKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataNationality() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataPatronymicKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataPatronymicKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataPatronymicKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataPatronymicKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataPatronymic : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataPatronymicKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataPatronymic() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataPatronymic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataPatronymicKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataPatronymicKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataPatronymicKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataPatronymic() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataPortraitBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataPortraitBoxKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataPortraitBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataPortraitBoxKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataPortraitBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataPortraitBoxKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataPortraitBox() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataPortraitBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataPortraitBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataPortraitBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataPortraitBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataPortraitBox() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataRecordNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataRecordNumberKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataRecordNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataRecordNumberKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataRecordNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataRecordNumberKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataRecordNumber() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataRecordNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataRecordNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataRecordNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataRecordNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataRecordNumber() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataSexKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataSexKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataSexKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataSexKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataSex : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataSexKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataSex() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataSex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataSexKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataSexKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataSexKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataSex() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglishKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglishKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglishKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglishKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglish : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglishKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglish() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglish(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglishKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglishKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglishKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglish() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraineKeyPoints() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraineKeyPoints() = default;
};
class RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraine() {}

  explicit RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraine() = default;
};
class RecognizeUkraineIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataBirthDate> birthDate{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataCardBox> cardBox{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataDocumentNumber> documentNumber{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataExpiryDate> expiryDate{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataNameEnglish> nameEnglish{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataNameUkraine> nameUkraine{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataNationality> nationality{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataPatronymic> patronymic{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataPortraitBox> portraitBox{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataRecordNumber> recordNumber{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataSex> sex{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglish> surnameEnglish{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraine> surnameUkraine{};

  RecognizeUkraineIdentityCardResponseBodyData() {}

  explicit RecognizeUkraineIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (birthDate) {
      res["BirthDate"] = birthDate ? boost::any(birthDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cardBox) {
      res["CardBox"] = cardBox ? boost::any(cardBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (documentNumber) {
      res["DocumentNumber"] = documentNumber ? boost::any(documentNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expiryDate) {
      res["ExpiryDate"] = expiryDate ? boost::any(expiryDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nameEnglish) {
      res["NameEnglish"] = nameEnglish ? boost::any(nameEnglish->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nameUkraine) {
      res["NameUkraine"] = nameUkraine ? boost::any(nameUkraine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nationality) {
      res["Nationality"] = nationality ? boost::any(nationality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (patronymic) {
      res["Patronymic"] = patronymic ? boost::any(patronymic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (portraitBox) {
      res["PortraitBox"] = portraitBox ? boost::any(portraitBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recordNumber) {
      res["RecordNumber"] = recordNumber ? boost::any(recordNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sex) {
      res["Sex"] = sex ? boost::any(sex->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (surnameEnglish) {
      res["SurnameEnglish"] = surnameEnglish ? boost::any(surnameEnglish->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (surnameUkraine) {
      res["SurnameUkraine"] = surnameUkraine ? boost::any(surnameUkraine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthDate"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataBirthDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthDate"]));
        birthDate = make_shared<RecognizeUkraineIdentityCardResponseBodyDataBirthDate>(model1);
      }
    }
    if (m.find("CardBox") != m.end() && !m["CardBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["CardBox"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataCardBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CardBox"]));
        cardBox = make_shared<RecognizeUkraineIdentityCardResponseBodyDataCardBox>(model1);
      }
    }
    if (m.find("DocumentNumber") != m.end() && !m["DocumentNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["DocumentNumber"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataDocumentNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DocumentNumber"]));
        documentNumber = make_shared<RecognizeUkraineIdentityCardResponseBodyDataDocumentNumber>(model1);
      }
    }
    if (m.find("ExpiryDate") != m.end() && !m["ExpiryDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExpiryDate"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataExpiryDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExpiryDate"]));
        expiryDate = make_shared<RecognizeUkraineIdentityCardResponseBodyDataExpiryDate>(model1);
      }
    }
    if (m.find("NameEnglish") != m.end() && !m["NameEnglish"].empty()) {
      if (typeid(map<string, boost::any>) == m["NameEnglish"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataNameEnglish model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NameEnglish"]));
        nameEnglish = make_shared<RecognizeUkraineIdentityCardResponseBodyDataNameEnglish>(model1);
      }
    }
    if (m.find("NameUkraine") != m.end() && !m["NameUkraine"].empty()) {
      if (typeid(map<string, boost::any>) == m["NameUkraine"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataNameUkraine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NameUkraine"]));
        nameUkraine = make_shared<RecognizeUkraineIdentityCardResponseBodyDataNameUkraine>(model1);
      }
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nationality"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataNationality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nationality"]));
        nationality = make_shared<RecognizeUkraineIdentityCardResponseBodyDataNationality>(model1);
      }
    }
    if (m.find("Patronymic") != m.end() && !m["Patronymic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Patronymic"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataPatronymic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Patronymic"]));
        patronymic = make_shared<RecognizeUkraineIdentityCardResponseBodyDataPatronymic>(model1);
      }
    }
    if (m.find("PortraitBox") != m.end() && !m["PortraitBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["PortraitBox"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataPortraitBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PortraitBox"]));
        portraitBox = make_shared<RecognizeUkraineIdentityCardResponseBodyDataPortraitBox>(model1);
      }
    }
    if (m.find("RecordNumber") != m.end() && !m["RecordNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecordNumber"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataRecordNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecordNumber"]));
        recordNumber = make_shared<RecognizeUkraineIdentityCardResponseBodyDataRecordNumber>(model1);
      }
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sex"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataSex model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sex"]));
        sex = make_shared<RecognizeUkraineIdentityCardResponseBodyDataSex>(model1);
      }
    }
    if (m.find("SurnameEnglish") != m.end() && !m["SurnameEnglish"].empty()) {
      if (typeid(map<string, boost::any>) == m["SurnameEnglish"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglish model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SurnameEnglish"]));
        surnameEnglish = make_shared<RecognizeUkraineIdentityCardResponseBodyDataSurnameEnglish>(model1);
      }
    }
    if (m.find("SurnameUkraine") != m.end() && !m["SurnameUkraine"].empty()) {
      if (typeid(map<string, boost::any>) == m["SurnameUkraine"].type()) {
        RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SurnameUkraine"]));
        surnameUkraine = make_shared<RecognizeUkraineIdentityCardResponseBodyDataSurnameUkraine>(model1);
      }
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBodyData() = default;
};
class RecognizeUkraineIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeUkraineIdentityCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeUkraineIdentityCardResponseBody() {}

  explicit RecognizeUkraineIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeUkraineIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeUkraineIdentityCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponseBody() = default;
};
class RecognizeUkraineIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeUkraineIdentityCardResponseBody> body{};

  RecognizeUkraineIdentityCardResponse() {}

  explicit RecognizeUkraineIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeUkraineIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeUkraineIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeUkraineIdentityCardResponse() = default;
};
class RecognizeVATInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileType{};
  shared_ptr<string> fileURL{};

  RecognizeVATInvoiceRequest() {}

  explicit RecognizeVATInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
  }


  virtual ~RecognizeVATInvoiceRequest() = default;
};
class RecognizeVATInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> fileURLObject{};
  shared_ptr<string> fileType{};

  RecognizeVATInvoiceAdvanceRequest() {}

  explicit RecognizeVATInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!fileURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("fileURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURLObject) {
      res["FileURLObject"] = boost::any(*fileURLObject);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURLObject") != m.end() && !m["FileURLObject"].empty()) {
      fileURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileURLObject"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
  }


  virtual ~RecognizeVATInvoiceAdvanceRequest() = default;
};
class RecognizeVATInvoiceResponseBodyDataBox : public Darabonba::Model {
public:
  shared_ptr<vector<double>> checkers{};
  shared_ptr<vector<double>> clerks{};
  shared_ptr<vector<double>> invoiceAmounts{};
  shared_ptr<vector<double>> invoiceCodes{};
  shared_ptr<vector<double>> invoiceDates{};
  shared_ptr<vector<double>> invoiceFakeCodes{};
  shared_ptr<vector<double>> invoiceNoes{};
  shared_ptr<vector<double>> payeeAddresses{};
  shared_ptr<vector<double>> payeeBankNames{};
  shared_ptr<vector<double>> payeeNames{};
  shared_ptr<vector<double>> payeeRegisterNoes{};
  shared_ptr<vector<double>> payees{};
  shared_ptr<vector<double>> payerAddresses{};
  shared_ptr<vector<double>> payerBankNames{};
  shared_ptr<vector<double>> payerNames{};
  shared_ptr<vector<double>> payerRegisterNoes{};
  shared_ptr<vector<double>> sumAmounts{};
  shared_ptr<vector<double>> taxAmounts{};
  shared_ptr<vector<double>> withoutTaxAmounts{};

  RecognizeVATInvoiceResponseBodyDataBox() {}

  explicit RecognizeVATInvoiceResponseBodyDataBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkers) {
      res["Checkers"] = boost::any(*checkers);
    }
    if (clerks) {
      res["Clerks"] = boost::any(*clerks);
    }
    if (invoiceAmounts) {
      res["InvoiceAmounts"] = boost::any(*invoiceAmounts);
    }
    if (invoiceCodes) {
      res["InvoiceCodes"] = boost::any(*invoiceCodes);
    }
    if (invoiceDates) {
      res["InvoiceDates"] = boost::any(*invoiceDates);
    }
    if (invoiceFakeCodes) {
      res["InvoiceFakeCodes"] = boost::any(*invoiceFakeCodes);
    }
    if (invoiceNoes) {
      res["InvoiceNoes"] = boost::any(*invoiceNoes);
    }
    if (payeeAddresses) {
      res["PayeeAddresses"] = boost::any(*payeeAddresses);
    }
    if (payeeBankNames) {
      res["PayeeBankNames"] = boost::any(*payeeBankNames);
    }
    if (payeeNames) {
      res["PayeeNames"] = boost::any(*payeeNames);
    }
    if (payeeRegisterNoes) {
      res["PayeeRegisterNoes"] = boost::any(*payeeRegisterNoes);
    }
    if (payees) {
      res["Payees"] = boost::any(*payees);
    }
    if (payerAddresses) {
      res["PayerAddresses"] = boost::any(*payerAddresses);
    }
    if (payerBankNames) {
      res["PayerBankNames"] = boost::any(*payerBankNames);
    }
    if (payerNames) {
      res["PayerNames"] = boost::any(*payerNames);
    }
    if (payerRegisterNoes) {
      res["PayerRegisterNoes"] = boost::any(*payerRegisterNoes);
    }
    if (sumAmounts) {
      res["SumAmounts"] = boost::any(*sumAmounts);
    }
    if (taxAmounts) {
      res["TaxAmounts"] = boost::any(*taxAmounts);
    }
    if (withoutTaxAmounts) {
      res["WithoutTaxAmounts"] = boost::any(*withoutTaxAmounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checkers") != m.end() && !m["Checkers"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Checkers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Checkers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      checkers = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Clerks") != m.end() && !m["Clerks"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Clerks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clerks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      clerks = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceAmounts") != m.end() && !m["InvoiceAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceCodes") != m.end() && !m["InvoiceCodes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceCodes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceDates") != m.end() && !m["InvoiceDates"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceDates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceDates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceDates = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceFakeCodes") != m.end() && !m["InvoiceFakeCodes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceFakeCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceFakeCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceFakeCodes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceNoes") != m.end() && !m["InvoiceNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceNoes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeAddresses") != m.end() && !m["PayeeAddresses"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeAddresses = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeBankNames") != m.end() && !m["PayeeBankNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeBankNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeBankNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeBankNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeNames") != m.end() && !m["PayeeNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeRegisterNoes") != m.end() && !m["PayeeRegisterNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeRegisterNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeRegisterNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeRegisterNoes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Payees") != m.end() && !m["Payees"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Payees"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Payees"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payees = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerAddresses") != m.end() && !m["PayerAddresses"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerAddresses = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerBankNames") != m.end() && !m["PayerBankNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerBankNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerBankNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerBankNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerNames") != m.end() && !m["PayerNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerRegisterNoes") != m.end() && !m["PayerRegisterNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerRegisterNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerRegisterNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerRegisterNoes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("SumAmounts") != m.end() && !m["SumAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["SumAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SumAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      sumAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("TaxAmounts") != m.end() && !m["TaxAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["TaxAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaxAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      taxAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("WithoutTaxAmounts") != m.end() && !m["WithoutTaxAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["WithoutTaxAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WithoutTaxAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      withoutTaxAmounts = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyDataBox() = default;
};
class RecognizeVATInvoiceResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<string> antiFakeCode{};
  shared_ptr<string> checker{};
  shared_ptr<string> clerk{};
  shared_ptr<string> invoiceAmount{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDate{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> payee{};
  shared_ptr<string> payeeAddress{};
  shared_ptr<string> payeeBankName{};
  shared_ptr<string> payeeName{};
  shared_ptr<string> payeeRegisterNo{};
  shared_ptr<string> payerAddress{};
  shared_ptr<string> payerBankName{};
  shared_ptr<string> payerName{};
  shared_ptr<string> payerRegisterNo{};
  shared_ptr<string> sumAmount{};
  shared_ptr<string> taxAmount{};
  shared_ptr<string> withoutTaxAmount{};

  RecognizeVATInvoiceResponseBodyDataContent() {}

  explicit RecognizeVATInvoiceResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiFakeCode) {
      res["AntiFakeCode"] = boost::any(*antiFakeCode);
    }
    if (checker) {
      res["Checker"] = boost::any(*checker);
    }
    if (clerk) {
      res["Clerk"] = boost::any(*clerk);
    }
    if (invoiceAmount) {
      res["InvoiceAmount"] = boost::any(*invoiceAmount);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDate) {
      res["InvoiceDate"] = boost::any(*invoiceDate);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (payee) {
      res["Payee"] = boost::any(*payee);
    }
    if (payeeAddress) {
      res["PayeeAddress"] = boost::any(*payeeAddress);
    }
    if (payeeBankName) {
      res["PayeeBankName"] = boost::any(*payeeBankName);
    }
    if (payeeName) {
      res["PayeeName"] = boost::any(*payeeName);
    }
    if (payeeRegisterNo) {
      res["PayeeRegisterNo"] = boost::any(*payeeRegisterNo);
    }
    if (payerAddress) {
      res["PayerAddress"] = boost::any(*payerAddress);
    }
    if (payerBankName) {
      res["PayerBankName"] = boost::any(*payerBankName);
    }
    if (payerName) {
      res["PayerName"] = boost::any(*payerName);
    }
    if (payerRegisterNo) {
      res["PayerRegisterNo"] = boost::any(*payerRegisterNo);
    }
    if (sumAmount) {
      res["SumAmount"] = boost::any(*sumAmount);
    }
    if (taxAmount) {
      res["TaxAmount"] = boost::any(*taxAmount);
    }
    if (withoutTaxAmount) {
      res["WithoutTaxAmount"] = boost::any(*withoutTaxAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiFakeCode") != m.end() && !m["AntiFakeCode"].empty()) {
      antiFakeCode = make_shared<string>(boost::any_cast<string>(m["AntiFakeCode"]));
    }
    if (m.find("Checker") != m.end() && !m["Checker"].empty()) {
      checker = make_shared<string>(boost::any_cast<string>(m["Checker"]));
    }
    if (m.find("Clerk") != m.end() && !m["Clerk"].empty()) {
      clerk = make_shared<string>(boost::any_cast<string>(m["Clerk"]));
    }
    if (m.find("InvoiceAmount") != m.end() && !m["InvoiceAmount"].empty()) {
      invoiceAmount = make_shared<string>(boost::any_cast<string>(m["InvoiceAmount"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDate") != m.end() && !m["InvoiceDate"].empty()) {
      invoiceDate = make_shared<string>(boost::any_cast<string>(m["InvoiceDate"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("Payee") != m.end() && !m["Payee"].empty()) {
      payee = make_shared<string>(boost::any_cast<string>(m["Payee"]));
    }
    if (m.find("PayeeAddress") != m.end() && !m["PayeeAddress"].empty()) {
      payeeAddress = make_shared<string>(boost::any_cast<string>(m["PayeeAddress"]));
    }
    if (m.find("PayeeBankName") != m.end() && !m["PayeeBankName"].empty()) {
      payeeBankName = make_shared<string>(boost::any_cast<string>(m["PayeeBankName"]));
    }
    if (m.find("PayeeName") != m.end() && !m["PayeeName"].empty()) {
      payeeName = make_shared<string>(boost::any_cast<string>(m["PayeeName"]));
    }
    if (m.find("PayeeRegisterNo") != m.end() && !m["PayeeRegisterNo"].empty()) {
      payeeRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayeeRegisterNo"]));
    }
    if (m.find("PayerAddress") != m.end() && !m["PayerAddress"].empty()) {
      payerAddress = make_shared<string>(boost::any_cast<string>(m["PayerAddress"]));
    }
    if (m.find("PayerBankName") != m.end() && !m["PayerBankName"].empty()) {
      payerBankName = make_shared<string>(boost::any_cast<string>(m["PayerBankName"]));
    }
    if (m.find("PayerName") != m.end() && !m["PayerName"].empty()) {
      payerName = make_shared<string>(boost::any_cast<string>(m["PayerName"]));
    }
    if (m.find("PayerRegisterNo") != m.end() && !m["PayerRegisterNo"].empty()) {
      payerRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayerRegisterNo"]));
    }
    if (m.find("SumAmount") != m.end() && !m["SumAmount"].empty()) {
      sumAmount = make_shared<string>(boost::any_cast<string>(m["SumAmount"]));
    }
    if (m.find("TaxAmount") != m.end() && !m["TaxAmount"].empty()) {
      taxAmount = make_shared<string>(boost::any_cast<string>(m["TaxAmount"]));
    }
    if (m.find("WithoutTaxAmount") != m.end() && !m["WithoutTaxAmount"].empty()) {
      withoutTaxAmount = make_shared<string>(boost::any_cast<string>(m["WithoutTaxAmount"]));
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyDataContent() = default;
};
class RecognizeVATInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeVATInvoiceResponseBodyDataBox> box{};
  shared_ptr<RecognizeVATInvoiceResponseBodyDataContent> content{};

  RecognizeVATInvoiceResponseBodyData() {}

  explicit RecognizeVATInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (box) {
      res["Box"] = box ? boost::any(box->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      if (typeid(map<string, boost::any>) == m["Box"].type()) {
        RecognizeVATInvoiceResponseBodyDataBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Box"]));
        box = make_shared<RecognizeVATInvoiceResponseBodyDataBox>(model1);
      }
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        RecognizeVATInvoiceResponseBodyDataContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<RecognizeVATInvoiceResponseBodyDataContent>(model1);
      }
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyData() = default;
};
class RecognizeVATInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVATInvoiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeVATInvoiceResponseBody() {}

  explicit RecognizeVATInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVATInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVATInvoiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVATInvoiceResponseBody() = default;
};
class RecognizeVATInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVATInvoiceResponseBody> body{};

  RecognizeVATInvoiceResponse() {}

  explicit RecognizeVATInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVATInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVATInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVATInvoiceResponse() = default;
};
class RecognizeVINCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVINCodeRequest() {}

  explicit RecognizeVINCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeVINCodeRequest() = default;
};
class RecognizeVINCodeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVINCodeAdvanceRequest() {}

  explicit RecognizeVINCodeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeVINCodeAdvanceRequest() = default;
};
class RecognizeVINCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> vinCode{};

  RecognizeVINCodeResponseBodyData() {}

  explicit RecognizeVINCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vinCode) {
      res["VinCode"] = boost::any(*vinCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VinCode") != m.end() && !m["VinCode"].empty()) {
      vinCode = make_shared<string>(boost::any_cast<string>(m["VinCode"]));
    }
  }


  virtual ~RecognizeVINCodeResponseBodyData() = default;
};
class RecognizeVINCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVINCodeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeVINCodeResponseBody() {}

  explicit RecognizeVINCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVINCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVINCodeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVINCodeResponseBody() = default;
};
class RecognizeVINCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVINCodeResponseBody> body{};

  RecognizeVINCodeResponse() {}

  explicit RecognizeVINCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVINCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVINCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVINCodeResponse() = default;
};
class RecognizeVerificationcodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVerificationcodeRequest() {}

  explicit RecognizeVerificationcodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeVerificationcodeRequest() = default;
};
class RecognizeVerificationcodeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVerificationcodeAdvanceRequest() {}

  explicit RecognizeVerificationcodeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeVerificationcodeAdvanceRequest() = default;
};
class RecognizeVerificationcodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  RecognizeVerificationcodeResponseBodyData() {}

  explicit RecognizeVerificationcodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVerificationcodeResponseBodyData() = default;
};
class RecognizeVerificationcodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVerificationcodeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeVerificationcodeResponseBody() {}

  explicit RecognizeVerificationcodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVerificationcodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVerificationcodeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVerificationcodeResponseBody() = default;
};
class RecognizeVerificationcodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVerificationcodeResponseBody> body{};

  RecognizeVerificationcodeResponse() {}

  explicit RecognizeVerificationcodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVerificationcodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVerificationcodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVerificationcodeResponse() = default;
};
class RecognizeVideoCastCrewListRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  RecognizeVideoCastCrewListRequestParams() {}

  explicit RecognizeVideoCastCrewListRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListRequestParams() = default;
};
class RecognizeVideoCastCrewListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVideoCastCrewListRequestParams>> params{};
  shared_ptr<string> registerUrl{};
  shared_ptr<string> videoUrl{};

  RecognizeVideoCastCrewListRequest() {}

  explicit RecognizeVideoCastCrewListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    if (registerUrl) {
      res["RegisterUrl"] = boost::any(*registerUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<RecognizeVideoCastCrewListRequestParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListRequestParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<RecognizeVideoCastCrewListRequestParams>>(expect1);
      }
    }
    if (m.find("RegisterUrl") != m.end() && !m["RegisterUrl"].empty()) {
      registerUrl = make_shared<string>(boost::any_cast<string>(m["RegisterUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListRequest() = default;
};
class RecognizeVideoCastCrewListAdvanceRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  RecognizeVideoCastCrewListAdvanceRequestParams() {}

  explicit RecognizeVideoCastCrewListAdvanceRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListAdvanceRequestParams() = default;
};
class RecognizeVideoCastCrewListAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<vector<RecognizeVideoCastCrewListAdvanceRequestParams>> params{};
  shared_ptr<string> registerUrl{};

  RecognizeVideoCastCrewListAdvanceRequest() {}

  explicit RecognizeVideoCastCrewListAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrlObject"] = boost::any(*videoUrlObject);
    }
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    if (registerUrl) {
      res["RegisterUrl"] = boost::any(*registerUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<RecognizeVideoCastCrewListAdvanceRequestParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListAdvanceRequestParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<RecognizeVideoCastCrewListAdvanceRequestParams>>(expect1);
      }
    }
    if (m.find("RegisterUrl") != m.end() && !m["RegisterUrl"].empty()) {
      registerUrl = make_shared<string>(boost::any_cast<string>(m["RegisterUrl"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListAdvanceRequest() = default;
};
class RecognizeVideoCastCrewListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramsShrink{};
  shared_ptr<string> registerUrl{};
  shared_ptr<string> videoUrl{};

  RecognizeVideoCastCrewListShrinkRequest() {}

  explicit RecognizeVideoCastCrewListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramsShrink) {
      res["Params"] = boost::any(*paramsShrink);
    }
    if (registerUrl) {
      res["RegisterUrl"] = boost::any(*registerUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      paramsShrink = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("RegisterUrl") != m.end() && !m["RegisterUrl"].empty()) {
      registerUrl = make_shared<string>(boost::any_cast<string>(m["RegisterUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListShrinkRequest() = default;
};
class RecognizeVideoCastCrewListResponseBodyDataCastResults : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> detailInfo{};
  shared_ptr<double> endTime{};
  shared_ptr<double> startTime{};

  RecognizeVideoCastCrewListResponseBodyDataCastResults() {}

  explicit RecognizeVideoCastCrewListResponseBodyDataCastResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInfo) {
      res["DetailInfo"] = boost::any(*detailInfo);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["DetailInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detailInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<double>(boost::any_cast<double>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyDataCastResults() = default;
};
class RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition() {}

  explicit RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition() = default;
};
class RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo : public Darabonba::Model {
public:
  shared_ptr<vector<long>> boxes{};
  shared_ptr<vector<vector<double>>> charProbs{};
  shared_ptr<long> frameIndex{};
  shared_ptr<vector<RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition>> position{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};
  shared_ptr<double> textProb{};
  shared_ptr<double> timeStamp{};
  shared_ptr<long> trackId{};

  RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo() {}

  explicit RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (charProbs) {
      res["CharProbs"] = boost::any(*charProbs);
    }
    if (frameIndex) {
      res["FrameIndex"] = boost::any(*frameIndex);
    }
    if (position) {
      vector<boost::any> temp1;
      for(auto item1:*position){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Position"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (textProb) {
      res["TextProb"] = boost::any(*textProb);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (trackId) {
      res["TrackId"] = boost::any(*trackId);
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
    if (m.find("CharProbs") != m.end() && !m["CharProbs"].empty()) {
      vector<vector<double>> toVec1;
      if (typeid(vector<boost::any>) == m["CharProbs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CharProbs"]);
        for (auto item:vec1) {
          vector<double> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<double>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      charProbs = make_shared<vector<vector<double>>>(toVec1);
    }
    if (m.find("FrameIndex") != m.end() && !m["FrameIndex"].empty()) {
      frameIndex = make_shared<long>(boost::any_cast<long>(m["FrameIndex"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      if (typeid(vector<boost::any>) == m["Position"].type()) {
        vector<RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Position"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        position = make_shared<vector<RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TextProb") != m.end() && !m["TextProb"].empty()) {
      textProb = make_shared<double>(boost::any_cast<double>(m["TextProb"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<double>(boost::any_cast<double>(m["TimeStamp"]));
    }
    if (m.find("TrackId") != m.end() && !m["TrackId"].empty()) {
      trackId = make_shared<long>(boost::any_cast<long>(m["TrackId"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo() = default;
};
class RecognizeVideoCastCrewListResponseBodyDataOcrResults : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo>> detailInfo{};
  shared_ptr<double> endTime{};
  shared_ptr<double> startTime{};

  RecognizeVideoCastCrewListResponseBodyDataOcrResults() {}

  explicit RecognizeVideoCastCrewListResponseBodyDataOcrResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInfo) {
      vector<boost::any> temp1;
      for(auto item1:*detailInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailInfo"] = boost::any(temp1);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailInfo"].type()) {
        vector<RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailInfo = make_shared<vector<RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo>>(expect1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<double>(boost::any_cast<double>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyDataOcrResults() = default;
};
class RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> subtitlesAllResults{};
  shared_ptr<string> subtitlesAllResultsUrl{};
  shared_ptr<map<string, string>> subtitlesChineseResults{};
  shared_ptr<string> subtitlesChineseResultsUrl{};
  shared_ptr<map<string, boost::any>> subtitlesEnglishResults{};
  shared_ptr<string> subtitlesEnglishResultsUrl{};

  RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults() {}

  explicit RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subtitlesAllResults) {
      res["SubtitlesAllResults"] = boost::any(*subtitlesAllResults);
    }
    if (subtitlesAllResultsUrl) {
      res["SubtitlesAllResultsUrl"] = boost::any(*subtitlesAllResultsUrl);
    }
    if (subtitlesChineseResults) {
      res["SubtitlesChineseResults"] = boost::any(*subtitlesChineseResults);
    }
    if (subtitlesChineseResultsUrl) {
      res["SubtitlesChineseResultsUrl"] = boost::any(*subtitlesChineseResultsUrl);
    }
    if (subtitlesEnglishResults) {
      res["SubtitlesEnglishResults"] = boost::any(*subtitlesEnglishResults);
    }
    if (subtitlesEnglishResultsUrl) {
      res["SubtitlesEnglishResultsUrl"] = boost::any(*subtitlesEnglishResultsUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubtitlesAllResults") != m.end() && !m["SubtitlesAllResults"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SubtitlesAllResults"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      subtitlesAllResults = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SubtitlesAllResultsUrl") != m.end() && !m["SubtitlesAllResultsUrl"].empty()) {
      subtitlesAllResultsUrl = make_shared<string>(boost::any_cast<string>(m["SubtitlesAllResultsUrl"]));
    }
    if (m.find("SubtitlesChineseResults") != m.end() && !m["SubtitlesChineseResults"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SubtitlesChineseResults"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      subtitlesChineseResults = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SubtitlesChineseResultsUrl") != m.end() && !m["SubtitlesChineseResultsUrl"].empty()) {
      subtitlesChineseResultsUrl = make_shared<string>(boost::any_cast<string>(m["SubtitlesChineseResultsUrl"]));
    }
    if (m.find("SubtitlesEnglishResults") != m.end() && !m["SubtitlesEnglishResults"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SubtitlesEnglishResults"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      subtitlesEnglishResults = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SubtitlesEnglishResultsUrl") != m.end() && !m["SubtitlesEnglishResultsUrl"].empty()) {
      subtitlesEnglishResultsUrl = make_shared<string>(boost::any_cast<string>(m["SubtitlesEnglishResultsUrl"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults() = default;
};
class RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition() {}

  explicit RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition() = default;
};
class RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo : public Darabonba::Model {
public:
  shared_ptr<vector<long>> boxes{};
  shared_ptr<vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition>> position{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};
  shared_ptr<long> textType{};

  RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo() {}

  explicit RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (position) {
      vector<boost::any> temp1;
      for(auto item1:*position){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Position"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (textType) {
      res["TextType"] = boost::any(*textType);
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
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      if (typeid(vector<boost::any>) == m["Position"].type()) {
        vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Position"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        position = make_shared<vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TextType") != m.end() && !m["TextType"].empty()) {
      textType = make_shared<long>(boost::any_cast<long>(m["TextType"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo() = default;
};
class RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo>> detailInfo{};
  shared_ptr<double> endTime{};
  shared_ptr<double> startTime{};

  RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults() {}

  explicit RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInfo) {
      vector<boost::any> temp1;
      for(auto item1:*detailInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailInfo"] = boost::any(temp1);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailInfo"].type()) {
        vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailInfo = make_shared<vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo>>(expect1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<double>(boost::any_cast<double>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults() = default;
};
class RecognizeVideoCastCrewListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVideoCastCrewListResponseBodyDataCastResults>> castResults{};
  shared_ptr<vector<RecognizeVideoCastCrewListResponseBodyDataOcrResults>> ocrResults{};
  shared_ptr<vector<RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults>> subtitlesResults{};
  shared_ptr<vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults>> videoOcrResults{};

  RecognizeVideoCastCrewListResponseBodyData() {}

  explicit RecognizeVideoCastCrewListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (castResults) {
      vector<boost::any> temp1;
      for(auto item1:*castResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CastResults"] = boost::any(temp1);
    }
    if (ocrResults) {
      vector<boost::any> temp1;
      for(auto item1:*ocrResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OcrResults"] = boost::any(temp1);
    }
    if (subtitlesResults) {
      vector<boost::any> temp1;
      for(auto item1:*subtitlesResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubtitlesResults"] = boost::any(temp1);
    }
    if (videoOcrResults) {
      vector<boost::any> temp1;
      for(auto item1:*videoOcrResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoOcrResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CastResults") != m.end() && !m["CastResults"].empty()) {
      if (typeid(vector<boost::any>) == m["CastResults"].type()) {
        vector<RecognizeVideoCastCrewListResponseBodyDataCastResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CastResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListResponseBodyDataCastResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        castResults = make_shared<vector<RecognizeVideoCastCrewListResponseBodyDataCastResults>>(expect1);
      }
    }
    if (m.find("OcrResults") != m.end() && !m["OcrResults"].empty()) {
      if (typeid(vector<boost::any>) == m["OcrResults"].type()) {
        vector<RecognizeVideoCastCrewListResponseBodyDataOcrResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OcrResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListResponseBodyDataOcrResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ocrResults = make_shared<vector<RecognizeVideoCastCrewListResponseBodyDataOcrResults>>(expect1);
      }
    }
    if (m.find("SubtitlesResults") != m.end() && !m["SubtitlesResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SubtitlesResults"].type()) {
        vector<RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubtitlesResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtitlesResults = make_shared<vector<RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults>>(expect1);
      }
    }
    if (m.find("VideoOcrResults") != m.end() && !m["VideoOcrResults"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoOcrResults"].type()) {
        vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoOcrResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoOcrResults = make_shared<vector<RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBodyData() = default;
};
class RecognizeVideoCastCrewListResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVideoCastCrewListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeVideoCastCrewListResponseBody() {}

  explicit RecognizeVideoCastCrewListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVideoCastCrewListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVideoCastCrewListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVideoCastCrewListResponseBody() = default;
};
class RecognizeVideoCastCrewListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVideoCastCrewListResponseBody> body{};

  RecognizeVideoCastCrewListResponse() {}

  explicit RecognizeVideoCastCrewListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVideoCastCrewListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVideoCastCrewListResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVideoCastCrewListResponse() = default;
};
class RecognizeVideoCharacterRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  RecognizeVideoCharacterRequest() {}

  explicit RecognizeVideoCharacterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~RecognizeVideoCharacterRequest() = default;
};
class RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles() {}

  explicit RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
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
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
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


  virtual ~RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles() = default;
};
class RecognizeVideoCharacterResponseBodyDataFramesElements : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> text{};
  shared_ptr<vector<RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles>> textRectangles{};

  RecognizeVideoCharacterResponseBodyDataFramesElements() {}

  explicit RecognizeVideoCharacterResponseBodyDataFramesElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (textRectangles) {
      vector<boost::any> temp1;
      for(auto item1:*textRectangles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TextRectangles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TextRectangles") != m.end() && !m["TextRectangles"].empty()) {
      if (typeid(vector<boost::any>) == m["TextRectangles"].type()) {
        vector<RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TextRectangles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textRectangles = make_shared<vector<RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles>>(expect1);
      }
    }
  }


  virtual ~RecognizeVideoCharacterResponseBodyDataFramesElements() = default;
};
class RecognizeVideoCharacterResponseBodyDataFrames : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVideoCharacterResponseBodyDataFramesElements>> elements{};
  shared_ptr<long> timestamp{};

  RecognizeVideoCharacterResponseBodyDataFrames() {}

  explicit RecognizeVideoCharacterResponseBodyDataFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<RecognizeVideoCharacterResponseBodyDataFramesElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCharacterResponseBodyDataFramesElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeVideoCharacterResponseBodyDataFramesElements>>(expect1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~RecognizeVideoCharacterResponseBodyDataFrames() = default;
};
class RecognizeVideoCharacterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVideoCharacterResponseBodyDataFrames>> frames{};
  shared_ptr<long> height{};
  shared_ptr<string> inputFile{};
  shared_ptr<long> width{};

  RecognizeVideoCharacterResponseBodyData() {}

  explicit RecognizeVideoCharacterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Frames"] = boost::any(temp1);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      if (typeid(vector<boost::any>) == m["Frames"].type()) {
        vector<RecognizeVideoCharacterResponseBodyDataFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCharacterResponseBodyDataFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<RecognizeVideoCharacterResponseBodyDataFrames>>(expect1);
      }
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeVideoCharacterResponseBodyData() = default;
};
class RecognizeVideoCharacterResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVideoCharacterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeVideoCharacterResponseBody() {}

  explicit RecognizeVideoCharacterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVideoCharacterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVideoCharacterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVideoCharacterResponseBody() = default;
};
class RecognizeVideoCharacterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVideoCharacterResponseBody> body{};

  RecognizeVideoCharacterResponse() {}

  explicit RecognizeVideoCharacterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVideoCharacterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVideoCharacterResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVideoCharacterResponse() = default;
};
class RecognizeVietnamIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  RecognizeVietnamIdentityCardRequest() {}

  explicit RecognizeVietnamIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardRequest() = default;
};
class RecognizeVietnamIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};

  RecognizeVietnamIdentityCardAdvanceRequest() {}

  explicit RecognizeVietnamIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrlObject) {
      res["ImageUrlObject"] = boost::any(*imageUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardAdvanceRequest() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLineKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLineKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLine() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLine() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLineKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLineKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLineKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLine() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLine() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataBirthDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataBirthDateKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataBirthDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataBirthDateKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataBirthDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataBirthDateKeyPoints>> keyPoints{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataBirthDate() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataBirthDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataBirthDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataBirthDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataBirthDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataBirthDate() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataCardBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataCardBoxKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataCardBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataCardBoxKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataCardBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataCardBoxKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataCardBox() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataCardBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataCardBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataCardBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataCardBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataCardBox() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataDriveClassKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataDriveClassKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataDriveClassKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataDriveClassKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataDriveClass : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataDriveClassKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataDriveClass() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataDriveClass(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataDriveClassKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataDriveClassKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataDriveClassKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataDriveClass() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataExpiryDateKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataExpiryDateKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataExpiryDateKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataExpiryDateKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataExpiryDate : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataExpiryDateKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataExpiryDate() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataExpiryDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataExpiryDateKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataExpiryDateKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataExpiryDateKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataExpiryDate() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataFullNameKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataFullNameKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataFullNameKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataFullNameKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataFullName : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataFullNameKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataFullName() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataFullName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataFullNameKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataFullNameKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataFullNameKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataFullName() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataIdNumberKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataIdNumberKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataIdNumberKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataIdNumberKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataIdNumber : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataIdNumberKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataIdNumber() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataIdNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataIdNumberKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataIdNumberKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataIdNumberKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataIdNumber() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataNationalityKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataNationalityKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataNationalityKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataNationalityKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataNationality : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataNationalityKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataNationality() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataNationality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataNationalityKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataNationalityKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataNationalityKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataNationality() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLineKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLineKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLine() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLine() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLineKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLineKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLine() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLine() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataPortraitBoxKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataPortraitBoxKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataPortraitBoxKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataPortraitBoxKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataPortraitBox : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataPortraitBoxKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataPortraitBox() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataPortraitBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataPortraitBoxKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataPortraitBoxKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataPortraitBoxKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataPortraitBox() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLineKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLineKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLine() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLine() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLineKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLineKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLineKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLineKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLine : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLineKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLine() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLineKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLineKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLineKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLine() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataSexKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeVietnamIdentityCardResponseBodyDataSexKeyPoints() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataSexKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataSexKeyPoints() = default;
};
class RecognizeVietnamIdentityCardResponseBodyDataSex : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVietnamIdentityCardResponseBodyDataSexKeyPoints>> keyPoints{};
  shared_ptr<string> score{};
  shared_ptr<string> text{};

  RecognizeVietnamIdentityCardResponseBodyDataSex() {}

  explicit RecognizeVietnamIdentityCardResponseBodyDataSex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<RecognizeVietnamIdentityCardResponseBodyDataSexKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVietnamIdentityCardResponseBodyDataSexKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<RecognizeVietnamIdentityCardResponseBodyDataSexKeyPoints>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyDataSex() = default;
};
class RecognizeVietnamIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLine> addressFirstLine{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLine> addressSecondLine{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataBirthDate> birthDate{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataCardBox> cardBox{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataDriveClass> driveClass{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataExpiryDate> expiryDate{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataFullName> fullName{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataIdNumber> idNumber{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataNationality> nationality{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLine> originPlaceFirstLine{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLine> originPlaceSecondLine{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataPortraitBox> portraitBox{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLine> residencePlaceFirstLine{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLine> residencePlaceSecondLine{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyDataSex> sex{};

  RecognizeVietnamIdentityCardResponseBodyData() {}

  explicit RecognizeVietnamIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressFirstLine) {
      res["AddressFirstLine"] = addressFirstLine ? boost::any(addressFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressSecondLine) {
      res["AddressSecondLine"] = addressSecondLine ? boost::any(addressSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthDate) {
      res["BirthDate"] = birthDate ? boost::any(birthDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cardBox) {
      res["CardBox"] = cardBox ? boost::any(cardBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (driveClass) {
      res["DriveClass"] = driveClass ? boost::any(driveClass->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expiryDate) {
      res["ExpiryDate"] = expiryDate ? boost::any(expiryDate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fullName) {
      res["FullName"] = fullName ? boost::any(fullName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idNumber) {
      res["IdNumber"] = idNumber ? boost::any(idNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nationality) {
      res["Nationality"] = nationality ? boost::any(nationality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originPlaceFirstLine) {
      res["OriginPlaceFirstLine"] = originPlaceFirstLine ? boost::any(originPlaceFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originPlaceSecondLine) {
      res["OriginPlaceSecondLine"] = originPlaceSecondLine ? boost::any(originPlaceSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (portraitBox) {
      res["PortraitBox"] = portraitBox ? boost::any(portraitBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (residencePlaceFirstLine) {
      res["ResidencePlaceFirstLine"] = residencePlaceFirstLine ? boost::any(residencePlaceFirstLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (residencePlaceSecondLine) {
      res["ResidencePlaceSecondLine"] = residencePlaceSecondLine ? boost::any(residencePlaceSecondLine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sex) {
      res["Sex"] = sex ? boost::any(sex->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressFirstLine") != m.end() && !m["AddressFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressFirstLine"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressFirstLine"]));
        addressFirstLine = make_shared<RecognizeVietnamIdentityCardResponseBodyDataAddressFirstLine>(model1);
      }
    }
    if (m.find("AddressSecondLine") != m.end() && !m["AddressSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressSecondLine"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressSecondLine"]));
        addressSecondLine = make_shared<RecognizeVietnamIdentityCardResponseBodyDataAddressSecondLine>(model1);
      }
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["BirthDate"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataBirthDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BirthDate"]));
        birthDate = make_shared<RecognizeVietnamIdentityCardResponseBodyDataBirthDate>(model1);
      }
    }
    if (m.find("CardBox") != m.end() && !m["CardBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["CardBox"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataCardBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CardBox"]));
        cardBox = make_shared<RecognizeVietnamIdentityCardResponseBodyDataCardBox>(model1);
      }
    }
    if (m.find("DriveClass") != m.end() && !m["DriveClass"].empty()) {
      if (typeid(map<string, boost::any>) == m["DriveClass"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataDriveClass model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DriveClass"]));
        driveClass = make_shared<RecognizeVietnamIdentityCardResponseBodyDataDriveClass>(model1);
      }
    }
    if (m.find("ExpiryDate") != m.end() && !m["ExpiryDate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExpiryDate"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataExpiryDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExpiryDate"]));
        expiryDate = make_shared<RecognizeVietnamIdentityCardResponseBodyDataExpiryDate>(model1);
      }
    }
    if (m.find("FullName") != m.end() && !m["FullName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FullName"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataFullName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FullName"]));
        fullName = make_shared<RecognizeVietnamIdentityCardResponseBodyDataFullName>(model1);
      }
    }
    if (m.find("IdNumber") != m.end() && !m["IdNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdNumber"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataIdNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdNumber"]));
        idNumber = make_shared<RecognizeVietnamIdentityCardResponseBodyDataIdNumber>(model1);
      }
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nationality"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataNationality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nationality"]));
        nationality = make_shared<RecognizeVietnamIdentityCardResponseBodyDataNationality>(model1);
      }
    }
    if (m.find("OriginPlaceFirstLine") != m.end() && !m["OriginPlaceFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["OriginPlaceFirstLine"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OriginPlaceFirstLine"]));
        originPlaceFirstLine = make_shared<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceFirstLine>(model1);
      }
    }
    if (m.find("OriginPlaceSecondLine") != m.end() && !m["OriginPlaceSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["OriginPlaceSecondLine"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OriginPlaceSecondLine"]));
        originPlaceSecondLine = make_shared<RecognizeVietnamIdentityCardResponseBodyDataOriginPlaceSecondLine>(model1);
      }
    }
    if (m.find("PortraitBox") != m.end() && !m["PortraitBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["PortraitBox"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataPortraitBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PortraitBox"]));
        portraitBox = make_shared<RecognizeVietnamIdentityCardResponseBodyDataPortraitBox>(model1);
      }
    }
    if (m.find("ResidencePlaceFirstLine") != m.end() && !m["ResidencePlaceFirstLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResidencePlaceFirstLine"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResidencePlaceFirstLine"]));
        residencePlaceFirstLine = make_shared<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceFirstLine>(model1);
      }
    }
    if (m.find("ResidencePlaceSecondLine") != m.end() && !m["ResidencePlaceSecondLine"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResidencePlaceSecondLine"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResidencePlaceSecondLine"]));
        residencePlaceSecondLine = make_shared<RecognizeVietnamIdentityCardResponseBodyDataResidencePlaceSecondLine>(model1);
      }
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sex"].type()) {
        RecognizeVietnamIdentityCardResponseBodyDataSex model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sex"]));
        sex = make_shared<RecognizeVietnamIdentityCardResponseBodyDataSex>(model1);
      }
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBodyData() = default;
};
class RecognizeVietnamIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVietnamIdentityCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeVietnamIdentityCardResponseBody() {}

  explicit RecognizeVietnamIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVietnamIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVietnamIdentityCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponseBody() = default;
};
class RecognizeVietnamIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVietnamIdentityCardResponseBody> body{};

  RecognizeVietnamIdentityCardResponse() {}

  explicit RecognizeVietnamIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVietnamIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVietnamIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVietnamIdentityCardResponse() = default;
};
class TrimDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileType{};
  shared_ptr<string> fileURL{};
  shared_ptr<string> outputType{};

  TrimDocumentRequest() {}

  explicit TrimDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    if (outputType) {
      res["OutputType"] = boost::any(*outputType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
    if (m.find("OutputType") != m.end() && !m["OutputType"].empty()) {
      outputType = make_shared<string>(boost::any_cast<string>(m["OutputType"]));
    }
  }


  virtual ~TrimDocumentRequest() = default;
};
class TrimDocumentAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> fileURLObject{};
  shared_ptr<string> fileType{};
  shared_ptr<string> outputType{};

  TrimDocumentAdvanceRequest() {}

  explicit TrimDocumentAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!fileURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("fileURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURLObject) {
      res["FileURLObject"] = boost::any(*fileURLObject);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (outputType) {
      res["OutputType"] = boost::any(*outputType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURLObject") != m.end() && !m["FileURLObject"].empty()) {
      fileURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileURLObject"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("OutputType") != m.end() && !m["OutputType"].empty()) {
      outputType = make_shared<string>(boost::any_cast<string>(m["OutputType"]));
    }
  }


  virtual ~TrimDocumentAdvanceRequest() = default;
};
class TrimDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  TrimDocumentResponseBodyData() {}

  explicit TrimDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TrimDocumentResponseBodyData() = default;
};
class TrimDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<TrimDocumentResponseBodyData> data{};
  shared_ptr<string> requestId{};

  TrimDocumentResponseBody() {}

  explicit TrimDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrimDocumentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TrimDocumentResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TrimDocumentResponseBody() = default;
};
class TrimDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TrimDocumentResponseBody> body{};

  TrimDocumentResponse() {}

  explicit TrimDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrimDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TrimDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~TrimDocumentResponse() = default;
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
  DetectCardScreenshotResponse detectCardScreenshotWithOptions(shared_ptr<DetectCardScreenshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectCardScreenshotResponse detectCardScreenshot(shared_ptr<DetectCardScreenshotRequest> request);
  DetectCardScreenshotResponse detectCardScreenshotAdvance(shared_ptr<DetectCardScreenshotAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  RecognizeAccountPageResponse recognizeAccountPageWithOptions(shared_ptr<RecognizeAccountPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeAccountPageResponse recognizeAccountPage(shared_ptr<RecognizeAccountPageRequest> request);
  RecognizeAccountPageResponse recognizeAccountPageAdvance(shared_ptr<RecognizeAccountPageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBankCardResponse recognizeBankCardWithOptions(shared_ptr<RecognizeBankCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBankCardResponse recognizeBankCard(shared_ptr<RecognizeBankCardRequest> request);
  RecognizeBankCardResponse recognizeBankCardAdvance(shared_ptr<RecognizeBankCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessCardResponse recognizeBusinessCardWithOptions(shared_ptr<RecognizeBusinessCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessCardResponse recognizeBusinessCard(shared_ptr<RecognizeBusinessCardRequest> request);
  RecognizeBusinessCardResponse recognizeBusinessCardAdvance(shared_ptr<RecognizeBusinessCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessLicenseResponse recognizeBusinessLicenseWithOptions(shared_ptr<RecognizeBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessLicenseResponse recognizeBusinessLicense(shared_ptr<RecognizeBusinessLicenseRequest> request);
  RecognizeBusinessLicenseResponse recognizeBusinessLicenseAdvance(shared_ptr<RecognizeBusinessLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCharacterResponse recognizeCharacterWithOptions(shared_ptr<RecognizeCharacterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCharacterResponse recognizeCharacter(shared_ptr<RecognizeCharacterRequest> request);
  RecognizeCharacterResponse recognizeCharacterAdvance(shared_ptr<RecognizeCharacterAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeChinapassportResponse recognizeChinapassportWithOptions(shared_ptr<RecognizeChinapassportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeChinapassportResponse recognizeChinapassport(shared_ptr<RecognizeChinapassportRequest> request);
  RecognizeChinapassportResponse recognizeChinapassportAdvance(shared_ptr<RecognizeChinapassportAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDriverLicenseResponse recognizeDriverLicenseWithOptions(shared_ptr<RecognizeDriverLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDriverLicenseResponse recognizeDriverLicense(shared_ptr<RecognizeDriverLicenseRequest> request);
  RecognizeDriverLicenseResponse recognizeDriverLicenseAdvance(shared_ptr<RecognizeDriverLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDrivingLicenseResponse recognizeDrivingLicenseWithOptions(shared_ptr<RecognizeDrivingLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDrivingLicenseResponse recognizeDrivingLicense(shared_ptr<RecognizeDrivingLicenseRequest> request);
  RecognizeDrivingLicenseResponse recognizeDrivingLicenseAdvance(shared_ptr<RecognizeDrivingLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIdentityCardResponse recognizeIdentityCardWithOptions(shared_ptr<RecognizeIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIdentityCardResponse recognizeIdentityCard(shared_ptr<RecognizeIdentityCardRequest> request);
  RecognizeIdentityCardResponse recognizeIdentityCardAdvance(shared_ptr<RecognizeIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIndonesiaIdentityCardResponse recognizeIndonesiaIdentityCardWithOptions(shared_ptr<RecognizeIndonesiaIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIndonesiaIdentityCardResponse recognizeIndonesiaIdentityCard(shared_ptr<RecognizeIndonesiaIdentityCardRequest> request);
  RecognizeIndonesiaIdentityCardResponse recognizeIndonesiaIdentityCardAdvance(shared_ptr<RecognizeIndonesiaIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLicensePlateResponse recognizeLicensePlateWithOptions(shared_ptr<RecognizeLicensePlateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLicensePlateResponse recognizeLicensePlate(shared_ptr<RecognizeLicensePlateRequest> request);
  RecognizeLicensePlateResponse recognizeLicensePlateAdvance(shared_ptr<RecognizeLicensePlateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeMalaysiaIdentityCardResponse recognizeMalaysiaIdentityCardWithOptions(shared_ptr<RecognizeMalaysiaIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeMalaysiaIdentityCardResponse recognizeMalaysiaIdentityCard(shared_ptr<RecognizeMalaysiaIdentityCardRequest> request);
  RecognizeMalaysiaIdentityCardResponse recognizeMalaysiaIdentityCardAdvance(shared_ptr<RecognizeMalaysiaIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePassportMRZResponse recognizePassportMRZWithOptions(shared_ptr<RecognizePassportMRZRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePassportMRZResponse recognizePassportMRZ(shared_ptr<RecognizePassportMRZRequest> request);
  RecognizePassportMRZResponse recognizePassportMRZAdvance(shared_ptr<RecognizePassportMRZAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePdfResponse recognizePdfWithOptions(shared_ptr<RecognizePdfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePdfResponse recognizePdf(shared_ptr<RecognizePdfRequest> request);
  RecognizePdfResponse recognizePdfAdvance(shared_ptr<RecognizePdfAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePoiNameResponse recognizePoiNameWithOptions(shared_ptr<RecognizePoiNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePoiNameResponse recognizePoiName(shared_ptr<RecognizePoiNameRequest> request);
  RecognizePoiNameResponse recognizePoiNameAdvance(shared_ptr<RecognizePoiNameAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQrCodeResponse recognizeQrCodeWithOptions(shared_ptr<RecognizeQrCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQrCodeResponse recognizeQrCode(shared_ptr<RecognizeQrCodeRequest> request);
  RecognizeQuotaInvoiceResponse recognizeQuotaInvoiceWithOptions(shared_ptr<RecognizeQuotaInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQuotaInvoiceResponse recognizeQuotaInvoice(shared_ptr<RecognizeQuotaInvoiceRequest> request);
  RecognizeQuotaInvoiceResponse recognizeQuotaInvoiceAdvance(shared_ptr<RecognizeQuotaInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeRussiaIdentityCardResponse recognizeRussiaIdentityCardWithOptions(shared_ptr<RecognizeRussiaIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeRussiaIdentityCardResponse recognizeRussiaIdentityCard(shared_ptr<RecognizeRussiaIdentityCardRequest> request);
  RecognizeRussiaIdentityCardResponse recognizeRussiaIdentityCardAdvance(shared_ptr<RecognizeRussiaIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeStampResponse recognizeStampWithOptions(shared_ptr<RecognizeStampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeStampResponse recognizeStamp(shared_ptr<RecognizeStampRequest> request);
  RecognizeStampResponse recognizeStampAdvance(shared_ptr<RecognizeStampAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTableResponse recognizeTableWithOptions(shared_ptr<RecognizeTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTableResponse recognizeTable(shared_ptr<RecognizeTableRequest> request);
  RecognizeTableResponse recognizeTableAdvance(shared_ptr<RecognizeTableAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTakeoutOrderResponse recognizeTakeoutOrderWithOptions(shared_ptr<RecognizeTakeoutOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTakeoutOrderResponse recognizeTakeoutOrder(shared_ptr<RecognizeTakeoutOrderRequest> request);
  RecognizeTakeoutOrderResponse recognizeTakeoutOrderAdvance(shared_ptr<RecognizeTakeoutOrderAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceWithOptions(shared_ptr<RecognizeTaxiInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoice(shared_ptr<RecognizeTaxiInvoiceRequest> request);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceAdvance(shared_ptr<RecognizeTaxiInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTicketInvoiceResponse recognizeTicketInvoiceWithOptions(shared_ptr<RecognizeTicketInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTicketInvoiceResponse recognizeTicketInvoice(shared_ptr<RecognizeTicketInvoiceRequest> request);
  RecognizeTicketInvoiceResponse recognizeTicketInvoiceAdvance(shared_ptr<RecognizeTicketInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTrainTicketResponse recognizeTrainTicketWithOptions(shared_ptr<RecognizeTrainTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTrainTicketResponse recognizeTrainTicket(shared_ptr<RecognizeTrainTicketRequest> request);
  RecognizeTrainTicketResponse recognizeTrainTicketAdvance(shared_ptr<RecognizeTrainTicketAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTurkeyIdentityCardResponse recognizeTurkeyIdentityCardWithOptions(shared_ptr<RecognizeTurkeyIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTurkeyIdentityCardResponse recognizeTurkeyIdentityCard(shared_ptr<RecognizeTurkeyIdentityCardRequest> request);
  RecognizeTurkeyIdentityCardResponse recognizeTurkeyIdentityCardAdvance(shared_ptr<RecognizeTurkeyIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeUkraineIdentityCardResponse recognizeUkraineIdentityCardWithOptions(shared_ptr<RecognizeUkraineIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeUkraineIdentityCardResponse recognizeUkraineIdentityCard(shared_ptr<RecognizeUkraineIdentityCardRequest> request);
  RecognizeUkraineIdentityCardResponse recognizeUkraineIdentityCardAdvance(shared_ptr<RecognizeUkraineIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVATInvoiceResponse recognizeVATInvoiceWithOptions(shared_ptr<RecognizeVATInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVATInvoiceResponse recognizeVATInvoice(shared_ptr<RecognizeVATInvoiceRequest> request);
  RecognizeVATInvoiceResponse recognizeVATInvoiceAdvance(shared_ptr<RecognizeVATInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVINCodeResponse recognizeVINCodeWithOptions(shared_ptr<RecognizeVINCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVINCodeResponse recognizeVINCode(shared_ptr<RecognizeVINCodeRequest> request);
  RecognizeVINCodeResponse recognizeVINCodeAdvance(shared_ptr<RecognizeVINCodeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVerificationcodeResponse recognizeVerificationcodeWithOptions(shared_ptr<RecognizeVerificationcodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVerificationcodeResponse recognizeVerificationcode(shared_ptr<RecognizeVerificationcodeRequest> request);
  RecognizeVerificationcodeResponse recognizeVerificationcodeAdvance(shared_ptr<RecognizeVerificationcodeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVideoCastCrewListResponse recognizeVideoCastCrewListWithOptions(shared_ptr<RecognizeVideoCastCrewListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVideoCastCrewListResponse recognizeVideoCastCrewList(shared_ptr<RecognizeVideoCastCrewListRequest> request);
  RecognizeVideoCastCrewListResponse recognizeVideoCastCrewListAdvance(shared_ptr<RecognizeVideoCastCrewListAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVideoCharacterResponse recognizeVideoCharacterWithOptions(shared_ptr<RecognizeVideoCharacterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVideoCharacterResponse recognizeVideoCharacter(shared_ptr<RecognizeVideoCharacterRequest> request);
  RecognizeVietnamIdentityCardResponse recognizeVietnamIdentityCardWithOptions(shared_ptr<RecognizeVietnamIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVietnamIdentityCardResponse recognizeVietnamIdentityCard(shared_ptr<RecognizeVietnamIdentityCardRequest> request);
  RecognizeVietnamIdentityCardResponse recognizeVietnamIdentityCardAdvance(shared_ptr<RecognizeVietnamIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrimDocumentResponse trimDocumentWithOptions(shared_ptr<TrimDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrimDocumentResponse trimDocument(shared_ptr<TrimDocumentRequest> request);
  TrimDocumentResponse trimDocumentAdvance(shared_ptr<TrimDocumentAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ocr20191230

#endif
