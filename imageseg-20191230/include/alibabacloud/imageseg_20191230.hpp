// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMAGESEG20191230_H_
#define ALIBABACLOUD_IMAGESEG20191230_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imageseg20191230 {
class ChangeSkyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> replaceImageURL{};

  ChangeSkyRequest() {}

  explicit ChangeSkyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (replaceImageURL) {
      res["ReplaceImageURL"] = boost::any(*replaceImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ReplaceImageURL") != m.end() && !m["ReplaceImageURL"].empty()) {
      replaceImageURL = make_shared<string>(boost::any_cast<string>(m["ReplaceImageURL"]));
    }
  }


  virtual ~ChangeSkyRequest() = default;
};
class ChangeSkyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<Darabonba::Stream> replaceImageURLObject{};

  ChangeSkyAdvanceRequest() {}

  explicit ChangeSkyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (replaceImageURLObject) {
      res["ReplaceImageURL"] = boost::any(*replaceImageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("ReplaceImageURL") != m.end() && !m["ReplaceImageURL"].empty()) {
      replaceImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ReplaceImageURL"]));
    }
  }


  virtual ~ChangeSkyAdvanceRequest() = default;
};
class ChangeSkyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ChangeSkyResponseBodyData() {}

  explicit ChangeSkyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeSkyResponseBodyData() = default;
};
class ChangeSkyResponseBody : public Darabonba::Model {
public:
  shared_ptr<ChangeSkyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ChangeSkyResponseBody() {}

