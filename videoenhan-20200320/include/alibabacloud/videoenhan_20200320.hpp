// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VIDEOENHAN20200320_H_
#define ALIBABACLOUD_VIDEOENHAN20200320_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Videoenhan20200320 {
class AbstractEcommerceVideoRequest : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<long> height{};
  shared_ptr<string> videoUrl{};
  shared_ptr<long> width{};

  AbstractEcommerceVideoRequest() {}

  explicit AbstractEcommerceVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~AbstractEcommerceVideoRequest() = default;
};
class AbstractEcommerceVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<long> height{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<long> width{};

  AbstractEcommerceVideoAdvanceRequest() {}

  explicit AbstractEcommerceVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~AbstractEcommerceVideoAdvanceRequest() = default;
};
class AbstractEcommerceVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoCoverUrl{};
  shared_ptr<string> videoUrl{};

  AbstractEcommerceVideoResponseBodyData() {}

  explicit AbstractEcommerceVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoCoverUrl) {
      res["VideoCoverUrl"] = boost::any(*videoCoverUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoCoverUrl") != m.end() && !m["VideoCoverUrl"].empty()) {
      videoCoverUrl = make_shared<string>(boost::any_cast<string>(m["VideoCoverUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~AbstractEcommerceVideoResponseBodyData() = default;
};
class AbstractEcommerceVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<AbstractEcommerceVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AbstractEcommerceVideoResponseBody() {}

  explicit AbstractEcommerceVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbstractEcommerceVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AbstractEcommerceVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AbstractEcommerceVideoResponseBody() = default;
};
class AbstractEcommerceVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbstractEcommerceVideoResponseBody> body{};

  AbstractEcommerceVideoResponse() {}

  explicit AbstractEcommerceVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbstractEcommerceVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbstractEcommerceVideoResponseBody>(model1);
      }
    }
  }


  virtual ~AbstractEcommerceVideoResponse() = default;
};
class AbstractFilmVideoRequest : public Darabonba::Model {
public:
  shared_ptr<long> length{};
  shared_ptr<string> videoUrl{};

  AbstractFilmVideoRequest() {}

  explicit AbstractFilmVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (length) {
      res["Length"] = boost::any(*length);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<long>(boost::any_cast<long>(m["Length"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~AbstractFilmVideoRequest() = default;
};
class AbstractFilmVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> length{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  AbstractFilmVideoAdvanceRequest() {}

  explicit AbstractFilmVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (length) {
      res["Length"] = boost::any(*length);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<long>(boost::any_cast<long>(m["Length"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~AbstractFilmVideoAdvanceRequest() = default;
};
class AbstractFilmVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  AbstractFilmVideoResponseBodyData() {}

  explicit AbstractFilmVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AbstractFilmVideoResponseBodyData() = default;
};
class AbstractFilmVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<AbstractFilmVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AbstractFilmVideoResponseBody() {}

  explicit AbstractFilmVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbstractFilmVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AbstractFilmVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AbstractFilmVideoResponseBody() = default;
};
class AbstractFilmVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbstractFilmVideoResponseBody> body{};

  AbstractFilmVideoResponse() {}

  explicit AbstractFilmVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbstractFilmVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbstractFilmVideoResponseBody>(model1);
      }
    }
  }


  virtual ~AbstractFilmVideoResponse() = default;
};
class AddFaceVideoTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoScene{};
  shared_ptr<string> videoURL{};

  AddFaceVideoTemplateRequest() {}

  explicit AddFaceVideoTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoScene) {
      res["VideoScene"] = boost::any(*videoScene);
    }
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoScene") != m.end() && !m["VideoScene"].empty()) {
      videoScene = make_shared<string>(boost::any_cast<string>(m["VideoScene"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~AddFaceVideoTemplateRequest() = default;
};
class AddFaceVideoTemplateAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoScene{};
  shared_ptr<Darabonba::Stream> videoURLObject{};

  AddFaceVideoTemplateAdvanceRequest() {}

  explicit AddFaceVideoTemplateAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoScene) {
      res["VideoScene"] = boost::any(*videoScene);
    }
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoScene") != m.end() && !m["VideoScene"].empty()) {
      videoScene = make_shared<string>(boost::any_cast<string>(m["VideoScene"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
  }


  virtual ~AddFaceVideoTemplateAdvanceRequest() = default;
};
class AddFaceVideoTemplateResponseBodyDateFaceInfos : public Darabonba::Model {
public:
  shared_ptr<string> templateFaceID{};
  shared_ptr<string> templateFaceURL{};

  AddFaceVideoTemplateResponseBodyDateFaceInfos() {}

  explicit AddFaceVideoTemplateResponseBodyDateFaceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateFaceID) {
      res["TemplateFaceID"] = boost::any(*templateFaceID);
    }
    if (templateFaceURL) {
      res["TemplateFaceURL"] = boost::any(*templateFaceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateFaceID") != m.end() && !m["TemplateFaceID"].empty()) {
      templateFaceID = make_shared<string>(boost::any_cast<string>(m["TemplateFaceID"]));
    }
    if (m.find("TemplateFaceURL") != m.end() && !m["TemplateFaceURL"].empty()) {
      templateFaceURL = make_shared<string>(boost::any_cast<string>(m["TemplateFaceURL"]));
    }
  }


  virtual ~AddFaceVideoTemplateResponseBodyDateFaceInfos() = default;
};
class AddFaceVideoTemplateResponseBodyDate : public Darabonba::Model {
public:
  shared_ptr<vector<AddFaceVideoTemplateResponseBodyDateFaceInfos>> faceInfos{};
  shared_ptr<string> templateId{};
  shared_ptr<string> transResult{};

  AddFaceVideoTemplateResponseBodyDate() {}

  explicit AddFaceVideoTemplateResponseBodyDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*faceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceInfos"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (transResult) {
      res["TransResult"] = boost::any(*transResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceInfos") != m.end() && !m["FaceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceInfos"].type()) {
        vector<AddFaceVideoTemplateResponseBodyDateFaceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddFaceVideoTemplateResponseBodyDateFaceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceInfos = make_shared<vector<AddFaceVideoTemplateResponseBodyDateFaceInfos>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TransResult") != m.end() && !m["TransResult"].empty()) {
      transResult = make_shared<string>(boost::any_cast<string>(m["TransResult"]));
    }
  }


  virtual ~AddFaceVideoTemplateResponseBodyDate() = default;
};
class AddFaceVideoTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddFaceVideoTemplateResponseBodyDate> date{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddFaceVideoTemplateResponseBody() {}

  explicit AddFaceVideoTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = date ? boost::any(date->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      if (typeid(map<string, boost::any>) == m["Date"].type()) {
        AddFaceVideoTemplateResponseBodyDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Date"]));
        date = make_shared<AddFaceVideoTemplateResponseBodyDate>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddFaceVideoTemplateResponseBody() = default;
};
class AddFaceVideoTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFaceVideoTemplateResponseBody> body{};

  AddFaceVideoTemplateResponse() {}

  explicit AddFaceVideoTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFaceVideoTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceVideoTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceVideoTemplateResponse() = default;
};
class AdjustVideoColorRequest : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<long> videoBitrate{};
  shared_ptr<string> videoCodec{};
  shared_ptr<string> videoFormat{};
  shared_ptr<string> videoUrl{};

  AdjustVideoColorRequest() {}

