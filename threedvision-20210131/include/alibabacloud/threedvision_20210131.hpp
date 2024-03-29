// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_THREEDVISION20210131_H_
#define ALIBABACLOUD_THREEDVISION20210131_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Threedvision20210131 {
class EstimateMonocularImageDepthRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  EstimateMonocularImageDepthRequest() {}

  explicit EstimateMonocularImageDepthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EstimateMonocularImageDepthRequest() = default;
};
class EstimateMonocularImageDepthAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  EstimateMonocularImageDepthAdvanceRequest() {}

  explicit EstimateMonocularImageDepthAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
  }


  virtual ~EstimateMonocularImageDepthAdvanceRequest() = default;
};
class EstimateMonocularImageDepthResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> depthMapUrl{};
  shared_ptr<string> depthToColorUrl{};

  EstimateMonocularImageDepthResponseBodyData() {}

  explicit EstimateMonocularImageDepthResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depthMapUrl) {
      res["DepthMapUrl"] = boost::any(*depthMapUrl);
    }
    if (depthToColorUrl) {
      res["DepthToColorUrl"] = boost::any(*depthToColorUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepthMapUrl") != m.end() && !m["DepthMapUrl"].empty()) {
      depthMapUrl = make_shared<string>(boost::any_cast<string>(m["DepthMapUrl"]));
    }
    if (m.find("DepthToColorUrl") != m.end() && !m["DepthToColorUrl"].empty()) {
      depthToColorUrl = make_shared<string>(boost::any_cast<string>(m["DepthToColorUrl"]));
    }
  }


  virtual ~EstimateMonocularImageDepthResponseBodyData() = default;
};
class EstimateMonocularImageDepthResponseBody : public Darabonba::Model {
public:
  shared_ptr<EstimateMonocularImageDepthResponseBodyData> data{};
  shared_ptr<string> requestId{};

  EstimateMonocularImageDepthResponseBody() {}

  explicit EstimateMonocularImageDepthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EstimateMonocularImageDepthResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EstimateMonocularImageDepthResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EstimateMonocularImageDepthResponseBody() = default;
};
class EstimateMonocularImageDepthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EstimateMonocularImageDepthResponseBody> body{};

  EstimateMonocularImageDepthResponse() {}

  explicit EstimateMonocularImageDepthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EstimateMonocularImageDepthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EstimateMonocularImageDepthResponseBody>(model1);
      }
    }
  }


  virtual ~EstimateMonocularImageDepthResponse() = default;
};
class EstimateMonocularVideoDepthRequest : public Darabonba::Model {
public:
  shared_ptr<string> sampleRate{};
  shared_ptr<string> videoURL{};

  EstimateMonocularVideoDepthRequest() {}

  explicit EstimateMonocularVideoDepthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<string>(boost::any_cast<string>(m["SampleRate"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~EstimateMonocularVideoDepthRequest() = default;
};
class EstimateMonocularVideoDepthAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> sampleRate{};
  shared_ptr<Darabonba::Stream> videoURLObject{};

  EstimateMonocularVideoDepthAdvanceRequest() {}

  explicit EstimateMonocularVideoDepthAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<string>(boost::any_cast<string>(m["SampleRate"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
  }


  virtual ~EstimateMonocularVideoDepthAdvanceRequest() = default;
};
class EstimateMonocularVideoDepthResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> depthUrl{};
  shared_ptr<string> depthVisUrl{};

  EstimateMonocularVideoDepthResponseBodyData() {}

  explicit EstimateMonocularVideoDepthResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depthUrl) {
      res["DepthUrl"] = boost::any(*depthUrl);
    }
    if (depthVisUrl) {
      res["DepthVisUrl"] = boost::any(*depthVisUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepthUrl") != m.end() && !m["DepthUrl"].empty()) {
      depthUrl = make_shared<string>(boost::any_cast<string>(m["DepthUrl"]));
    }
    if (m.find("DepthVisUrl") != m.end() && !m["DepthVisUrl"].empty()) {
      depthVisUrl = make_shared<string>(boost::any_cast<string>(m["DepthVisUrl"]));
    }
  }


  virtual ~EstimateMonocularVideoDepthResponseBodyData() = default;
};
class EstimateMonocularVideoDepthResponseBody : public Darabonba::Model {
public:
  shared_ptr<EstimateMonocularVideoDepthResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EstimateMonocularVideoDepthResponseBody() {}

  explicit EstimateMonocularVideoDepthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EstimateMonocularVideoDepthResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EstimateMonocularVideoDepthResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EstimateMonocularVideoDepthResponseBody() = default;
};
class EstimateMonocularVideoDepthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EstimateMonocularVideoDepthResponseBody> body{};

  EstimateMonocularVideoDepthResponse() {}

  explicit EstimateMonocularVideoDepthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EstimateMonocularVideoDepthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EstimateMonocularVideoDepthResponseBody>(model1);
      }
    }
  }


  virtual ~EstimateMonocularVideoDepthResponse() = default;
};
class EstimateStereoImageDepthRequest : public Darabonba::Model {
public:
  shared_ptr<string> leftImageURL{};
  shared_ptr<string> rightImageURL{};

