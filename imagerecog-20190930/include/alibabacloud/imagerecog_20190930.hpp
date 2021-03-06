// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMAGERECOG20190930_H_
#define ALIBABACLOUD_IMAGERECOG20190930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imagerecog20190930 {
class GetAsyncJobResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> async{};

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
    if (async) {
      res["Async"] = boost::any(*async);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<string>(boost::any_cast<string>(m["Async"]));
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
class DetectImageElementsRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  DetectImageElementsRequest() {}

  explicit DetectImageElementsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectImageElementsRequest() = default;
};
class DetectImageElementsAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};

  DetectImageElementsAdvanceRequest() {}

  explicit DetectImageElementsAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!urlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("urlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlObject) {
      res["UrlObject"] = boost::any(*urlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
  }


  virtual ~DetectImageElementsAdvanceRequest() = default;
};
class DetectImageElementsResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> y{};
  shared_ptr<double> score{};
  shared_ptr<long> x{};

  DetectImageElementsResponseBodyDataElements() {}

  explicit DetectImageElementsResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
  }


  virtual ~DetectImageElementsResponseBodyDataElements() = default;
};
class DetectImageElementsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectImageElementsResponseBodyDataElements>> elements{};

  DetectImageElementsResponseBodyData() {}

  explicit DetectImageElementsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectImageElementsResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectImageElementsResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectImageElementsResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~DetectImageElementsResponseBodyData() = default;
};
class DetectImageElementsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectImageElementsResponseBodyData> data{};

  DetectImageElementsResponseBody() {}

  explicit DetectImageElementsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageElementsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectImageElementsResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectImageElementsResponseBody() = default;
};
class DetectImageElementsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectImageElementsResponseBody> body{};

  DetectImageElementsResponse() {}

  explicit DetectImageElementsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageElementsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageElementsResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageElementsResponse() = default;
};
class RecognizeVehicleTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVehicleTypeRequest() {}

  explicit RecognizeVehicleTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehicleTypeRequest() = default;
};
class RecognizeVehicleTypeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVehicleTypeAdvanceRequest() {}

  explicit RecognizeVehicleTypeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehicleTypeAdvanceRequest() = default;
};
class RecognizeVehicleTypeResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  RecognizeVehicleTypeResponseBodyDataElements() {}

  explicit RecognizeVehicleTypeResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~RecognizeVehicleTypeResponseBodyDataElements() = default;
};
class RecognizeVehicleTypeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVehicleTypeResponseBodyDataElements>> elements{};
  shared_ptr<double> threshold{};

  RecognizeVehicleTypeResponseBodyData() {}

  explicit RecognizeVehicleTypeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<RecognizeVehicleTypeResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVehicleTypeResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeVehicleTypeResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~RecognizeVehicleTypeResponseBodyData() = default;
};
class RecognizeVehicleTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeVehicleTypeResponseBodyData> data{};

  RecognizeVehicleTypeResponseBody() {}

  explicit RecognizeVehicleTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleTypeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVehicleTypeResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleTypeResponseBody() = default;
};
class RecognizeVehicleTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeVehicleTypeResponseBody> body{};

  RecognizeVehicleTypeResponse() {}

  explicit RecognizeVehicleTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVehicleTypeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleTypeResponse() = default;
};
class RecognizeFoodRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeFoodRequest() {}

  explicit RecognizeFoodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeFoodRequest() = default;
};
class RecognizeFoodAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeFoodAdvanceRequest() {}

  explicit RecognizeFoodAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeFoodAdvanceRequest() = default;
};
class RecognizeFoodResponseBodyDataTopFives : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<double> score{};
  shared_ptr<string> calorie{};

  RecognizeFoodResponseBodyDataTopFives() {}

  explicit RecognizeFoodResponseBodyDataTopFives(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (calorie) {
      res["Calorie"] = boost::any(*calorie);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Calorie") != m.end() && !m["Calorie"].empty()) {
      calorie = make_shared<string>(boost::any_cast<string>(m["Calorie"]));
    }
  }


  virtual ~RecognizeFoodResponseBodyDataTopFives() = default;
};
class RecognizeFoodResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeFoodResponseBodyDataTopFives>> topFives{};

  RecognizeFoodResponseBodyData() {}

  explicit RecognizeFoodResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topFives) {
      vector<boost::any> temp1;
      for(auto item1:*topFives){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopFives"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopFives") != m.end() && !m["TopFives"].empty()) {
      if (typeid(vector<boost::any>) == m["TopFives"].type()) {
        vector<RecognizeFoodResponseBodyDataTopFives> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopFives"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeFoodResponseBodyDataTopFives model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topFives = make_shared<vector<RecognizeFoodResponseBodyDataTopFives>>(expect1);
      }
    }
  }


  virtual ~RecognizeFoodResponseBodyData() = default;
};
class RecognizeFoodResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeFoodResponseBodyData> data{};

  RecognizeFoodResponseBody() {}

  explicit RecognizeFoodResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFoodResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeFoodResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeFoodResponseBody() = default;
};
class RecognizeFoodResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeFoodResponseBody> body{};

  RecognizeFoodResponse() {}

  explicit RecognizeFoodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFoodResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeFoodResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeFoodResponse() = default;
};
class RecognizeImageStyleRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  RecognizeImageStyleRequest() {}

  explicit RecognizeImageStyleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeImageStyleRequest() = default;
};
class RecognizeImageStyleAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};

  RecognizeImageStyleAdvanceRequest() {}

  explicit RecognizeImageStyleAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!urlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("urlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlObject) {
      res["UrlObject"] = boost::any(*urlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
  }


  virtual ~RecognizeImageStyleAdvanceRequest() = default;
};
class RecognizeImageStyleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> styles{};

  RecognizeImageStyleResponseBodyData() {}

  explicit RecognizeImageStyleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (styles) {
      res["Styles"] = boost::any(*styles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Styles") != m.end() && !m["Styles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Styles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Styles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      styles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecognizeImageStyleResponseBodyData() = default;
};
class RecognizeImageStyleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeImageStyleResponseBodyData> data{};

  RecognizeImageStyleResponseBody() {}

  explicit RecognizeImageStyleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeImageStyleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeImageStyleResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeImageStyleResponseBody() = default;
};
class RecognizeImageStyleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeImageStyleResponseBody> body{};

  RecognizeImageStyleResponse() {}

  explicit RecognizeImageStyleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeImageStyleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeImageStyleResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeImageStyleResponse() = default;
};
class RecognizeSceneRequest : public Darabonba::Model {
public:
  shared_ptr<long> imageType{};
  shared_ptr<string> imageURL{};