  explicit AdjustVideoColorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (videoBitrate) {
      res["VideoBitrate"] = boost::any(*videoBitrate);
    }
    if (videoCodec) {
      res["VideoCodec"] = boost::any(*videoCodec);
    }
    if (videoFormat) {
      res["VideoFormat"] = boost::any(*videoFormat);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("VideoBitrate") != m.end() && !m["VideoBitrate"].empty()) {
      videoBitrate = make_shared<long>(boost::any_cast<long>(m["VideoBitrate"]));
    }
    if (m.find("VideoCodec") != m.end() && !m["VideoCodec"].empty()) {
      videoCodec = make_shared<string>(boost::any_cast<string>(m["VideoCodec"]));
    }
    if (m.find("VideoFormat") != m.end() && !m["VideoFormat"].empty()) {
      videoFormat = make_shared<string>(boost::any_cast<string>(m["VideoFormat"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~AdjustVideoColorRequest() = default;
};
class AdjustVideoColorAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<long> videoBitrate{};
  shared_ptr<string> videoCodec{};
  shared_ptr<string> videoFormat{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  AdjustVideoColorAdvanceRequest() {}

  explicit AdjustVideoColorAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (videoBitrate) {
      res["VideoBitrate"] = boost::any(*videoBitrate);
    }
    if (videoCodec) {
      res["VideoCodec"] = boost::any(*videoCodec);
    }
    if (videoFormat) {
      res["VideoFormat"] = boost::any(*videoFormat);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("VideoBitrate") != m.end() && !m["VideoBitrate"].empty()) {
      videoBitrate = make_shared<long>(boost::any_cast<long>(m["VideoBitrate"]));
    }
    if (m.find("VideoCodec") != m.end() && !m["VideoCodec"].empty()) {
      videoCodec = make_shared<string>(boost::any_cast<string>(m["VideoCodec"]));
    }
    if (m.find("VideoFormat") != m.end() && !m["VideoFormat"].empty()) {
      videoFormat = make_shared<string>(boost::any_cast<string>(m["VideoFormat"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~AdjustVideoColorAdvanceRequest() = default;
};
class AdjustVideoColorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  AdjustVideoColorResponseBodyData() {}

  explicit AdjustVideoColorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AdjustVideoColorResponseBodyData() = default;
};
class AdjustVideoColorResponseBody : public Darabonba::Model {
public:
  shared_ptr<AdjustVideoColorResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AdjustVideoColorResponseBody() {}

  explicit AdjustVideoColorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AdjustVideoColorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AdjustVideoColorResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AdjustVideoColorResponseBody() = default;
};
class AdjustVideoColorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AdjustVideoColorResponseBody> body{};

  AdjustVideoColorResponse() {}

  explicit AdjustVideoColorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AdjustVideoColorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AdjustVideoColorResponseBody>(model1);
      }
    }
  }


  virtual ~AdjustVideoColorResponse() = default;
};
class ChangeVideoSizeRequest : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<string> cropType{};
  shared_ptr<string> fillType{};
  shared_ptr<long> g{};
  shared_ptr<long> height{};
  shared_ptr<long> r{};
  shared_ptr<double> tightness{};
  shared_ptr<string> videoUrl{};
  shared_ptr<long> width{};

  ChangeVideoSizeRequest() {}

  explicit ChangeVideoSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (cropType) {
      res["CropType"] = boost::any(*cropType);
    }
    if (fillType) {
      res["FillType"] = boost::any(*fillType);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    if (tightness) {
      res["Tightness"] = boost::any(*tightness);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("CropType") != m.end() && !m["CropType"].empty()) {
      cropType = make_shared<string>(boost::any_cast<string>(m["CropType"]));
    }
    if (m.find("FillType") != m.end() && !m["FillType"].empty()) {
      fillType = make_shared<string>(boost::any_cast<string>(m["FillType"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
    if (m.find("Tightness") != m.end() && !m["Tightness"].empty()) {
      tightness = make_shared<double>(boost::any_cast<double>(m["Tightness"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~ChangeVideoSizeRequest() = default;
};
class ChangeVideoSizeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<string> cropType{};
  shared_ptr<string> fillType{};
  shared_ptr<long> g{};
  shared_ptr<long> height{};
  shared_ptr<long> r{};
  shared_ptr<double> tightness{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<long> width{};

  ChangeVideoSizeAdvanceRequest() {}

  explicit ChangeVideoSizeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (cropType) {
      res["CropType"] = boost::any(*cropType);
    }
    if (fillType) {
      res["FillType"] = boost::any(*fillType);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    if (tightness) {
      res["Tightness"] = boost::any(*tightness);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("CropType") != m.end() && !m["CropType"].empty()) {
      cropType = make_shared<string>(boost::any_cast<string>(m["CropType"]));
    }
    if (m.find("FillType") != m.end() && !m["FillType"].empty()) {
      fillType = make_shared<string>(boost::any_cast<string>(m["FillType"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
    if (m.find("Tightness") != m.end() && !m["Tightness"].empty()) {
      tightness = make_shared<double>(boost::any_cast<double>(m["Tightness"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~ChangeVideoSizeAdvanceRequest() = default;
};
class ChangeVideoSizeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoCoverUrl{};
  shared_ptr<string> videoUrl{};

  ChangeVideoSizeResponseBodyData() {}

  explicit ChangeVideoSizeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoCoverUrl) {
      res["VideoCoverUrl"] = boost::any(*videoCoverUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoCoverUrl") != m.end() && !m["VideoCoverUrl"].empty()) {
      videoCoverUrl = make_shared<string>(boost::any_cast<string>(m["VideoCoverUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~ChangeVideoSizeResponseBodyData() = default;
};
class ChangeVideoSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<ChangeVideoSizeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChangeVideoSizeResponseBody() {}

  explicit ChangeVideoSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeVideoSizeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChangeVideoSizeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChangeVideoSizeResponseBody() = default;
};
class ChangeVideoSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeVideoSizeResponseBody> body{};

  ChangeVideoSizeResponse() {}

  explicit ChangeVideoSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeVideoSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeVideoSizeResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeVideoSizeResponse() = default;
};
class ConvertHdrVideoRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<string> HDRFormat{};
  shared_ptr<long> maxIlluminance{};
  shared_ptr<string> videoURL{};

  ConvertHdrVideoRequest() {}

  explicit ConvertHdrVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (HDRFormat) {
      res["HDRFormat"] = boost::any(*HDRFormat);
    }
    if (maxIlluminance) {
      res["MaxIlluminance"] = boost::any(*maxIlluminance);
    }
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("HDRFormat") != m.end() && !m["HDRFormat"].empty()) {
      HDRFormat = make_shared<string>(boost::any_cast<string>(m["HDRFormat"]));
    }
    if (m.find("MaxIlluminance") != m.end() && !m["MaxIlluminance"].empty()) {
      maxIlluminance = make_shared<long>(boost::any_cast<long>(m["MaxIlluminance"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~ConvertHdrVideoRequest() = default;
};
class ConvertHdrVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<string> HDRFormat{};
  shared_ptr<long> maxIlluminance{};
  shared_ptr<Darabonba::Stream> videoURLObject{};

  ConvertHdrVideoAdvanceRequest() {}

  explicit ConvertHdrVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (HDRFormat) {
      res["HDRFormat"] = boost::any(*HDRFormat);
    }
    if (maxIlluminance) {
      res["MaxIlluminance"] = boost::any(*maxIlluminance);
    }
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("HDRFormat") != m.end() && !m["HDRFormat"].empty()) {
      HDRFormat = make_shared<string>(boost::any_cast<string>(m["HDRFormat"]));
    }
    if (m.find("MaxIlluminance") != m.end() && !m["MaxIlluminance"].empty()) {
      maxIlluminance = make_shared<long>(boost::any_cast<long>(m["MaxIlluminance"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
  }


  virtual ~ConvertHdrVideoAdvanceRequest() = default;
};
class ConvertHdrVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  ConvertHdrVideoResponseBodyData() {}

  explicit ConvertHdrVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConvertHdrVideoResponseBodyData() = default;
};
class ConvertHdrVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<ConvertHdrVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ConvertHdrVideoResponseBody() {}

  explicit ConvertHdrVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertHdrVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ConvertHdrVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ConvertHdrVideoResponseBody() = default;
};
class ConvertHdrVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConvertHdrVideoResponseBody> body{};

  ConvertHdrVideoResponse() {}

  explicit ConvertHdrVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertHdrVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertHdrVideoResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertHdrVideoResponse() = default;
};
class DeleteFaceVideoTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  DeleteFaceVideoTemplateRequest() {}

  explicit DeleteFaceVideoTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteFaceVideoTemplateRequest() = default;
};
class DeleteFaceVideoTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFaceVideoTemplateResponseBody() {}

  explicit DeleteFaceVideoTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteFaceVideoTemplateResponseBody() = default;
};
class DeleteFaceVideoTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaceVideoTemplateResponseBody> body{};

  DeleteFaceVideoTemplateResponse() {}

  explicit DeleteFaceVideoTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFaceVideoTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceVideoTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceVideoTemplateResponse() = default;
};
class EnhancePortraitVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  EnhancePortraitVideoRequest() {}

  explicit EnhancePortraitVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhancePortraitVideoRequest() = default;
};
class EnhancePortraitVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  EnhancePortraitVideoAdvanceRequest() {}

  explicit EnhancePortraitVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhancePortraitVideoAdvanceRequest() = default;
};
class EnhancePortraitVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  EnhancePortraitVideoResponseBodyData() {}

  explicit EnhancePortraitVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhancePortraitVideoResponseBodyData() = default;
};
class EnhancePortraitVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<EnhancePortraitVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EnhancePortraitVideoResponseBody() {}

  explicit EnhancePortraitVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhancePortraitVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnhancePortraitVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnhancePortraitVideoResponseBody() = default;
};
class EnhancePortraitVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnhancePortraitVideoResponseBody> body{};

  EnhancePortraitVideoResponse() {}

  explicit EnhancePortraitVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhancePortraitVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnhancePortraitVideoResponseBody>(model1);
      }
    }
  }


  virtual ~EnhancePortraitVideoResponse() = default;
};
class EnhanceVideoQualityRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<long> frameRate{};
  shared_ptr<string> HDRFormat{};
  shared_ptr<long> maxIlluminance{};
  shared_ptr<long> outPutHeight{};
  shared_ptr<long> outPutWidth{};
  shared_ptr<string> videoURL{};

  EnhanceVideoQualityRequest() {}

  explicit EnhanceVideoQualityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (HDRFormat) {
      res["HDRFormat"] = boost::any(*HDRFormat);
    }
    if (maxIlluminance) {
      res["MaxIlluminance"] = boost::any(*maxIlluminance);
    }
    if (outPutHeight) {
      res["OutPutHeight"] = boost::any(*outPutHeight);
    }
    if (outPutWidth) {
      res["OutPutWidth"] = boost::any(*outPutWidth);
    }
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("HDRFormat") != m.end() && !m["HDRFormat"].empty()) {
      HDRFormat = make_shared<string>(boost::any_cast<string>(m["HDRFormat"]));
    }
    if (m.find("MaxIlluminance") != m.end() && !m["MaxIlluminance"].empty()) {
      maxIlluminance = make_shared<long>(boost::any_cast<long>(m["MaxIlluminance"]));
    }
    if (m.find("OutPutHeight") != m.end() && !m["OutPutHeight"].empty()) {
      outPutHeight = make_shared<long>(boost::any_cast<long>(m["OutPutHeight"]));
    }
    if (m.find("OutPutWidth") != m.end() && !m["OutPutWidth"].empty()) {
      outPutWidth = make_shared<long>(boost::any_cast<long>(m["OutPutWidth"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~EnhanceVideoQualityRequest() = default;
};
class EnhanceVideoQualityAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<long> frameRate{};
  shared_ptr<string> HDRFormat{};
  shared_ptr<long> maxIlluminance{};
  shared_ptr<long> outPutHeight{};
  shared_ptr<long> outPutWidth{};
  shared_ptr<Darabonba::Stream> videoURLObject{};

  EnhanceVideoQualityAdvanceRequest() {}

  explicit EnhanceVideoQualityAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (HDRFormat) {
      res["HDRFormat"] = boost::any(*HDRFormat);
    }
    if (maxIlluminance) {
      res["MaxIlluminance"] = boost::any(*maxIlluminance);
    }
    if (outPutHeight) {
      res["OutPutHeight"] = boost::any(*outPutHeight);
    }
    if (outPutWidth) {
      res["OutPutWidth"] = boost::any(*outPutWidth);
    }
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("HDRFormat") != m.end() && !m["HDRFormat"].empty()) {
      HDRFormat = make_shared<string>(boost::any_cast<string>(m["HDRFormat"]));
    }
    if (m.find("MaxIlluminance") != m.end() && !m["MaxIlluminance"].empty()) {
      maxIlluminance = make_shared<long>(boost::any_cast<long>(m["MaxIlluminance"]));
    }
    if (m.find("OutPutHeight") != m.end() && !m["OutPutHeight"].empty()) {
      outPutHeight = make_shared<long>(boost::any_cast<long>(m["OutPutHeight"]));
    }
    if (m.find("OutPutWidth") != m.end() && !m["OutPutWidth"].empty()) {
      outPutWidth = make_shared<long>(boost::any_cast<long>(m["OutPutWidth"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
  }


  virtual ~EnhanceVideoQualityAdvanceRequest() = default;
};
class EnhanceVideoQualityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  EnhanceVideoQualityResponseBodyData() {}

  explicit EnhanceVideoQualityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhanceVideoQualityResponseBodyData() = default;
};
class EnhanceVideoQualityResponseBody : public Darabonba::Model {
public:
  shared_ptr<EnhanceVideoQualityResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EnhanceVideoQualityResponseBody() {}

  explicit EnhanceVideoQualityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhanceVideoQualityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnhanceVideoQualityResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnhanceVideoQualityResponseBody() = default;
};
class EnhanceVideoQualityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnhanceVideoQualityResponseBody> body{};

  EnhanceVideoQualityResponse() {}

  explicit EnhanceVideoQualityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhanceVideoQualityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnhanceVideoQualityResponseBody>(model1);
      }
    }
  }


  virtual ~EnhanceVideoQualityResponse() = default;
};
class EraseVideoLogoRequestBoxes : public Darabonba::Model {
public:
  shared_ptr<double> h{};
  shared_ptr<double> w{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  EraseVideoLogoRequestBoxes() {}

  explicit EraseVideoLogoRequestBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EraseVideoLogoRequestBoxes() = default;
};
class EraseVideoLogoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<EraseVideoLogoRequestBoxes>> boxes{};
  shared_ptr<string> videoUrl{};

  EraseVideoLogoRequest() {}

  explicit EraseVideoLogoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<EraseVideoLogoRequestBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EraseVideoLogoRequestBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<EraseVideoLogoRequestBoxes>>(expect1);
      }
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~EraseVideoLogoRequest() = default;
};
class EraseVideoLogoAdvanceRequestBoxes : public Darabonba::Model {
public:
  shared_ptr<double> h{};
  shared_ptr<double> w{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  EraseVideoLogoAdvanceRequestBoxes() {}

  explicit EraseVideoLogoAdvanceRequestBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EraseVideoLogoAdvanceRequestBoxes() = default;
};
class EraseVideoLogoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<EraseVideoLogoAdvanceRequestBoxes>> boxes{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  EraseVideoLogoAdvanceRequest() {}

  explicit EraseVideoLogoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<EraseVideoLogoAdvanceRequestBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EraseVideoLogoAdvanceRequestBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<EraseVideoLogoAdvanceRequestBoxes>>(expect1);
      }
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~EraseVideoLogoAdvanceRequest() = default;
};
class EraseVideoLogoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  EraseVideoLogoResponseBodyData() {}

  explicit EraseVideoLogoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EraseVideoLogoResponseBodyData() = default;
};
class EraseVideoLogoResponseBody : public Darabonba::Model {
public:
  shared_ptr<EraseVideoLogoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EraseVideoLogoResponseBody() {}

  explicit EraseVideoLogoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EraseVideoLogoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EraseVideoLogoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EraseVideoLogoResponseBody() = default;
};
class EraseVideoLogoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EraseVideoLogoResponseBody> body{};

  EraseVideoLogoResponse() {}

  explicit EraseVideoLogoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EraseVideoLogoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EraseVideoLogoResponseBody>(model1);
      }
    }
  }


  virtual ~EraseVideoLogoResponse() = default;
};
class EraseVideoSubtitlesRequest : public Darabonba::Model {
public:
  shared_ptr<double> BH{};
  shared_ptr<double> BW{};
  shared_ptr<double> BX{};
  shared_ptr<double> BY{};
  shared_ptr<string> videoUrl{};

  EraseVideoSubtitlesRequest() {}

  explicit EraseVideoSubtitlesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (BH) {
      res["BH"] = boost::any(*BH);
    }
    if (BW) {
      res["BW"] = boost::any(*BW);
    }
    if (BX) {
      res["BX"] = boost::any(*BX);
    }
    if (BY) {
      res["BY"] = boost::any(*BY);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BH") != m.end() && !m["BH"].empty()) {
      BH = make_shared<double>(boost::any_cast<double>(m["BH"]));
    }
    if (m.find("BW") != m.end() && !m["BW"].empty()) {
      BW = make_shared<double>(boost::any_cast<double>(m["BW"]));
    }
    if (m.find("BX") != m.end() && !m["BX"].empty()) {
      BX = make_shared<double>(boost::any_cast<double>(m["BX"]));
    }
    if (m.find("BY") != m.end() && !m["BY"].empty()) {
      BY = make_shared<double>(boost::any_cast<double>(m["BY"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~EraseVideoSubtitlesRequest() = default;
};
class EraseVideoSubtitlesAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<double> BH{};
  shared_ptr<double> BW{};
  shared_ptr<double> BX{};
  shared_ptr<double> BY{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  EraseVideoSubtitlesAdvanceRequest() {}

  explicit EraseVideoSubtitlesAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (BH) {
      res["BH"] = boost::any(*BH);
    }
    if (BW) {
      res["BW"] = boost::any(*BW);
    }
    if (BX) {
      res["BX"] = boost::any(*BX);
    }
    if (BY) {
      res["BY"] = boost::any(*BY);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BH") != m.end() && !m["BH"].empty()) {
      BH = make_shared<double>(boost::any_cast<double>(m["BH"]));
    }
    if (m.find("BW") != m.end() && !m["BW"].empty()) {
      BW = make_shared<double>(boost::any_cast<double>(m["BW"]));
    }
    if (m.find("BX") != m.end() && !m["BX"].empty()) {
      BX = make_shared<double>(boost::any_cast<double>(m["BX"]));
    }
    if (m.find("BY") != m.end() && !m["BY"].empty()) {
      BY = make_shared<double>(boost::any_cast<double>(m["BY"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~EraseVideoSubtitlesAdvanceRequest() = default;
};
class EraseVideoSubtitlesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  EraseVideoSubtitlesResponseBodyData() {}

  explicit EraseVideoSubtitlesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EraseVideoSubtitlesResponseBodyData() = default;
};
class EraseVideoSubtitlesResponseBody : public Darabonba::Model {
public:
  shared_ptr<EraseVideoSubtitlesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EraseVideoSubtitlesResponseBody() {}

  explicit EraseVideoSubtitlesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EraseVideoSubtitlesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EraseVideoSubtitlesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EraseVideoSubtitlesResponseBody() = default;
};
class EraseVideoSubtitlesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EraseVideoSubtitlesResponseBody> body{};

  EraseVideoSubtitlesResponse() {}

  explicit EraseVideoSubtitlesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EraseVideoSubtitlesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EraseVideoSubtitlesResponseBody>(model1);
      }
    }
  }


  virtual ~EraseVideoSubtitlesResponse() = default;
};
class GenerateHumanAnimeStyleVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> cartoonStyle{};
  shared_ptr<string> videoUrl{};

  GenerateHumanAnimeStyleVideoRequest() {}

  explicit GenerateHumanAnimeStyleVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cartoonStyle) {
      res["CartoonStyle"] = boost::any(*cartoonStyle);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CartoonStyle") != m.end() && !m["CartoonStyle"].empty()) {
      cartoonStyle = make_shared<string>(boost::any_cast<string>(m["CartoonStyle"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GenerateHumanAnimeStyleVideoRequest() = default;
};
class GenerateHumanAnimeStyleVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> cartoonStyle{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  GenerateHumanAnimeStyleVideoAdvanceRequest() {}

  explicit GenerateHumanAnimeStyleVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cartoonStyle) {
      res["CartoonStyle"] = boost::any(*cartoonStyle);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CartoonStyle") != m.end() && !m["CartoonStyle"].empty()) {
      cartoonStyle = make_shared<string>(boost::any_cast<string>(m["CartoonStyle"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~GenerateHumanAnimeStyleVideoAdvanceRequest() = default;
};
class GenerateHumanAnimeStyleVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  GenerateHumanAnimeStyleVideoResponseBodyData() {}

  explicit GenerateHumanAnimeStyleVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GenerateHumanAnimeStyleVideoResponseBodyData() = default;
};
class GenerateHumanAnimeStyleVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateHumanAnimeStyleVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GenerateHumanAnimeStyleVideoResponseBody() {}

  explicit GenerateHumanAnimeStyleVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateHumanAnimeStyleVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateHumanAnimeStyleVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateHumanAnimeStyleVideoResponseBody() = default;
};
class GenerateHumanAnimeStyleVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateHumanAnimeStyleVideoResponseBody> body{};

  GenerateHumanAnimeStyleVideoResponse() {}

  explicit GenerateHumanAnimeStyleVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateHumanAnimeStyleVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateHumanAnimeStyleVideoResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateHumanAnimeStyleVideoResponse() = default;
};
class GenerateVideoRequestFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> type{};

  GenerateVideoRequestFileList() {}

  explicit GenerateVideoRequestFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GenerateVideoRequestFileList() = default;
};
class GenerateVideoRequest : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<bool> durationAdaption{};
  shared_ptr<vector<GenerateVideoRequestFileList>> fileList{};
  shared_ptr<long> height{};
  shared_ptr<bool> mute{};
  shared_ptr<bool> puzzleEffect{};
  shared_ptr<string> scene{};
  shared_ptr<bool> smartEffect{};
  shared_ptr<string> style{};
  shared_ptr<string> transitionStyle{};
  shared_ptr<long> width{};

  GenerateVideoRequest() {}

  explicit GenerateVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (durationAdaption) {
      res["DurationAdaption"] = boost::any(*durationAdaption);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (mute) {
      res["Mute"] = boost::any(*mute);
    }
    if (puzzleEffect) {
      res["PuzzleEffect"] = boost::any(*puzzleEffect);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (smartEffect) {
      res["SmartEffect"] = boost::any(*smartEffect);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    if (transitionStyle) {
      res["TransitionStyle"] = boost::any(*transitionStyle);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("DurationAdaption") != m.end() && !m["DurationAdaption"].empty()) {
      durationAdaption = make_shared<bool>(boost::any_cast<bool>(m["DurationAdaption"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<GenerateVideoRequestFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateVideoRequestFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<GenerateVideoRequestFileList>>(expect1);
      }
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Mute") != m.end() && !m["Mute"].empty()) {
      mute = make_shared<bool>(boost::any_cast<bool>(m["Mute"]));
    }
    if (m.find("PuzzleEffect") != m.end() && !m["PuzzleEffect"].empty()) {
      puzzleEffect = make_shared<bool>(boost::any_cast<bool>(m["PuzzleEffect"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SmartEffect") != m.end() && !m["SmartEffect"].empty()) {
      smartEffect = make_shared<bool>(boost::any_cast<bool>(m["SmartEffect"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
    if (m.find("TransitionStyle") != m.end() && !m["TransitionStyle"].empty()) {
      transitionStyle = make_shared<string>(boost::any_cast<string>(m["TransitionStyle"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~GenerateVideoRequest() = default;
};
class GenerateVideoAdvanceRequestFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> type{};

  GenerateVideoAdvanceRequestFileList() {}

  explicit GenerateVideoAdvanceRequestFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GenerateVideoAdvanceRequestFileList() = default;
};
class GenerateVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<bool> durationAdaption{};
  shared_ptr<vector<GenerateVideoAdvanceRequestFileList>> fileList{};
  shared_ptr<long> height{};
  shared_ptr<bool> mute{};
  shared_ptr<bool> puzzleEffect{};
  shared_ptr<string> scene{};
  shared_ptr<bool> smartEffect{};
  shared_ptr<string> style{};
  shared_ptr<string> transitionStyle{};
  shared_ptr<long> width{};

  GenerateVideoAdvanceRequest() {}

  explicit GenerateVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (durationAdaption) {
      res["DurationAdaption"] = boost::any(*durationAdaption);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (mute) {
      res["Mute"] = boost::any(*mute);
    }
    if (puzzleEffect) {
      res["PuzzleEffect"] = boost::any(*puzzleEffect);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (smartEffect) {
      res["SmartEffect"] = boost::any(*smartEffect);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    if (transitionStyle) {
      res["TransitionStyle"] = boost::any(*transitionStyle);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("DurationAdaption") != m.end() && !m["DurationAdaption"].empty()) {
      durationAdaption = make_shared<bool>(boost::any_cast<bool>(m["DurationAdaption"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<GenerateVideoAdvanceRequestFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateVideoAdvanceRequestFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<GenerateVideoAdvanceRequestFileList>>(expect1);
      }
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Mute") != m.end() && !m["Mute"].empty()) {
      mute = make_shared<bool>(boost::any_cast<bool>(m["Mute"]));
    }
    if (m.find("PuzzleEffect") != m.end() && !m["PuzzleEffect"].empty()) {
      puzzleEffect = make_shared<bool>(boost::any_cast<bool>(m["PuzzleEffect"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SmartEffect") != m.end() && !m["SmartEffect"].empty()) {
      smartEffect = make_shared<bool>(boost::any_cast<bool>(m["SmartEffect"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
    if (m.find("TransitionStyle") != m.end() && !m["TransitionStyle"].empty()) {
      transitionStyle = make_shared<string>(boost::any_cast<string>(m["TransitionStyle"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~GenerateVideoAdvanceRequest() = default;
};
class GenerateVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoCoverUrl{};
  shared_ptr<string> videoUrl{};

  GenerateVideoResponseBodyData() {}

  explicit GenerateVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoCoverUrl) {
      res["VideoCoverUrl"] = boost::any(*videoCoverUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoCoverUrl") != m.end() && !m["VideoCoverUrl"].empty()) {
      videoCoverUrl = make_shared<string>(boost::any_cast<string>(m["VideoCoverUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GenerateVideoResponseBodyData() = default;
};
class GenerateVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GenerateVideoResponseBody() {}

  explicit GenerateVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateVideoResponseBody() = default;
};
class GenerateVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateVideoResponseBody> body{};

  GenerateVideoResponse() {}

  explicit GenerateVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateVideoResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateVideoResponse() = default;
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
class InterpolateVideoFrameRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<long> frameRate{};
  shared_ptr<string> videoURL{};

  InterpolateVideoFrameRequest() {}

  explicit InterpolateVideoFrameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~InterpolateVideoFrameRequest() = default;
};
class InterpolateVideoFrameAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<long> frameRate{};
  shared_ptr<Darabonba::Stream> videoURLObject{};

  InterpolateVideoFrameAdvanceRequest() {}

  explicit InterpolateVideoFrameAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
  }


  virtual ~InterpolateVideoFrameAdvanceRequest() = default;
};
class InterpolateVideoFrameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  InterpolateVideoFrameResponseBodyData() {}

  explicit InterpolateVideoFrameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InterpolateVideoFrameResponseBodyData() = default;
};
class InterpolateVideoFrameResponseBody : public Darabonba::Model {
public:
  shared_ptr<InterpolateVideoFrameResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  InterpolateVideoFrameResponseBody() {}

  explicit InterpolateVideoFrameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InterpolateVideoFrameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InterpolateVideoFrameResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InterpolateVideoFrameResponseBody() = default;
};
class InterpolateVideoFrameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InterpolateVideoFrameResponseBody> body{};

  InterpolateVideoFrameResponse() {}

  explicit InterpolateVideoFrameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InterpolateVideoFrameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InterpolateVideoFrameResponseBody>(model1);
      }
    }
  }


  virtual ~InterpolateVideoFrameResponse() = default;
};
class MergeVideoFaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> addWatermark{};
  shared_ptr<bool> enhance{};
  shared_ptr<string> referenceURL{};
  shared_ptr<string> videoURL{};
  shared_ptr<string> watermarkType{};

  MergeVideoFaceRequest() {}

  explicit MergeVideoFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addWatermark) {
      res["AddWatermark"] = boost::any(*addWatermark);
    }
    if (enhance) {
      res["Enhance"] = boost::any(*enhance);
    }
    if (referenceURL) {
      res["ReferenceURL"] = boost::any(*referenceURL);
    }
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddWatermark") != m.end() && !m["AddWatermark"].empty()) {
      addWatermark = make_shared<bool>(boost::any_cast<bool>(m["AddWatermark"]));
    }
    if (m.find("Enhance") != m.end() && !m["Enhance"].empty()) {
      enhance = make_shared<bool>(boost::any_cast<bool>(m["Enhance"]));
    }
    if (m.find("ReferenceURL") != m.end() && !m["ReferenceURL"].empty()) {
      referenceURL = make_shared<string>(boost::any_cast<string>(m["ReferenceURL"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<string>(boost::any_cast<string>(m["WatermarkType"]));
    }
  }


  virtual ~MergeVideoFaceRequest() = default;
};
class MergeVideoFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> addWatermark{};
  shared_ptr<bool> enhance{};
  shared_ptr<Darabonba::Stream> referenceURLObject{};
  shared_ptr<Darabonba::Stream> videoURLObject{};
  shared_ptr<string> watermarkType{};

  MergeVideoFaceAdvanceRequest() {}

  explicit MergeVideoFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addWatermark) {
      res["AddWatermark"] = boost::any(*addWatermark);
    }
    if (enhance) {
      res["Enhance"] = boost::any(*enhance);
    }
    if (referenceURLObject) {
      res["ReferenceURL"] = boost::any(*referenceURLObject);
    }
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddWatermark") != m.end() && !m["AddWatermark"].empty()) {
      addWatermark = make_shared<bool>(boost::any_cast<bool>(m["AddWatermark"]));
    }
    if (m.find("Enhance") != m.end() && !m["Enhance"].empty()) {
      enhance = make_shared<bool>(boost::any_cast<bool>(m["Enhance"]));
    }
    if (m.find("ReferenceURL") != m.end() && !m["ReferenceURL"].empty()) {
      referenceURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ReferenceURL"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<string>(boost::any_cast<string>(m["WatermarkType"]));
    }
  }


  virtual ~MergeVideoFaceAdvanceRequest() = default;
};
class MergeVideoFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  MergeVideoFaceResponseBodyData() {}

  explicit MergeVideoFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MergeVideoFaceResponseBodyData() = default;
};
class MergeVideoFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<MergeVideoFaceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  MergeVideoFaceResponseBody() {}

  explicit MergeVideoFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeVideoFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MergeVideoFaceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MergeVideoFaceResponseBody() = default;
};
class MergeVideoFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MergeVideoFaceResponseBody> body{};

  MergeVideoFaceResponse() {}

  explicit MergeVideoFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeVideoFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MergeVideoFaceResponseBody>(model1);
      }
    }
  }


  virtual ~MergeVideoFaceResponse() = default;
};
class MergeVideoModelFaceRequestMergeInfos : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> templateFaceID{};
  shared_ptr<string> templateFaceURL{};

  MergeVideoModelFaceRequestMergeInfos() {}

  explicit MergeVideoModelFaceRequestMergeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (templateFaceID) {
      res["TemplateFaceID"] = boost::any(*templateFaceID);
    }
    if (templateFaceURL) {
      res["TemplateFaceURL"] = boost::any(*templateFaceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("TemplateFaceID") != m.end() && !m["TemplateFaceID"].empty()) {
      templateFaceID = make_shared<string>(boost::any_cast<string>(m["TemplateFaceID"]));
    }
    if (m.find("TemplateFaceURL") != m.end() && !m["TemplateFaceURL"].empty()) {
      templateFaceURL = make_shared<string>(boost::any_cast<string>(m["TemplateFaceURL"]));
    }
  }


  virtual ~MergeVideoModelFaceRequestMergeInfos() = default;
};
class MergeVideoModelFaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> addWatermark{};
  shared_ptr<bool> enhance{};
  shared_ptr<string> faceImageURL{};
  shared_ptr<vector<MergeVideoModelFaceRequestMergeInfos>> mergeInfos{};
  shared_ptr<string> templateId{};
  shared_ptr<string> watermarkType{};

  MergeVideoModelFaceRequest() {}

  explicit MergeVideoModelFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addWatermark) {
      res["AddWatermark"] = boost::any(*addWatermark);
    }
    if (enhance) {
      res["Enhance"] = boost::any(*enhance);
    }
    if (faceImageURL) {
      res["FaceImageURL"] = boost::any(*faceImageURL);
    }
    if (mergeInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mergeInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MergeInfos"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddWatermark") != m.end() && !m["AddWatermark"].empty()) {
      addWatermark = make_shared<bool>(boost::any_cast<bool>(m["AddWatermark"]));
    }
    if (m.find("Enhance") != m.end() && !m["Enhance"].empty()) {
      enhance = make_shared<bool>(boost::any_cast<bool>(m["Enhance"]));
    }
    if (m.find("FaceImageURL") != m.end() && !m["FaceImageURL"].empty()) {
      faceImageURL = make_shared<string>(boost::any_cast<string>(m["FaceImageURL"]));
    }
    if (m.find("MergeInfos") != m.end() && !m["MergeInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MergeInfos"].type()) {
        vector<MergeVideoModelFaceRequestMergeInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MergeInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MergeVideoModelFaceRequestMergeInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mergeInfos = make_shared<vector<MergeVideoModelFaceRequestMergeInfos>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<string>(boost::any_cast<string>(m["WatermarkType"]));
    }
  }


  virtual ~MergeVideoModelFaceRequest() = default;
};
class MergeVideoModelFaceAdvanceRequestMergeInfos : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> templateFaceID{};
  shared_ptr<string> templateFaceURL{};

  MergeVideoModelFaceAdvanceRequestMergeInfos() {}

  explicit MergeVideoModelFaceAdvanceRequestMergeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (templateFaceID) {
      res["TemplateFaceID"] = boost::any(*templateFaceID);
    }
    if (templateFaceURL) {
      res["TemplateFaceURL"] = boost::any(*templateFaceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("TemplateFaceID") != m.end() && !m["TemplateFaceID"].empty()) {
      templateFaceID = make_shared<string>(boost::any_cast<string>(m["TemplateFaceID"]));
    }
    if (m.find("TemplateFaceURL") != m.end() && !m["TemplateFaceURL"].empty()) {
      templateFaceURL = make_shared<string>(boost::any_cast<string>(m["TemplateFaceURL"]));
    }
  }


  virtual ~MergeVideoModelFaceAdvanceRequestMergeInfos() = default;
};
class MergeVideoModelFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> addWatermark{};
  shared_ptr<bool> enhance{};
  shared_ptr<Darabonba::Stream> faceImageURLObject{};
  shared_ptr<vector<MergeVideoModelFaceAdvanceRequestMergeInfos>> mergeInfos{};
  shared_ptr<string> templateId{};
  shared_ptr<string> watermarkType{};

  MergeVideoModelFaceAdvanceRequest() {}

  explicit MergeVideoModelFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addWatermark) {
      res["AddWatermark"] = boost::any(*addWatermark);
    }
    if (enhance) {
      res["Enhance"] = boost::any(*enhance);
    }
    if (faceImageURLObject) {
      res["FaceImageURL"] = boost::any(*faceImageURLObject);
    }
    if (mergeInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mergeInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MergeInfos"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddWatermark") != m.end() && !m["AddWatermark"].empty()) {
      addWatermark = make_shared<bool>(boost::any_cast<bool>(m["AddWatermark"]));
    }
    if (m.find("Enhance") != m.end() && !m["Enhance"].empty()) {
      enhance = make_shared<bool>(boost::any_cast<bool>(m["Enhance"]));
    }
    if (m.find("FaceImageURL") != m.end() && !m["FaceImageURL"].empty()) {
      faceImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FaceImageURL"]));
    }
    if (m.find("MergeInfos") != m.end() && !m["MergeInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MergeInfos"].type()) {
        vector<MergeVideoModelFaceAdvanceRequestMergeInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MergeInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MergeVideoModelFaceAdvanceRequestMergeInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mergeInfos = make_shared<vector<MergeVideoModelFaceAdvanceRequestMergeInfos>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<string>(boost::any_cast<string>(m["WatermarkType"]));
    }
  }


  virtual ~MergeVideoModelFaceAdvanceRequest() = default;
};
class MergeVideoModelFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  MergeVideoModelFaceResponseBodyData() {}

  explicit MergeVideoModelFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MergeVideoModelFaceResponseBodyData() = default;
};
class MergeVideoModelFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<MergeVideoModelFaceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  MergeVideoModelFaceResponseBody() {}

  explicit MergeVideoModelFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeVideoModelFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MergeVideoModelFaceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MergeVideoModelFaceResponseBody() = default;
};
class MergeVideoModelFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MergeVideoModelFaceResponseBody> body{};

  MergeVideoModelFaceResponse() {}

  explicit MergeVideoModelFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeVideoModelFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MergeVideoModelFaceResponseBody>(model1);
      }
    }
  }


  virtual ~MergeVideoModelFaceResponse() = default;
};
class QueryFaceVideoTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> templateId{};

  QueryFaceVideoTemplateRequest() {}

  explicit QueryFaceVideoTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~QueryFaceVideoTemplateRequest() = default;
};
class QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos : public Darabonba::Model {
public:
  shared_ptr<string> templateFaceID{};
  shared_ptr<string> templateFaceURL{};

  QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos() {}

  explicit QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateFaceID) {
      res["TemplateFaceID"] = boost::any(*templateFaceID);
    }
    if (templateFaceURL) {
      res["TemplateFaceURL"] = boost::any(*templateFaceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateFaceID") != m.end() && !m["TemplateFaceID"].empty()) {
      templateFaceID = make_shared<string>(boost::any_cast<string>(m["TemplateFaceID"]));
    }
    if (m.find("TemplateFaceURL") != m.end() && !m["TemplateFaceURL"].empty()) {
      templateFaceURL = make_shared<string>(boost::any_cast<string>(m["TemplateFaceURL"]));
    }
  }


  virtual ~QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos() = default;
};
class QueryFaceVideoTemplateResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos>> faceInfos{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};

  QueryFaceVideoTemplateResponseBodyDataElements() {}

  explicit QueryFaceVideoTemplateResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (faceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*faceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceInfos"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FaceInfos") != m.end() && !m["FaceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceInfos"].type()) {
        vector<QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceInfos = make_shared<vector<QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceVideoTemplateResponseBodyDataElements() = default;
};
class QueryFaceVideoTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFaceVideoTemplateResponseBodyDataElements>> elements{};
  shared_ptr<long> total{};

  QueryFaceVideoTemplateResponseBodyData() {}

  explicit QueryFaceVideoTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<QueryFaceVideoTemplateResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceVideoTemplateResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<QueryFaceVideoTemplateResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryFaceVideoTemplateResponseBodyData() = default;
};
class QueryFaceVideoTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryFaceVideoTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  QueryFaceVideoTemplateResponseBody() {}

  explicit QueryFaceVideoTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryFaceVideoTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceVideoTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryFaceVideoTemplateResponseBody() = default;
};
class QueryFaceVideoTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceVideoTemplateResponseBody> body{};

  QueryFaceVideoTemplateResponse() {}

  explicit QueryFaceVideoTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryFaceVideoTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceVideoTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceVideoTemplateResponse() = default;
};
class ReduceVideoNoiseRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  ReduceVideoNoiseRequest() {}

  explicit ReduceVideoNoiseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReduceVideoNoiseRequest() = default;
};
class ReduceVideoNoiseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  ReduceVideoNoiseAdvanceRequest() {}

  explicit ReduceVideoNoiseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReduceVideoNoiseAdvanceRequest() = default;
};
class ReduceVideoNoiseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  ReduceVideoNoiseResponseBodyData() {}

  explicit ReduceVideoNoiseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReduceVideoNoiseResponseBodyData() = default;
};
class ReduceVideoNoiseResponseBody : public Darabonba::Model {
public:
  shared_ptr<ReduceVideoNoiseResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReduceVideoNoiseResponseBody() {}

  explicit ReduceVideoNoiseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReduceVideoNoiseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReduceVideoNoiseResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReduceVideoNoiseResponseBody() = default;
};
class ReduceVideoNoiseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReduceVideoNoiseResponseBody> body{};

  ReduceVideoNoiseResponse() {}

  explicit ReduceVideoNoiseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReduceVideoNoiseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReduceVideoNoiseResponseBody>(model1);
      }
    }
  }


  virtual ~ReduceVideoNoiseResponse() = default;
};
class SuperResolveVideoRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitRate{};
  shared_ptr<string> videoUrl{};

  SuperResolveVideoRequest() {}

  explicit SuperResolveVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitRate) {
      res["BitRate"] = boost::any(*bitRate);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BitRate") != m.end() && !m["BitRate"].empty()) {
      bitRate = make_shared<long>(boost::any_cast<long>(m["BitRate"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~SuperResolveVideoRequest() = default;
};
class SuperResolveVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitRate{};
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  SuperResolveVideoAdvanceRequest() {}

  explicit SuperResolveVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitRate) {
      res["BitRate"] = boost::any(*bitRate);
    }
    if (videoUrlObject) {
      res["VideoUrl"] = boost::any(*videoUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BitRate") != m.end() && !m["BitRate"].empty()) {
      bitRate = make_shared<long>(boost::any_cast<long>(m["BitRate"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrl"]));
    }
  }


  virtual ~SuperResolveVideoAdvanceRequest() = default;
};
class SuperResolveVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  SuperResolveVideoResponseBodyData() {}

  explicit SuperResolveVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SuperResolveVideoResponseBodyData() = default;
};
class SuperResolveVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<SuperResolveVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SuperResolveVideoResponseBody() {}

  explicit SuperResolveVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SuperResolveVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SuperResolveVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SuperResolveVideoResponseBody() = default;
};
class SuperResolveVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SuperResolveVideoResponseBody> body{};

  SuperResolveVideoResponse() {}

  explicit SuperResolveVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SuperResolveVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SuperResolveVideoResponseBody>(model1);
      }
    }
  }


  virtual ~SuperResolveVideoResponse() = default;
};
class ToneSdrVideoRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<string> recolorModel{};
  shared_ptr<string> videoURL{};

  ToneSdrVideoRequest() {}

  explicit ToneSdrVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (recolorModel) {
      res["RecolorModel"] = boost::any(*recolorModel);
    }
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("RecolorModel") != m.end() && !m["RecolorModel"].empty()) {
      recolorModel = make_shared<string>(boost::any_cast<string>(m["RecolorModel"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~ToneSdrVideoRequest() = default;
};
class ToneSdrVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<string> recolorModel{};
  shared_ptr<Darabonba::Stream> videoURLObject{};

  ToneSdrVideoAdvanceRequest() {}

  explicit ToneSdrVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (recolorModel) {
      res["RecolorModel"] = boost::any(*recolorModel);
    }
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("RecolorModel") != m.end() && !m["RecolorModel"].empty()) {
      recolorModel = make_shared<string>(boost::any_cast<string>(m["RecolorModel"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
  }


  virtual ~ToneSdrVideoAdvanceRequest() = default;
};
class ToneSdrVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  ToneSdrVideoResponseBodyData() {}

  explicit ToneSdrVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ToneSdrVideoResponseBodyData() = default;
};
class ToneSdrVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<ToneSdrVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ToneSdrVideoResponseBody() {}

  explicit ToneSdrVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ToneSdrVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ToneSdrVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ToneSdrVideoResponseBody() = default;
};
class ToneSdrVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ToneSdrVideoResponseBody> body{};

  ToneSdrVideoResponse() {}

  explicit ToneSdrVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ToneSdrVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ToneSdrVideoResponseBody>(model1);
      }
    }
  }


  virtual ~ToneSdrVideoResponse() = default;
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
  AbstractEcommerceVideoResponse abstractEcommerceVideoWithOptions(shared_ptr<AbstractEcommerceVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbstractEcommerceVideoResponse abstractEcommerceVideo(shared_ptr<AbstractEcommerceVideoRequest> request);
  AbstractEcommerceVideoResponse abstractEcommerceVideoAdvance(shared_ptr<AbstractEcommerceVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbstractFilmVideoResponse abstractFilmVideoWithOptions(shared_ptr<AbstractFilmVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbstractFilmVideoResponse abstractFilmVideo(shared_ptr<AbstractFilmVideoRequest> request);
  AbstractFilmVideoResponse abstractFilmVideoAdvance(shared_ptr<AbstractFilmVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceVideoTemplateResponse addFaceVideoTemplateWithOptions(shared_ptr<AddFaceVideoTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceVideoTemplateResponse addFaceVideoTemplate(shared_ptr<AddFaceVideoTemplateRequest> request);
  AddFaceVideoTemplateResponse addFaceVideoTemplateAdvance(shared_ptr<AddFaceVideoTemplateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AdjustVideoColorResponse adjustVideoColorWithOptions(shared_ptr<AdjustVideoColorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AdjustVideoColorResponse adjustVideoColor(shared_ptr<AdjustVideoColorRequest> request);
  AdjustVideoColorResponse adjustVideoColorAdvance(shared_ptr<AdjustVideoColorAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeVideoSizeResponse changeVideoSizeWithOptions(shared_ptr<ChangeVideoSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeVideoSizeResponse changeVideoSize(shared_ptr<ChangeVideoSizeRequest> request);
  ChangeVideoSizeResponse changeVideoSizeAdvance(shared_ptr<ChangeVideoSizeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertHdrVideoResponse convertHdrVideoWithOptions(shared_ptr<ConvertHdrVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertHdrVideoResponse convertHdrVideo(shared_ptr<ConvertHdrVideoRequest> request);
  ConvertHdrVideoResponse convertHdrVideoAdvance(shared_ptr<ConvertHdrVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceVideoTemplateResponse deleteFaceVideoTemplateWithOptions(shared_ptr<DeleteFaceVideoTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceVideoTemplateResponse deleteFaceVideoTemplate(shared_ptr<DeleteFaceVideoTemplateRequest> request);
  EnhancePortraitVideoResponse enhancePortraitVideoWithOptions(shared_ptr<EnhancePortraitVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhancePortraitVideoResponse enhancePortraitVideo(shared_ptr<EnhancePortraitVideoRequest> request);
  EnhancePortraitVideoResponse enhancePortraitVideoAdvance(shared_ptr<EnhancePortraitVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhanceVideoQualityResponse enhanceVideoQualityWithOptions(shared_ptr<EnhanceVideoQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhanceVideoQualityResponse enhanceVideoQuality(shared_ptr<EnhanceVideoQualityRequest> request);
  EnhanceVideoQualityResponse enhanceVideoQualityAdvance(shared_ptr<EnhanceVideoQualityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseVideoLogoResponse eraseVideoLogoWithOptions(shared_ptr<EraseVideoLogoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseVideoLogoResponse eraseVideoLogo(shared_ptr<EraseVideoLogoRequest> request);
  EraseVideoLogoResponse eraseVideoLogoAdvance(shared_ptr<EraseVideoLogoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseVideoSubtitlesResponse eraseVideoSubtitlesWithOptions(shared_ptr<EraseVideoSubtitlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseVideoSubtitlesResponse eraseVideoSubtitles(shared_ptr<EraseVideoSubtitlesRequest> request);
  EraseVideoSubtitlesResponse eraseVideoSubtitlesAdvance(shared_ptr<EraseVideoSubtitlesAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateHumanAnimeStyleVideoResponse generateHumanAnimeStyleVideoWithOptions(shared_ptr<GenerateHumanAnimeStyleVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateHumanAnimeStyleVideoResponse generateHumanAnimeStyleVideo(shared_ptr<GenerateHumanAnimeStyleVideoRequest> request);
  GenerateHumanAnimeStyleVideoResponse generateHumanAnimeStyleVideoAdvance(shared_ptr<GenerateHumanAnimeStyleVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVideoResponse generateVideoWithOptions(shared_ptr<GenerateVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVideoResponse generateVideo(shared_ptr<GenerateVideoRequest> request);
  GenerateVideoResponse generateVideoAdvance(shared_ptr<GenerateVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  InterpolateVideoFrameResponse interpolateVideoFrameWithOptions(shared_ptr<InterpolateVideoFrameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InterpolateVideoFrameResponse interpolateVideoFrame(shared_ptr<InterpolateVideoFrameRequest> request);
  InterpolateVideoFrameResponse interpolateVideoFrameAdvance(shared_ptr<InterpolateVideoFrameAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeVideoFaceResponse mergeVideoFaceWithOptions(shared_ptr<MergeVideoFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeVideoFaceResponse mergeVideoFace(shared_ptr<MergeVideoFaceRequest> request);
  MergeVideoFaceResponse mergeVideoFaceAdvance(shared_ptr<MergeVideoFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeVideoModelFaceResponse mergeVideoModelFaceWithOptions(shared_ptr<MergeVideoModelFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeVideoModelFaceResponse mergeVideoModelFace(shared_ptr<MergeVideoModelFaceRequest> request);
  MergeVideoModelFaceResponse mergeVideoModelFaceAdvance(shared_ptr<MergeVideoModelFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceVideoTemplateResponse queryFaceVideoTemplateWithOptions(shared_ptr<QueryFaceVideoTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceVideoTemplateResponse queryFaceVideoTemplate(shared_ptr<QueryFaceVideoTemplateRequest> request);
  ReduceVideoNoiseResponse reduceVideoNoiseWithOptions(shared_ptr<ReduceVideoNoiseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReduceVideoNoiseResponse reduceVideoNoise(shared_ptr<ReduceVideoNoiseRequest> request);
  ReduceVideoNoiseResponse reduceVideoNoiseAdvance(shared_ptr<ReduceVideoNoiseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuperResolveVideoResponse superResolveVideoWithOptions(shared_ptr<SuperResolveVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuperResolveVideoResponse superResolveVideo(shared_ptr<SuperResolveVideoRequest> request);
  SuperResolveVideoResponse superResolveVideoAdvance(shared_ptr<SuperResolveVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ToneSdrVideoResponse toneSdrVideoWithOptions(shared_ptr<ToneSdrVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ToneSdrVideoResponse toneSdrVideo(shared_ptr<ToneSdrVideoRequest> request);
  ToneSdrVideoResponse toneSdrVideoAdvance(shared_ptr<ToneSdrVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Videoenhan20200320

#endif
