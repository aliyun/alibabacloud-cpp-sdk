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
class GetAsyncJobResultRequest : public Darabonba::Model {
public:
  shared_ptr<bool> async{};
  shared_ptr<string> jobId{};

  GetAsyncJobResultRequest() {}

  explicit GetAsyncJobResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (async) {
      res["Async"] = boost::any(*async);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncJobResultRequest() = default;
};
class GetAsyncJobResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> result{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> jobId{};

  GetAsyncJobResultResponseBodyData() {}

  explicit GetAsyncJobResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBodyData() = default;
};
class GetAsyncJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAsyncJobResultResponseBodyData> data{};

  GetAsyncJobResultResponseBody() {}

  explicit GetAsyncJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAsyncJobResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsyncJobResultResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponseBody() = default;
};
class GetAsyncJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAsyncJobResultResponseBody> body{};

  GetAsyncJobResultResponse() {}

  explicit GetAsyncJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponse() = default;
};
class DetectVideoShotRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};
  shared_ptr<bool> async{};

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
    if (async) {
      res["Async"] = boost::any(*async);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
  }


  virtual ~DetectVideoShotRequest() = default;
};
class DetectVideoShotAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<bool> async{};

  DetectVideoShotAdvanceRequest() {}

  explicit DetectVideoShotAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (async) {
      res["Async"] = boost::any(*async);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<DetectVideoShotResponseBodyData> data{};

  DetectVideoShotResponseBody() {}

  explicit DetectVideoShotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectVideoShotResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectVideoShotResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectVideoShotResponseBody() = default;
};
class DetectVideoShotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectVideoShotResponseBody> body{};

  DetectVideoShotResponse() {}

  explicit DetectVideoShotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> videoUrl{};
  shared_ptr<bool> async{};
  shared_ptr<bool> isGif{};

  GenerateVideoCoverRequest() {}

  explicit GenerateVideoCoverRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (async) {
      res["Async"] = boost::any(*async);
    }
    if (isGif) {
      res["IsGif"] = boost::any(*isGif);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
    if (m.find("IsGif") != m.end() && !m["IsGif"].empty()) {
      isGif = make_shared<bool>(boost::any_cast<bool>(m["IsGif"]));
    }
  }


  virtual ~GenerateVideoCoverRequest() = default;
};
class GenerateVideoCoverAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<bool> async{};
  shared_ptr<bool> isGif{};

  GenerateVideoCoverAdvanceRequest() {}

  explicit GenerateVideoCoverAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (async) {
      res["Async"] = boost::any(*async);
    }
    if (isGif) {
      res["IsGif"] = boost::any(*isGif);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
    if (m.find("IsGif") != m.end() && !m["IsGif"].empty()) {
      isGif = make_shared<bool>(boost::any_cast<bool>(m["IsGif"]));
    }
  }


  virtual ~GenerateVideoCoverAdvanceRequest() = default;
};
class GenerateVideoCoverResponseBodyDataOutputs : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<double> confidence{};

  GenerateVideoCoverResponseBodyDataOutputs() {}

  explicit GenerateVideoCoverResponseBodyDataOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<GenerateVideoCoverResponseBodyData> data{};

  GenerateVideoCoverResponseBody() {}

  explicit GenerateVideoCoverResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GenerateVideoCoverResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateVideoCoverResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateVideoCoverResponseBody() = default;
};
class GenerateVideoCoverResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateVideoCoverResponseBody> body{};

  GenerateVideoCoverResponse() {}

  explicit GenerateVideoCoverResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateVideoCoverResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateVideoCoverResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateVideoCoverResponse() = default;
};
class UnderstandVideoContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};
  shared_ptr<bool> async{};

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
    if (async) {
      res["Async"] = boost::any(*async);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
  }


  virtual ~UnderstandVideoContentRequest() = default;
};
class UnderstandVideoContentAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};
  shared_ptr<bool> async{};

  UnderstandVideoContentAdvanceRequest() {}

  explicit UnderstandVideoContentAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURLObject"] = boost::any(*videoURLObject);
    }
    if (async) {
      res["Async"] = boost::any(*async);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURLObject") != m.end() && !m["VideoURLObject"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURLObject"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
  }


  virtual ~UnderstandVideoContentAdvanceRequest() = default;
};
class UnderstandVideoContentResponseBodyDataVideoInfo : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> duration{};
  shared_ptr<double> fps{};

  UnderstandVideoContentResponseBodyDataVideoInfo() {}

  explicit UnderstandVideoContentResponseBodyDataVideoInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<double>(boost::any_cast<double>(m["Fps"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<UnderstandVideoContentResponseBodyData> data{};

  UnderstandVideoContentResponseBody() {}

  explicit UnderstandVideoContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UnderstandVideoContentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UnderstandVideoContentResponseBodyData>(model1);
      }
    }
  }


  virtual ~UnderstandVideoContentResponseBody() = default;
};
class UnderstandVideoContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnderstandVideoContentResponseBody> body{};

  UnderstandVideoContentResponse() {}

  explicit UnderstandVideoContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  DetectVideoShotResponse detectVideoShotWithOptions(shared_ptr<DetectVideoShotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVideoShotResponse detectVideoShot(shared_ptr<DetectVideoShotRequest> request);
  DetectVideoShotResponse detectVideoShotAdvance(shared_ptr<DetectVideoShotAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVideoCoverResponse generateVideoCoverWithOptions(shared_ptr<GenerateVideoCoverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVideoCoverResponse generateVideoCover(shared_ptr<GenerateVideoCoverRequest> request);
  GenerateVideoCoverResponse generateVideoCoverAdvance(shared_ptr<GenerateVideoCoverAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnderstandVideoContentResponse understandVideoContentWithOptions(shared_ptr<UnderstandVideoContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnderstandVideoContentResponse understandVideoContent(shared_ptr<UnderstandVideoContentRequest> request);
  UnderstandVideoContentResponse understandVideoContentAdvance(shared_ptr<UnderstandVideoContentAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Videorecog20200320

#endif