  RecognizeSceneRequest() {}

  explicit RecognizeSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<long>(boost::any_cast<long>(m["ImageType"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeSceneRequest() = default;
};
class RecognizeSceneAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> imageType{};

  RecognizeSceneAdvanceRequest() {}

  explicit RecognizeSceneAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<long>(boost::any_cast<long>(m["ImageType"]));
    }
  }


  virtual ~RecognizeSceneAdvanceRequest() = default;
};
class RecognizeSceneResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<double> confidence{};

  RecognizeSceneResponseBodyDataTags() {}

  explicit RecognizeSceneResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~RecognizeSceneResponseBodyDataTags() = default;
};
class RecognizeSceneResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeSceneResponseBodyDataTags>> tags{};

  RecognizeSceneResponseBodyData() {}

  explicit RecognizeSceneResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<RecognizeSceneResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeSceneResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<RecognizeSceneResponseBodyDataTags>>(expect1);
      }
    }
  }


  virtual ~RecognizeSceneResponseBodyData() = default;
};
class RecognizeSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeSceneResponseBodyData> data{};

  RecognizeSceneResponseBody() {}

  explicit RecognizeSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeSceneResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeSceneResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeSceneResponseBody() = default;
};
class RecognizeSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeSceneResponseBody> body{};

  RecognizeSceneResponse() {}

  explicit RecognizeSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeSceneResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeSceneResponse() = default;
};
class ClassifyingRubbishRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ClassifyingRubbishRequest() {}

  explicit ClassifyingRubbishRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClassifyingRubbishRequest() = default;
};
class ClassifyingRubbishAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  ClassifyingRubbishAdvanceRequest() {}

  explicit ClassifyingRubbishAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClassifyingRubbishAdvanceRequest() = default;
};
class ClassifyingRubbishResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<double> categoryScore{};
  shared_ptr<string> rubbish{};
  shared_ptr<double> rubbishScore{};
  shared_ptr<string> category{};

  ClassifyingRubbishResponseBodyDataElements() {}

  explicit ClassifyingRubbishResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryScore) {
      res["CategoryScore"] = boost::any(*categoryScore);
    }
    if (rubbish) {
      res["Rubbish"] = boost::any(*rubbish);
    }
    if (rubbishScore) {
      res["RubbishScore"] = boost::any(*rubbishScore);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryScore") != m.end() && !m["CategoryScore"].empty()) {
      categoryScore = make_shared<double>(boost::any_cast<double>(m["CategoryScore"]));
    }
    if (m.find("Rubbish") != m.end() && !m["Rubbish"].empty()) {
      rubbish = make_shared<string>(boost::any_cast<string>(m["Rubbish"]));
    }
    if (m.find("RubbishScore") != m.end() && !m["RubbishScore"].empty()) {
      rubbishScore = make_shared<double>(boost::any_cast<double>(m["RubbishScore"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
  }


  virtual ~ClassifyingRubbishResponseBodyDataElements() = default;
};
class ClassifyingRubbishResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> sensitive{};
  shared_ptr<vector<ClassifyingRubbishResponseBodyDataElements>> elements{};

  ClassifyingRubbishResponseBodyData() {}

  explicit ClassifyingRubbishResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sensitive) {
      res["Sensitive"] = boost::any(*sensitive);
    }
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
    if (m.find("Sensitive") != m.end() && !m["Sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["Sensitive"]));
    }
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<ClassifyingRubbishResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ClassifyingRubbishResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<ClassifyingRubbishResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~ClassifyingRubbishResponseBodyData() = default;
};
class ClassifyingRubbishResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ClassifyingRubbishResponseBodyData> data{};

  ClassifyingRubbishResponseBody() {}

  explicit ClassifyingRubbishResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyingRubbishResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ClassifyingRubbishResponseBodyData>(model1);
      }
    }
  }


  virtual ~ClassifyingRubbishResponseBody() = default;
};
class ClassifyingRubbishResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClassifyingRubbishResponseBody> body{};

  ClassifyingRubbishResponse() {}

  explicit ClassifyingRubbishResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyingRubbishResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClassifyingRubbishResponseBody>(model1);
      }
    }
  }


  virtual ~ClassifyingRubbishResponse() = default;
};
class DetectFruitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectFruitsRequest() {}

  explicit DetectFruitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectFruitsRequest() = default;
};
class DetectFruitsAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectFruitsAdvanceRequest() {}

  explicit DetectFruitsAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectFruitsAdvanceRequest() = default;
};
class DetectFruitsResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<vector<double>> box{};
  shared_ptr<string> name{};

  DetectFruitsResponseBodyDataElements() {}

  explicit DetectFruitsResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Box"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Box"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      box = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DetectFruitsResponseBodyDataElements() = default;
};
class DetectFruitsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectFruitsResponseBodyDataElements>> elements{};

  DetectFruitsResponseBodyData() {}

  explicit DetectFruitsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectFruitsResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectFruitsResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectFruitsResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~DetectFruitsResponseBodyData() = default;
};
class DetectFruitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectFruitsResponseBodyData> data{};

  DetectFruitsResponseBody() {}

  explicit DetectFruitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFruitsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectFruitsResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectFruitsResponseBody() = default;
};
class DetectFruitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectFruitsResponseBody> body{};

  DetectFruitsResponse() {}

  explicit DetectFruitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFruitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectFruitsResponseBody>(model1);
      }
    }
  }


  virtual ~DetectFruitsResponse() = default;
};
class RecognizeImageColorRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<long> colorCount{};

  RecognizeImageColorRequest() {}

  explicit RecognizeImageColorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (colorCount) {
      res["ColorCount"] = boost::any(*colorCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("ColorCount") != m.end() && !m["ColorCount"].empty()) {
      colorCount = make_shared<long>(boost::any_cast<long>(m["ColorCount"]));
    }
  }


  virtual ~RecognizeImageColorRequest() = default;
};
class RecognizeImageColorAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};
  shared_ptr<long> colorCount{};

  RecognizeImageColorAdvanceRequest() {}

  explicit RecognizeImageColorAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!urlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("urlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlObject) {
      res["UrlObject"] = boost::any(*urlObject);
    }
    if (colorCount) {
      res["ColorCount"] = boost::any(*colorCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
    if (m.find("ColorCount") != m.end() && !m["ColorCount"].empty()) {
      colorCount = make_shared<long>(boost::any_cast<long>(m["ColorCount"]));
    }
  }


  virtual ~RecognizeImageColorAdvanceRequest() = default;
};
class RecognizeImageColorResponseBodyDataColorTemplateList : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<double> percentage{};
  shared_ptr<string> label{};

  RecognizeImageColorResponseBodyDataColorTemplateList() {}

  explicit RecognizeImageColorResponseBodyDataColorTemplateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (percentage) {
      res["Percentage"] = boost::any(*percentage);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Percentage") != m.end() && !m["Percentage"].empty()) {
      percentage = make_shared<double>(boost::any_cast<double>(m["Percentage"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~RecognizeImageColorResponseBodyDataColorTemplateList() = default;
};
class RecognizeImageColorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeImageColorResponseBodyDataColorTemplateList>> colorTemplateList{};

  RecognizeImageColorResponseBodyData() {}

  explicit RecognizeImageColorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colorTemplateList) {
      vector<boost::any> temp1;
      for(auto item1:*colorTemplateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColorTemplateList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColorTemplateList") != m.end() && !m["ColorTemplateList"].empty()) {
      if (typeid(vector<boost::any>) == m["ColorTemplateList"].type()) {
        vector<RecognizeImageColorResponseBodyDataColorTemplateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColorTemplateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeImageColorResponseBodyDataColorTemplateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        colorTemplateList = make_shared<vector<RecognizeImageColorResponseBodyDataColorTemplateList>>(expect1);
      }
    }
  }


  virtual ~RecognizeImageColorResponseBodyData() = default;
};
class RecognizeImageColorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeImageColorResponseBodyData> data{};

  RecognizeImageColorResponseBody() {}

  explicit RecognizeImageColorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeImageColorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeImageColorResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeImageColorResponseBody() = default;
};
class RecognizeImageColorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeImageColorResponseBody> body{};

  RecognizeImageColorResponse() {}

  explicit RecognizeImageColorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeImageColorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeImageColorResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeImageColorResponse() = default;
};
class RecognizeLogoRequestTasks : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeLogoRequestTasks() {}

  explicit RecognizeLogoRequestTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeLogoRequestTasks() = default;
};
class RecognizeLogoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeLogoRequestTasks>> tasks{};

  RecognizeLogoRequest() {}

  explicit RecognizeLogoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizeLogoRequestTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLogoRequestTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<RecognizeLogoRequestTasks>>(expect1);
      }
    }
  }


  virtual ~RecognizeLogoRequest() = default;
};
class RecognizeLogoResponseBodyDataElementsResultsLogosData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<double> w{};
  shared_ptr<double> h{};
  shared_ptr<double> y{};
  shared_ptr<string> name{};
  shared_ptr<double> x{};

  RecognizeLogoResponseBodyDataElementsResultsLogosData() {}

  explicit RecognizeLogoResponseBodyDataElementsResultsLogosData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~RecognizeLogoResponseBodyDataElementsResultsLogosData() = default;
};
class RecognizeLogoResponseBodyDataElementsResults : public Darabonba::Model {
public:
  shared_ptr<string> suggestion{};
  shared_ptr<vector<RecognizeLogoResponseBodyDataElementsResultsLogosData>> logosData{};
  shared_ptr<string> label{};
  shared_ptr<double> rate{};