  EstimateStereoImageDepthRequest() {}

  explicit EstimateStereoImageDepthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (leftImageURL) {
      res["LeftImageURL"] = boost::any(*leftImageURL);
    }
    if (rightImageURL) {
      res["RightImageURL"] = boost::any(*rightImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LeftImageURL") != m.end() && !m["LeftImageURL"].empty()) {
      leftImageURL = make_shared<string>(boost::any_cast<string>(m["LeftImageURL"]));
    }
    if (m.find("RightImageURL") != m.end() && !m["RightImageURL"].empty()) {
      rightImageURL = make_shared<string>(boost::any_cast<string>(m["RightImageURL"]));
    }
  }


  virtual ~EstimateStereoImageDepthRequest() = default;
};
class EstimateStereoImageDepthAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> leftImageURLObject{};
  shared_ptr<Darabonba::Stream> rightImageURLObject{};

  EstimateStereoImageDepthAdvanceRequest() {}

  explicit EstimateStereoImageDepthAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (leftImageURLObject) {
      res["LeftImageURL"] = boost::any(*leftImageURLObject);
    }
    if (rightImageURLObject) {
      res["RightImageURL"] = boost::any(*rightImageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LeftImageURL") != m.end() && !m["LeftImageURL"].empty()) {
      leftImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["LeftImageURL"]));
    }
    if (m.find("RightImageURL") != m.end() && !m["RightImageURL"].empty()) {
      rightImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["RightImageURL"]));
    }
  }


  virtual ~EstimateStereoImageDepthAdvanceRequest() = default;
};
class EstimateStereoImageDepthResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> disparityMapURL{};
  shared_ptr<string> disparityVisURL{};

  EstimateStereoImageDepthResponseBodyData() {}

  explicit EstimateStereoImageDepthResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disparityMapURL) {
      res["DisparityMapURL"] = boost::any(*disparityMapURL);
    }
    if (disparityVisURL) {
      res["DisparityVisURL"] = boost::any(*disparityVisURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisparityMapURL") != m.end() && !m["DisparityMapURL"].empty()) {
      disparityMapURL = make_shared<string>(boost::any_cast<string>(m["DisparityMapURL"]));
    }
    if (m.find("DisparityVisURL") != m.end() && !m["DisparityVisURL"].empty()) {
      disparityVisURL = make_shared<string>(boost::any_cast<string>(m["DisparityVisURL"]));
    }
  }


  virtual ~EstimateStereoImageDepthResponseBodyData() = default;
};
class EstimateStereoImageDepthResponseBody : public Darabonba::Model {
public:
  shared_ptr<EstimateStereoImageDepthResponseBodyData> data{};
  shared_ptr<string> requestId{};

  EstimateStereoImageDepthResponseBody() {}