  explicit ChangeSkyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeSkyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChangeSkyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChangeSkyResponseBody() = default;
};
class ChangeSkyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeSkyResponseBody> body{};

  ChangeSkyResponse() {}

  explicit ChangeSkyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeSkyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeSkyResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeSkyResponse() = default;
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
        GetAsyncJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponse() = default;
};
class ParseFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ParseFaceRequest() {}

  explicit ParseFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ParseFaceRequest() = default;
};
class ParseFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  ParseFaceAdvanceRequest() {}

  explicit ParseFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ParseFaceAdvanceRequest() = default;
};
class ParseFaceResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> name{};

  ParseFaceResponseBodyDataElements() {}

  explicit ParseFaceResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ParseFaceResponseBodyDataElements() = default;
};
class ParseFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ParseFaceResponseBodyDataElements>> elements{};
  shared_ptr<string> originImageURL{};

  ParseFaceResponseBodyData() {}

  explicit ParseFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (originImageURL) {
      res["OriginImageURL"] = boost::any(*originImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<ParseFaceResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ParseFaceResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<ParseFaceResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("OriginImageURL") != m.end() && !m["OriginImageURL"].empty()) {
      originImageURL = make_shared<string>(boost::any_cast<string>(m["OriginImageURL"]));
    }
  }


  virtual ~ParseFaceResponseBodyData() = default;
};
class ParseFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ParseFaceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ParseFaceResponseBody() {}

  explicit ParseFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ParseFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ParseFaceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ParseFaceResponseBody() = default;
};
class ParseFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ParseFaceResponseBody> body{};

  ParseFaceResponse() {}

  explicit ParseFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ParseFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ParseFaceResponseBody>(model1);
      }
    }
  }


  virtual ~ParseFaceResponse() = default;
};
class RefineMaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> maskImageURL{};

  RefineMaskRequest() {}

  explicit RefineMaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (maskImageURL) {
      res["MaskImageURL"] = boost::any(*maskImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("MaskImageURL") != m.end() && !m["MaskImageURL"].empty()) {
      maskImageURL = make_shared<string>(boost::any_cast<string>(m["MaskImageURL"]));
    }
  }


  virtual ~RefineMaskRequest() = default;
};
class RefineMaskAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<Darabonba::Stream> maskImageURLObject{};

  RefineMaskAdvanceRequest() {}

  explicit RefineMaskAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (maskImageURLObject) {
      res["MaskImageURL"] = boost::any(*maskImageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("MaskImageURL") != m.end() && !m["MaskImageURL"].empty()) {
      maskImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["MaskImageURL"]));
    }
  }


  virtual ~RefineMaskAdvanceRequest() = default;
};
class RefineMaskResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RefineMaskResponseBodyDataElements() {}

  explicit RefineMaskResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefineMaskResponseBodyDataElements() = default;
};
class RefineMaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RefineMaskResponseBodyDataElements>> elements{};

  RefineMaskResponseBodyData() {}

  explicit RefineMaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RefineMaskResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefineMaskResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RefineMaskResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RefineMaskResponseBodyData() = default;
};
class RefineMaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<RefineMaskResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RefineMaskResponseBody() {}

  explicit RefineMaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefineMaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RefineMaskResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefineMaskResponseBody() = default;
};
class RefineMaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefineMaskResponseBody> body{};

  RefineMaskResponse() {}

  explicit RefineMaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefineMaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefineMaskResponseBody>(model1);
      }
    }
  }


  virtual ~RefineMaskResponse() = default;
};
class SegmentBodyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> returnForm{};

  SegmentBodyRequest() {}

  explicit SegmentBodyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentBodyRequest() = default;
};
class SegmentBodyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> returnForm{};

  SegmentBodyAdvanceRequest() {}

  explicit SegmentBodyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentBodyAdvanceRequest() = default;
};
class SegmentBodyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentBodyResponseBodyData() {}

  explicit SegmentBodyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentBodyResponseBodyData() = default;
};
class SegmentBodyResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentBodyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentBodyResponseBody() {}

  explicit SegmentBodyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentBodyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentBodyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentBodyResponseBody() = default;
};
class SegmentBodyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentBodyResponseBody> body{};

  SegmentBodyResponse() {}

  explicit SegmentBodyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentBodyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentBodyResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentBodyResponse() = default;
};
class SegmentClothRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clothClass{};
  shared_ptr<string> imageURL{};
  shared_ptr<long> outMode{};
  shared_ptr<string> returnForm{};

  SegmentClothRequest() {}

  explicit SegmentClothRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothClass) {
      res["ClothClass"] = boost::any(*clothClass);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (outMode) {
      res["OutMode"] = boost::any(*outMode);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClothClass") != m.end() && !m["ClothClass"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClothClass"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClothClass"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clothClass = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("OutMode") != m.end() && !m["OutMode"].empty()) {
      outMode = make_shared<long>(boost::any_cast<long>(m["OutMode"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentClothRequest() = default;
};
class SegmentClothAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clothClass{};
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> outMode{};
  shared_ptr<string> returnForm{};

  SegmentClothAdvanceRequest() {}

  explicit SegmentClothAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothClass) {
      res["ClothClass"] = boost::any(*clothClass);
    }
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (outMode) {
      res["OutMode"] = boost::any(*outMode);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClothClass") != m.end() && !m["ClothClass"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClothClass"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClothClass"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clothClass = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("OutMode") != m.end() && !m["OutMode"].empty()) {
      outMode = make_shared<long>(boost::any_cast<long>(m["OutMode"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentClothAdvanceRequest() = default;
};
class SegmentClothResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> classUrl{};
  shared_ptr<string> imageURL{};

  SegmentClothResponseBodyDataElements() {}

  explicit SegmentClothResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classUrl) {
      res["ClassUrl"] = boost::any(*classUrl);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassUrl") != m.end() && !m["ClassUrl"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ClassUrl"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      classUrl = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~SegmentClothResponseBodyDataElements() = default;
};
class SegmentClothResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SegmentClothResponseBodyDataElements>> elements{};

  SegmentClothResponseBodyData() {}

  explicit SegmentClothResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<SegmentClothResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SegmentClothResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<SegmentClothResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~SegmentClothResponseBodyData() = default;
};
class SegmentClothResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentClothResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentClothResponseBody() {}

  explicit SegmentClothResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentClothResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentClothResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentClothResponseBody() = default;
};
class SegmentClothResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentClothResponseBody> body{};

  SegmentClothResponse() {}

  explicit SegmentClothResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentClothResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentClothResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentClothResponse() = default;
};
class SegmentCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> returnForm{};

  SegmentCommodityRequest() {}

  explicit SegmentCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentCommodityRequest() = default;
};
class SegmentCommodityAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> returnForm{};

  SegmentCommodityAdvanceRequest() {}

  explicit SegmentCommodityAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentCommodityAdvanceRequest() = default;
};
class SegmentCommodityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentCommodityResponseBodyData() {}

  explicit SegmentCommodityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentCommodityResponseBodyData() = default;
};
class SegmentCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentCommodityResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentCommodityResponseBody() {}

  explicit SegmentCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentCommodityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentCommodityResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentCommodityResponseBody() = default;
};
class SegmentCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentCommodityResponseBody> body{};

  SegmentCommodityResponse() {}

  explicit SegmentCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentCommodityResponse() = default;
};
class SegmentCommonImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> returnForm{};

  SegmentCommonImageRequest() {}

  explicit SegmentCommonImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentCommonImageRequest() = default;
};
class SegmentCommonImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> returnForm{};

  SegmentCommonImageAdvanceRequest() {}

  explicit SegmentCommonImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentCommonImageAdvanceRequest() = default;
};
class SegmentCommonImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentCommonImageResponseBodyData() {}

  explicit SegmentCommonImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentCommonImageResponseBodyData() = default;
};
class SegmentCommonImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentCommonImageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentCommonImageResponseBody() {}

  explicit SegmentCommonImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentCommonImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentCommonImageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentCommonImageResponseBody() = default;
};
class SegmentCommonImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentCommonImageResponseBody> body{};

  SegmentCommonImageResponse() {}

  explicit SegmentCommonImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentCommonImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentCommonImageResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentCommonImageResponse() = default;
};
class SegmentFoodRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> returnForm{};

  SegmentFoodRequest() {}

  explicit SegmentFoodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentFoodRequest() = default;
};
class SegmentFoodAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> returnForm{};

  SegmentFoodAdvanceRequest() {}

  explicit SegmentFoodAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentFoodAdvanceRequest() = default;
};
class SegmentFoodResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentFoodResponseBodyData() {}

  explicit SegmentFoodResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentFoodResponseBodyData() = default;
};
class SegmentFoodResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentFoodResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentFoodResponseBody() {}

  explicit SegmentFoodResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentFoodResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentFoodResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentFoodResponseBody() = default;
};
class SegmentFoodResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentFoodResponseBody> body{};

  SegmentFoodResponse() {}

  explicit SegmentFoodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentFoodResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentFoodResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentFoodResponse() = default;
};
class SegmentHDBodyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentHDBodyRequest() {}

  explicit SegmentHDBodyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHDBodyRequest() = default;
};
class SegmentHDBodyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  SegmentHDBodyAdvanceRequest() {}

  explicit SegmentHDBodyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHDBodyAdvanceRequest() = default;
};
class SegmentHDBodyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentHDBodyResponseBodyData() {}

  explicit SegmentHDBodyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHDBodyResponseBodyData() = default;
};
class SegmentHDBodyResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentHDBodyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentHDBodyResponseBody() {}

  explicit SegmentHDBodyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHDBodyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentHDBodyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentHDBodyResponseBody() = default;
};
class SegmentHDBodyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentHDBodyResponseBody> body{};

  SegmentHDBodyResponse() {}

  explicit SegmentHDBodyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHDBodyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentHDBodyResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentHDBodyResponse() = default;
};
class SegmentHDCommonImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  SegmentHDCommonImageRequest() {}

  explicit SegmentHDCommonImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHDCommonImageRequest() = default;
};
class SegmentHDCommonImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};

  SegmentHDCommonImageAdvanceRequest() {}

  explicit SegmentHDCommonImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrlObject) {
      res["ImageUrl"] = boost::any(*imageUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrl"]));
    }
  }


  virtual ~SegmentHDCommonImageAdvanceRequest() = default;
};
class SegmentHDCommonImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  SegmentHDCommonImageResponseBodyData() {}

  explicit SegmentHDCommonImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHDCommonImageResponseBodyData() = default;
};
class SegmentHDCommonImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentHDCommonImageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SegmentHDCommonImageResponseBody() {}

  explicit SegmentHDCommonImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHDCommonImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentHDCommonImageResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentHDCommonImageResponseBody() = default;
};
class SegmentHDCommonImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentHDCommonImageResponseBody> body{};

  SegmentHDCommonImageResponse() {}

  explicit SegmentHDCommonImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHDCommonImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentHDCommonImageResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentHDCommonImageResponse() = default;
};
class SegmentHDSkyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentHDSkyRequest() {}

  explicit SegmentHDSkyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHDSkyRequest() = default;
};
class SegmentHDSkyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  SegmentHDSkyAdvanceRequest() {}

  explicit SegmentHDSkyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHDSkyAdvanceRequest() = default;
};
class SegmentHDSkyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentHDSkyResponseBodyData() {}

  explicit SegmentHDSkyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHDSkyResponseBodyData() = default;
};
class SegmentHDSkyResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentHDSkyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentHDSkyResponseBody() {}

  explicit SegmentHDSkyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHDSkyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentHDSkyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentHDSkyResponseBody() = default;
};
class SegmentHDSkyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentHDSkyResponseBody> body{};

  SegmentHDSkyResponse() {}

  explicit SegmentHDSkyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHDSkyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentHDSkyResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentHDSkyResponse() = default;
};
class SegmentHairRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentHairRequest() {}

  explicit SegmentHairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHairRequest() = default;
};
class SegmentHairAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  SegmentHairAdvanceRequest() {}

  explicit SegmentHairAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentHairAdvanceRequest() = default;
};
class SegmentHairResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<string> imageURL{};
  shared_ptr<long> width{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  SegmentHairResponseBodyDataElements() {}

  explicit SegmentHairResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (width) {
      res["Width"] = boost::any(*width);
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
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~SegmentHairResponseBodyDataElements() = default;
};
class SegmentHairResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SegmentHairResponseBodyDataElements>> elements{};

  SegmentHairResponseBodyData() {}

  explicit SegmentHairResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<SegmentHairResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SegmentHairResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<SegmentHairResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~SegmentHairResponseBodyData() = default;
};
class SegmentHairResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentHairResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentHairResponseBody() {}

  explicit SegmentHairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHairResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentHairResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentHairResponseBody() = default;
};
class SegmentHairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentHairResponseBody> body{};

  SegmentHairResponse() {}

  explicit SegmentHairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentHairResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentHairResponse() = default;
};
class SegmentHeadRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> returnForm{};

  SegmentHeadRequest() {}

  explicit SegmentHeadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentHeadRequest() = default;
};
class SegmentHeadAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> returnForm{};

  SegmentHeadAdvanceRequest() {}

  explicit SegmentHeadAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
  }


  virtual ~SegmentHeadAdvanceRequest() = default;
};
class SegmentHeadResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<string> imageURL{};
  shared_ptr<long> width{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  SegmentHeadResponseBodyDataElements() {}

  explicit SegmentHeadResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (width) {
      res["Width"] = boost::any(*width);
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
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~SegmentHeadResponseBodyDataElements() = default;
};
class SegmentHeadResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SegmentHeadResponseBodyDataElements>> elements{};

  SegmentHeadResponseBodyData() {}

  explicit SegmentHeadResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<SegmentHeadResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SegmentHeadResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<SegmentHeadResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~SegmentHeadResponseBodyData() = default;
};
class SegmentHeadResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentHeadResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentHeadResponseBody() {}

  explicit SegmentHeadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHeadResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentHeadResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentHeadResponseBody() = default;
};
class SegmentHeadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentHeadResponseBody> body{};

  SegmentHeadResponse() {}

  explicit SegmentHeadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentHeadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentHeadResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentHeadResponse() = default;
};
class SegmentSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentSceneRequest() {}

  explicit SegmentSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentSceneRequest() = default;
};
class SegmentSceneAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  SegmentSceneAdvanceRequest() {}

  explicit SegmentSceneAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentSceneAdvanceRequest() = default;
};
class SegmentSceneResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentSceneResponseBodyData() {}

  explicit SegmentSceneResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentSceneResponseBodyData() = default;
};
class SegmentSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentSceneResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentSceneResponseBody() {}

  explicit SegmentSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentSceneResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentSceneResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentSceneResponseBody() = default;
};
class SegmentSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentSceneResponseBody> body{};

  SegmentSceneResponse() {}

  explicit SegmentSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentSceneResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentSceneResponse() = default;
};
class SegmentSkinRequest : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  SegmentSkinRequest() {}

  explicit SegmentSkinRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~SegmentSkinRequest() = default;
};
class SegmentSkinAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  SegmentSkinAdvanceRequest() {}

  explicit SegmentSkinAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~SegmentSkinAdvanceRequest() = default;
};
class SegmentSkinResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  SegmentSkinResponseBodyData() {}

  explicit SegmentSkinResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~SegmentSkinResponseBodyData() = default;
};
class SegmentSkinResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentSkinResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentSkinResponseBody() {}

  explicit SegmentSkinResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentSkinResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentSkinResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentSkinResponseBody() = default;
};
class SegmentSkinResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentSkinResponseBody> body{};

  SegmentSkinResponse() {}

  explicit SegmentSkinResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentSkinResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentSkinResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentSkinResponse() = default;
};
class SegmentSkyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentSkyRequest() {}

  explicit SegmentSkyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentSkyRequest() = default;
};
class SegmentSkyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  SegmentSkyAdvanceRequest() {}

  explicit SegmentSkyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentSkyAdvanceRequest() = default;
};
class SegmentSkyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SegmentSkyResponseBodyData() {}

  explicit SegmentSkyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentSkyResponseBodyData() = default;
};
class SegmentSkyResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentSkyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SegmentSkyResponseBody() {}

  explicit SegmentSkyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentSkyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentSkyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentSkyResponseBody() = default;
};
class SegmentSkyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentSkyResponseBody> body{};

  SegmentSkyResponse() {}

  explicit SegmentSkyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentSkyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentSkyResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentSkyResponse() = default;
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
  ChangeSkyResponse changeSkyWithOptions(shared_ptr<ChangeSkyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeSkyResponse changeSky(shared_ptr<ChangeSkyRequest> request);
  ChangeSkyResponse changeSkyAdvance(shared_ptr<ChangeSkyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  ParseFaceResponse parseFaceWithOptions(shared_ptr<ParseFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ParseFaceResponse parseFace(shared_ptr<ParseFaceRequest> request);
  ParseFaceResponse parseFaceAdvance(shared_ptr<ParseFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefineMaskResponse refineMaskWithOptions(shared_ptr<RefineMaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefineMaskResponse refineMask(shared_ptr<RefineMaskRequest> request);
  RefineMaskResponse refineMaskAdvance(shared_ptr<RefineMaskAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentBodyResponse segmentBodyWithOptions(shared_ptr<SegmentBodyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentBodyResponse segmentBody(shared_ptr<SegmentBodyRequest> request);
  SegmentBodyResponse segmentBodyAdvance(shared_ptr<SegmentBodyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentClothResponse segmentClothWithOptions(shared_ptr<SegmentClothRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentClothResponse segmentCloth(shared_ptr<SegmentClothRequest> request);
  SegmentClothResponse segmentClothAdvance(shared_ptr<SegmentClothAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentCommodityResponse segmentCommodityWithOptions(shared_ptr<SegmentCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentCommodityResponse segmentCommodity(shared_ptr<SegmentCommodityRequest> request);
  SegmentCommodityResponse segmentCommodityAdvance(shared_ptr<SegmentCommodityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentCommonImageResponse segmentCommonImageWithOptions(shared_ptr<SegmentCommonImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentCommonImageResponse segmentCommonImage(shared_ptr<SegmentCommonImageRequest> request);
  SegmentCommonImageResponse segmentCommonImageAdvance(shared_ptr<SegmentCommonImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentFoodResponse segmentFoodWithOptions(shared_ptr<SegmentFoodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentFoodResponse segmentFood(shared_ptr<SegmentFoodRequest> request);
  SegmentFoodResponse segmentFoodAdvance(shared_ptr<SegmentFoodAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHDBodyResponse segmentHDBodyWithOptions(shared_ptr<SegmentHDBodyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHDBodyResponse segmentHDBody(shared_ptr<SegmentHDBodyRequest> request);
  SegmentHDBodyResponse segmentHDBodyAdvance(shared_ptr<SegmentHDBodyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHDCommonImageResponse segmentHDCommonImageWithOptions(shared_ptr<SegmentHDCommonImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHDCommonImageResponse segmentHDCommonImage(shared_ptr<SegmentHDCommonImageRequest> request);
  SegmentHDCommonImageResponse segmentHDCommonImageAdvance(shared_ptr<SegmentHDCommonImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHDSkyResponse segmentHDSkyWithOptions(shared_ptr<SegmentHDSkyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHDSkyResponse segmentHDSky(shared_ptr<SegmentHDSkyRequest> request);
  SegmentHDSkyResponse segmentHDSkyAdvance(shared_ptr<SegmentHDSkyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHairResponse segmentHairWithOptions(shared_ptr<SegmentHairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHairResponse segmentHair(shared_ptr<SegmentHairRequest> request);
  SegmentHairResponse segmentHairAdvance(shared_ptr<SegmentHairAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHeadResponse segmentHeadWithOptions(shared_ptr<SegmentHeadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentHeadResponse segmentHead(shared_ptr<SegmentHeadRequest> request);
  SegmentHeadResponse segmentHeadAdvance(shared_ptr<SegmentHeadAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentSceneResponse segmentSceneWithOptions(shared_ptr<SegmentSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentSceneResponse segmentScene(shared_ptr<SegmentSceneRequest> request);
  SegmentSceneResponse segmentSceneAdvance(shared_ptr<SegmentSceneAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentSkinResponse segmentSkinWithOptions(shared_ptr<SegmentSkinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentSkinResponse segmentSkin(shared_ptr<SegmentSkinRequest> request);
  SegmentSkinResponse segmentSkinAdvance(shared_ptr<SegmentSkinAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentSkyResponse segmentSkyWithOptions(shared_ptr<SegmentSkyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentSkyResponse segmentSky(shared_ptr<SegmentSkyRequest> request);
  SegmentSkyResponse segmentSkyAdvance(shared_ptr<SegmentSkyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imageseg20191230

#endif