  RecognizeLogoResponseBodyDataElementsResults() {}

  explicit RecognizeLogoResponseBodyDataElementsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (logosData) {
      vector<boost::any> temp1;
      for(auto item1:*logosData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogosData"] = boost::any(temp1);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("LogosData") != m.end() && !m["LogosData"].empty()) {
      if (typeid(vector<boost::any>) == m["LogosData"].type()) {
        vector<RecognizeLogoResponseBodyDataElementsResultsLogosData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogosData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLogoResponseBodyDataElementsResultsLogosData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logosData = make_shared<vector<RecognizeLogoResponseBodyDataElementsResultsLogosData>>(expect1);
      }
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~RecognizeLogoResponseBodyDataElementsResults() = default;
};
class RecognizeLogoResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<RecognizeLogoResponseBodyDataElementsResults>> results{};

  RecognizeLogoResponseBodyDataElements() {}

  explicit RecognizeLogoResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
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
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeLogoResponseBodyDataElementsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLogoResponseBodyDataElementsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeLogoResponseBodyDataElementsResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeLogoResponseBodyDataElements() = default;
};
class RecognizeLogoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeLogoResponseBodyDataElements>> elements{};

  RecognizeLogoResponseBodyData() {}

  explicit RecognizeLogoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizeLogoResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLogoResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeLogoResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeLogoResponseBodyData() = default;
};
class RecognizeLogoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeLogoResponseBodyData> data{};

  RecognizeLogoResponseBody() {}

  explicit RecognizeLogoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeLogoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeLogoResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeLogoResponseBody() = default;
};
class RecognizeLogoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeLogoResponseBody> body{};

  RecognizeLogoResponse() {}

  explicit RecognizeLogoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeLogoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeLogoResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeLogoResponse() = default;
};
class TaggingImageRequest : public Darabonba::Model {
public:
  shared_ptr<long> imageType{};
  shared_ptr<string> imageURL{};
  shared_ptr<bool> async{};

