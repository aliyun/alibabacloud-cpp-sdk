// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VIDEORECOG20200320_H_
#define ALIBABACLOUD_VIDEORECOG20200320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Videorecog20200320 {
class DetectVideoShotRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  DetectVideoShotRequest() {}

  explicit DetectVideoShotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~DetectVideoShotRequest() = default;
};
class DetectVideoShotAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  DetectVideoShotAdvanceRequest() {}

  explicit DetectVideoShotAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~DetectVideoShotAdvanceRequest() = default;
};
class DetectVideoShotResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<long>> shotFrameIds{};

  DetectVideoShotResponseBodyData() {}

  explicit DetectVideoShotResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shotFrameIds) {
      res["ShotFrameIds"] = boost::any(*shotFrameIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShotFrameIds") != m.end() && !m["ShotFrameIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ShotFrameIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ShotFrameIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      shotFrameIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DetectVideoShotResponseBodyData() = default;
};
class DetectVideoShotResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectVideoShotResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetectVideoShotResponseBody() {}

  explicit DetectVideoShotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVideoShotResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectVideoShotResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectVideoShotResponseBody() = default;
};
class DetectVideoShotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectVideoShotResponseBody> body{};

  DetectVideoShotResponse() {}

  explicit DetectVideoShotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVideoShotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectVideoShotResponseBody>(model1);
      }
    }
  }


  virtual ~DetectVideoShotResponse() = default;
};
class GenerateVideoCoverRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isGif{};
  shared_ptr<string> videoUrl{};

  GenerateVideoCoverRequest() {}

  explicit GenerateVideoCoverRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isGif) {
      res["IsGif"] = boost::any(*isGif);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsGif") != m.end() && !m["IsGif"].empty()) {
      isGif = make_shared<bool>(boost::any_cast<bool>(m["IsGif"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GenerateVideoCoverRequest() = default;
};
class GenerateVideoCoverAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isGif{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  GenerateVideoCoverAdvanceRequest() {}

  explicit GenerateVideoCoverAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isGif) {
      res["IsGif"] = boost::any(*isGif);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsGif") != m.end() && !m["IsGif"].empty()) {
      isGif = make_shared<bool>(boost::any_cast<bool>(m["IsGif"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~GenerateVideoCoverAdvanceRequest() = default;
};
class GenerateVideoCoverResponseBodyDataOutputs : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> imageURL{};

  GenerateVideoCoverResponseBodyDataOutputs() {}

  explicit GenerateVideoCoverResponseBodyDataOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~GenerateVideoCoverResponseBodyDataOutputs() = default;
};
class GenerateVideoCoverResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateVideoCoverResponseBodyDataOutputs>> outputs{};

  GenerateVideoCoverResponseBodyData() {}

  explicit GenerateVideoCoverResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputs) {
      vector<boost::any> temp1;
      for(auto item1:*outputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outputs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["Outputs"].type()) {
        vector<GenerateVideoCoverResponseBodyDataOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateVideoCoverResponseBodyDataOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<GenerateVideoCoverResponseBodyDataOutputs>>(expect1);
      }
    }
  }


  virtual ~GenerateVideoCoverResponseBodyData() = default;
};
class GenerateVideoCoverResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateVideoCoverResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GenerateVideoCoverResponseBody() {}

  explicit GenerateVideoCoverResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateVideoCoverResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateVideoCoverResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateVideoCoverResponseBody() = default;
};
class GenerateVideoCoverResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateVideoCoverResponseBody> body{};

  GenerateVideoCoverResponse() {}

  explicit GenerateVideoCoverResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateVideoCoverResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateVideoCoverResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateVideoCoverResponse() = default;
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
  shared_ptr<vector<RecognizeVideoCastCrewListAdvanceRequestParams>> params{};
  shared_ptr<Darabonba::Stream> registerUrlObject{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  RecognizeVideoCastCrewListAdvanceRequest() {}

  explicit RecognizeVideoCastCrewListAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (registerUrlObject) {
      res["RegisterUrl"] = boost::any(*registerUrlObject);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
      registerUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["RegisterUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
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
  shared_ptr<string> ocrResultsUrl{};
  shared_ptr<string> ocrVideoResultsUrl{};
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
    if (ocrResultsUrl) {
      res["OcrResultsUrl"] = boost::any(*ocrResultsUrl);
    }
    if (ocrVideoResultsUrl) {
      res["OcrVideoResultsUrl"] = boost::any(*ocrVideoResultsUrl);
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
    if (m.find("OcrResultsUrl") != m.end() && !m["OcrResultsUrl"].empty()) {
      ocrResultsUrl = make_shared<string>(boost::any_cast<string>(m["OcrResultsUrl"]));
    }
    if (m.find("OcrVideoResultsUrl") != m.end() && !m["OcrVideoResultsUrl"].empty()) {
      ocrVideoResultsUrl = make_shared<string>(boost::any_cast<string>(m["OcrVideoResultsUrl"]));
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
  shared_ptr<string> message{};
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
        RecognizeVideoCastCrewListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVideoCastCrewListResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
class SplitVideoPartsRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  SplitVideoPartsRequest() {}

  explicit SplitVideoPartsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~SplitVideoPartsRequest() = default;
};
class SplitVideoPartsAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  SplitVideoPartsAdvanceRequest() {}

  explicit SplitVideoPartsAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~SplitVideoPartsAdvanceRequest() = default;
};
class SplitVideoPartsResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<double> beginTime{};
  shared_ptr<double> endTime{};
  shared_ptr<long> index{};

  SplitVideoPartsResponseBodyDataElements() {}

  explicit SplitVideoPartsResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (index) {
      res["Index"] = boost::any(*index);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<double>(boost::any_cast<double>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<double>(boost::any_cast<double>(m["EndTime"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
  }


  virtual ~SplitVideoPartsResponseBodyDataElements() = default;
};
class SplitVideoPartsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SplitVideoPartsResponseBodyDataElements>> elements{};

  SplitVideoPartsResponseBodyData() {}

  explicit SplitVideoPartsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<SplitVideoPartsResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SplitVideoPartsResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<SplitVideoPartsResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~SplitVideoPartsResponseBodyData() = default;
};
class SplitVideoPartsResponseBody : public Darabonba::Model {
public:
  shared_ptr<SplitVideoPartsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SplitVideoPartsResponseBody() {}

  explicit SplitVideoPartsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SplitVideoPartsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SplitVideoPartsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SplitVideoPartsResponseBody() = default;
};
class SplitVideoPartsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SplitVideoPartsResponseBody> body{};

  SplitVideoPartsResponse() {}

  explicit SplitVideoPartsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SplitVideoPartsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SplitVideoPartsResponseBody>(model1);
      }
    }
  }


  virtual ~SplitVideoPartsResponse() = default;
};
class UnderstandVideoContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  UnderstandVideoContentRequest() {}

  explicit UnderstandVideoContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnderstandVideoContentRequest() = default;
};
class UnderstandVideoContentAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};

  UnderstandVideoContentAdvanceRequest() {}

  explicit UnderstandVideoContentAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
  }


  virtual ~UnderstandVideoContentAdvanceRequest() = default;
};
class UnderstandVideoContentResponseBodyDataVideoInfo : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<double> fps{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  UnderstandVideoContentResponseBodyDataVideoInfo() {}