  explicit EstimateStereoImageDepthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EstimateStereoImageDepthResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EstimateStereoImageDepthResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EstimateStereoImageDepthResponseBody() = default;
};
class EstimateStereoImageDepthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EstimateStereoImageDepthResponseBody> body{};

  EstimateStereoImageDepthResponse() {}

  explicit EstimateStereoImageDepthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EstimateStereoImageDepthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EstimateStereoImageDepthResponseBody>(model1);
      }
    }
  }


  virtual ~EstimateStereoImageDepthResponse() = default;
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
class ReconstructBodyBySingleImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ReconstructBodyBySingleImageRequest() {}

  explicit ReconstructBodyBySingleImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReconstructBodyBySingleImageRequest() = default;
};
class ReconstructBodyBySingleImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  ReconstructBodyBySingleImageAdvanceRequest() {}

  explicit ReconstructBodyBySingleImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
  }


  virtual ~ReconstructBodyBySingleImageAdvanceRequest() = default;
};
class ReconstructBodyBySingleImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> depthURL{};
  shared_ptr<string> meshURL{};

  ReconstructBodyBySingleImageResponseBodyData() {}

  explicit ReconstructBodyBySingleImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depthURL) {
      res["DepthURL"] = boost::any(*depthURL);
    }
    if (meshURL) {
      res["MeshURL"] = boost::any(*meshURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepthURL") != m.end() && !m["DepthURL"].empty()) {
      depthURL = make_shared<string>(boost::any_cast<string>(m["DepthURL"]));
    }
    if (m.find("MeshURL") != m.end() && !m["MeshURL"].empty()) {
      meshURL = make_shared<string>(boost::any_cast<string>(m["MeshURL"]));
    }
  }


  virtual ~ReconstructBodyBySingleImageResponseBodyData() = default;
};
class ReconstructBodyBySingleImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<ReconstructBodyBySingleImageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ReconstructBodyBySingleImageResponseBody() {}

  explicit ReconstructBodyBySingleImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReconstructBodyBySingleImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReconstructBodyBySingleImageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReconstructBodyBySingleImageResponseBody() = default;
};
class ReconstructBodyBySingleImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReconstructBodyBySingleImageResponseBody> body{};

  ReconstructBodyBySingleImageResponse() {}

  explicit ReconstructBodyBySingleImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReconstructBodyBySingleImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReconstructBodyBySingleImageResponseBody>(model1);
      }
    }
  }


  virtual ~ReconstructBodyBySingleImageResponse() = default;
};
class ReconstructThreeDMultiViewRequest : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<string> zipFileUrl{};

  ReconstructThreeDMultiViewRequest() {}

  explicit ReconstructThreeDMultiViewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (zipFileUrl) {
      res["ZipFileUrl"] = boost::any(*zipFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("ZipFileUrl") != m.end() && !m["ZipFileUrl"].empty()) {
      zipFileUrl = make_shared<string>(boost::any_cast<string>(m["ZipFileUrl"]));
    }
  }


  virtual ~ReconstructThreeDMultiViewRequest() = default;
};
class ReconstructThreeDMultiViewAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<Darabonba::Stream> zipFileUrlObject{};

  ReconstructThreeDMultiViewAdvanceRequest() {}

  explicit ReconstructThreeDMultiViewAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (zipFileUrlObject) {
      res["ZipFileUrl"] = boost::any(*zipFileUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("ZipFileUrl") != m.end() && !m["ZipFileUrl"].empty()) {
      zipFileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ZipFileUrl"]));
    }
  }


  virtual ~ReconstructThreeDMultiViewAdvanceRequest() = default;
};
class ReconstructThreeDMultiViewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> pointCloudURL{};

  ReconstructThreeDMultiViewResponseBodyData() {}

  explicit ReconstructThreeDMultiViewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pointCloudURL) {
      res["PointCloudURL"] = boost::any(*pointCloudURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PointCloudURL") != m.end() && !m["PointCloudURL"].empty()) {
      pointCloudURL = make_shared<string>(boost::any_cast<string>(m["PointCloudURL"]));
    }
  }


  virtual ~ReconstructThreeDMultiViewResponseBodyData() = default;
};
class ReconstructThreeDMultiViewResponseBody : public Darabonba::Model {
public:
  shared_ptr<ReconstructThreeDMultiViewResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReconstructThreeDMultiViewResponseBody() {}

  explicit ReconstructThreeDMultiViewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ReconstructThreeDMultiViewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReconstructThreeDMultiViewResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReconstructThreeDMultiViewResponseBody() = default;
};
class ReconstructThreeDMultiViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReconstructThreeDMultiViewResponseBody> body{};

  ReconstructThreeDMultiViewResponse() {}

  explicit ReconstructThreeDMultiViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReconstructThreeDMultiViewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReconstructThreeDMultiViewResponseBody>(model1);
      }
    }
  }


  virtual ~ReconstructThreeDMultiViewResponse() = default;
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
  EstimateMonocularImageDepthResponse estimateMonocularImageDepthWithOptions(shared_ptr<EstimateMonocularImageDepthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateMonocularImageDepthResponse estimateMonocularImageDepth(shared_ptr<EstimateMonocularImageDepthRequest> request);
  EstimateMonocularImageDepthResponse estimateMonocularImageDepthAdvance(shared_ptr<EstimateMonocularImageDepthAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateMonocularVideoDepthResponse estimateMonocularVideoDepthWithOptions(shared_ptr<EstimateMonocularVideoDepthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateMonocularVideoDepthResponse estimateMonocularVideoDepth(shared_ptr<EstimateMonocularVideoDepthRequest> request);
  EstimateMonocularVideoDepthResponse estimateMonocularVideoDepthAdvance(shared_ptr<EstimateMonocularVideoDepthAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateStereoImageDepthResponse estimateStereoImageDepthWithOptions(shared_ptr<EstimateStereoImageDepthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateStereoImageDepthResponse estimateStereoImageDepth(shared_ptr<EstimateStereoImageDepthRequest> request);
  EstimateStereoImageDepthResponse estimateStereoImageDepthAdvance(shared_ptr<EstimateStereoImageDepthAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  ReconstructBodyBySingleImageResponse reconstructBodyBySingleImageWithOptions(shared_ptr<ReconstructBodyBySingleImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReconstructBodyBySingleImageResponse reconstructBodyBySingleImage(shared_ptr<ReconstructBodyBySingleImageRequest> request);
  ReconstructBodyBySingleImageResponse reconstructBodyBySingleImageAdvance(shared_ptr<ReconstructBodyBySingleImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReconstructThreeDMultiViewResponse reconstructThreeDMultiViewWithOptions(shared_ptr<ReconstructThreeDMultiViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReconstructThreeDMultiViewResponse reconstructThreeDMultiView(shared_ptr<ReconstructThreeDMultiViewRequest> request);
  ReconstructThreeDMultiViewResponse reconstructThreeDMultiViewAdvance(shared_ptr<ReconstructThreeDMultiViewAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Threedvision20210131

#endif