  TaggingImageRequest() {}

  explicit TaggingImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (async) {
      res["Async"] = boost::any(*async);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<long>(boost::any_cast<long>(m["ImageType"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
  }


  virtual ~TaggingImageRequest() = default;
};
class TaggingImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> imageType{};
  shared_ptr<bool> async{};

  TaggingImageAdvanceRequest() {}

  explicit TaggingImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (async) {
      res["Async"] = boost::any(*async);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<long>(boost::any_cast<long>(m["ImageType"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
  }


  virtual ~TaggingImageAdvanceRequest() = default;
};
class TaggingImageResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<double> confidence{};

  TaggingImageResponseBodyDataTags() {}

  explicit TaggingImageResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~TaggingImageResponseBodyDataTags() = default;
};
class TaggingImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<TaggingImageResponseBodyDataTags>> tags{};

  TaggingImageResponseBodyData() {}

  explicit TaggingImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<TaggingImageResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaggingImageResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<TaggingImageResponseBodyDataTags>>(expect1);
      }
    }
  }


  virtual ~TaggingImageResponseBodyData() = default;
};
class TaggingImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<TaggingImageResponseBodyData> data{};

  TaggingImageResponseBody() {}

  explicit TaggingImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TaggingImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TaggingImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~TaggingImageResponseBody() = default;
};
class TaggingImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TaggingImageResponseBody> body{};

  TaggingImageResponse() {}

  explicit TaggingImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TaggingImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaggingImageResponseBody>(model1);
      }
    }
  }


  virtual ~TaggingImageResponse() = default;
};
class EvaluateCertificateQualityRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> type{};

  EvaluateCertificateQualityRequest() {}

  explicit EvaluateCertificateQualityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~EvaluateCertificateQualityRequest() = default;
};
class EvaluateCertificateQualityAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> type{};

  EvaluateCertificateQualityAdvanceRequest() {}

  explicit EvaluateCertificateQualityAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~EvaluateCertificateQualityAdvanceRequest() = default;
};
class EvaluateCertificateQualityResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> pass{};
  shared_ptr<string> score{};

  EvaluateCertificateQualityResponseBodyDataElements() {}

  explicit EvaluateCertificateQualityResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (pass) {
      res["Pass"] = boost::any(*pass);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Pass") != m.end() && !m["Pass"].empty()) {
      pass = make_shared<string>(boost::any_cast<string>(m["Pass"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
  }


  virtual ~EvaluateCertificateQualityResponseBodyDataElements() = default;
};
class EvaluateCertificateQualityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<EvaluateCertificateQualityResponseBodyDataElements>> elements{};

  EvaluateCertificateQualityResponseBodyData() {}

  explicit EvaluateCertificateQualityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<EvaluateCertificateQualityResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EvaluateCertificateQualityResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<EvaluateCertificateQualityResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~EvaluateCertificateQualityResponseBodyData() = default;
};
class EvaluateCertificateQualityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EvaluateCertificateQualityResponseBodyData> data{};

  EvaluateCertificateQualityResponseBody() {}

  explicit EvaluateCertificateQualityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EvaluateCertificateQualityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EvaluateCertificateQualityResponseBodyData>(model1);
      }
    }
  }


  virtual ~EvaluateCertificateQualityResponseBody() = default;
};
class EvaluateCertificateQualityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EvaluateCertificateQualityResponseBody> body{};

  EvaluateCertificateQualityResponse() {}

  explicit EvaluateCertificateQualityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EvaluateCertificateQualityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EvaluateCertificateQualityResponseBody>(model1);
      }
    }
  }


  virtual ~EvaluateCertificateQualityResponse() = default;
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
  DetectImageElementsResponse detectImageElementsWithOptions(shared_ptr<DetectImageElementsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageElementsResponse detectImageElements(shared_ptr<DetectImageElementsRequest> request);
  DetectImageElementsResponse detectImageElementsAdvance(shared_ptr<DetectImageElementsAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehicleTypeResponse recognizeVehicleTypeWithOptions(shared_ptr<RecognizeVehicleTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehicleTypeResponse recognizeVehicleType(shared_ptr<RecognizeVehicleTypeRequest> request);
  RecognizeVehicleTypeResponse recognizeVehicleTypeAdvance(shared_ptr<RecognizeVehicleTypeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFoodResponse recognizeFoodWithOptions(shared_ptr<RecognizeFoodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFoodResponse recognizeFood(shared_ptr<RecognizeFoodRequest> request);
  RecognizeFoodResponse recognizeFoodAdvance(shared_ptr<RecognizeFoodAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeImageStyleResponse recognizeImageStyleWithOptions(shared_ptr<RecognizeImageStyleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeImageStyleResponse recognizeImageStyle(shared_ptr<RecognizeImageStyleRequest> request);
  RecognizeImageStyleResponse recognizeImageStyleAdvance(shared_ptr<RecognizeImageStyleAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeSceneResponse recognizeSceneWithOptions(shared_ptr<RecognizeSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeSceneResponse recognizeScene(shared_ptr<RecognizeSceneRequest> request);
  RecognizeSceneResponse recognizeSceneAdvance(shared_ptr<RecognizeSceneAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClassifyingRubbishResponse classifyingRubbishWithOptions(shared_ptr<ClassifyingRubbishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClassifyingRubbishResponse classifyingRubbish(shared_ptr<ClassifyingRubbishRequest> request);
  ClassifyingRubbishResponse classifyingRubbishAdvance(shared_ptr<ClassifyingRubbishAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectFruitsResponse detectFruitsWithOptions(shared_ptr<DetectFruitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectFruitsResponse detectFruits(shared_ptr<DetectFruitsRequest> request);
  DetectFruitsResponse detectFruitsAdvance(shared_ptr<DetectFruitsAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeImageColorResponse recognizeImageColorWithOptions(shared_ptr<RecognizeImageColorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeImageColorResponse recognizeImageColor(shared_ptr<RecognizeImageColorRequest> request);
  RecognizeImageColorResponse recognizeImageColorAdvance(shared_ptr<RecognizeImageColorAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLogoResponse recognizeLogoWithOptions(shared_ptr<RecognizeLogoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLogoResponse recognizeLogo(shared_ptr<RecognizeLogoRequest> request);
  TaggingImageResponse taggingImageWithOptions(shared_ptr<TaggingImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TaggingImageResponse taggingImage(shared_ptr<TaggingImageRequest> request);
  TaggingImageResponse taggingImageAdvance(shared_ptr<TaggingImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EvaluateCertificateQualityResponse evaluateCertificateQualityWithOptions(shared_ptr<EvaluateCertificateQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EvaluateCertificateQualityResponse evaluateCertificateQuality(shared_ptr<EvaluateCertificateQualityRequest> request);
  EvaluateCertificateQualityResponse evaluateCertificateQualityAdvance(shared_ptr<EvaluateCertificateQualityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imagerecog20190930

#endif