  explicit UnderstandVideoContentResponseBodyDataVideoInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<double>(boost::any_cast<double>(m["Fps"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~UnderstandVideoContentResponseBodyDataVideoInfo() = default;
};
class UnderstandVideoContentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> tagInfo{};
  shared_ptr<UnderstandVideoContentResponseBodyDataVideoInfo> videoInfo{};

  UnderstandVideoContentResponseBodyData() {}

  explicit UnderstandVideoContentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagInfo) {
      res["TagInfo"] = boost::any(*tagInfo);
    }
    if (videoInfo) {
      res["VideoInfo"] = videoInfo ? boost::any(videoInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TagInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tagInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoInfo"].type()) {
        UnderstandVideoContentResponseBodyDataVideoInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoInfo"]));
        videoInfo = make_shared<UnderstandVideoContentResponseBodyDataVideoInfo>(model1);
      }
    }
  }


  virtual ~UnderstandVideoContentResponseBodyData() = default;
};
class UnderstandVideoContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<UnderstandVideoContentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnderstandVideoContentResponseBody() {}

  explicit UnderstandVideoContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnderstandVideoContentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UnderstandVideoContentResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnderstandVideoContentResponseBody() = default;
};
class UnderstandVideoContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnderstandVideoContentResponseBody> body{};

  UnderstandVideoContentResponse() {}

  explicit UnderstandVideoContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnderstandVideoContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnderstandVideoContentResponseBody>(model1);
      }
    }
  }


  virtual ~UnderstandVideoContentResponse() = default;
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
  DetectVideoShotResponse detectVideoShotWithOptions(shared_ptr<DetectVideoShotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVideoShotResponse detectVideoShot(shared_ptr<DetectVideoShotRequest> request);
  DetectVideoShotResponse detectVideoShotAdvance(shared_ptr<DetectVideoShotAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVideoCoverResponse generateVideoCoverWithOptions(shared_ptr<GenerateVideoCoverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVideoCoverResponse generateVideoCover(shared_ptr<GenerateVideoCoverRequest> request);
  GenerateVideoCoverResponse generateVideoCoverAdvance(shared_ptr<GenerateVideoCoverAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  RecognizeVideoCastCrewListResponse recognizeVideoCastCrewListWithOptions(shared_ptr<RecognizeVideoCastCrewListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVideoCastCrewListResponse recognizeVideoCastCrewList(shared_ptr<RecognizeVideoCastCrewListRequest> request);
  RecognizeVideoCastCrewListResponse recognizeVideoCastCrewListAdvance(shared_ptr<RecognizeVideoCastCrewListAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SplitVideoPartsResponse splitVideoPartsWithOptions(shared_ptr<SplitVideoPartsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SplitVideoPartsResponse splitVideoParts(shared_ptr<SplitVideoPartsRequest> request);
  SplitVideoPartsResponse splitVideoPartsAdvance(shared_ptr<SplitVideoPartsAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnderstandVideoContentResponse understandVideoContentWithOptions(shared_ptr<UnderstandVideoContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnderstandVideoContentResponse understandVideoContent(shared_ptr<UnderstandVideoContentRequest> request);
  UnderstandVideoContentResponse understandVideoContentAdvance(shared_ptr<UnderstandVideoContentAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Videorecog20200320

#endif
