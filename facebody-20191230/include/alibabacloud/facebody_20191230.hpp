// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FACEBODY20191230_H_
#define ALIBABACLOUD_FACEBODY20191230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Facebody20191230 {
class ExtractPedestrianFeatureAttrRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> mode{};
  shared_ptr<string> serviceVersion{};

  ExtractPedestrianFeatureAttrRequest() {}

  explicit ExtractPedestrianFeatureAttrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~ExtractPedestrianFeatureAttrRequest() = default;
};
class ExtractPedestrianFeatureAttrAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> mode{};
  shared_ptr<string> serviceVersion{};

  ExtractPedestrianFeatureAttrAdvanceRequest() {}

  explicit ExtractPedestrianFeatureAttrAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~ExtractPedestrianFeatureAttrAdvanceRequest() = default;
};
class ExtractPedestrianFeatureAttrResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> qualityScore{};
  shared_ptr<string> objType{};
  shared_ptr<string> feature{};
  shared_ptr<string> gender{};
  shared_ptr<double> lowerColorScore{};
  shared_ptr<double> objTypeScore{};
  shared_ptr<string> age{};
  shared_ptr<double> ageScore{};
  shared_ptr<double> upperTypeScore{};
  shared_ptr<double> lowerTypeScore{};
  shared_ptr<string> lowerColor{};
  shared_ptr<string> hair{};
  shared_ptr<string> upperColor{};
  shared_ptr<double> genderScore{};
  shared_ptr<string> upperType{};
  shared_ptr<double> hairScore{};
  shared_ptr<string> lowerType{};
  shared_ptr<double> upperColorScore{};
  shared_ptr<string> orientation{};
  shared_ptr<double> orientationScore{};

  ExtractPedestrianFeatureAttrResponseBodyData() {}

  explicit ExtractPedestrianFeatureAttrResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityScore) {
      res["QualityScore"] = boost::any(*qualityScore);
    }
    if (objType) {
      res["ObjType"] = boost::any(*objType);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (lowerColorScore) {
      res["LowerColorScore"] = boost::any(*lowerColorScore);
    }
    if (objTypeScore) {
      res["ObjTypeScore"] = boost::any(*objTypeScore);
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (ageScore) {
      res["AgeScore"] = boost::any(*ageScore);
    }
    if (upperTypeScore) {
      res["UpperTypeScore"] = boost::any(*upperTypeScore);
    }
    if (lowerTypeScore) {
      res["LowerTypeScore"] = boost::any(*lowerTypeScore);
    }
    if (lowerColor) {
      res["LowerColor"] = boost::any(*lowerColor);
    }
    if (hair) {
      res["Hair"] = boost::any(*hair);
    }
    if (upperColor) {
      res["UpperColor"] = boost::any(*upperColor);
    }
    if (genderScore) {
      res["GenderScore"] = boost::any(*genderScore);
    }
    if (upperType) {
      res["UpperType"] = boost::any(*upperType);
    }
    if (hairScore) {
      res["HairScore"] = boost::any(*hairScore);
    }
    if (lowerType) {
      res["LowerType"] = boost::any(*lowerType);
    }
    if (upperColorScore) {
      res["UpperColorScore"] = boost::any(*upperColorScore);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (orientationScore) {
      res["OrientationScore"] = boost::any(*orientationScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityScore") != m.end() && !m["QualityScore"].empty()) {
      qualityScore = make_shared<double>(boost::any_cast<double>(m["QualityScore"]));
    }
    if (m.find("ObjType") != m.end() && !m["ObjType"].empty()) {
      objType = make_shared<string>(boost::any_cast<string>(m["ObjType"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("LowerColorScore") != m.end() && !m["LowerColorScore"].empty()) {
      lowerColorScore = make_shared<double>(boost::any_cast<double>(m["LowerColorScore"]));
    }
    if (m.find("ObjTypeScore") != m.end() && !m["ObjTypeScore"].empty()) {
      objTypeScore = make_shared<double>(boost::any_cast<double>(m["ObjTypeScore"]));
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<string>(boost::any_cast<string>(m["Age"]));
    }
    if (m.find("AgeScore") != m.end() && !m["AgeScore"].empty()) {
      ageScore = make_shared<double>(boost::any_cast<double>(m["AgeScore"]));
    }
    if (m.find("UpperTypeScore") != m.end() && !m["UpperTypeScore"].empty()) {
      upperTypeScore = make_shared<double>(boost::any_cast<double>(m["UpperTypeScore"]));
    }
    if (m.find("LowerTypeScore") != m.end() && !m["LowerTypeScore"].empty()) {
      lowerTypeScore = make_shared<double>(boost::any_cast<double>(m["LowerTypeScore"]));
    }
    if (m.find("LowerColor") != m.end() && !m["LowerColor"].empty()) {
      lowerColor = make_shared<string>(boost::any_cast<string>(m["LowerColor"]));
    }
    if (m.find("Hair") != m.end() && !m["Hair"].empty()) {
      hair = make_shared<string>(boost::any_cast<string>(m["Hair"]));
    }
    if (m.find("UpperColor") != m.end() && !m["UpperColor"].empty()) {
      upperColor = make_shared<string>(boost::any_cast<string>(m["UpperColor"]));
    }
    if (m.find("GenderScore") != m.end() && !m["GenderScore"].empty()) {
      genderScore = make_shared<double>(boost::any_cast<double>(m["GenderScore"]));
    }
    if (m.find("UpperType") != m.end() && !m["UpperType"].empty()) {
      upperType = make_shared<string>(boost::any_cast<string>(m["UpperType"]));
    }
    if (m.find("HairScore") != m.end() && !m["HairScore"].empty()) {
      hairScore = make_shared<double>(boost::any_cast<double>(m["HairScore"]));
    }
    if (m.find("LowerType") != m.end() && !m["LowerType"].empty()) {
      lowerType = make_shared<string>(boost::any_cast<string>(m["LowerType"]));
    }
    if (m.find("UpperColorScore") != m.end() && !m["UpperColorScore"].empty()) {
      upperColorScore = make_shared<double>(boost::any_cast<double>(m["UpperColorScore"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["Orientation"]));
    }
    if (m.find("OrientationScore") != m.end() && !m["OrientationScore"].empty()) {
      orientationScore = make_shared<double>(boost::any_cast<double>(m["OrientationScore"]));
    }
  }


  virtual ~ExtractPedestrianFeatureAttrResponseBodyData() = default;
};
class ExtractPedestrianFeatureAttrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ExtractPedestrianFeatureAttrResponseBodyData> data{};

  ExtractPedestrianFeatureAttrResponseBody() {}

  explicit ExtractPedestrianFeatureAttrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractPedestrianFeatureAttrResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExtractPedestrianFeatureAttrResponseBodyData>(model1);
      }
    }
  }


  virtual ~ExtractPedestrianFeatureAttrResponseBody() = default;
};
class ExtractPedestrianFeatureAttrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtractPedestrianFeatureAttrResponseBody> body{};

  ExtractPedestrianFeatureAttrResponse() {}

  explicit ExtractPedestrianFeatureAttrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractPedestrianFeatureAttrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtractPedestrianFeatureAttrResponseBody>(model1);
      }
    }
  }


  virtual ~ExtractPedestrianFeatureAttrResponse() = default;
};
class DetectBodyCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectBodyCountRequest() {}

  explicit DetectBodyCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectBodyCountRequest() = default;
};
class DetectBodyCountAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectBodyCountAdvanceRequest() {}

  explicit DetectBodyCountAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectBodyCountAdvanceRequest() = default;
};
class DetectBodyCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> personNumber{};

  DetectBodyCountResponseBodyData() {}

  explicit DetectBodyCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (personNumber) {
      res["PersonNumber"] = boost::any(*personNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PersonNumber") != m.end() && !m["PersonNumber"].empty()) {
      personNumber = make_shared<long>(boost::any_cast<long>(m["PersonNumber"]));
    }
  }


  virtual ~DetectBodyCountResponseBodyData() = default;
};
class DetectBodyCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectBodyCountResponseBodyData> data{};

  DetectBodyCountResponseBody() {}

  explicit DetectBodyCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectBodyCountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectBodyCountResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectBodyCountResponseBody() = default;
};
class DetectBodyCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectBodyCountResponseBody> body{};

  DetectBodyCountResponse() {}

  explicit DetectBodyCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectBodyCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectBodyCountResponseBody>(model1);
      }
    }
  }


  virtual ~DetectBodyCountResponse() = default;
};
class DetectVideoLivingFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  DetectVideoLivingFaceRequest() {}

  explicit DetectVideoLivingFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVideoLivingFaceRequest() = default;
};
class DetectVideoLivingFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};

  DetectVideoLivingFaceAdvanceRequest() {}

  explicit DetectVideoLivingFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
  }


  virtual ~DetectVideoLivingFaceAdvanceRequest() = default;
};
class DetectVideoLivingFaceResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<vector<long>> rect{};
  shared_ptr<double> liveConfidence{};
  shared_ptr<double> faceConfidence{};

  DetectVideoLivingFaceResponseBodyDataElements() {}

  explicit DetectVideoLivingFaceResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rect) {
      res["Rect"] = boost::any(*rect);
    }
    if (liveConfidence) {
      res["LiveConfidence"] = boost::any(*liveConfidence);
    }
    if (faceConfidence) {
      res["FaceConfidence"] = boost::any(*faceConfidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rect") != m.end() && !m["Rect"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Rect"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rect"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      rect = make_shared<vector<long>>(toVec1);
    }
    if (m.find("LiveConfidence") != m.end() && !m["LiveConfidence"].empty()) {
      liveConfidence = make_shared<double>(boost::any_cast<double>(m["LiveConfidence"]));
    }
    if (m.find("FaceConfidence") != m.end() && !m["FaceConfidence"].empty()) {
      faceConfidence = make_shared<double>(boost::any_cast<double>(m["FaceConfidence"]));
    }
  }


  virtual ~DetectVideoLivingFaceResponseBodyDataElements() = default;
};
class DetectVideoLivingFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectVideoLivingFaceResponseBodyDataElements>> elements{};

  DetectVideoLivingFaceResponseBodyData() {}

  explicit DetectVideoLivingFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectVideoLivingFaceResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVideoLivingFaceResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectVideoLivingFaceResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~DetectVideoLivingFaceResponseBodyData() = default;
};
class DetectVideoLivingFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectVideoLivingFaceResponseBodyData> data{};

  DetectVideoLivingFaceResponseBody() {}

  explicit DetectVideoLivingFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVideoLivingFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectVideoLivingFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectVideoLivingFaceResponseBody() = default;
};
class DetectVideoLivingFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectVideoLivingFaceResponseBody> body{};

  DetectVideoLivingFaceResponse() {}

  explicit DetectVideoLivingFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVideoLivingFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectVideoLivingFaceResponseBody>(model1);
      }
    }
  }


  virtual ~DetectVideoLivingFaceResponse() = default;
};
class RecognizeFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeFaceRequest() {}

  explicit RecognizeFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeFaceRequest() = default;
};
class RecognizeFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeFaceAdvanceRequest() {}

  explicit RecognizeFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeFaceAdvanceRequest() = default;
};
class RecognizeFaceResponseBodyDataQualities : public Darabonba::Model {
public:
  shared_ptr<vector<double>> scoreList{};
  shared_ptr<vector<double>> blurList{};
  shared_ptr<vector<double>> fnfList{};
  shared_ptr<vector<double>> glassList{};
  shared_ptr<vector<double>> illuList{};
  shared_ptr<vector<double>> maskList{};
  shared_ptr<vector<double>> noiseList{};
  shared_ptr<vector<double>> poseList{};

  RecognizeFaceResponseBodyDataQualities() {}

  explicit RecognizeFaceResponseBodyDataQualities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreList) {
      res["ScoreList"] = boost::any(*scoreList);
    }
    if (blurList) {
      res["BlurList"] = boost::any(*blurList);
    }
    if (fnfList) {
      res["FnfList"] = boost::any(*fnfList);
    }
    if (glassList) {
      res["GlassList"] = boost::any(*glassList);
    }
    if (illuList) {
      res["IlluList"] = boost::any(*illuList);
    }
    if (maskList) {
      res["MaskList"] = boost::any(*maskList);
    }
    if (noiseList) {
      res["NoiseList"] = boost::any(*noiseList);
    }
    if (poseList) {
      res["PoseList"] = boost::any(*poseList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreList") != m.end() && !m["ScoreList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["ScoreList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScoreList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      scoreList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("BlurList") != m.end() && !m["BlurList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["BlurList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlurList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      blurList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("FnfList") != m.end() && !m["FnfList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["FnfList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FnfList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      fnfList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("GlassList") != m.end() && !m["GlassList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["GlassList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GlassList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      glassList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("IlluList") != m.end() && !m["IlluList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["IlluList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IlluList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      illuList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("MaskList") != m.end() && !m["MaskList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["MaskList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MaskList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      maskList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("NoiseList") != m.end() && !m["NoiseList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["NoiseList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NoiseList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      noiseList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PoseList") != m.end() && !m["PoseList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PoseList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PoseList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      poseList = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~RecognizeFaceResponseBodyDataQualities() = default;
};
class RecognizeFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<double>> pupils{};
  shared_ptr<vector<long>> genderList{};
  shared_ptr<vector<long>> expressions{};
  shared_ptr<vector<string>> denseFeatures{};
  shared_ptr<long> faceCount{};
  shared_ptr<vector<double>> landmarks{};
  shared_ptr<long> landmarkCount{};
  shared_ptr<RecognizeFaceResponseBodyDataQualities> qualities{};
  shared_ptr<vector<double>> beautyList{};
  shared_ptr<vector<long>> hatList{};
  shared_ptr<vector<double>> faceProbabilityList{};
  shared_ptr<vector<long>> glasses{};
  shared_ptr<vector<long>> faceRectangles{};
  shared_ptr<vector<double>> poseList{};
  shared_ptr<vector<long>> ageList{};
  shared_ptr<long> denseFeatureLength{};
  shared_ptr<vector<long>> masks{};

  RecognizeFaceResponseBodyData() {}

  explicit RecognizeFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pupils) {
      res["Pupils"] = boost::any(*pupils);
    }
    if (genderList) {
      res["GenderList"] = boost::any(*genderList);
    }
    if (expressions) {
      res["Expressions"] = boost::any(*expressions);
    }
    if (denseFeatures) {
      res["DenseFeatures"] = boost::any(*denseFeatures);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (landmarks) {
      res["Landmarks"] = boost::any(*landmarks);
    }
    if (landmarkCount) {
      res["LandmarkCount"] = boost::any(*landmarkCount);
    }
    if (qualities) {
      res["Qualities"] = qualities ? boost::any(qualities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (beautyList) {
      res["BeautyList"] = boost::any(*beautyList);
    }
    if (hatList) {
      res["HatList"] = boost::any(*hatList);
    }
    if (faceProbabilityList) {
      res["FaceProbabilityList"] = boost::any(*faceProbabilityList);
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (faceRectangles) {
      res["FaceRectangles"] = boost::any(*faceRectangles);
    }
    if (poseList) {
      res["PoseList"] = boost::any(*poseList);
    }
    if (ageList) {
      res["AgeList"] = boost::any(*ageList);
    }
    if (denseFeatureLength) {
      res["DenseFeatureLength"] = boost::any(*denseFeatureLength);
    }
    if (masks) {
      res["Masks"] = boost::any(*masks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pupils") != m.end() && !m["Pupils"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Pupils"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Pupils"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      pupils = make_shared<vector<double>>(toVec1);
    }
    if (m.find("GenderList") != m.end() && !m["GenderList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GenderList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GenderList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      genderList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Expressions") != m.end() && !m["Expressions"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Expressions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Expressions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      expressions = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DenseFeatures") != m.end() && !m["DenseFeatures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DenseFeatures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DenseFeatures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      denseFeatures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
    }
    if (m.find("Landmarks") != m.end() && !m["Landmarks"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Landmarks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Landmarks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      landmarks = make_shared<vector<double>>(toVec1);
    }
    if (m.find("LandmarkCount") != m.end() && !m["LandmarkCount"].empty()) {
      landmarkCount = make_shared<long>(boost::any_cast<long>(m["LandmarkCount"]));
    }
    if (m.find("Qualities") != m.end() && !m["Qualities"].empty()) {
      if (typeid(map<string, boost::any>) == m["Qualities"].type()) {
        RecognizeFaceResponseBodyDataQualities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Qualities"]));
        qualities = make_shared<RecognizeFaceResponseBodyDataQualities>(model1);
      }
    }
    if (m.find("BeautyList") != m.end() && !m["BeautyList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["BeautyList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BeautyList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      beautyList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("HatList") != m.end() && !m["HatList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HatList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HatList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      hatList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("FaceProbabilityList") != m.end() && !m["FaceProbabilityList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["FaceProbabilityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FaceProbabilityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      faceProbabilityList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Glasses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Glasses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      glasses = make_shared<vector<long>>(toVec1);
    }
    if (m.find("FaceRectangles") != m.end() && !m["FaceRectangles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["FaceRectangles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FaceRectangles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      faceRectangles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("PoseList") != m.end() && !m["PoseList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PoseList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PoseList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      poseList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("AgeList") != m.end() && !m["AgeList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ageList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DenseFeatureLength") != m.end() && !m["DenseFeatureLength"].empty()) {
      denseFeatureLength = make_shared<long>(boost::any_cast<long>(m["DenseFeatureLength"]));
    }
    if (m.find("Masks") != m.end() && !m["Masks"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Masks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Masks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      masks = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RecognizeFaceResponseBodyData() = default;
};
class RecognizeFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeFaceResponseBodyData> data{};

  RecognizeFaceResponseBody() {}

  explicit RecognizeFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeFaceResponseBody() = default;
};
class RecognizeFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeFaceResponseBody> body{};

  RecognizeFaceResponse() {}

  explicit RecognizeFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeFaceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeFaceResponse() = default;
};
class VerifyFaceMaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> refUrl{};
  shared_ptr<vector<uint8_t>> imageData{};
  shared_ptr<vector<uint8_t>> refData{};

  VerifyFaceMaskRequest() {}

  explicit VerifyFaceMaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (refUrl) {
      res["RefUrl"] = boost::any(*refUrl);
    }
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    if (refData) {
      res["RefData"] = boost::any(*refData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("RefUrl") != m.end() && !m["RefUrl"].empty()) {
      refUrl = make_shared<string>(boost::any_cast<string>(m["RefUrl"]));
    }
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageData"]));
    }
    if (m.find("RefData") != m.end() && !m["RefData"].empty()) {
      refData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["RefData"]));
    }
  }


  virtual ~VerifyFaceMaskRequest() = default;
};
class VerifyFaceMaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<double>> thresholds{};
  shared_ptr<long> mask{};
  shared_ptr<double> confidence{};
  shared_ptr<vector<long>> rectangle{};
  shared_ptr<vector<long>> rectangleRef{};
  shared_ptr<long> maskRef{};

  VerifyFaceMaskResponseBodyData() {}

  explicit VerifyFaceMaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thresholds) {
      res["Thresholds"] = boost::any(*thresholds);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (rectangle) {
      res["Rectangle"] = boost::any(*rectangle);
    }
    if (rectangleRef) {
      res["RectangleRef"] = boost::any(*rectangleRef);
    }
    if (maskRef) {
      res["MaskRef"] = boost::any(*maskRef);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Thresholds") != m.end() && !m["Thresholds"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Thresholds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Thresholds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      thresholds = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<long>(boost::any_cast<long>(m["Mask"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Rectangle") != m.end() && !m["Rectangle"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Rectangle"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rectangle"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      rectangle = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RectangleRef") != m.end() && !m["RectangleRef"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RectangleRef"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RectangleRef"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      rectangleRef = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MaskRef") != m.end() && !m["MaskRef"].empty()) {
      maskRef = make_shared<long>(boost::any_cast<long>(m["MaskRef"]));
    }
  }


  virtual ~VerifyFaceMaskResponseBodyData() = default;
};
class VerifyFaceMaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<VerifyFaceMaskResponseBodyData> data{};

  VerifyFaceMaskResponseBody() {}

  explicit VerifyFaceMaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyFaceMaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VerifyFaceMaskResponseBodyData>(model1);
      }
    }
  }


  virtual ~VerifyFaceMaskResponseBody() = default;
};
class VerifyFaceMaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VerifyFaceMaskResponseBody> body{};

  VerifyFaceMaskResponse() {}

  explicit VerifyFaceMaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyFaceMaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyFaceMaskResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyFaceMaskResponse() = default;
};
class DetectIPCPedestrianRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageData{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<string> imageURL{};

  DetectIPCPedestrianRequest() {}

  explicit DetectIPCPedestrianRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<string>(boost::any_cast<string>(m["ImageData"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~DetectIPCPedestrianRequest() = default;
};
class DetectIPCPedestrianAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> imageData{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DetectIPCPedestrianAdvanceRequest() {}

  explicit DetectIPCPedestrianAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<string>(boost::any_cast<string>(m["ImageData"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DetectIPCPedestrianAdvanceRequest() = default;
};
class DetectIPCPedestrianResponseBodyDataImageInfoListElements : public Darabonba::Model {
public:
  shared_ptr<vector<long>> boxes{};
  shared_ptr<double> score{};

  DetectIPCPedestrianResponseBodyDataImageInfoListElements() {}

  explicit DetectIPCPedestrianResponseBodyDataImageInfoListElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (score) {
      res["Score"] = boost::any(*score);
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
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~DetectIPCPedestrianResponseBodyDataImageInfoListElements() = default;
};
class DetectIPCPedestrianResponseBodyDataImageInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<DetectIPCPedestrianResponseBodyDataImageInfoListElements>> elements{};

  DetectIPCPedestrianResponseBodyDataImageInfoList() {}

  explicit DetectIPCPedestrianResponseBodyDataImageInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectIPCPedestrianResponseBodyDataImageInfoListElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectIPCPedestrianResponseBodyDataImageInfoListElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectIPCPedestrianResponseBodyDataImageInfoListElements>>(expect1);
      }
    }
  }


  virtual ~DetectIPCPedestrianResponseBodyDataImageInfoList() = default;
};
class DetectIPCPedestrianResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectIPCPedestrianResponseBodyDataImageInfoList>> imageInfoList{};

  DetectIPCPedestrianResponseBodyData() {}

  explicit DetectIPCPedestrianResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*imageInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageInfoList") != m.end() && !m["ImageInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageInfoList"].type()) {
        vector<DetectIPCPedestrianResponseBodyDataImageInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectIPCPedestrianResponseBodyDataImageInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageInfoList = make_shared<vector<DetectIPCPedestrianResponseBodyDataImageInfoList>>(expect1);
      }
    }
  }


  virtual ~DetectIPCPedestrianResponseBodyData() = default;
};
class DetectIPCPedestrianResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectIPCPedestrianResponseBodyData> data{};

  DetectIPCPedestrianResponseBody() {}

  explicit DetectIPCPedestrianResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectIPCPedestrianResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectIPCPedestrianResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectIPCPedestrianResponseBody() = default;
};
class DetectIPCPedestrianResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectIPCPedestrianResponseBody> body{};

  DetectIPCPedestrianResponse() {}

  explicit DetectIPCPedestrianResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectIPCPedestrianResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectIPCPedestrianResponseBody>(model1);
      }
    }
  }


  virtual ~DetectIPCPedestrianResponse() = default;
};
class GetFaceEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> entityId{};

  GetFaceEntityRequest() {}

  explicit GetFaceEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
  }


  virtual ~GetFaceEntityRequest() = default;
};
class GetFaceEntityResponseBodyDataFaces : public Darabonba::Model {
public:
  shared_ptr<string> faceId{};

  GetFaceEntityResponseBodyDataFaces() {}

  explicit GetFaceEntityResponseBodyDataFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
  }


  virtual ~GetFaceEntityResponseBodyDataFaces() = default;
};
class GetFaceEntityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> entityId{};
  shared_ptr<string> labels{};
  shared_ptr<vector<GetFaceEntityResponseBodyDataFaces>> faces{};

  GetFaceEntityResponseBodyData() {}

  explicit GetFaceEntityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<GetFaceEntityResponseBodyDataFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFaceEntityResponseBodyDataFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<GetFaceEntityResponseBodyDataFaces>>(expect1);
      }
    }
  }


  virtual ~GetFaceEntityResponseBodyData() = default;
};
class GetFaceEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetFaceEntityResponseBodyData> data{};

  GetFaceEntityResponseBody() {}

  explicit GetFaceEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFaceEntityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFaceEntityResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetFaceEntityResponseBody() = default;
};
class GetFaceEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetFaceEntityResponseBody> body{};

  GetFaceEntityResponse() {}

  explicit GetFaceEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFaceEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFaceEntityResponseBody>(model1);
      }
    }
  }


  virtual ~GetFaceEntityResponse() = default;
};
class CompareFaceRequest : public Darabonba::Model {
public:
  shared_ptr<double> qualityScoreThreshold{};
  shared_ptr<string> imageURLA{};
  shared_ptr<string> imageURLB{};
  shared_ptr<vector<uint8_t>> imageDataA{};
  shared_ptr<vector<uint8_t>> imageDataB{};

  CompareFaceRequest() {}

  explicit CompareFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityScoreThreshold) {
      res["QualityScoreThreshold"] = boost::any(*qualityScoreThreshold);
    }
    if (imageURLA) {
      res["ImageURLA"] = boost::any(*imageURLA);
    }
    if (imageURLB) {
      res["ImageURLB"] = boost::any(*imageURLB);
    }
    if (imageDataA) {
      res["ImageDataA"] = boost::any(*imageDataA);
    }
    if (imageDataB) {
      res["ImageDataB"] = boost::any(*imageDataB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityScoreThreshold") != m.end() && !m["QualityScoreThreshold"].empty()) {
      qualityScoreThreshold = make_shared<double>(boost::any_cast<double>(m["QualityScoreThreshold"]));
    }
    if (m.find("ImageURLA") != m.end() && !m["ImageURLA"].empty()) {
      imageURLA = make_shared<string>(boost::any_cast<string>(m["ImageURLA"]));
    }
    if (m.find("ImageURLB") != m.end() && !m["ImageURLB"].empty()) {
      imageURLB = make_shared<string>(boost::any_cast<string>(m["ImageURLB"]));
    }
    if (m.find("ImageDataA") != m.end() && !m["ImageDataA"].empty()) {
      imageDataA = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageDataA"]));
    }
    if (m.find("ImageDataB") != m.end() && !m["ImageDataB"].empty()) {
      imageDataB = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageDataB"]));
    }
  }


  virtual ~CompareFaceRequest() = default;
};
class CompareFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<double>> thresholds{};
  shared_ptr<vector<long>> rectBList{};
  shared_ptr<double> confidence{};
  shared_ptr<vector<long>> rectAList{};
  shared_ptr<double> qualityScoreA{};
  shared_ptr<double> qualityScoreB{};
  shared_ptr<string> messageTips{};

  CompareFaceResponseBodyData() {}

  explicit CompareFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thresholds) {
      res["Thresholds"] = boost::any(*thresholds);
    }
    if (rectBList) {
      res["RectBList"] = boost::any(*rectBList);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (rectAList) {
      res["RectAList"] = boost::any(*rectAList);
    }
    if (qualityScoreA) {
      res["QualityScoreA"] = boost::any(*qualityScoreA);
    }
    if (qualityScoreB) {
      res["QualityScoreB"] = boost::any(*qualityScoreB);
    }
    if (messageTips) {
      res["MessageTips"] = boost::any(*messageTips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Thresholds") != m.end() && !m["Thresholds"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Thresholds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Thresholds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      thresholds = make_shared<vector<double>>(toVec1);
    }
    if (m.find("RectBList") != m.end() && !m["RectBList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RectBList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RectBList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      rectBList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("RectAList") != m.end() && !m["RectAList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RectAList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RectAList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      rectAList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("QualityScoreA") != m.end() && !m["QualityScoreA"].empty()) {
      qualityScoreA = make_shared<double>(boost::any_cast<double>(m["QualityScoreA"]));
    }
    if (m.find("QualityScoreB") != m.end() && !m["QualityScoreB"].empty()) {
      qualityScoreB = make_shared<double>(boost::any_cast<double>(m["QualityScoreB"]));
    }
    if (m.find("MessageTips") != m.end() && !m["MessageTips"].empty()) {
      messageTips = make_shared<string>(boost::any_cast<string>(m["MessageTips"]));
    }
  }


  virtual ~CompareFaceResponseBodyData() = default;
};
class CompareFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CompareFaceResponseBodyData> data{};

  CompareFaceResponseBody() {}

  explicit CompareFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompareFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CompareFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~CompareFaceResponseBody() = default;
};
class CompareFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CompareFaceResponseBody> body{};

  CompareFaceResponse() {}

  explicit CompareFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompareFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompareFaceResponseBody>(model1);
      }
    }
  }


  virtual ~CompareFaceResponse() = default;
};
class PedestrianDetectAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  PedestrianDetectAttributeRequest() {}

  explicit PedestrianDetectAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeRequest() = default;
};
class PedestrianDetectAttributeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  PedestrianDetectAttributeAdvanceRequest() {}

  explicit PedestrianDetectAttributeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeAdvanceRequest() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesGender : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesGender() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesGender(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesGender() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesOrient : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesOrient() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesOrient(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesOrient() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesAge : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesAge() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesAge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesAge() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesUpperWear : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesUpperWear() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesUpperWear(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesUpperWear() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesGlasses : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesGlasses() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesGlasses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesGlasses() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesLowerWear : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesLowerWear() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesLowerWear(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesLowerWear() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesLowerColor : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesLowerColor() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesLowerColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesLowerColor() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesHat : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesHat() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesHat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesHat() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesHandbag : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesHandbag() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesHandbag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesHandbag() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesBackpack : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesBackpack() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesBackpack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesBackpack() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesUpperColor : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesUpperColor() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesUpperColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesUpperColor() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag() = default;
};
class PedestrianDetectAttributeResponseBodyDataAttributes : public Darabonba::Model {
public:
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesGender> gender{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesOrient> orient{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesAge> age{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesUpperWear> upperWear{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesGlasses> glasses{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesLowerWear> lowerWear{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesLowerColor> lowerColor{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesHat> hat{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesHandbag> handbag{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesBackpack> backpack{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesUpperColor> upperColor{};
  shared_ptr<PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag> shoulderBag{};

  PedestrianDetectAttributeResponseBodyDataAttributes() {}

  explicit PedestrianDetectAttributeResponseBodyDataAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gender) {
      res["Gender"] = gender ? boost::any(gender->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orient) {
      res["Orient"] = orient ? boost::any(orient->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (age) {
      res["Age"] = age ? boost::any(age->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (upperWear) {
      res["UpperWear"] = upperWear ? boost::any(upperWear->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (glasses) {
      res["Glasses"] = glasses ? boost::any(glasses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lowerWear) {
      res["LowerWear"] = lowerWear ? boost::any(lowerWear->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lowerColor) {
      res["LowerColor"] = lowerColor ? boost::any(lowerColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hat) {
      res["Hat"] = hat ? boost::any(hat->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (handbag) {
      res["Handbag"] = handbag ? boost::any(handbag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (backpack) {
      res["Backpack"] = backpack ? boost::any(backpack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (upperColor) {
      res["UpperColor"] = upperColor ? boost::any(upperColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (shoulderBag) {
      res["ShoulderBag"] = shoulderBag ? boost::any(shoulderBag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      if (typeid(map<string, boost::any>) == m["Gender"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesGender model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Gender"]));
        gender = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesGender>(model1);
      }
    }
    if (m.find("Orient") != m.end() && !m["Orient"].empty()) {
      if (typeid(map<string, boost::any>) == m["Orient"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesOrient model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Orient"]));
        orient = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesOrient>(model1);
      }
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      if (typeid(map<string, boost::any>) == m["Age"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesAge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Age"]));
        age = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesAge>(model1);
      }
    }
    if (m.find("UpperWear") != m.end() && !m["UpperWear"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpperWear"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesUpperWear model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpperWear"]));
        upperWear = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesUpperWear>(model1);
      }
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      if (typeid(map<string, boost::any>) == m["Glasses"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesGlasses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Glasses"]));
        glasses = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesGlasses>(model1);
      }
    }
    if (m.find("LowerWear") != m.end() && !m["LowerWear"].empty()) {
      if (typeid(map<string, boost::any>) == m["LowerWear"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesLowerWear model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LowerWear"]));
        lowerWear = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesLowerWear>(model1);
      }
    }
    if (m.find("LowerColor") != m.end() && !m["LowerColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["LowerColor"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesLowerColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LowerColor"]));
        lowerColor = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesLowerColor>(model1);
      }
    }
    if (m.find("Hat") != m.end() && !m["Hat"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hat"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesHat model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hat"]));
        hat = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesHat>(model1);
      }
    }
    if (m.find("Handbag") != m.end() && !m["Handbag"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handbag"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesHandbag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handbag"]));
        handbag = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesHandbag>(model1);
      }
    }
    if (m.find("Backpack") != m.end() && !m["Backpack"].empty()) {
      if (typeid(map<string, boost::any>) == m["Backpack"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesBackpack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Backpack"]));
        backpack = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesBackpack>(model1);
      }
    }
    if (m.find("UpperColor") != m.end() && !m["UpperColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpperColor"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesUpperColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpperColor"]));
        upperColor = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesUpperColor>(model1);
      }
    }
    if (m.find("ShoulderBag") != m.end() && !m["ShoulderBag"].empty()) {
      if (typeid(map<string, boost::any>) == m["ShoulderBag"].type()) {
        PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ShoulderBag"]));
        shoulderBag = make_shared<PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag>(model1);
      }
    }
  }


  virtual ~PedestrianDetectAttributeResponseBodyDataAttributes() = default;
};
class PedestrianDetectAttributeResponseBodyDataBoxes : public Darabonba::Model {
public:
  shared_ptr<double> bottomRightX{};
  shared_ptr<double> topLeftY{};
  shared_ptr<double> score{};
  shared_ptr<double> topLeftX{};
  shared_ptr<double> bottomRightY{};

  PedestrianDetectAttributeResponseBodyDataBoxes() {}

  explicit PedestrianDetectAttributeResponseBodyDataBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bottomRightX) {
      res["BottomRightX"] = boost::any(*bottomRightX);
    }
    if (topLeftY) {
      res["TopLeftY"] = boost::any(*topLeftY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (topLeftX) {
      res["TopLeftX"] = boost::any(*topLeftX);
    }
    if (bottomRightY) {
      res["BottomRightY"] = boost::any(*bottomRightY);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BottomRightX") != m.end() && !m["BottomRightX"].empty()) {
      bottomRightX = make_shared<double>(boost::any_cast<double>(m["BottomRightX"]));
    }
    if (m.find("TopLeftY") != m.end() && !m["TopLeftY"].empty()) {
      topLeftY = make_shared<double>(boost::any_cast<double>(m["TopLeftY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("TopLeftX") != m.end() && !m["TopLeftX"].empty()) {
      topLeftX = make_shared<double>(boost::any_cast<double>(m["TopLeftX"]));
    }
    if (m.find("BottomRightY") != m.end() && !m["BottomRightY"].empty()) {
      bottomRightY = make_shared<double>(boost::any_cast<double>(m["BottomRightY"]));
    }
  }


  virtual ~PedestrianDetectAttributeResponseBodyDataBoxes() = default;
};
class PedestrianDetectAttributeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<PedestrianDetectAttributeResponseBodyDataAttributes>> attributes{};
  shared_ptr<vector<PedestrianDetectAttributeResponseBodyDataBoxes>> boxes{};
  shared_ptr<long> personNumber{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  PedestrianDetectAttributeResponseBodyData() {}

  explicit PedestrianDetectAttributeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      vector<boost::any> temp1;
      for(auto item1:*attributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attributes"] = boost::any(temp1);
    }
    if (boxes) {
      vector<boost::any> temp1;
      for(auto item1:*boxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Boxes"] = boost::any(temp1);
    }
    if (personNumber) {
      res["PersonNumber"] = boost::any(*personNumber);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<PedestrianDetectAttributeResponseBodyDataAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PedestrianDetectAttributeResponseBodyDataAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributes = make_shared<vector<PedestrianDetectAttributeResponseBodyDataAttributes>>(expect1);
      }
    }
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<PedestrianDetectAttributeResponseBodyDataBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PedestrianDetectAttributeResponseBodyDataBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<PedestrianDetectAttributeResponseBodyDataBoxes>>(expect1);
      }
    }
    if (m.find("PersonNumber") != m.end() && !m["PersonNumber"].empty()) {
      personNumber = make_shared<long>(boost::any_cast<long>(m["PersonNumber"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~PedestrianDetectAttributeResponseBodyData() = default;
};
class PedestrianDetectAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PedestrianDetectAttributeResponseBodyData> data{};

  PedestrianDetectAttributeResponseBody() {}

  explicit PedestrianDetectAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PedestrianDetectAttributeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PedestrianDetectAttributeResponseBodyData>(model1);
      }
    }
  }


  virtual ~PedestrianDetectAttributeResponseBody() = default;
};
class PedestrianDetectAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PedestrianDetectAttributeResponseBody> body{};

  PedestrianDetectAttributeResponse() {}

  explicit PedestrianDetectAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PedestrianDetectAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PedestrianDetectAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~PedestrianDetectAttributeResponse() = default;
};
class FaceFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> resourceType{};
  shared_ptr<double> strength{};

  FaceFilterRequest() {}

  explicit FaceFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (strength) {
      res["Strength"] = boost::any(*strength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Strength") != m.end() && !m["Strength"].empty()) {
      strength = make_shared<double>(boost::any_cast<double>(m["Strength"]));
    }
  }


  virtual ~FaceFilterRequest() = default;
};
class FaceFilterAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> resourceType{};
  shared_ptr<double> strength{};

  FaceFilterAdvanceRequest() {}

  explicit FaceFilterAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (strength) {
      res["Strength"] = boost::any(*strength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Strength") != m.end() && !m["Strength"].empty()) {
      strength = make_shared<double>(boost::any_cast<double>(m["Strength"]));
    }
  }


  virtual ~FaceFilterAdvanceRequest() = default;
};
class FaceFilterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  FaceFilterResponseBodyData() {}

  explicit FaceFilterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FaceFilterResponseBodyData() = default;
};
class FaceFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<FaceFilterResponseBodyData> data{};

  FaceFilterResponseBody() {}

  explicit FaceFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceFilterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FaceFilterResponseBodyData>(model1);
      }
    }
  }


  virtual ~FaceFilterResponseBody() = default;
};
class FaceFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FaceFilterResponseBody> body{};

  FaceFilterResponse() {}

  explicit FaceFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceFilterResponseBody>(model1);
      }
    }
  }


  virtual ~FaceFilterResponse() = default;
};
class FaceBeautyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<double> sharp{};
  shared_ptr<double> smooth{};
  shared_ptr<double> white{};

  FaceBeautyRequest() {}

  explicit FaceBeautyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (sharp) {
      res["Sharp"] = boost::any(*sharp);
    }
    if (smooth) {
      res["Smooth"] = boost::any(*smooth);
    }
    if (white) {
      res["White"] = boost::any(*white);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Sharp") != m.end() && !m["Sharp"].empty()) {
      sharp = make_shared<double>(boost::any_cast<double>(m["Sharp"]));
    }
    if (m.find("Smooth") != m.end() && !m["Smooth"].empty()) {
      smooth = make_shared<double>(boost::any_cast<double>(m["Smooth"]));
    }
    if (m.find("White") != m.end() && !m["White"].empty()) {
      white = make_shared<double>(boost::any_cast<double>(m["White"]));
    }
  }


  virtual ~FaceBeautyRequest() = default;
};
class FaceBeautyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<double> sharp{};
  shared_ptr<double> smooth{};
  shared_ptr<double> white{};

  FaceBeautyAdvanceRequest() {}

  explicit FaceBeautyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sharp) {
      res["Sharp"] = boost::any(*sharp);
    }
    if (smooth) {
      res["Smooth"] = boost::any(*smooth);
    }
    if (white) {
      res["White"] = boost::any(*white);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Sharp") != m.end() && !m["Sharp"].empty()) {
      sharp = make_shared<double>(boost::any_cast<double>(m["Sharp"]));
    }
    if (m.find("Smooth") != m.end() && !m["Smooth"].empty()) {
      smooth = make_shared<double>(boost::any_cast<double>(m["Smooth"]));
    }
    if (m.find("White") != m.end() && !m["White"].empty()) {
      white = make_shared<double>(boost::any_cast<double>(m["White"]));
    }
  }


  virtual ~FaceBeautyAdvanceRequest() = default;
};
class FaceBeautyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  FaceBeautyResponseBodyData() {}

  explicit FaceBeautyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FaceBeautyResponseBodyData() = default;
};
class FaceBeautyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<FaceBeautyResponseBodyData> data{};

  FaceBeautyResponseBody() {}

  explicit FaceBeautyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceBeautyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FaceBeautyResponseBodyData>(model1);
      }
    }
  }


  virtual ~FaceBeautyResponseBody() = default;
};
class FaceBeautyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FaceBeautyResponseBody> body{};

  FaceBeautyResponse() {}

  explicit FaceBeautyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceBeautyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceBeautyResponseBody>(model1);
      }
    }
  }


  virtual ~FaceBeautyResponse() = default;
};
class GenerateHumanAnimeStyleRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> algoType{};

  GenerateHumanAnimeStyleRequest() {}

  explicit GenerateHumanAnimeStyleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (algoType) {
      res["AlgoType"] = boost::any(*algoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("AlgoType") != m.end() && !m["AlgoType"].empty()) {
      algoType = make_shared<string>(boost::any_cast<string>(m["AlgoType"]));
    }
  }


  virtual ~GenerateHumanAnimeStyleRequest() = default;
};
class GenerateHumanAnimeStyleAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> algoType{};

  GenerateHumanAnimeStyleAdvanceRequest() {}

  explicit GenerateHumanAnimeStyleAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (algoType) {
      res["AlgoType"] = boost::any(*algoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("AlgoType") != m.end() && !m["AlgoType"].empty()) {
      algoType = make_shared<string>(boost::any_cast<string>(m["AlgoType"]));
    }
  }


  virtual ~GenerateHumanAnimeStyleAdvanceRequest() = default;
};
class GenerateHumanAnimeStyleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  GenerateHumanAnimeStyleResponseBodyData() {}

  explicit GenerateHumanAnimeStyleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GenerateHumanAnimeStyleResponseBodyData() = default;
};
class GenerateHumanAnimeStyleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateHumanAnimeStyleResponseBodyData> data{};

  GenerateHumanAnimeStyleResponseBody() {}

  explicit GenerateHumanAnimeStyleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateHumanAnimeStyleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateHumanAnimeStyleResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateHumanAnimeStyleResponseBody() = default;
};
class GenerateHumanAnimeStyleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateHumanAnimeStyleResponseBody> body{};

  GenerateHumanAnimeStyleResponse() {}

  explicit GenerateHumanAnimeStyleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateHumanAnimeStyleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateHumanAnimeStyleResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateHumanAnimeStyleResponse() = default;
};
class QueryFaceImageTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};

  QueryFaceImageTemplateRequest() {}

  explicit QueryFaceImageTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~QueryFaceImageTemplateRequest() = default;
};
class QueryFaceImageTemplateResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};

  QueryFaceImageTemplateResponseBodyDataElements() {}

  explicit QueryFaceImageTemplateResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
  }


  virtual ~QueryFaceImageTemplateResponseBodyDataElements() = default;
};
class QueryFaceImageTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFaceImageTemplateResponseBodyDataElements>> elements{};

  QueryFaceImageTemplateResponseBodyData() {}

  explicit QueryFaceImageTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryFaceImageTemplateResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceImageTemplateResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<QueryFaceImageTemplateResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~QueryFaceImageTemplateResponseBodyData() = default;
};
class QueryFaceImageTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryFaceImageTemplateResponseBodyData> data{};

  QueryFaceImageTemplateResponseBody() {}

  explicit QueryFaceImageTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryFaceImageTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceImageTemplateResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryFaceImageTemplateResponseBody() = default;
};
class QueryFaceImageTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryFaceImageTemplateResponseBody> body{};

  QueryFaceImageTemplateResponse() {}

  explicit QueryFaceImageTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryFaceImageTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceImageTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceImageTemplateResponse() = default;
};
class DetectFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectFaceRequest() {}

  explicit DetectFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectFaceRequest() = default;
};
class DetectFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectFaceAdvanceRequest() {}

  explicit DetectFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectFaceAdvanceRequest() = default;
};
class DetectFaceResponseBodyDataQualities : public Darabonba::Model {
public:
  shared_ptr<vector<double>> scoreList{};
  shared_ptr<vector<double>> blurList{};
  shared_ptr<vector<double>> fnfList{};
  shared_ptr<vector<double>> glassList{};
  shared_ptr<vector<double>> illuList{};
  shared_ptr<vector<double>> maskList{};
  shared_ptr<vector<double>> noiseList{};
  shared_ptr<vector<double>> poseList{};

  DetectFaceResponseBodyDataQualities() {}

  explicit DetectFaceResponseBodyDataQualities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreList) {
      res["ScoreList"] = boost::any(*scoreList);
    }
    if (blurList) {
      res["BlurList"] = boost::any(*blurList);
    }
    if (fnfList) {
      res["FnfList"] = boost::any(*fnfList);
    }
    if (glassList) {
      res["GlassList"] = boost::any(*glassList);
    }
    if (illuList) {
      res["IlluList"] = boost::any(*illuList);
    }
    if (maskList) {
      res["MaskList"] = boost::any(*maskList);
    }
    if (noiseList) {
      res["NoiseList"] = boost::any(*noiseList);
    }
    if (poseList) {
      res["PoseList"] = boost::any(*poseList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreList") != m.end() && !m["ScoreList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["ScoreList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScoreList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      scoreList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("BlurList") != m.end() && !m["BlurList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["BlurList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlurList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      blurList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("FnfList") != m.end() && !m["FnfList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["FnfList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FnfList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      fnfList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("GlassList") != m.end() && !m["GlassList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["GlassList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GlassList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      glassList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("IlluList") != m.end() && !m["IlluList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["IlluList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IlluList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      illuList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("MaskList") != m.end() && !m["MaskList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["MaskList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MaskList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      maskList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("NoiseList") != m.end() && !m["NoiseList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["NoiseList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NoiseList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      noiseList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PoseList") != m.end() && !m["PoseList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PoseList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PoseList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      poseList = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectFaceResponseBodyDataQualities() = default;
};
class DetectFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<double>> faceProbabilityList{};
  shared_ptr<vector<double>> pupils{};
  shared_ptr<vector<long>> faceRectangles{};
  shared_ptr<long> faceCount{};
  shared_ptr<vector<double>> poseList{};
  shared_ptr<vector<double>> landmarks{};
  shared_ptr<long> landmarkCount{};
  shared_ptr<DetectFaceResponseBodyDataQualities> qualities{};

  DetectFaceResponseBodyData() {}

  explicit DetectFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceProbabilityList) {
      res["FaceProbabilityList"] = boost::any(*faceProbabilityList);
    }
    if (pupils) {
      res["Pupils"] = boost::any(*pupils);
    }
    if (faceRectangles) {
      res["FaceRectangles"] = boost::any(*faceRectangles);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (poseList) {
      res["PoseList"] = boost::any(*poseList);
    }
    if (landmarks) {
      res["Landmarks"] = boost::any(*landmarks);
    }
    if (landmarkCount) {
      res["LandmarkCount"] = boost::any(*landmarkCount);
    }
    if (qualities) {
      res["Qualities"] = qualities ? boost::any(qualities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceProbabilityList") != m.end() && !m["FaceProbabilityList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["FaceProbabilityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FaceProbabilityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      faceProbabilityList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Pupils") != m.end() && !m["Pupils"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Pupils"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Pupils"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      pupils = make_shared<vector<double>>(toVec1);
    }
    if (m.find("FaceRectangles") != m.end() && !m["FaceRectangles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["FaceRectangles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FaceRectangles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      faceRectangles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
    }
    if (m.find("PoseList") != m.end() && !m["PoseList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PoseList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PoseList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      poseList = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Landmarks") != m.end() && !m["Landmarks"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Landmarks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Landmarks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      landmarks = make_shared<vector<double>>(toVec1);
    }
    if (m.find("LandmarkCount") != m.end() && !m["LandmarkCount"].empty()) {
      landmarkCount = make_shared<long>(boost::any_cast<long>(m["LandmarkCount"]));
    }
    if (m.find("Qualities") != m.end() && !m["Qualities"].empty()) {
      if (typeid(map<string, boost::any>) == m["Qualities"].type()) {
        DetectFaceResponseBodyDataQualities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Qualities"]));
        qualities = make_shared<DetectFaceResponseBodyDataQualities>(model1);
      }
    }
  }


  virtual ~DetectFaceResponseBodyData() = default;
};
class DetectFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectFaceResponseBodyData> data{};

  DetectFaceResponseBody() {}

  explicit DetectFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectFaceResponseBody() = default;
};
class DetectFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectFaceResponseBody> body{};

  DetectFaceResponse() {}

  explicit DetectFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectFaceResponseBody>(model1);
      }
    }
  }


  virtual ~DetectFaceResponse() = default;
};
class DetectMaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectMaskRequest() {}

  explicit DetectMaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectMaskRequest() = default;
};
class DetectMaskAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectMaskAdvanceRequest() {}

  explicit DetectMaskAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectMaskAdvanceRequest() = default;
};
class DetectMaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> mask{};
  shared_ptr<double> faceProbability{};

  DetectMaskResponseBodyData() {}

  explicit DetectMaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (faceProbability) {
      res["FaceProbability"] = boost::any(*faceProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<long>(boost::any_cast<long>(m["Mask"]));
    }
    if (m.find("FaceProbability") != m.end() && !m["FaceProbability"].empty()) {
      faceProbability = make_shared<double>(boost::any_cast<double>(m["FaceProbability"]));
    }
  }


  virtual ~DetectMaskResponseBodyData() = default;
};
class DetectMaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectMaskResponseBodyData> data{};

  DetectMaskResponseBody() {}

  explicit DetectMaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectMaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectMaskResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectMaskResponseBody() = default;
};
class DetectMaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectMaskResponseBody> body{};

  DetectMaskResponse() {}

  explicit DetectMaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectMaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectMaskResponseBody>(model1);
      }
    }
  }


  virtual ~DetectMaskResponse() = default;
};
class GenRealPersonVerificationTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateName{};
  shared_ptr<string> certificateNumber{};
  shared_ptr<string> metaInfo{};

  GenRealPersonVerificationTokenRequest() {}

  explicit GenRealPersonVerificationTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (certificateNumber) {
      res["CertificateNumber"] = boost::any(*certificateNumber);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("CertificateNumber") != m.end() && !m["CertificateNumber"].empty()) {
      certificateNumber = make_shared<string>(boost::any_cast<string>(m["CertificateNumber"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
  }


  virtual ~GenRealPersonVerificationTokenRequest() = default;
};
class GenRealPersonVerificationTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> verificationToken{};

  GenRealPersonVerificationTokenResponseBodyData() {}

  explicit GenRealPersonVerificationTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationToken) {
      res["VerificationToken"] = boost::any(*verificationToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationToken") != m.end() && !m["VerificationToken"].empty()) {
      verificationToken = make_shared<string>(boost::any_cast<string>(m["VerificationToken"]));
    }
  }


  virtual ~GenRealPersonVerificationTokenResponseBodyData() = default;
};
class GenRealPersonVerificationTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenRealPersonVerificationTokenResponseBodyData> data{};

  GenRealPersonVerificationTokenResponseBody() {}

  explicit GenRealPersonVerificationTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenRealPersonVerificationTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenRealPersonVerificationTokenResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenRealPersonVerificationTokenResponseBody() = default;
};
class GenRealPersonVerificationTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenRealPersonVerificationTokenResponseBody> body{};

  GenRealPersonVerificationTokenResponse() {}

  explicit GenRealPersonVerificationTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenRealPersonVerificationTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenRealPersonVerificationTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenRealPersonVerificationTokenResponse() = default;
};
class ListFaceDbsResponseBodyDataDbList : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListFaceDbsResponseBodyDataDbList() {}

  explicit ListFaceDbsResponseBodyDataDbList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListFaceDbsResponseBodyDataDbList() = default;
};
class ListFaceDbsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListFaceDbsResponseBodyDataDbList>> dbList{};

  ListFaceDbsResponseBodyData() {}

  explicit ListFaceDbsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbList) {
      vector<boost::any> temp1;
      for(auto item1:*dbList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbList"].type()) {
        vector<ListFaceDbsResponseBodyDataDbList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFaceDbsResponseBodyDataDbList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbList = make_shared<vector<ListFaceDbsResponseBodyDataDbList>>(expect1);
      }
    }
  }


  virtual ~ListFaceDbsResponseBodyData() = default;
};
class ListFaceDbsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListFaceDbsResponseBodyData> data{};

  ListFaceDbsResponseBody() {}

  explicit ListFaceDbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFaceDbsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListFaceDbsResponseBodyData>(model1);
      }
    }
  }


  virtual ~ListFaceDbsResponseBody() = default;
};
class ListFaceDbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListFaceDbsResponseBody> body{};

  ListFaceDbsResponse() {}

  explicit ListFaceDbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFaceDbsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFaceDbsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFaceDbsResponse() = default;
};
class RecognizeActionRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};
  shared_ptr<vector<uint8_t>> imageData{};

  RecognizeActionRequestURLList() {}

  explicit RecognizeActionRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    if (imageData) {
      res["imageData"] = boost::any(*imageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
    if (m.find("imageData") != m.end() && !m["imageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["imageData"]));
    }
  }


  virtual ~RecognizeActionRequestURLList() = default;
};
class RecognizeActionRequest : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> videoUrl{};
  shared_ptr<vector<RecognizeActionRequestURLList>> URLList{};
  shared_ptr<vector<uint8_t>> videoData{};

  RecognizeActionRequest() {}

  explicit RecognizeActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    if (videoData) {
      res["VideoData"] = boost::any(*videoData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<RecognizeActionRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeActionRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<RecognizeActionRequestURLList>>(expect1);
      }
    }
    if (m.find("VideoData") != m.end() && !m["VideoData"].empty()) {
      videoData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["VideoData"]));
    }
  }


  virtual ~RecognizeActionRequest() = default;
};
class RecognizeActionResponseBodyDataElementsBoxes : public Darabonba::Model {
public:
  shared_ptr<vector<long>> box{};

  RecognizeActionResponseBodyDataElementsBoxes() {}

  explicit RecognizeActionResponseBodyDataElementsBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (box) {
      res["Box"] = boost::any(*box);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Box"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Box"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      box = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RecognizeActionResponseBodyDataElementsBoxes() = default;
};
class RecognizeActionResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<vector<double>> scores{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<vector<RecognizeActionResponseBodyDataElementsBoxes>> boxes{};
  shared_ptr<long> timestamp{};

  RecognizeActionResponseBodyDataElements() {}

  explicit RecognizeActionResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scores) {
      res["Scores"] = boost::any(*scores);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (boxes) {
      vector<boost::any> temp1;
      for(auto item1:*boxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Boxes"] = boost::any(temp1);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Scores") != m.end() && !m["Scores"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Scores"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Scores"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      scores = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<RecognizeActionResponseBodyDataElementsBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeActionResponseBodyDataElementsBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<RecognizeActionResponseBodyDataElementsBoxes>>(expect1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~RecognizeActionResponseBodyDataElements() = default;
};
class RecognizeActionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeActionResponseBodyDataElements>> elements{};

  RecognizeActionResponseBodyData() {}

  explicit RecognizeActionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizeActionResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeActionResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeActionResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeActionResponseBodyData() = default;
};
class RecognizeActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeActionResponseBodyData> data{};

  RecognizeActionResponseBody() {}

  explicit RecognizeActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeActionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeActionResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeActionResponseBody() = default;
};
class RecognizeActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeActionResponseBody> body{};

  RecognizeActionResponse() {}

  explicit RecognizeActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeActionResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeActionResponse() = default;
};
class DetectChefCapRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectChefCapRequest() {}

  explicit DetectChefCapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectChefCapRequest() = default;
};
class DetectChefCapAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectChefCapAdvanceRequest() {}

  explicit DetectChefCapAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectChefCapAdvanceRequest() = default;
};
class DetectChefCapResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> category{};
  shared_ptr<vector<double>> box{};

  DetectChefCapResponseBodyDataElements() {}

  explicit DetectChefCapResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
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
  }


  virtual ~DetectChefCapResponseBodyDataElements() = default;
};
class DetectChefCapResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectChefCapResponseBodyDataElements>> elements{};

  DetectChefCapResponseBodyData() {}

  explicit DetectChefCapResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectChefCapResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectChefCapResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectChefCapResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~DetectChefCapResponseBodyData() = default;
};
class DetectChefCapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectChefCapResponseBodyData> data{};

  DetectChefCapResponseBody() {}

  explicit DetectChefCapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectChefCapResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectChefCapResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectChefCapResponseBody() = default;
};
class DetectChefCapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectChefCapResponseBody> body{};

  DetectChefCapResponse() {}

  explicit DetectChefCapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectChefCapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectChefCapResponseBody>(model1);
      }
    }
  }


  virtual ~DetectChefCapResponse() = default;
};
class DetectLivingFaceRequestTasks : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<uint8_t>> imageData{};

  DetectLivingFaceRequestTasks() {}

  explicit DetectLivingFaceRequestTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageData"]));
    }
  }


  virtual ~DetectLivingFaceRequestTasks() = default;
};
class DetectLivingFaceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DetectLivingFaceRequestTasks>> tasks{};

  DetectLivingFaceRequest() {}

  explicit DetectLivingFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectLivingFaceRequestTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLivingFaceRequestTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<DetectLivingFaceRequestTasks>>(expect1);
      }
    }
  }


  virtual ~DetectLivingFaceRequest() = default;
};
class DetectLivingFaceResponseBodyDataElementsResultsFrames : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<double> rate{};

  DetectLivingFaceResponseBodyDataElementsResultsFrames() {}

  explicit DetectLivingFaceResponseBodyDataElementsResultsFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~DetectLivingFaceResponseBodyDataElementsResultsFrames() = default;
};
class DetectLivingFaceResponseBodyDataElementsResults : public Darabonba::Model {
public:
  shared_ptr<string> suggestion{};
  shared_ptr<vector<DetectLivingFaceResponseBodyDataElementsResultsFrames>> frames{};
  shared_ptr<string> label{};
  shared_ptr<double> rate{};

  DetectLivingFaceResponseBodyDataElementsResults() {}

  explicit DetectLivingFaceResponseBodyDataElementsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Frames"] = boost::any(temp1);
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
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      if (typeid(vector<boost::any>) == m["Frames"].type()) {
        vector<DetectLivingFaceResponseBodyDataElementsResultsFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLivingFaceResponseBodyDataElementsResultsFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<DetectLivingFaceResponseBodyDataElementsResultsFrames>>(expect1);
      }
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~DetectLivingFaceResponseBodyDataElementsResults() = default;
};
class DetectLivingFaceResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<DetectLivingFaceResponseBodyDataElementsResults>> results{};

  DetectLivingFaceResponseBodyDataElements() {}

  explicit DetectLivingFaceResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectLivingFaceResponseBodyDataElementsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLivingFaceResponseBodyDataElementsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<DetectLivingFaceResponseBodyDataElementsResults>>(expect1);
      }
    }
  }


  virtual ~DetectLivingFaceResponseBodyDataElements() = default;
};
class DetectLivingFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectLivingFaceResponseBodyDataElements>> elements{};

  DetectLivingFaceResponseBodyData() {}

  explicit DetectLivingFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectLivingFaceResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLivingFaceResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectLivingFaceResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~DetectLivingFaceResponseBodyData() = default;
};
class DetectLivingFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectLivingFaceResponseBodyData> data{};

  DetectLivingFaceResponseBody() {}

  explicit DetectLivingFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectLivingFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectLivingFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectLivingFaceResponseBody() = default;
};
class DetectLivingFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectLivingFaceResponseBody> body{};

  DetectLivingFaceResponse() {}

  explicit DetectLivingFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectLivingFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectLivingFaceResponseBody>(model1);
      }
    }
  }


  virtual ~DetectLivingFaceResponse() = default;
};
class DetectCelebrityRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectCelebrityRequest() {}

  explicit DetectCelebrityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectCelebrityRequest() = default;
};
class DetectCelebrityAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectCelebrityAdvanceRequest() {}

  explicit DetectCelebrityAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectCelebrityAdvanceRequest() = default;
};
class DetectCelebrityResponseBodyDataFaceRecognizeResults : public Darabonba::Model {
public:
  shared_ptr<vector<double>> faceBoxes{};
  shared_ptr<string> name{};

  DetectCelebrityResponseBodyDataFaceRecognizeResults() {}

  explicit DetectCelebrityResponseBodyDataFaceRecognizeResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceBoxes) {
      res["FaceBoxes"] = boost::any(*faceBoxes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceBoxes") != m.end() && !m["FaceBoxes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["FaceBoxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FaceBoxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      faceBoxes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DetectCelebrityResponseBodyDataFaceRecognizeResults() = default;
};
class DetectCelebrityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectCelebrityResponseBodyDataFaceRecognizeResults>> faceRecognizeResults{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DetectCelebrityResponseBodyData() {}

  explicit DetectCelebrityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRecognizeResults) {
      vector<boost::any> temp1;
      for(auto item1:*faceRecognizeResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceRecognizeResults"] = boost::any(temp1);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRecognizeResults") != m.end() && !m["FaceRecognizeResults"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceRecognizeResults"].type()) {
        vector<DetectCelebrityResponseBodyDataFaceRecognizeResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceRecognizeResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectCelebrityResponseBodyDataFaceRecognizeResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceRecognizeResults = make_shared<vector<DetectCelebrityResponseBodyDataFaceRecognizeResults>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DetectCelebrityResponseBodyData() = default;
};
class DetectCelebrityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectCelebrityResponseBodyData> data{};

  DetectCelebrityResponseBody() {}

  explicit DetectCelebrityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectCelebrityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectCelebrityResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectCelebrityResponseBody() = default;
};
class DetectCelebrityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectCelebrityResponseBody> body{};

  DetectCelebrityResponse() {}

  explicit DetectCelebrityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectCelebrityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectCelebrityResponseBody>(model1);
      }
    }
  }


  virtual ~DetectCelebrityResponse() = default;
};
class GetRealPersonVerificationResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> verificationToken{};
  shared_ptr<string> materialHash{};

  GetRealPersonVerificationResultRequest() {}

  explicit GetRealPersonVerificationResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationToken) {
      res["VerificationToken"] = boost::any(*verificationToken);
    }
    if (materialHash) {
      res["MaterialHash"] = boost::any(*materialHash);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationToken") != m.end() && !m["VerificationToken"].empty()) {
      verificationToken = make_shared<string>(boost::any_cast<string>(m["VerificationToken"]));
    }
    if (m.find("MaterialHash") != m.end() && !m["MaterialHash"].empty()) {
      materialHash = make_shared<string>(boost::any_cast<string>(m["MaterialHash"]));
    }
  }


  virtual ~GetRealPersonVerificationResultRequest() = default;
};
class GetRealPersonVerificationResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> passed{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> materialMatch{};

  GetRealPersonVerificationResultResponseBodyData() {}

  explicit GetRealPersonVerificationResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (materialMatch) {
      res["MaterialMatch"] = boost::any(*materialMatch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<bool>(boost::any_cast<bool>(m["Passed"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("MaterialMatch") != m.end() && !m["MaterialMatch"].empty()) {
      materialMatch = make_shared<string>(boost::any_cast<string>(m["MaterialMatch"]));
    }
  }


  virtual ~GetRealPersonVerificationResultResponseBodyData() = default;
};
class GetRealPersonVerificationResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRealPersonVerificationResultResponseBodyData> data{};

  GetRealPersonVerificationResultResponseBody() {}

  explicit GetRealPersonVerificationResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRealPersonVerificationResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRealPersonVerificationResultResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetRealPersonVerificationResultResponseBody() = default;
};
class GetRealPersonVerificationResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRealPersonVerificationResultResponseBody> body{};

  GetRealPersonVerificationResultResponse() {}

  explicit GetRealPersonVerificationResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRealPersonVerificationResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRealPersonVerificationResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetRealPersonVerificationResultResponse() = default;
};
class DeleteFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> faceId{};

  DeleteFaceRequest() {}

  explicit DeleteFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
  }


  virtual ~DeleteFaceRequest() = default;
};
class DeleteFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFaceResponseBody() {}

  explicit DeleteFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFaceResponseBody() = default;
};
class DeleteFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFaceResponseBody> body{};

  DeleteFaceResponse() {}

  explicit DeleteFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceResponse() = default;
};
class ExtractPedestrianFeatureAttributeRequestUrlList : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  ExtractPedestrianFeatureAttributeRequestUrlList() {}

  explicit ExtractPedestrianFeatureAttributeRequestUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExtractPedestrianFeatureAttributeRequestUrlList() = default;
};
class ExtractPedestrianFeatureAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<string> imageURL{};
  shared_ptr<vector<ExtractPedestrianFeatureAttributeRequestUrlList>> urlList{};

  ExtractPedestrianFeatureAttributeRequest() {}

  explicit ExtractPedestrianFeatureAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (urlList) {
      vector<boost::any> temp1;
      for(auto item1:*urlList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UrlList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("UrlList") != m.end() && !m["UrlList"].empty()) {
      if (typeid(vector<boost::any>) == m["UrlList"].type()) {
        vector<ExtractPedestrianFeatureAttributeRequestUrlList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UrlList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtractPedestrianFeatureAttributeRequestUrlList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        urlList = make_shared<vector<ExtractPedestrianFeatureAttributeRequestUrlList>>(expect1);
      }
    }
  }


  virtual ~ExtractPedestrianFeatureAttributeRequest() = default;
};
class ExtractPedestrianFeatureAttributeResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<double> qualityScore{};
  shared_ptr<string> objType{};
  shared_ptr<string> feature{};
  shared_ptr<string> gender{};
  shared_ptr<double> lowerColorScore{};
  shared_ptr<double> objTypeScore{};
  shared_ptr<string> age{};
  shared_ptr<double> ageScore{};
  shared_ptr<double> upperTypeScore{};
  shared_ptr<double> lowerTypeScore{};
  shared_ptr<string> lowerColor{};
  shared_ptr<string> hair{};
  shared_ptr<string> upperColor{};
  shared_ptr<double> genderScore{};
  shared_ptr<string> upperType{};
  shared_ptr<double> hairScore{};
  shared_ptr<string> lowerType{};
  shared_ptr<double> upperColorScore{};

  ExtractPedestrianFeatureAttributeResponseBodyDataElements() {}

  explicit ExtractPedestrianFeatureAttributeResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityScore) {
      res["QualityScore"] = boost::any(*qualityScore);
    }
    if (objType) {
      res["ObjType"] = boost::any(*objType);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (lowerColorScore) {
      res["LowerColorScore"] = boost::any(*lowerColorScore);
    }
    if (objTypeScore) {
      res["ObjTypeScore"] = boost::any(*objTypeScore);
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (ageScore) {
      res["AgeScore"] = boost::any(*ageScore);
    }
    if (upperTypeScore) {
      res["UpperTypeScore"] = boost::any(*upperTypeScore);
    }
    if (lowerTypeScore) {
      res["LowerTypeScore"] = boost::any(*lowerTypeScore);
    }
    if (lowerColor) {
      res["LowerColor"] = boost::any(*lowerColor);
    }
    if (hair) {
      res["Hair"] = boost::any(*hair);
    }
    if (upperColor) {
      res["UpperColor"] = boost::any(*upperColor);
    }
    if (genderScore) {
      res["GenderScore"] = boost::any(*genderScore);
    }
    if (upperType) {
      res["UpperType"] = boost::any(*upperType);
    }
    if (hairScore) {
      res["HairScore"] = boost::any(*hairScore);
    }
    if (lowerType) {
      res["LowerType"] = boost::any(*lowerType);
    }
    if (upperColorScore) {
      res["UpperColorScore"] = boost::any(*upperColorScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityScore") != m.end() && !m["QualityScore"].empty()) {
      qualityScore = make_shared<double>(boost::any_cast<double>(m["QualityScore"]));
    }
    if (m.find("ObjType") != m.end() && !m["ObjType"].empty()) {
      objType = make_shared<string>(boost::any_cast<string>(m["ObjType"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("LowerColorScore") != m.end() && !m["LowerColorScore"].empty()) {
      lowerColorScore = make_shared<double>(boost::any_cast<double>(m["LowerColorScore"]));
    }
    if (m.find("ObjTypeScore") != m.end() && !m["ObjTypeScore"].empty()) {
      objTypeScore = make_shared<double>(boost::any_cast<double>(m["ObjTypeScore"]));
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<string>(boost::any_cast<string>(m["Age"]));
    }
    if (m.find("AgeScore") != m.end() && !m["AgeScore"].empty()) {
      ageScore = make_shared<double>(boost::any_cast<double>(m["AgeScore"]));
    }
    if (m.find("UpperTypeScore") != m.end() && !m["UpperTypeScore"].empty()) {
      upperTypeScore = make_shared<double>(boost::any_cast<double>(m["UpperTypeScore"]));
    }
    if (m.find("LowerTypeScore") != m.end() && !m["LowerTypeScore"].empty()) {
      lowerTypeScore = make_shared<double>(boost::any_cast<double>(m["LowerTypeScore"]));
    }
    if (m.find("LowerColor") != m.end() && !m["LowerColor"].empty()) {
      lowerColor = make_shared<string>(boost::any_cast<string>(m["LowerColor"]));
    }
    if (m.find("Hair") != m.end() && !m["Hair"].empty()) {
      hair = make_shared<string>(boost::any_cast<string>(m["Hair"]));
    }
    if (m.find("UpperColor") != m.end() && !m["UpperColor"].empty()) {
      upperColor = make_shared<string>(boost::any_cast<string>(m["UpperColor"]));
    }
    if (m.find("GenderScore") != m.end() && !m["GenderScore"].empty()) {
      genderScore = make_shared<double>(boost::any_cast<double>(m["GenderScore"]));
    }
    if (m.find("UpperType") != m.end() && !m["UpperType"].empty()) {
      upperType = make_shared<string>(boost::any_cast<string>(m["UpperType"]));
    }
    if (m.find("HairScore") != m.end() && !m["HairScore"].empty()) {
      hairScore = make_shared<double>(boost::any_cast<double>(m["HairScore"]));
    }
    if (m.find("LowerType") != m.end() && !m["LowerType"].empty()) {
      lowerType = make_shared<string>(boost::any_cast<string>(m["LowerType"]));
    }
    if (m.find("UpperColorScore") != m.end() && !m["UpperColorScore"].empty()) {
      upperColorScore = make_shared<double>(boost::any_cast<double>(m["UpperColorScore"]));
    }
  }


  virtual ~ExtractPedestrianFeatureAttributeResponseBodyDataElements() = default;
};
class ExtractPedestrianFeatureAttributeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> qualityScore{};
  shared_ptr<string> objType{};
  shared_ptr<vector<ExtractPedestrianFeatureAttributeResponseBodyDataElements>> elements{};
  shared_ptr<string> feature{};
  shared_ptr<string> gender{};
  shared_ptr<double> lowerColorScore{};
  shared_ptr<double> objTypeScore{};
  shared_ptr<string> age{};
  shared_ptr<double> ageScore{};
  shared_ptr<double> upperTypeScore{};
  shared_ptr<double> lowerTypeScore{};
  shared_ptr<string> lowerColor{};
  shared_ptr<string> hair{};
  shared_ptr<string> upperColor{};
  shared_ptr<double> genderScore{};
  shared_ptr<string> upperType{};
  shared_ptr<double> hairScore{};
  shared_ptr<string> lowerType{};
  shared_ptr<double> upperColorScore{};

  ExtractPedestrianFeatureAttributeResponseBodyData() {}

  explicit ExtractPedestrianFeatureAttributeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityScore) {
      res["QualityScore"] = boost::any(*qualityScore);
    }
    if (objType) {
      res["ObjType"] = boost::any(*objType);
    }
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (lowerColorScore) {
      res["LowerColorScore"] = boost::any(*lowerColorScore);
    }
    if (objTypeScore) {
      res["ObjTypeScore"] = boost::any(*objTypeScore);
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (ageScore) {
      res["AgeScore"] = boost::any(*ageScore);
    }
    if (upperTypeScore) {
      res["UpperTypeScore"] = boost::any(*upperTypeScore);
    }
    if (lowerTypeScore) {
      res["LowerTypeScore"] = boost::any(*lowerTypeScore);
    }
    if (lowerColor) {
      res["LowerColor"] = boost::any(*lowerColor);
    }
    if (hair) {
      res["Hair"] = boost::any(*hair);
    }
    if (upperColor) {
      res["UpperColor"] = boost::any(*upperColor);
    }
    if (genderScore) {
      res["GenderScore"] = boost::any(*genderScore);
    }
    if (upperType) {
      res["UpperType"] = boost::any(*upperType);
    }
    if (hairScore) {
      res["HairScore"] = boost::any(*hairScore);
    }
    if (lowerType) {
      res["LowerType"] = boost::any(*lowerType);
    }
    if (upperColorScore) {
      res["UpperColorScore"] = boost::any(*upperColorScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityScore") != m.end() && !m["QualityScore"].empty()) {
      qualityScore = make_shared<double>(boost::any_cast<double>(m["QualityScore"]));
    }
    if (m.find("ObjType") != m.end() && !m["ObjType"].empty()) {
      objType = make_shared<string>(boost::any_cast<string>(m["ObjType"]));
    }
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<ExtractPedestrianFeatureAttributeResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtractPedestrianFeatureAttributeResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<ExtractPedestrianFeatureAttributeResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("LowerColorScore") != m.end() && !m["LowerColorScore"].empty()) {
      lowerColorScore = make_shared<double>(boost::any_cast<double>(m["LowerColorScore"]));
    }
    if (m.find("ObjTypeScore") != m.end() && !m["ObjTypeScore"].empty()) {
      objTypeScore = make_shared<double>(boost::any_cast<double>(m["ObjTypeScore"]));
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<string>(boost::any_cast<string>(m["Age"]));
    }
    if (m.find("AgeScore") != m.end() && !m["AgeScore"].empty()) {
      ageScore = make_shared<double>(boost::any_cast<double>(m["AgeScore"]));
    }
    if (m.find("UpperTypeScore") != m.end() && !m["UpperTypeScore"].empty()) {
      upperTypeScore = make_shared<double>(boost::any_cast<double>(m["UpperTypeScore"]));
    }
    if (m.find("LowerTypeScore") != m.end() && !m["LowerTypeScore"].empty()) {
      lowerTypeScore = make_shared<double>(boost::any_cast<double>(m["LowerTypeScore"]));
    }
    if (m.find("LowerColor") != m.end() && !m["LowerColor"].empty()) {
      lowerColor = make_shared<string>(boost::any_cast<string>(m["LowerColor"]));
    }
    if (m.find("Hair") != m.end() && !m["Hair"].empty()) {
      hair = make_shared<string>(boost::any_cast<string>(m["Hair"]));
    }
    if (m.find("UpperColor") != m.end() && !m["UpperColor"].empty()) {
      upperColor = make_shared<string>(boost::any_cast<string>(m["UpperColor"]));
    }
    if (m.find("GenderScore") != m.end() && !m["GenderScore"].empty()) {
      genderScore = make_shared<double>(boost::any_cast<double>(m["GenderScore"]));
    }
    if (m.find("UpperType") != m.end() && !m["UpperType"].empty()) {
      upperType = make_shared<string>(boost::any_cast<string>(m["UpperType"]));
    }
    if (m.find("HairScore") != m.end() && !m["HairScore"].empty()) {
      hairScore = make_shared<double>(boost::any_cast<double>(m["HairScore"]));
    }
    if (m.find("LowerType") != m.end() && !m["LowerType"].empty()) {
      lowerType = make_shared<string>(boost::any_cast<string>(m["LowerType"]));
    }
    if (m.find("UpperColorScore") != m.end() && !m["UpperColorScore"].empty()) {
      upperColorScore = make_shared<double>(boost::any_cast<double>(m["UpperColorScore"]));
    }
  }


  virtual ~ExtractPedestrianFeatureAttributeResponseBodyData() = default;
};
class ExtractPedestrianFeatureAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ExtractPedestrianFeatureAttributeResponseBodyData> data{};

  ExtractPedestrianFeatureAttributeResponseBody() {}

  explicit ExtractPedestrianFeatureAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractPedestrianFeatureAttributeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExtractPedestrianFeatureAttributeResponseBodyData>(model1);
      }
    }
  }


  virtual ~ExtractPedestrianFeatureAttributeResponseBody() = default;
};
class ExtractPedestrianFeatureAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtractPedestrianFeatureAttributeResponseBody> body{};

  ExtractPedestrianFeatureAttributeResponse() {}

  explicit ExtractPedestrianFeatureAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractPedestrianFeatureAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtractPedestrianFeatureAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ExtractPedestrianFeatureAttributeResponse() = default;
};
class RecognizeExpressionRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeExpressionRequest() {}

  explicit RecognizeExpressionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeExpressionRequest() = default;
};
class RecognizeExpressionAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeExpressionAdvanceRequest() {}

  explicit RecognizeExpressionAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeExpressionAdvanceRequest() = default;
};
class RecognizeExpressionResponseBodyDataElementsFaceRectangle : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeExpressionResponseBodyDataElementsFaceRectangle() {}

  explicit RecognizeExpressionResponseBodyDataElementsFaceRectangle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeExpressionResponseBodyDataElementsFaceRectangle() = default;
};
class RecognizeExpressionResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<RecognizeExpressionResponseBodyDataElementsFaceRectangle> faceRectangle{};
  shared_ptr<string> expression{};
  shared_ptr<double> faceProbability{};

  RecognizeExpressionResponseBodyDataElements() {}

  explicit RecognizeExpressionResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRectangle) {
      res["FaceRectangle"] = faceRectangle ? boost::any(faceRectangle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (faceProbability) {
      res["FaceProbability"] = boost::any(*faceProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRectangle") != m.end() && !m["FaceRectangle"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRectangle"].type()) {
        RecognizeExpressionResponseBodyDataElementsFaceRectangle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRectangle"]));
        faceRectangle = make_shared<RecognizeExpressionResponseBodyDataElementsFaceRectangle>(model1);
      }
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("FaceProbability") != m.end() && !m["FaceProbability"].empty()) {
      faceProbability = make_shared<double>(boost::any_cast<double>(m["FaceProbability"]));
    }
  }


  virtual ~RecognizeExpressionResponseBodyDataElements() = default;
};
class RecognizeExpressionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeExpressionResponseBodyDataElements>> elements{};

  RecognizeExpressionResponseBodyData() {}

  explicit RecognizeExpressionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizeExpressionResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeExpressionResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeExpressionResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeExpressionResponseBodyData() = default;
};
class RecognizeExpressionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeExpressionResponseBodyData> data{};

  RecognizeExpressionResponseBody() {}

  explicit RecognizeExpressionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeExpressionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeExpressionResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeExpressionResponseBody() = default;
};
class RecognizeExpressionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeExpressionResponseBody> body{};

  RecognizeExpressionResponse() {}

  explicit RecognizeExpressionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeExpressionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeExpressionResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeExpressionResponse() = default;
};
class MergeImageFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> imageURL{};

  MergeImageFaceRequest() {}

  explicit MergeImageFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~MergeImageFaceRequest() = default;
};
class MergeImageFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};

  MergeImageFaceAdvanceRequest() {}

  explicit MergeImageFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~MergeImageFaceAdvanceRequest() = default;
};
class MergeImageFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  MergeImageFaceResponseBodyData() {}

  explicit MergeImageFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MergeImageFaceResponseBodyData() = default;
};
class MergeImageFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<MergeImageFaceResponseBodyData> data{};

  MergeImageFaceResponseBody() {}

  explicit MergeImageFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeImageFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MergeImageFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~MergeImageFaceResponseBody() = default;
};
class MergeImageFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MergeImageFaceResponseBody> body{};

  MergeImageFaceResponse() {}

  explicit MergeImageFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeImageFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MergeImageFaceResponseBody>(model1);
      }
    }
  }


  virtual ~MergeImageFaceResponse() = default;
};
class ExtractFingerPrintRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<uint8_t>> imageData{};

  ExtractFingerPrintRequest() {}

  explicit ExtractFingerPrintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageData"]));
    }
  }


  virtual ~ExtractFingerPrintRequest() = default;
};
class ExtractFingerPrintAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<vector<uint8_t>> imageData{};

  ExtractFingerPrintAdvanceRequest() {}

  explicit ExtractFingerPrintAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageData"]));
    }
  }


  virtual ~ExtractFingerPrintAdvanceRequest() = default;
};
class ExtractFingerPrintResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> fingerPrint{};

  ExtractFingerPrintResponseBodyData() {}

  explicit ExtractFingerPrintResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fingerPrint) {
      res["FingerPrint"] = boost::any(*fingerPrint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FingerPrint") != m.end() && !m["FingerPrint"].empty()) {
      fingerPrint = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["FingerPrint"]));
    }
  }


  virtual ~ExtractFingerPrintResponseBodyData() = default;
};
class ExtractFingerPrintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ExtractFingerPrintResponseBodyData> data{};

  ExtractFingerPrintResponseBody() {}

  explicit ExtractFingerPrintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractFingerPrintResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExtractFingerPrintResponseBodyData>(model1);
      }
    }
  }


  virtual ~ExtractFingerPrintResponseBody() = default;
};
class ExtractFingerPrintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtractFingerPrintResponseBody> body{};

  ExtractFingerPrintResponse() {}

  explicit ExtractFingerPrintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractFingerPrintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtractFingerPrintResponseBody>(model1);
      }
    }
  }


  virtual ~ExtractFingerPrintResponse() = default;
};
class DeleteBodyPersonRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<long> personId{};

  DeleteBodyPersonRequest() {}

  explicit DeleteBodyPersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<long>(boost::any_cast<long>(m["PersonId"]));
    }
  }


  virtual ~DeleteBodyPersonRequest() = default;
};
class DeleteBodyPersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBodyPersonResponseBody() {}

  explicit DeleteBodyPersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBodyPersonResponseBody() = default;
};
class DeleteBodyPersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBodyPersonResponseBody> body{};

  DeleteBodyPersonResponse() {}

  explicit DeleteBodyPersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBodyPersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBodyPersonResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBodyPersonResponse() = default;
};
class DetectPedestrianRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectPedestrianRequest() {}

  explicit DetectPedestrianRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectPedestrianRequest() = default;
};
class DetectPedestrianAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectPedestrianAdvanceRequest() {}

  explicit DetectPedestrianAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectPedestrianAdvanceRequest() = default;
};
class DetectPedestrianResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<vector<long>> boxes{};
  shared_ptr<double> score{};

  DetectPedestrianResponseBodyDataElements() {}

  explicit DetectPedestrianResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
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
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~DetectPedestrianResponseBodyDataElements() = default;
};
class DetectPedestrianResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectPedestrianResponseBodyDataElements>> elements{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DetectPedestrianResponseBodyData() {}

  explicit DetectPedestrianResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<DetectPedestrianResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectPedestrianResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectPedestrianResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DetectPedestrianResponseBodyData() = default;
};
class DetectPedestrianResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectPedestrianResponseBodyData> data{};

  DetectPedestrianResponseBody() {}

  explicit DetectPedestrianResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectPedestrianResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectPedestrianResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectPedestrianResponseBody() = default;
};
class DetectPedestrianResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectPedestrianResponseBody> body{};

  DetectPedestrianResponse() {}

  explicit DetectPedestrianResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectPedestrianResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectPedestrianResponseBody>(model1);
      }
    }
  }


  virtual ~DetectPedestrianResponse() = default;
};
class SwapFacialFeaturesRequest : public Darabonba::Model {
public:
  shared_ptr<string> editPart{};
  shared_ptr<string> sourceImageURL{};
  shared_ptr<string> targetImageURL{};
  shared_ptr<vector<uint8_t>> sourceImageData{};
  shared_ptr<vector<uint8_t>> targetImageData{};

  SwapFacialFeaturesRequest() {}

  explicit SwapFacialFeaturesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (editPart) {
      res["EditPart"] = boost::any(*editPart);
    }
    if (sourceImageURL) {
      res["SourceImageURL"] = boost::any(*sourceImageURL);
    }
    if (targetImageURL) {
      res["TargetImageURL"] = boost::any(*targetImageURL);
    }
    if (sourceImageData) {
      res["SourceImageData"] = boost::any(*sourceImageData);
    }
    if (targetImageData) {
      res["TargetImageData"] = boost::any(*targetImageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EditPart") != m.end() && !m["EditPart"].empty()) {
      editPart = make_shared<string>(boost::any_cast<string>(m["EditPart"]));
    }
    if (m.find("SourceImageURL") != m.end() && !m["SourceImageURL"].empty()) {
      sourceImageURL = make_shared<string>(boost::any_cast<string>(m["SourceImageURL"]));
    }
    if (m.find("TargetImageURL") != m.end() && !m["TargetImageURL"].empty()) {
      targetImageURL = make_shared<string>(boost::any_cast<string>(m["TargetImageURL"]));
    }
    if (m.find("SourceImageData") != m.end() && !m["SourceImageData"].empty()) {
      sourceImageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["SourceImageData"]));
    }
    if (m.find("TargetImageData") != m.end() && !m["TargetImageData"].empty()) {
      targetImageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["TargetImageData"]));
    }
  }


  virtual ~SwapFacialFeaturesRequest() = default;
};
class SwapFacialFeaturesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  SwapFacialFeaturesResponseBodyData() {}

  explicit SwapFacialFeaturesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwapFacialFeaturesResponseBodyData() = default;
};
class SwapFacialFeaturesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SwapFacialFeaturesResponseBodyData> data{};

  SwapFacialFeaturesResponseBody() {}

  explicit SwapFacialFeaturesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwapFacialFeaturesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SwapFacialFeaturesResponseBodyData>(model1);
      }
    }
  }


  virtual ~SwapFacialFeaturesResponseBody() = default;
};
class SwapFacialFeaturesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SwapFacialFeaturesResponseBody> body{};

  SwapFacialFeaturesResponse() {}

  explicit SwapFacialFeaturesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwapFacialFeaturesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwapFacialFeaturesResponseBody>(model1);
      }
    }
  }


  virtual ~SwapFacialFeaturesResponse() = default;
};
class SearchFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<long> limit{};
  shared_ptr<string> dbNames{};
  shared_ptr<double> qualityScoreThreshold{};

  SearchFaceRequest() {}

  explicit SearchFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (dbNames) {
      res["DbNames"] = boost::any(*dbNames);
    }
    if (qualityScoreThreshold) {
      res["QualityScoreThreshold"] = boost::any(*qualityScoreThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("DbNames") != m.end() && !m["DbNames"].empty()) {
      dbNames = make_shared<string>(boost::any_cast<string>(m["DbNames"]));
    }
    if (m.find("QualityScoreThreshold") != m.end() && !m["QualityScoreThreshold"].empty()) {
      qualityScoreThreshold = make_shared<double>(boost::any_cast<double>(m["QualityScoreThreshold"]));
    }
  }


  virtual ~SearchFaceRequest() = default;
};
class SearchFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> dbName{};
  shared_ptr<long> limit{};
  shared_ptr<string> dbNames{};
  shared_ptr<double> qualityScoreThreshold{};

  SearchFaceAdvanceRequest() {}

  explicit SearchFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (dbNames) {
      res["DbNames"] = boost::any(*dbNames);
    }
    if (qualityScoreThreshold) {
      res["QualityScoreThreshold"] = boost::any(*qualityScoreThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("DbNames") != m.end() && !m["DbNames"].empty()) {
      dbNames = make_shared<string>(boost::any_cast<string>(m["DbNames"]));
    }
    if (m.find("QualityScoreThreshold") != m.end() && !m["QualityScoreThreshold"].empty()) {
      qualityScoreThreshold = make_shared<double>(boost::any_cast<double>(m["QualityScoreThreshold"]));
    }
  }


  virtual ~SearchFaceAdvanceRequest() = default;
};
class SearchFaceResponseBodyDataMatchListFaceItems : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> faceId{};
  shared_ptr<double> score{};
  shared_ptr<string> extraData{};
  shared_ptr<string> dbName{};
  shared_ptr<double> confidence{};

  SearchFaceResponseBodyDataMatchListFaceItems() {}

  explicit SearchFaceResponseBodyDataMatchListFaceItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~SearchFaceResponseBodyDataMatchListFaceItems() = default;
};
class SearchFaceResponseBodyDataMatchListLocation : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> y{};
  shared_ptr<long> x{};

  SearchFaceResponseBodyDataMatchListLocation() {}

  explicit SearchFaceResponseBodyDataMatchListLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
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
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
  }


  virtual ~SearchFaceResponseBodyDataMatchListLocation() = default;
};
class SearchFaceResponseBodyDataMatchList : public Darabonba::Model {
public:
  shared_ptr<vector<SearchFaceResponseBodyDataMatchListFaceItems>> faceItems{};
  shared_ptr<SearchFaceResponseBodyDataMatchListLocation> location{};

  SearchFaceResponseBodyDataMatchList() {}

  explicit SearchFaceResponseBodyDataMatchList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceItems) {
      vector<boost::any> temp1;
      for(auto item1:*faceItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceItems"] = boost::any(temp1);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceItems") != m.end() && !m["FaceItems"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceItems"].type()) {
        vector<SearchFaceResponseBodyDataMatchListFaceItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchFaceResponseBodyDataMatchListFaceItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceItems = make_shared<vector<SearchFaceResponseBodyDataMatchListFaceItems>>(expect1);
      }
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        SearchFaceResponseBodyDataMatchListLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<SearchFaceResponseBodyDataMatchListLocation>(model1);
      }
    }
  }


  virtual ~SearchFaceResponseBodyDataMatchList() = default;
};
class SearchFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchFaceResponseBodyDataMatchList>> matchList{};

  SearchFaceResponseBodyData() {}

  explicit SearchFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchList) {
      vector<boost::any> temp1;
      for(auto item1:*matchList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MatchList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchList") != m.end() && !m["MatchList"].empty()) {
      if (typeid(vector<boost::any>) == m["MatchList"].type()) {
        vector<SearchFaceResponseBodyDataMatchList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MatchList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchFaceResponseBodyDataMatchList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchList = make_shared<vector<SearchFaceResponseBodyDataMatchList>>(expect1);
      }
    }
  }


  virtual ~SearchFaceResponseBodyData() = default;
};
class SearchFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SearchFaceResponseBodyData> data{};

  SearchFaceResponseBody() {}

  explicit SearchFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~SearchFaceResponseBody() = default;
};
class SearchFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchFaceResponseBody> body{};

  SearchFaceResponse() {}

  explicit SearchFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchFaceResponseBody>(model1);
      }
    }
  }


  virtual ~SearchFaceResponse() = default;
};
class UpdateFaceEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> entityId{};
  shared_ptr<string> labels{};

  UpdateFaceEntityRequest() {}

  explicit UpdateFaceEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
  }


  virtual ~UpdateFaceEntityRequest() = default;
};
class UpdateFaceEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFaceEntityResponseBody() {}

  explicit UpdateFaceEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFaceEntityResponseBody() = default;
};
class UpdateFaceEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateFaceEntityResponseBody> body{};

  UpdateFaceEntityResponse() {}

  explicit UpdateFaceEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFaceEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFaceEntityResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFaceEntityResponse() = default;
};
class BlurFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  BlurFaceRequest() {}

  explicit BlurFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BlurFaceRequest() = default;
};
class BlurFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  BlurFaceAdvanceRequest() {}

  explicit BlurFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BlurFaceAdvanceRequest() = default;
};
class BlurFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  BlurFaceResponseBodyData() {}

  explicit BlurFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BlurFaceResponseBodyData() = default;
};
class BlurFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<BlurFaceResponseBodyData> data{};

  BlurFaceResponseBody() {}

  explicit BlurFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BlurFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BlurFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~BlurFaceResponseBody() = default;
};
class BlurFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BlurFaceResponseBody> body{};

  BlurFaceResponse() {}

  explicit BlurFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BlurFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BlurFaceResponseBody>(model1);
      }
    }
  }


  virtual ~BlurFaceResponse() = default;
};
class FaceMakeupRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> makeupType{};
  shared_ptr<string> resourceType{};
  shared_ptr<double> strength{};

  FaceMakeupRequest() {}

  explicit FaceMakeupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (makeupType) {
      res["MakeupType"] = boost::any(*makeupType);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (strength) {
      res["Strength"] = boost::any(*strength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("MakeupType") != m.end() && !m["MakeupType"].empty()) {
      makeupType = make_shared<string>(boost::any_cast<string>(m["MakeupType"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Strength") != m.end() && !m["Strength"].empty()) {
      strength = make_shared<double>(boost::any_cast<double>(m["Strength"]));
    }
  }


  virtual ~FaceMakeupRequest() = default;
};
class FaceMakeupAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> makeupType{};
  shared_ptr<string> resourceType{};
  shared_ptr<double> strength{};

  FaceMakeupAdvanceRequest() {}

  explicit FaceMakeupAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (makeupType) {
      res["MakeupType"] = boost::any(*makeupType);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (strength) {
      res["Strength"] = boost::any(*strength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("MakeupType") != m.end() && !m["MakeupType"].empty()) {
      makeupType = make_shared<string>(boost::any_cast<string>(m["MakeupType"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Strength") != m.end() && !m["Strength"].empty()) {
      strength = make_shared<double>(boost::any_cast<double>(m["Strength"]));
    }
  }


  virtual ~FaceMakeupAdvanceRequest() = default;
};
class FaceMakeupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  FaceMakeupResponseBodyData() {}

  explicit FaceMakeupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FaceMakeupResponseBodyData() = default;
};
class FaceMakeupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<FaceMakeupResponseBodyData> data{};

  FaceMakeupResponseBody() {}

  explicit FaceMakeupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceMakeupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FaceMakeupResponseBodyData>(model1);
      }
    }
  }


  virtual ~FaceMakeupResponseBody() = default;
};
class FaceMakeupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FaceMakeupResponseBody> body{};

  FaceMakeupResponse() {}

  explicit FaceMakeupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceMakeupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceMakeupResponseBody>(model1);
      }
    }
  }


  virtual ~FaceMakeupResponse() = default;
};
class CreateBodyPersonRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> name{};

  CreateBodyPersonRequest() {}

  explicit CreateBodyPersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateBodyPersonRequest() = default;
};
class CreateBodyPersonResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  CreateBodyPersonResponseBodyData() {}

  explicit CreateBodyPersonResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateBodyPersonResponseBodyData() = default;
};
class CreateBodyPersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateBodyPersonResponseBodyData> data{};

  CreateBodyPersonResponseBody() {}

  explicit CreateBodyPersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBodyPersonResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateBodyPersonResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateBodyPersonResponseBody() = default;
};
class CreateBodyPersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBodyPersonResponseBody> body{};

  CreateBodyPersonResponse() {}

  explicit CreateBodyPersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBodyPersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBodyPersonResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBodyPersonResponse() = default;
};
class AddFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> entityId{};
  shared_ptr<string> extraData{};
  shared_ptr<double> qualityScoreThreshold{};
  shared_ptr<double> similarityScoreThresholdInEntity{};
  shared_ptr<double> similarityScoreThresholdBetweenEntity{};

  AddFaceRequest() {}

  explicit AddFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    if (qualityScoreThreshold) {
      res["QualityScoreThreshold"] = boost::any(*qualityScoreThreshold);
    }
    if (similarityScoreThresholdInEntity) {
      res["SimilarityScoreThresholdInEntity"] = boost::any(*similarityScoreThresholdInEntity);
    }
    if (similarityScoreThresholdBetweenEntity) {
      res["SimilarityScoreThresholdBetweenEntity"] = boost::any(*similarityScoreThresholdBetweenEntity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
    if (m.find("QualityScoreThreshold") != m.end() && !m["QualityScoreThreshold"].empty()) {
      qualityScoreThreshold = make_shared<double>(boost::any_cast<double>(m["QualityScoreThreshold"]));
    }
    if (m.find("SimilarityScoreThresholdInEntity") != m.end() && !m["SimilarityScoreThresholdInEntity"].empty()) {
      similarityScoreThresholdInEntity = make_shared<double>(boost::any_cast<double>(m["SimilarityScoreThresholdInEntity"]));
    }
    if (m.find("SimilarityScoreThresholdBetweenEntity") != m.end() && !m["SimilarityScoreThresholdBetweenEntity"].empty()) {
      similarityScoreThresholdBetweenEntity = make_shared<double>(boost::any_cast<double>(m["SimilarityScoreThresholdBetweenEntity"]));
    }
  }


  virtual ~AddFaceRequest() = default;
};
class AddFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> dbName{};
  shared_ptr<string> entityId{};
  shared_ptr<string> extraData{};
  shared_ptr<double> qualityScoreThreshold{};
  shared_ptr<double> similarityScoreThresholdInEntity{};
  shared_ptr<double> similarityScoreThresholdBetweenEntity{};

  AddFaceAdvanceRequest() {}

  explicit AddFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    if (qualityScoreThreshold) {
      res["QualityScoreThreshold"] = boost::any(*qualityScoreThreshold);
    }
    if (similarityScoreThresholdInEntity) {
      res["SimilarityScoreThresholdInEntity"] = boost::any(*similarityScoreThresholdInEntity);
    }
    if (similarityScoreThresholdBetweenEntity) {
      res["SimilarityScoreThresholdBetweenEntity"] = boost::any(*similarityScoreThresholdBetweenEntity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
    if (m.find("QualityScoreThreshold") != m.end() && !m["QualityScoreThreshold"].empty()) {
      qualityScoreThreshold = make_shared<double>(boost::any_cast<double>(m["QualityScoreThreshold"]));
    }
    if (m.find("SimilarityScoreThresholdInEntity") != m.end() && !m["SimilarityScoreThresholdInEntity"].empty()) {
      similarityScoreThresholdInEntity = make_shared<double>(boost::any_cast<double>(m["SimilarityScoreThresholdInEntity"]));
    }
    if (m.find("SimilarityScoreThresholdBetweenEntity") != m.end() && !m["SimilarityScoreThresholdBetweenEntity"].empty()) {
      similarityScoreThresholdBetweenEntity = make_shared<double>(boost::any_cast<double>(m["SimilarityScoreThresholdBetweenEntity"]));
    }
  }


  virtual ~AddFaceAdvanceRequest() = default;
};
class AddFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> faceId{};

  AddFaceResponseBodyData() {}

  explicit AddFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
  }


  virtual ~AddFaceResponseBodyData() = default;
};
class AddFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AddFaceResponseBodyData> data{};

  AddFaceResponseBody() {}

  explicit AddFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~AddFaceResponseBody() = default;
};
class AddFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddFaceResponseBody> body{};

  AddFaceResponse() {}

  explicit AddFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceResponse() = default;
};
class GenerateHumanSketchStyleRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> returnType{};

  GenerateHumanSketchStyleRequest() {}

  explicit GenerateHumanSketchStyleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (returnType) {
      res["ReturnType"] = boost::any(*returnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ReturnType") != m.end() && !m["ReturnType"].empty()) {
      returnType = make_shared<string>(boost::any_cast<string>(m["ReturnType"]));
    }
  }


  virtual ~GenerateHumanSketchStyleRequest() = default;
};
class GenerateHumanSketchStyleAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> returnType{};

  GenerateHumanSketchStyleAdvanceRequest() {}

  explicit GenerateHumanSketchStyleAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (returnType) {
      res["ReturnType"] = boost::any(*returnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("ReturnType") != m.end() && !m["ReturnType"].empty()) {
      returnType = make_shared<string>(boost::any_cast<string>(m["ReturnType"]));
    }
  }


  virtual ~GenerateHumanSketchStyleAdvanceRequest() = default;
};
class GenerateHumanSketchStyleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  GenerateHumanSketchStyleResponseBodyData() {}

  explicit GenerateHumanSketchStyleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GenerateHumanSketchStyleResponseBodyData() = default;
};
class GenerateHumanSketchStyleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateHumanSketchStyleResponseBodyData> data{};

  GenerateHumanSketchStyleResponseBody() {}

  explicit GenerateHumanSketchStyleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateHumanSketchStyleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateHumanSketchStyleResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateHumanSketchStyleResponseBody() = default;
};
class GenerateHumanSketchStyleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateHumanSketchStyleResponseBody> body{};

  GenerateHumanSketchStyleResponse() {}

  explicit GenerateHumanSketchStyleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateHumanSketchStyleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateHumanSketchStyleResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateHumanSketchStyleResponse() = default;
};
class DeleteBodyDbRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  DeleteBodyDbRequest() {}

  explicit DeleteBodyDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteBodyDbRequest() = default;
};
class DeleteBodyDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBodyDbResponseBody() {}

  explicit DeleteBodyDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBodyDbResponseBody() = default;
};
class DeleteBodyDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBodyDbResponseBody> body{};

  DeleteBodyDbResponse() {}

  explicit DeleteBodyDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBodyDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBodyDbResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBodyDbResponse() = default;
};
class DetectPedestrianIntrusionRequestDetectRegionRect : public Darabonba::Model {
public:
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> right{};
  shared_ptr<long> bottom{};

  DetectPedestrianIntrusionRequestDetectRegionRect() {}

  explicit DetectPedestrianIntrusionRequestDetectRegionRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (right) {
      res["Right"] = boost::any(*right);
    }
    if (bottom) {
      res["Bottom"] = boost::any(*bottom);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Right") != m.end() && !m["Right"].empty()) {
      right = make_shared<long>(boost::any_cast<long>(m["Right"]));
    }
    if (m.find("Bottom") != m.end() && !m["Bottom"].empty()) {
      bottom = make_shared<long>(boost::any_cast<long>(m["Bottom"]));
    }
  }


  virtual ~DetectPedestrianIntrusionRequestDetectRegionRect() = default;
};
class DetectPedestrianIntrusionRequestDetectRegionLine : public Darabonba::Model {
public:
  shared_ptr<long> x1{};
  shared_ptr<long> y1{};
  shared_ptr<long> x2{};
  shared_ptr<long> y2{};

  DetectPedestrianIntrusionRequestDetectRegionLine() {}

  explicit DetectPedestrianIntrusionRequestDetectRegionLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x1) {
      res["X1"] = boost::any(*x1);
    }
    if (y1) {
      res["Y1"] = boost::any(*y1);
    }
    if (x2) {
      res["X2"] = boost::any(*x2);
    }
    if (y2) {
      res["Y2"] = boost::any(*y2);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X1") != m.end() && !m["X1"].empty()) {
      x1 = make_shared<long>(boost::any_cast<long>(m["X1"]));
    }
    if (m.find("Y1") != m.end() && !m["Y1"].empty()) {
      y1 = make_shared<long>(boost::any_cast<long>(m["Y1"]));
    }
    if (m.find("X2") != m.end() && !m["X2"].empty()) {
      x2 = make_shared<long>(boost::any_cast<long>(m["X2"]));
    }
    if (m.find("Y2") != m.end() && !m["Y2"].empty()) {
      y2 = make_shared<long>(boost::any_cast<long>(m["Y2"]));
    }
  }


  virtual ~DetectPedestrianIntrusionRequestDetectRegionLine() = default;
};
class DetectPedestrianIntrusionRequestDetectRegion : public Darabonba::Model {
public:
  shared_ptr<DetectPedestrianIntrusionRequestDetectRegionRect> rect{};
  shared_ptr<DetectPedestrianIntrusionRequestDetectRegionLine> line{};

  DetectPedestrianIntrusionRequestDetectRegion() {}

  explicit DetectPedestrianIntrusionRequestDetectRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rect) {
      res["Rect"] = rect ? boost::any(rect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (line) {
      res["Line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rect") != m.end() && !m["Rect"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rect"].type()) {
        DetectPedestrianIntrusionRequestDetectRegionRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rect"]));
        rect = make_shared<DetectPedestrianIntrusionRequestDetectRegionRect>(model1);
      }
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      if (typeid(map<string, boost::any>) == m["Line"].type()) {
        DetectPedestrianIntrusionRequestDetectRegionLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Line"]));
        line = make_shared<DetectPedestrianIntrusionRequestDetectRegionLine>(model1);
      }
    }
  }


  virtual ~DetectPedestrianIntrusionRequestDetectRegion() = default;
};
class DetectPedestrianIntrusionRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<DetectPedestrianIntrusionRequestDetectRegion>> detectRegion{};
  shared_ptr<string> regionType{};

  DetectPedestrianIntrusionRequest() {}

  explicit DetectPedestrianIntrusionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (detectRegion) {
      vector<boost::any> temp1;
      for(auto item1:*detectRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetectRegion"] = boost::any(temp1);
    }
    if (regionType) {
      res["RegionType"] = boost::any(*regionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("DetectRegion") != m.end() && !m["DetectRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["DetectRegion"].type()) {
        vector<DetectPedestrianIntrusionRequestDetectRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetectRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectPedestrianIntrusionRequestDetectRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detectRegion = make_shared<vector<DetectPedestrianIntrusionRequestDetectRegion>>(expect1);
      }
    }
    if (m.find("RegionType") != m.end() && !m["RegionType"].empty()) {
      regionType = make_shared<string>(boost::any_cast<string>(m["RegionType"]));
    }
  }


  virtual ~DetectPedestrianIntrusionRequest() = default;
};
class DetectPedestrianIntrusionAdvanceRequestDetectRegionRect : public Darabonba::Model {
public:
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> right{};
  shared_ptr<long> bottom{};

  DetectPedestrianIntrusionAdvanceRequestDetectRegionRect() {}

  explicit DetectPedestrianIntrusionAdvanceRequestDetectRegionRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (right) {
      res["Right"] = boost::any(*right);
    }
    if (bottom) {
      res["Bottom"] = boost::any(*bottom);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Right") != m.end() && !m["Right"].empty()) {
      right = make_shared<long>(boost::any_cast<long>(m["Right"]));
    }
    if (m.find("Bottom") != m.end() && !m["Bottom"].empty()) {
      bottom = make_shared<long>(boost::any_cast<long>(m["Bottom"]));
    }
  }


  virtual ~DetectPedestrianIntrusionAdvanceRequestDetectRegionRect() = default;
};
class DetectPedestrianIntrusionAdvanceRequestDetectRegionLine : public Darabonba::Model {
public:
  shared_ptr<long> x1{};
  shared_ptr<long> y1{};
  shared_ptr<long> x2{};
  shared_ptr<long> y2{};

  DetectPedestrianIntrusionAdvanceRequestDetectRegionLine() {}

  explicit DetectPedestrianIntrusionAdvanceRequestDetectRegionLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x1) {
      res["X1"] = boost::any(*x1);
    }
    if (y1) {
      res["Y1"] = boost::any(*y1);
    }
    if (x2) {
      res["X2"] = boost::any(*x2);
    }
    if (y2) {
      res["Y2"] = boost::any(*y2);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X1") != m.end() && !m["X1"].empty()) {
      x1 = make_shared<long>(boost::any_cast<long>(m["X1"]));
    }
    if (m.find("Y1") != m.end() && !m["Y1"].empty()) {
      y1 = make_shared<long>(boost::any_cast<long>(m["Y1"]));
    }
    if (m.find("X2") != m.end() && !m["X2"].empty()) {
      x2 = make_shared<long>(boost::any_cast<long>(m["X2"]));
    }
    if (m.find("Y2") != m.end() && !m["Y2"].empty()) {
      y2 = make_shared<long>(boost::any_cast<long>(m["Y2"]));
    }
  }


  virtual ~DetectPedestrianIntrusionAdvanceRequestDetectRegionLine() = default;
};
class DetectPedestrianIntrusionAdvanceRequestDetectRegion : public Darabonba::Model {
public:
  shared_ptr<DetectPedestrianIntrusionAdvanceRequestDetectRegionRect> rect{};
  shared_ptr<DetectPedestrianIntrusionAdvanceRequestDetectRegionLine> line{};

  DetectPedestrianIntrusionAdvanceRequestDetectRegion() {}

  explicit DetectPedestrianIntrusionAdvanceRequestDetectRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rect) {
      res["Rect"] = rect ? boost::any(rect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (line) {
      res["Line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rect") != m.end() && !m["Rect"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rect"].type()) {
        DetectPedestrianIntrusionAdvanceRequestDetectRegionRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rect"]));
        rect = make_shared<DetectPedestrianIntrusionAdvanceRequestDetectRegionRect>(model1);
      }
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      if (typeid(map<string, boost::any>) == m["Line"].type()) {
        DetectPedestrianIntrusionAdvanceRequestDetectRegionLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Line"]));
        line = make_shared<DetectPedestrianIntrusionAdvanceRequestDetectRegionLine>(model1);
      }
    }
  }


  virtual ~DetectPedestrianIntrusionAdvanceRequestDetectRegion() = default;
};
class DetectPedestrianIntrusionAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<vector<DetectPedestrianIntrusionAdvanceRequestDetectRegion>> detectRegion{};
  shared_ptr<string> regionType{};

  DetectPedestrianIntrusionAdvanceRequest() {}

  explicit DetectPedestrianIntrusionAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (detectRegion) {
      vector<boost::any> temp1;
      for(auto item1:*detectRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetectRegion"] = boost::any(temp1);
    }
    if (regionType) {
      res["RegionType"] = boost::any(*regionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("DetectRegion") != m.end() && !m["DetectRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["DetectRegion"].type()) {
        vector<DetectPedestrianIntrusionAdvanceRequestDetectRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetectRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectPedestrianIntrusionAdvanceRequestDetectRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detectRegion = make_shared<vector<DetectPedestrianIntrusionAdvanceRequestDetectRegion>>(expect1);
      }
    }
    if (m.find("RegionType") != m.end() && !m["RegionType"].empty()) {
      regionType = make_shared<string>(boost::any_cast<string>(m["RegionType"]));
    }
  }


  virtual ~DetectPedestrianIntrusionAdvanceRequest() = default;
};
class DetectPedestrianIntrusionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> detectRegionShrink{};
  shared_ptr<string> regionType{};

  DetectPedestrianIntrusionShrinkRequest() {}

  explicit DetectPedestrianIntrusionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (detectRegionShrink) {
      res["DetectRegion"] = boost::any(*detectRegionShrink);
    }
    if (regionType) {
      res["RegionType"] = boost::any(*regionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("DetectRegion") != m.end() && !m["DetectRegion"].empty()) {
      detectRegionShrink = make_shared<string>(boost::any_cast<string>(m["DetectRegion"]));
    }
    if (m.find("RegionType") != m.end() && !m["RegionType"].empty()) {
      regionType = make_shared<string>(boost::any_cast<string>(m["RegionType"]));
    }
  }


  virtual ~DetectPedestrianIntrusionShrinkRequest() = default;
};
class DetectPedestrianIntrusionResponseBodyDataElementsBox : public Darabonba::Model {
public:
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> right{};
  shared_ptr<long> bottom{};

  DetectPedestrianIntrusionResponseBodyDataElementsBox() {}

  explicit DetectPedestrianIntrusionResponseBodyDataElementsBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (right) {
      res["Right"] = boost::any(*right);
    }
    if (bottom) {
      res["Bottom"] = boost::any(*bottom);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Right") != m.end() && !m["Right"].empty()) {
      right = make_shared<long>(boost::any_cast<long>(m["Right"]));
    }
    if (m.find("Bottom") != m.end() && !m["Bottom"].empty()) {
      bottom = make_shared<long>(boost::any_cast<long>(m["Bottom"]));
    }
  }


  virtual ~DetectPedestrianIntrusionResponseBodyDataElementsBox() = default;
};
class DetectPedestrianIntrusionResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<long> score{};
  shared_ptr<string> type{};
  shared_ptr<bool> isIntrude{};
  shared_ptr<DetectPedestrianIntrusionResponseBodyDataElementsBox> box{};
  shared_ptr<long> boxId{};

  DetectPedestrianIntrusionResponseBodyDataElements() {}

  explicit DetectPedestrianIntrusionResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (isIntrude) {
      res["IsIntrude"] = boost::any(*isIntrude);
    }
    if (box) {
      res["Box"] = box ? boost::any(box->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (boxId) {
      res["BoxId"] = boost::any(*boxId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("IsIntrude") != m.end() && !m["IsIntrude"].empty()) {
      isIntrude = make_shared<bool>(boost::any_cast<bool>(m["IsIntrude"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      if (typeid(map<string, boost::any>) == m["Box"].type()) {
        DetectPedestrianIntrusionResponseBodyDataElementsBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Box"]));
        box = make_shared<DetectPedestrianIntrusionResponseBodyDataElementsBox>(model1);
      }
    }
    if (m.find("BoxId") != m.end() && !m["BoxId"].empty()) {
      boxId = make_shared<long>(boost::any_cast<long>(m["BoxId"]));
    }
  }


  virtual ~DetectPedestrianIntrusionResponseBodyDataElements() = default;
};
class DetectPedestrianIntrusionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> imageWidth{};
  shared_ptr<long> imageHeight{};
  shared_ptr<vector<DetectPedestrianIntrusionResponseBodyDataElements>> elements{};

  DetectPedestrianIntrusionResponseBodyData() {}

  explicit DetectPedestrianIntrusionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
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
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<DetectPedestrianIntrusionResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectPedestrianIntrusionResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectPedestrianIntrusionResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~DetectPedestrianIntrusionResponseBodyData() = default;
};
class DetectPedestrianIntrusionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectPedestrianIntrusionResponseBodyData> data{};

  DetectPedestrianIntrusionResponseBody() {}

  explicit DetectPedestrianIntrusionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectPedestrianIntrusionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectPedestrianIntrusionResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectPedestrianIntrusionResponseBody() = default;
};
class DetectPedestrianIntrusionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectPedestrianIntrusionResponseBody> body{};

  DetectPedestrianIntrusionResponse() {}

  explicit DetectPedestrianIntrusionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectPedestrianIntrusionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectPedestrianIntrusionResponseBody>(model1);
      }
    }
  }


  virtual ~DetectPedestrianIntrusionResponse() = default;
};
class BeautifyBodyRequestAgeRange : public Darabonba::Model {
public:
  shared_ptr<long> ageMinimum{};
  shared_ptr<long> ageMax{};

  BeautifyBodyRequestAgeRange() {}

  explicit BeautifyBodyRequestAgeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ageMinimum) {
      res["AgeMinimum"] = boost::any(*ageMinimum);
    }
    if (ageMax) {
      res["AgeMax"] = boost::any(*ageMax);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgeMinimum") != m.end() && !m["AgeMinimum"].empty()) {
      ageMinimum = make_shared<long>(boost::any_cast<long>(m["AgeMinimum"]));
    }
    if (m.find("AgeMax") != m.end() && !m["AgeMax"].empty()) {
      ageMax = make_shared<long>(boost::any_cast<long>(m["AgeMax"]));
    }
  }


  virtual ~BeautifyBodyRequestAgeRange() = default;
};
class BeautifyBodyRequestBodyBoxes : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<double> width{};
  shared_ptr<double> height{};

  BeautifyBodyRequestBodyBoxes() {}

  explicit BeautifyBodyRequestBodyBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
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
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
  }


  virtual ~BeautifyBodyRequestBodyBoxes() = default;
};
class BeautifyBodyRequestFaceListFaceBox : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<double> width{};
  shared_ptr<double> height{};

  BeautifyBodyRequestFaceListFaceBox() {}

  explicit BeautifyBodyRequestFaceListFaceBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
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
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
  }


  virtual ~BeautifyBodyRequestFaceListFaceBox() = default;
};
class BeautifyBodyRequestFaceList : public Darabonba::Model {
public:
  shared_ptr<BeautifyBodyRequestFaceListFaceBox> faceBox{};
  shared_ptr<long> age{};
  shared_ptr<long> gender{};

  BeautifyBodyRequestFaceList() {}

  explicit BeautifyBodyRequestFaceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceBox) {
      res["FaceBox"] = faceBox ? boost::any(faceBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceBox") != m.end() && !m["FaceBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBox"].type()) {
        BeautifyBodyRequestFaceListFaceBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBox"]));
        faceBox = make_shared<BeautifyBodyRequestFaceListFaceBox>(model1);
      }
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["Gender"]));
    }
  }


  virtual ~BeautifyBodyRequestFaceList() = default;
};
class BeautifyBodyRequestPoseListPose : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};
  shared_ptr<double> score{};

  BeautifyBodyRequestPoseListPose() {}

  explicit BeautifyBodyRequestPoseListPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (score) {
      res["Score"] = boost::any(*score);
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
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~BeautifyBodyRequestPoseListPose() = default;
};
class BeautifyBodyRequestPoseList : public Darabonba::Model {
public:
  shared_ptr<vector<BeautifyBodyRequestPoseListPose>> pose{};

  BeautifyBodyRequestPoseList() {}

  explicit BeautifyBodyRequestPoseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pose) {
      vector<boost::any> temp1;
      for(auto item1:*pose){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Pose"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pose") != m.end() && !m["Pose"].empty()) {
      if (typeid(vector<boost::any>) == m["Pose"].type()) {
        vector<BeautifyBodyRequestPoseListPose> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Pose"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeautifyBodyRequestPoseListPose model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pose = make_shared<vector<BeautifyBodyRequestPoseListPose>>(expect1);
      }
    }
  }


  virtual ~BeautifyBodyRequestPoseList() = default;
};
class BeautifyBodyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<long> originalWidth{};
  shared_ptr<long> originalHeight{};
  shared_ptr<long> custom{};
  shared_ptr<double> maleLiquifyDegree{};
  shared_ptr<double> femaleLiquifyDegree{};
  shared_ptr<double> lengthenDegree{};
  shared_ptr<BeautifyBodyRequestAgeRange> ageRange{};
  shared_ptr<vector<BeautifyBodyRequestBodyBoxes>> bodyBoxes{};
  shared_ptr<vector<BeautifyBodyRequestFaceList>> faceList{};
  shared_ptr<vector<BeautifyBodyRequestPoseList>> poseList{};
  shared_ptr<bool> isPregnant{};

  BeautifyBodyRequest() {}

  explicit BeautifyBodyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (originalWidth) {
      res["OriginalWidth"] = boost::any(*originalWidth);
    }
    if (originalHeight) {
      res["OriginalHeight"] = boost::any(*originalHeight);
    }
    if (custom) {
      res["Custom"] = boost::any(*custom);
    }
    if (maleLiquifyDegree) {
      res["MaleLiquifyDegree"] = boost::any(*maleLiquifyDegree);
    }
    if (femaleLiquifyDegree) {
      res["FemaleLiquifyDegree"] = boost::any(*femaleLiquifyDegree);
    }
    if (lengthenDegree) {
      res["LengthenDegree"] = boost::any(*lengthenDegree);
    }
    if (ageRange) {
      res["AgeRange"] = ageRange ? boost::any(ageRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bodyBoxes) {
      vector<boost::any> temp1;
      for(auto item1:*bodyBoxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyBoxes"] = boost::any(temp1);
    }
    if (faceList) {
      vector<boost::any> temp1;
      for(auto item1:*faceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceList"] = boost::any(temp1);
    }
    if (poseList) {
      vector<boost::any> temp1;
      for(auto item1:*poseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PoseList"] = boost::any(temp1);
    }
    if (isPregnant) {
      res["IsPregnant"] = boost::any(*isPregnant);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("OriginalWidth") != m.end() && !m["OriginalWidth"].empty()) {
      originalWidth = make_shared<long>(boost::any_cast<long>(m["OriginalWidth"]));
    }
    if (m.find("OriginalHeight") != m.end() && !m["OriginalHeight"].empty()) {
      originalHeight = make_shared<long>(boost::any_cast<long>(m["OriginalHeight"]));
    }
    if (m.find("Custom") != m.end() && !m["Custom"].empty()) {
      custom = make_shared<long>(boost::any_cast<long>(m["Custom"]));
    }
    if (m.find("MaleLiquifyDegree") != m.end() && !m["MaleLiquifyDegree"].empty()) {
      maleLiquifyDegree = make_shared<double>(boost::any_cast<double>(m["MaleLiquifyDegree"]));
    }
    if (m.find("FemaleLiquifyDegree") != m.end() && !m["FemaleLiquifyDegree"].empty()) {
      femaleLiquifyDegree = make_shared<double>(boost::any_cast<double>(m["FemaleLiquifyDegree"]));
    }
    if (m.find("LengthenDegree") != m.end() && !m["LengthenDegree"].empty()) {
      lengthenDegree = make_shared<double>(boost::any_cast<double>(m["LengthenDegree"]));
    }
    if (m.find("AgeRange") != m.end() && !m["AgeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["AgeRange"].type()) {
        BeautifyBodyRequestAgeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AgeRange"]));
        ageRange = make_shared<BeautifyBodyRequestAgeRange>(model1);
      }
    }
    if (m.find("BodyBoxes") != m.end() && !m["BodyBoxes"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyBoxes"].type()) {
        vector<BeautifyBodyRequestBodyBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyBoxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeautifyBodyRequestBodyBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyBoxes = make_shared<vector<BeautifyBodyRequestBodyBoxes>>(expect1);
      }
    }
    if (m.find("FaceList") != m.end() && !m["FaceList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceList"].type()) {
        vector<BeautifyBodyRequestFaceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeautifyBodyRequestFaceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceList = make_shared<vector<BeautifyBodyRequestFaceList>>(expect1);
      }
    }
    if (m.find("PoseList") != m.end() && !m["PoseList"].empty()) {
      if (typeid(vector<boost::any>) == m["PoseList"].type()) {
        vector<BeautifyBodyRequestPoseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PoseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeautifyBodyRequestPoseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        poseList = make_shared<vector<BeautifyBodyRequestPoseList>>(expect1);
      }
    }
    if (m.find("IsPregnant") != m.end() && !m["IsPregnant"].empty()) {
      isPregnant = make_shared<bool>(boost::any_cast<bool>(m["IsPregnant"]));
    }
  }


  virtual ~BeautifyBodyRequest() = default;
};
class BeautifyBodyAdvanceRequestAgeRange : public Darabonba::Model {
public:
  shared_ptr<long> ageMinimum{};
  shared_ptr<long> ageMax{};

  BeautifyBodyAdvanceRequestAgeRange() {}

  explicit BeautifyBodyAdvanceRequestAgeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ageMinimum) {
      res["AgeMinimum"] = boost::any(*ageMinimum);
    }
    if (ageMax) {
      res["AgeMax"] = boost::any(*ageMax);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgeMinimum") != m.end() && !m["AgeMinimum"].empty()) {
      ageMinimum = make_shared<long>(boost::any_cast<long>(m["AgeMinimum"]));
    }
    if (m.find("AgeMax") != m.end() && !m["AgeMax"].empty()) {
      ageMax = make_shared<long>(boost::any_cast<long>(m["AgeMax"]));
    }
  }


  virtual ~BeautifyBodyAdvanceRequestAgeRange() = default;
};
class BeautifyBodyAdvanceRequestBodyBoxes : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<double> width{};
  shared_ptr<double> height{};

  BeautifyBodyAdvanceRequestBodyBoxes() {}

  explicit BeautifyBodyAdvanceRequestBodyBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
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
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
  }


  virtual ~BeautifyBodyAdvanceRequestBodyBoxes() = default;
};
class BeautifyBodyAdvanceRequestFaceListFaceBox : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<double> width{};
  shared_ptr<double> height{};

  BeautifyBodyAdvanceRequestFaceListFaceBox() {}

  explicit BeautifyBodyAdvanceRequestFaceListFaceBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
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
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
  }


  virtual ~BeautifyBodyAdvanceRequestFaceListFaceBox() = default;
};
class BeautifyBodyAdvanceRequestFaceList : public Darabonba::Model {
public:
  shared_ptr<BeautifyBodyAdvanceRequestFaceListFaceBox> faceBox{};
  shared_ptr<long> age{};
  shared_ptr<long> gender{};

  BeautifyBodyAdvanceRequestFaceList() {}

  explicit BeautifyBodyAdvanceRequestFaceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceBox) {
      res["FaceBox"] = faceBox ? boost::any(faceBox->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceBox") != m.end() && !m["FaceBox"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBox"].type()) {
        BeautifyBodyAdvanceRequestFaceListFaceBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBox"]));
        faceBox = make_shared<BeautifyBodyAdvanceRequestFaceListFaceBox>(model1);
      }
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["Gender"]));
    }
  }


  virtual ~BeautifyBodyAdvanceRequestFaceList() = default;
};
class BeautifyBodyAdvanceRequestPoseListPose : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};
  shared_ptr<double> score{};

  BeautifyBodyAdvanceRequestPoseListPose() {}

  explicit BeautifyBodyAdvanceRequestPoseListPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (score) {
      res["Score"] = boost::any(*score);
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
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~BeautifyBodyAdvanceRequestPoseListPose() = default;
};
class BeautifyBodyAdvanceRequestPoseList : public Darabonba::Model {
public:
  shared_ptr<vector<BeautifyBodyAdvanceRequestPoseListPose>> pose{};

  BeautifyBodyAdvanceRequestPoseList() {}

  explicit BeautifyBodyAdvanceRequestPoseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pose) {
      vector<boost::any> temp1;
      for(auto item1:*pose){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Pose"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pose") != m.end() && !m["Pose"].empty()) {
      if (typeid(vector<boost::any>) == m["Pose"].type()) {
        vector<BeautifyBodyAdvanceRequestPoseListPose> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Pose"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeautifyBodyAdvanceRequestPoseListPose model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pose = make_shared<vector<BeautifyBodyAdvanceRequestPoseListPose>>(expect1);
      }
    }
  }


  virtual ~BeautifyBodyAdvanceRequestPoseList() = default;
};
class BeautifyBodyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> originalWidth{};
  shared_ptr<long> originalHeight{};
  shared_ptr<long> custom{};
  shared_ptr<double> maleLiquifyDegree{};
  shared_ptr<double> femaleLiquifyDegree{};
  shared_ptr<double> lengthenDegree{};
  shared_ptr<BeautifyBodyAdvanceRequestAgeRange> ageRange{};
  shared_ptr<vector<BeautifyBodyAdvanceRequestBodyBoxes>> bodyBoxes{};
  shared_ptr<vector<BeautifyBodyAdvanceRequestFaceList>> faceList{};
  shared_ptr<vector<BeautifyBodyAdvanceRequestPoseList>> poseList{};
  shared_ptr<bool> isPregnant{};

  BeautifyBodyAdvanceRequest() {}

  explicit BeautifyBodyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (originalWidth) {
      res["OriginalWidth"] = boost::any(*originalWidth);
    }
    if (originalHeight) {
      res["OriginalHeight"] = boost::any(*originalHeight);
    }
    if (custom) {
      res["Custom"] = boost::any(*custom);
    }
    if (maleLiquifyDegree) {
      res["MaleLiquifyDegree"] = boost::any(*maleLiquifyDegree);
    }
    if (femaleLiquifyDegree) {
      res["FemaleLiquifyDegree"] = boost::any(*femaleLiquifyDegree);
    }
    if (lengthenDegree) {
      res["LengthenDegree"] = boost::any(*lengthenDegree);
    }
    if (ageRange) {
      res["AgeRange"] = ageRange ? boost::any(ageRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bodyBoxes) {
      vector<boost::any> temp1;
      for(auto item1:*bodyBoxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyBoxes"] = boost::any(temp1);
    }
    if (faceList) {
      vector<boost::any> temp1;
      for(auto item1:*faceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceList"] = boost::any(temp1);
    }
    if (poseList) {
      vector<boost::any> temp1;
      for(auto item1:*poseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PoseList"] = boost::any(temp1);
    }
    if (isPregnant) {
      res["IsPregnant"] = boost::any(*isPregnant);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("OriginalWidth") != m.end() && !m["OriginalWidth"].empty()) {
      originalWidth = make_shared<long>(boost::any_cast<long>(m["OriginalWidth"]));
    }
    if (m.find("OriginalHeight") != m.end() && !m["OriginalHeight"].empty()) {
      originalHeight = make_shared<long>(boost::any_cast<long>(m["OriginalHeight"]));
    }
    if (m.find("Custom") != m.end() && !m["Custom"].empty()) {
      custom = make_shared<long>(boost::any_cast<long>(m["Custom"]));
    }
    if (m.find("MaleLiquifyDegree") != m.end() && !m["MaleLiquifyDegree"].empty()) {
      maleLiquifyDegree = make_shared<double>(boost::any_cast<double>(m["MaleLiquifyDegree"]));
    }
    if (m.find("FemaleLiquifyDegree") != m.end() && !m["FemaleLiquifyDegree"].empty()) {
      femaleLiquifyDegree = make_shared<double>(boost::any_cast<double>(m["FemaleLiquifyDegree"]));
    }
    if (m.find("LengthenDegree") != m.end() && !m["LengthenDegree"].empty()) {
      lengthenDegree = make_shared<double>(boost::any_cast<double>(m["LengthenDegree"]));
    }
    if (m.find("AgeRange") != m.end() && !m["AgeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["AgeRange"].type()) {
        BeautifyBodyAdvanceRequestAgeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AgeRange"]));
        ageRange = make_shared<BeautifyBodyAdvanceRequestAgeRange>(model1);
      }
    }
    if (m.find("BodyBoxes") != m.end() && !m["BodyBoxes"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyBoxes"].type()) {
        vector<BeautifyBodyAdvanceRequestBodyBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyBoxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeautifyBodyAdvanceRequestBodyBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyBoxes = make_shared<vector<BeautifyBodyAdvanceRequestBodyBoxes>>(expect1);
      }
    }
    if (m.find("FaceList") != m.end() && !m["FaceList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceList"].type()) {
        vector<BeautifyBodyAdvanceRequestFaceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeautifyBodyAdvanceRequestFaceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceList = make_shared<vector<BeautifyBodyAdvanceRequestFaceList>>(expect1);
      }
    }
    if (m.find("PoseList") != m.end() && !m["PoseList"].empty()) {
      if (typeid(vector<boost::any>) == m["PoseList"].type()) {
        vector<BeautifyBodyAdvanceRequestPoseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PoseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeautifyBodyAdvanceRequestPoseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        poseList = make_shared<vector<BeautifyBodyAdvanceRequestPoseList>>(expect1);
      }
    }
    if (m.find("IsPregnant") != m.end() && !m["IsPregnant"].empty()) {
      isPregnant = make_shared<bool>(boost::any_cast<bool>(m["IsPregnant"]));
    }
  }


  virtual ~BeautifyBodyAdvanceRequest() = default;
};
class BeautifyBodyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<long> originalWidth{};
  shared_ptr<long> originalHeight{};
  shared_ptr<long> custom{};
  shared_ptr<double> maleLiquifyDegree{};
  shared_ptr<double> femaleLiquifyDegree{};
  shared_ptr<double> lengthenDegree{};
  shared_ptr<string> ageRangeShrink{};
  shared_ptr<string> bodyBoxesShrink{};
  shared_ptr<string> faceListShrink{};
  shared_ptr<string> poseListShrink{};
  shared_ptr<bool> isPregnant{};

  BeautifyBodyShrinkRequest() {}

  explicit BeautifyBodyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (originalWidth) {
      res["OriginalWidth"] = boost::any(*originalWidth);
    }
    if (originalHeight) {
      res["OriginalHeight"] = boost::any(*originalHeight);
    }
    if (custom) {
      res["Custom"] = boost::any(*custom);
    }
    if (maleLiquifyDegree) {
      res["MaleLiquifyDegree"] = boost::any(*maleLiquifyDegree);
    }
    if (femaleLiquifyDegree) {
      res["FemaleLiquifyDegree"] = boost::any(*femaleLiquifyDegree);
    }
    if (lengthenDegree) {
      res["LengthenDegree"] = boost::any(*lengthenDegree);
    }
    if (ageRangeShrink) {
      res["AgeRange"] = boost::any(*ageRangeShrink);
    }
    if (bodyBoxesShrink) {
      res["BodyBoxes"] = boost::any(*bodyBoxesShrink);
    }
    if (faceListShrink) {
      res["FaceList"] = boost::any(*faceListShrink);
    }
    if (poseListShrink) {
      res["PoseList"] = boost::any(*poseListShrink);
    }
    if (isPregnant) {
      res["IsPregnant"] = boost::any(*isPregnant);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("OriginalWidth") != m.end() && !m["OriginalWidth"].empty()) {
      originalWidth = make_shared<long>(boost::any_cast<long>(m["OriginalWidth"]));
    }
    if (m.find("OriginalHeight") != m.end() && !m["OriginalHeight"].empty()) {
      originalHeight = make_shared<long>(boost::any_cast<long>(m["OriginalHeight"]));
    }
    if (m.find("Custom") != m.end() && !m["Custom"].empty()) {
      custom = make_shared<long>(boost::any_cast<long>(m["Custom"]));
    }
    if (m.find("MaleLiquifyDegree") != m.end() && !m["MaleLiquifyDegree"].empty()) {
      maleLiquifyDegree = make_shared<double>(boost::any_cast<double>(m["MaleLiquifyDegree"]));
    }
    if (m.find("FemaleLiquifyDegree") != m.end() && !m["FemaleLiquifyDegree"].empty()) {
      femaleLiquifyDegree = make_shared<double>(boost::any_cast<double>(m["FemaleLiquifyDegree"]));
    }
    if (m.find("LengthenDegree") != m.end() && !m["LengthenDegree"].empty()) {
      lengthenDegree = make_shared<double>(boost::any_cast<double>(m["LengthenDegree"]));
    }
    if (m.find("AgeRange") != m.end() && !m["AgeRange"].empty()) {
      ageRangeShrink = make_shared<string>(boost::any_cast<string>(m["AgeRange"]));
    }
    if (m.find("BodyBoxes") != m.end() && !m["BodyBoxes"].empty()) {
      bodyBoxesShrink = make_shared<string>(boost::any_cast<string>(m["BodyBoxes"]));
    }
    if (m.find("FaceList") != m.end() && !m["FaceList"].empty()) {
      faceListShrink = make_shared<string>(boost::any_cast<string>(m["FaceList"]));
    }
    if (m.find("PoseList") != m.end() && !m["PoseList"].empty()) {
      poseListShrink = make_shared<string>(boost::any_cast<string>(m["PoseList"]));
    }
    if (m.find("IsPregnant") != m.end() && !m["IsPregnant"].empty()) {
      isPregnant = make_shared<bool>(boost::any_cast<bool>(m["IsPregnant"]));
    }
  }


  virtual ~BeautifyBodyShrinkRequest() = default;
};
class BeautifyBodyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> XFlowURL{};
  shared_ptr<string> YFlowURL{};
  shared_ptr<string> action{};

  BeautifyBodyResponseBodyData() {}

  explicit BeautifyBodyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XFlowURL) {
      res["XFlowURL"] = boost::any(*XFlowURL);
    }
    if (YFlowURL) {
      res["YFlowURL"] = boost::any(*YFlowURL);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XFlowURL") != m.end() && !m["XFlowURL"].empty()) {
      XFlowURL = make_shared<string>(boost::any_cast<string>(m["XFlowURL"]));
    }
    if (m.find("YFlowURL") != m.end() && !m["YFlowURL"].empty()) {
      YFlowURL = make_shared<string>(boost::any_cast<string>(m["YFlowURL"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
  }


  virtual ~BeautifyBodyResponseBodyData() = default;
};
class BeautifyBodyResponseBody : public Darabonba::Model {
public:
  shared_ptr<BeautifyBodyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  BeautifyBodyResponseBody() {}

  explicit BeautifyBodyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BeautifyBodyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BeautifyBodyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BeautifyBodyResponseBody() = default;
};
class BeautifyBodyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BeautifyBodyResponseBody> body{};

  BeautifyBodyResponse() {}

  explicit BeautifyBodyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BeautifyBodyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BeautifyBodyResponseBody>(model1);
      }
    }
  }


  virtual ~BeautifyBodyResponse() = default;
};
class HandPostureRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  HandPostureRequest() {}

  explicit HandPostureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~HandPostureRequest() = default;
};
class HandPostureAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  HandPostureAdvanceRequest() {}

  explicit HandPostureAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~HandPostureAdvanceRequest() = default;
};
class HandPostureResponseBodyDataOutputsResultsHandsKeyPointsPositions : public Darabonba::Model {
public:
  shared_ptr<vector<double>> points{};

  HandPostureResponseBodyDataOutputsResultsHandsKeyPointsPositions() {}

  explicit HandPostureResponseBodyDataOutputsResultsHandsKeyPointsPositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (points) {
      res["Points"] = boost::any(*points);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Points"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Points"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      points = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~HandPostureResponseBodyDataOutputsResultsHandsKeyPointsPositions() = default;
};
class HandPostureResponseBodyDataOutputsResultsHandsKeyPoints : public Darabonba::Model {
public:
  shared_ptr<vector<HandPostureResponseBodyDataOutputsResultsHandsKeyPointsPositions>> positions{};
  shared_ptr<string> label{};

  HandPostureResponseBodyDataOutputsResultsHandsKeyPoints() {}

  explicit HandPostureResponseBodyDataOutputsResultsHandsKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (positions) {
      vector<boost::any> temp1;
      for(auto item1:*positions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Positions"] = boost::any(temp1);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Positions") != m.end() && !m["Positions"].empty()) {
      if (typeid(vector<boost::any>) == m["Positions"].type()) {
        vector<HandPostureResponseBodyDataOutputsResultsHandsKeyPointsPositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Positions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HandPostureResponseBodyDataOutputsResultsHandsKeyPointsPositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        positions = make_shared<vector<HandPostureResponseBodyDataOutputsResultsHandsKeyPointsPositions>>(expect1);
      }
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~HandPostureResponseBodyDataOutputsResultsHandsKeyPoints() = default;
};
class HandPostureResponseBodyDataOutputsResultsHands : public Darabonba::Model {
public:
  shared_ptr<vector<HandPostureResponseBodyDataOutputsResultsHandsKeyPoints>> keyPoints{};
  shared_ptr<double> confident{};

  HandPostureResponseBodyDataOutputsResultsHands() {}

  explicit HandPostureResponseBodyDataOutputsResultsHands(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (confident) {
      res["Confident"] = boost::any(*confident);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<HandPostureResponseBodyDataOutputsResultsHandsKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HandPostureResponseBodyDataOutputsResultsHandsKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<HandPostureResponseBodyDataOutputsResultsHandsKeyPoints>>(expect1);
      }
    }
    if (m.find("Confident") != m.end() && !m["Confident"].empty()) {
      confident = make_shared<double>(boost::any_cast<double>(m["Confident"]));
    }
  }


  virtual ~HandPostureResponseBodyDataOutputsResultsHands() = default;
};
class HandPostureResponseBodyDataOutputsResultsBoxPositions : public Darabonba::Model {
public:
  shared_ptr<vector<double>> points{};

  HandPostureResponseBodyDataOutputsResultsBoxPositions() {}

  explicit HandPostureResponseBodyDataOutputsResultsBoxPositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (points) {
      res["Points"] = boost::any(*points);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Points"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Points"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      points = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~HandPostureResponseBodyDataOutputsResultsBoxPositions() = default;
};
class HandPostureResponseBodyDataOutputsResultsBox : public Darabonba::Model {
public:
  shared_ptr<vector<HandPostureResponseBodyDataOutputsResultsBoxPositions>> positions{};
  shared_ptr<double> confident{};

  HandPostureResponseBodyDataOutputsResultsBox() {}

  explicit HandPostureResponseBodyDataOutputsResultsBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (positions) {
      vector<boost::any> temp1;
      for(auto item1:*positions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Positions"] = boost::any(temp1);
    }
    if (confident) {
      res["Confident"] = boost::any(*confident);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Positions") != m.end() && !m["Positions"].empty()) {
      if (typeid(vector<boost::any>) == m["Positions"].type()) {
        vector<HandPostureResponseBodyDataOutputsResultsBoxPositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Positions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HandPostureResponseBodyDataOutputsResultsBoxPositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        positions = make_shared<vector<HandPostureResponseBodyDataOutputsResultsBoxPositions>>(expect1);
      }
    }
    if (m.find("Confident") != m.end() && !m["Confident"].empty()) {
      confident = make_shared<double>(boost::any_cast<double>(m["Confident"]));
    }
  }


  virtual ~HandPostureResponseBodyDataOutputsResultsBox() = default;
};
class HandPostureResponseBodyDataOutputsResults : public Darabonba::Model {
public:
  shared_ptr<HandPostureResponseBodyDataOutputsResultsHands> hands{};
  shared_ptr<HandPostureResponseBodyDataOutputsResultsBox> box{};

  HandPostureResponseBodyDataOutputsResults() {}

  explicit HandPostureResponseBodyDataOutputsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hands) {
      res["Hands"] = hands ? boost::any(hands->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (box) {
      res["Box"] = box ? boost::any(box->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hands") != m.end() && !m["Hands"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hands"].type()) {
        HandPostureResponseBodyDataOutputsResultsHands model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hands"]));
        hands = make_shared<HandPostureResponseBodyDataOutputsResultsHands>(model1);
      }
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      if (typeid(map<string, boost::any>) == m["Box"].type()) {
        HandPostureResponseBodyDataOutputsResultsBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Box"]));
        box = make_shared<HandPostureResponseBodyDataOutputsResultsBox>(model1);
      }
    }
  }


  virtual ~HandPostureResponseBodyDataOutputsResults() = default;
};
class HandPostureResponseBodyDataOutputs : public Darabonba::Model {
public:
  shared_ptr<long> handCount{};
  shared_ptr<vector<HandPostureResponseBodyDataOutputsResults>> results{};

  HandPostureResponseBodyDataOutputs() {}

  explicit HandPostureResponseBodyDataOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handCount) {
      res["HandCount"] = boost::any(*handCount);
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
    if (m.find("HandCount") != m.end() && !m["HandCount"].empty()) {
      handCount = make_shared<long>(boost::any_cast<long>(m["HandCount"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<HandPostureResponseBodyDataOutputsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HandPostureResponseBodyDataOutputsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<HandPostureResponseBodyDataOutputsResults>>(expect1);
      }
    }
  }


  virtual ~HandPostureResponseBodyDataOutputs() = default;
};
class HandPostureResponseBodyDataMetaObject : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  HandPostureResponseBodyDataMetaObject() {}

  explicit HandPostureResponseBodyDataMetaObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~HandPostureResponseBodyDataMetaObject() = default;
};
class HandPostureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<HandPostureResponseBodyDataOutputs>> outputs{};
  shared_ptr<HandPostureResponseBodyDataMetaObject> metaObject{};

  HandPostureResponseBodyData() {}

  explicit HandPostureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metaObject) {
      res["MetaObject"] = metaObject ? boost::any(metaObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["Outputs"].type()) {
        vector<HandPostureResponseBodyDataOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HandPostureResponseBodyDataOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<HandPostureResponseBodyDataOutputs>>(expect1);
      }
    }
    if (m.find("MetaObject") != m.end() && !m["MetaObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetaObject"].type()) {
        HandPostureResponseBodyDataMetaObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetaObject"]));
        metaObject = make_shared<HandPostureResponseBodyDataMetaObject>(model1);
      }
    }
  }


  virtual ~HandPostureResponseBodyData() = default;
};
class HandPostureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<HandPostureResponseBodyData> data{};

  HandPostureResponseBody() {}

  explicit HandPostureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HandPostureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<HandPostureResponseBodyData>(model1);
      }
    }
  }


  virtual ~HandPostureResponseBody() = default;
};
class HandPostureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HandPostureResponseBody> body{};

  HandPostureResponse() {}

  explicit HandPostureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HandPostureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HandPostureResponseBody>(model1);
      }
    }
  }


  virtual ~HandPostureResponse() = default;
};
class EnhanceFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  EnhanceFaceRequest() {}

  explicit EnhanceFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhanceFaceRequest() = default;
};
class EnhanceFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  EnhanceFaceAdvanceRequest() {}

  explicit EnhanceFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhanceFaceAdvanceRequest() = default;
};
class EnhanceFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  EnhanceFaceResponseBodyData() {}

  explicit EnhanceFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhanceFaceResponseBodyData() = default;
};
class EnhanceFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EnhanceFaceResponseBodyData> data{};

  EnhanceFaceResponseBody() {}

  explicit EnhanceFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhanceFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnhanceFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~EnhanceFaceResponseBody() = default;
};
class EnhanceFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnhanceFaceResponseBody> body{};

  EnhanceFaceResponse() {}

  explicit EnhanceFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhanceFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnhanceFaceResponseBody>(model1);
      }
    }
  }


  virtual ~EnhanceFaceResponse() = default;
};
class GetBodyPersonRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<long> personId{};

  GetBodyPersonRequest() {}

  explicit GetBodyPersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<long>(boost::any_cast<long>(m["PersonId"]));
    }
  }


  virtual ~GetBodyPersonRequest() = default;
};
class GetBodyPersonResponseBodyDataTraceList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> extraData{};

  GetBodyPersonResponseBodyDataTraceList() {}

  explicit GetBodyPersonResponseBodyDataTraceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
  }


  virtual ~GetBodyPersonResponseBodyDataTraceList() = default;
};
class GetBodyPersonResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> traceCount{};
  shared_ptr<vector<GetBodyPersonResponseBodyDataTraceList>> traceList{};

  GetBodyPersonResponseBodyData() {}

  explicit GetBodyPersonResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (traceCount) {
      res["TraceCount"] = boost::any(*traceCount);
    }
    if (traceList) {
      vector<boost::any> temp1;
      for(auto item1:*traceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TraceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TraceCount") != m.end() && !m["TraceCount"].empty()) {
      traceCount = make_shared<long>(boost::any_cast<long>(m["TraceCount"]));
    }
    if (m.find("TraceList") != m.end() && !m["TraceList"].empty()) {
      if (typeid(vector<boost::any>) == m["TraceList"].type()) {
        vector<GetBodyPersonResponseBodyDataTraceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TraceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetBodyPersonResponseBodyDataTraceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        traceList = make_shared<vector<GetBodyPersonResponseBodyDataTraceList>>(expect1);
      }
    }
  }


  virtual ~GetBodyPersonResponseBodyData() = default;
};
class GetBodyPersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetBodyPersonResponseBodyData> data{};

  GetBodyPersonResponseBody() {}

  explicit GetBodyPersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBodyPersonResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetBodyPersonResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetBodyPersonResponseBody() = default;
};
class GetBodyPersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBodyPersonResponseBody> body{};

  GetBodyPersonResponse() {}

  explicit GetBodyPersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBodyPersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBodyPersonResponseBody>(model1);
      }
    }
  }


  virtual ~GetBodyPersonResponse() = default;
};
class RecognizeHandGestureRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> imageURL{};
  shared_ptr<string> gestureType{};

  RecognizeHandGestureRequest() {}

  explicit RecognizeHandGestureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (gestureType) {
      res["GestureType"] = boost::any(*gestureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("GestureType") != m.end() && !m["GestureType"].empty()) {
      gestureType = make_shared<string>(boost::any_cast<string>(m["GestureType"]));
    }
  }


  virtual ~RecognizeHandGestureRequest() = default;
};
class RecognizeHandGestureAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> appId{};
  shared_ptr<string> gestureType{};

  RecognizeHandGestureAdvanceRequest() {}

  explicit RecognizeHandGestureAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (gestureType) {
      res["GestureType"] = boost::any(*gestureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("GestureType") != m.end() && !m["GestureType"].empty()) {
      gestureType = make_shared<string>(boost::any_cast<string>(m["GestureType"]));
    }
  }


  virtual ~RecognizeHandGestureAdvanceRequest() = default;
};
class RecognizeHandGestureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<double> score{};

  RecognizeHandGestureResponseBodyData() {}

  explicit RecognizeHandGestureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~RecognizeHandGestureResponseBodyData() = default;
};
class RecognizeHandGestureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeHandGestureResponseBodyData> data{};

  RecognizeHandGestureResponseBody() {}

  explicit RecognizeHandGestureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeHandGestureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeHandGestureResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeHandGestureResponseBody() = default;
};
class RecognizeHandGestureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeHandGestureResponseBody> body{};

  RecognizeHandGestureResponse() {}

  explicit RecognizeHandGestureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeHandGestureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeHandGestureResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeHandGestureResponse() = default;
};
class DeleteFaceDbRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DeleteFaceDbRequest() {}

  explicit DeleteFaceDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DeleteFaceDbRequest() = default;
};
class DeleteFaceDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFaceDbResponseBody() {}

  explicit DeleteFaceDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFaceDbResponseBody() = default;
};
class DeleteFaceDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFaceDbResponseBody> body{};

  DeleteFaceDbResponse() {}

  explicit DeleteFaceDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFaceDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceDbResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceDbResponse() = default;
};
class ListBodyPersonRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<long> offset{};
  shared_ptr<long> limit{};

  ListBodyPersonRequest() {}

  explicit ListBodyPersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~ListBodyPersonRequest() = default;
};
class ListBodyPersonResponseBodyDataPersonList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> name{};
  shared_ptr<long> traceCount{};
  shared_ptr<long> id{};

  ListBodyPersonResponseBodyDataPersonList() {}

  explicit ListBodyPersonResponseBodyDataPersonList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (traceCount) {
      res["TraceCount"] = boost::any(*traceCount);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TraceCount") != m.end() && !m["TraceCount"].empty()) {
      traceCount = make_shared<long>(boost::any_cast<long>(m["TraceCount"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListBodyPersonResponseBodyDataPersonList() = default;
};
class ListBodyPersonResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> total{};
  shared_ptr<vector<ListBodyPersonResponseBodyDataPersonList>> personList{};

  ListBodyPersonResponseBodyData() {}

  explicit ListBodyPersonResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (personList) {
      vector<boost::any> temp1;
      for(auto item1:*personList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PersonList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("PersonList") != m.end() && !m["PersonList"].empty()) {
      if (typeid(vector<boost::any>) == m["PersonList"].type()) {
        vector<ListBodyPersonResponseBodyDataPersonList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PersonList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBodyPersonResponseBodyDataPersonList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        personList = make_shared<vector<ListBodyPersonResponseBodyDataPersonList>>(expect1);
      }
    }
  }


  virtual ~ListBodyPersonResponseBodyData() = default;
};
class ListBodyPersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListBodyPersonResponseBodyData> data{};

  ListBodyPersonResponseBody() {}

  explicit ListBodyPersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBodyPersonResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListBodyPersonResponseBodyData>(model1);
      }
    }
  }


  virtual ~ListBodyPersonResponseBody() = default;
};
class ListBodyPersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBodyPersonResponseBody> body{};

  ListBodyPersonResponse() {}

  explicit ListBodyPersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBodyPersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBodyPersonResponseBody>(model1);
      }
    }
  }


  virtual ~ListBodyPersonResponse() = default;
};
class ListBodyDbsRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> limit{};

  ListBodyDbsRequest() {}

  explicit ListBodyDbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~ListBodyDbsRequest() = default;
};
class ListBodyDbsResponseBodyDataDbList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  ListBodyDbsResponseBodyDataDbList() {}

  explicit ListBodyDbsResponseBodyDataDbList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListBodyDbsResponseBodyDataDbList() = default;
};
class ListBodyDbsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> total{};
  shared_ptr<vector<ListBodyDbsResponseBodyDataDbList>> dbList{};

  ListBodyDbsResponseBodyData() {}

  explicit ListBodyDbsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (dbList) {
      vector<boost::any> temp1;
      for(auto item1:*dbList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbList"].type()) {
        vector<ListBodyDbsResponseBodyDataDbList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBodyDbsResponseBodyDataDbList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbList = make_shared<vector<ListBodyDbsResponseBodyDataDbList>>(expect1);
      }
    }
  }


  virtual ~ListBodyDbsResponseBodyData() = default;
};
class ListBodyDbsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListBodyDbsResponseBodyData> data{};

  ListBodyDbsResponseBody() {}

  explicit ListBodyDbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBodyDbsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListBodyDbsResponseBodyData>(model1);
      }
    }
  }


  virtual ~ListBodyDbsResponseBody() = default;
};
class ListBodyDbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBodyDbsResponseBody> body{};

  ListBodyDbsResponse() {}

  explicit ListBodyDbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBodyDbsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBodyDbsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBodyDbsResponse() = default;
};
class ListFaceEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<long> offset{};
  shared_ptr<long> limit{};
  shared_ptr<string> token{};
  shared_ptr<string> labels{};
  shared_ptr<string> entityIdPrefix{};
  shared_ptr<string> order{};

  ListFaceEntitiesRequest() {}

  explicit ListFaceEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (entityIdPrefix) {
      res["EntityIdPrefix"] = boost::any(*entityIdPrefix);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("EntityIdPrefix") != m.end() && !m["EntityIdPrefix"].empty()) {
      entityIdPrefix = make_shared<string>(boost::any_cast<string>(m["EntityIdPrefix"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
  }


  virtual ~ListFaceEntitiesRequest() = default;
};
class ListFaceEntitiesResponseBodyDataEntities : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> entityId{};
  shared_ptr<string> labels{};
  shared_ptr<long> createdAt{};
  shared_ptr<long> faceCount{};
  shared_ptr<long> updatedAt{};

  ListFaceEntitiesResponseBodyDataEntities() {}

  explicit ListFaceEntitiesResponseBodyDataEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<long>(boost::any_cast<long>(m["CreatedAt"]));
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<long>(boost::any_cast<long>(m["UpdatedAt"]));
    }
  }


  virtual ~ListFaceEntitiesResponseBodyDataEntities() = default;
};
class ListFaceEntitiesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> token{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListFaceEntitiesResponseBodyDataEntities>> entities{};

  ListFaceEntitiesResponseBodyData() {}

  explicit ListFaceEntitiesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (entities) {
      vector<boost::any> temp1;
      for(auto item1:*entities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entities"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Entities") != m.end() && !m["Entities"].empty()) {
      if (typeid(vector<boost::any>) == m["Entities"].type()) {
        vector<ListFaceEntitiesResponseBodyDataEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFaceEntitiesResponseBodyDataEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entities = make_shared<vector<ListFaceEntitiesResponseBodyDataEntities>>(expect1);
      }
    }
  }


  virtual ~ListFaceEntitiesResponseBodyData() = default;
};
class ListFaceEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListFaceEntitiesResponseBodyData> data{};

  ListFaceEntitiesResponseBody() {}

  explicit ListFaceEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFaceEntitiesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListFaceEntitiesResponseBodyData>(model1);
      }
    }
  }


  virtual ~ListFaceEntitiesResponseBody() = default;
};
class ListFaceEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListFaceEntitiesResponseBody> body{};

  ListFaceEntitiesResponse() {}

  explicit ListFaceEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFaceEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFaceEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFaceEntitiesResponse() = default;
};
class RecognizePublicFaceRequestTask : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<uint8_t>> imageData{};

  RecognizePublicFaceRequestTask() {}

  explicit RecognizePublicFaceRequestTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageData"]));
    }
  }


  virtual ~RecognizePublicFaceRequestTask() = default;
};
class RecognizePublicFaceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizePublicFaceRequestTask>> task{};

  RecognizePublicFaceRequest() {}

  explicit RecognizePublicFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      vector<boost::any> temp1;
      for(auto item1:*task){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<RecognizePublicFaceRequestTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePublicFaceRequestTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<RecognizePublicFaceRequestTask>>(expect1);
      }
    }
  }


  virtual ~RecognizePublicFaceRequest() = default;
};
class RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<double> rate{};

  RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces() {}

  explicit RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces() = default;
};
class RecognizePublicFaceResponseBodyDataElementsResultsSubResults : public Darabonba::Model {
public:
  shared_ptr<double> w{};
  shared_ptr<vector<RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces>> faces{};
  shared_ptr<double> h{};
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  RecognizePublicFaceResponseBodyDataElementsResultsSubResults() {}

  explicit RecognizePublicFaceResponseBodyDataElementsResultsSubResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces>>(expect1);
      }
    }
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~RecognizePublicFaceResponseBodyDataElementsResultsSubResults() = default;
};
class RecognizePublicFaceResponseBodyDataElementsResults : public Darabonba::Model {
public:
  shared_ptr<string> suggestion{};
  shared_ptr<string> label{};
  shared_ptr<vector<RecognizePublicFaceResponseBodyDataElementsResultsSubResults>> subResults{};
  shared_ptr<double> rate{};

  RecognizePublicFaceResponseBodyDataElementsResults() {}

  explicit RecognizePublicFaceResponseBodyDataElementsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (subResults) {
      vector<boost::any> temp1;
      for(auto item1:*subResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubResults"] = boost::any(temp1);
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
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("SubResults") != m.end() && !m["SubResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SubResults"].type()) {
        vector<RecognizePublicFaceResponseBodyDataElementsResultsSubResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePublicFaceResponseBodyDataElementsResultsSubResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subResults = make_shared<vector<RecognizePublicFaceResponseBodyDataElementsResultsSubResults>>(expect1);
      }
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~RecognizePublicFaceResponseBodyDataElementsResults() = default;
};
class RecognizePublicFaceResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<RecognizePublicFaceResponseBodyDataElementsResults>> results{};

  RecognizePublicFaceResponseBodyDataElements() {}

  explicit RecognizePublicFaceResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizePublicFaceResponseBodyDataElementsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePublicFaceResponseBodyDataElementsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizePublicFaceResponseBodyDataElementsResults>>(expect1);
      }
    }
  }


  virtual ~RecognizePublicFaceResponseBodyDataElements() = default;
};
class RecognizePublicFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizePublicFaceResponseBodyDataElements>> elements{};

  RecognizePublicFaceResponseBodyData() {}

  explicit RecognizePublicFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizePublicFaceResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePublicFaceResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizePublicFaceResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizePublicFaceResponseBodyData() = default;
};
class RecognizePublicFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizePublicFaceResponseBodyData> data{};

  RecognizePublicFaceResponseBody() {}

  explicit RecognizePublicFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePublicFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizePublicFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizePublicFaceResponseBody() = default;
};
class RecognizePublicFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizePublicFaceResponseBody> body{};

  RecognizePublicFaceResponse() {}

  explicit RecognizePublicFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePublicFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePublicFaceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePublicFaceResponse() = default;
};
class DeleteFaceImageTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};

  DeleteFaceImageTemplateRequest() {}

  explicit DeleteFaceImageTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteFaceImageTemplateRequest() = default;
};
class DeleteFaceImageTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFaceImageTemplateResponseBody() {}

  explicit DeleteFaceImageTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFaceImageTemplateResponseBody() = default;
};
class DeleteFaceImageTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFaceImageTemplateResponseBody> body{};

  DeleteFaceImageTemplateResponse() {}

  explicit DeleteFaceImageTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFaceImageTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceImageTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceImageTemplateResponse() = default;
};
class CreateFaceDbRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  CreateFaceDbRequest() {}

  explicit CreateFaceDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateFaceDbRequest() = default;
};
class CreateFaceDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateFaceDbResponseBody() {}

  explicit CreateFaceDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateFaceDbResponseBody() = default;
};
class CreateFaceDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFaceDbResponseBody> body{};

  CreateFaceDbResponse() {}

  explicit CreateFaceDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFaceDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFaceDbResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFaceDbResponse() = default;
};
class AddBodyTraceRequestImages : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<uint8_t>> imageData{};

  AddBodyTraceRequestImages() {}

  explicit AddBodyTraceRequestImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageData"]));
    }
  }


  virtual ~AddBodyTraceRequestImages() = default;
};
class AddBodyTraceRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<long> personId{};
  shared_ptr<vector<AddBodyTraceRequestImages>> images{};
  shared_ptr<string> extraData{};

  AddBodyTraceRequest() {}

  explicit AddBodyTraceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<long>(boost::any_cast<long>(m["PersonId"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<AddBodyTraceRequestImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddBodyTraceRequestImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<AddBodyTraceRequestImages>>(expect1);
      }
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
  }


  virtual ~AddBodyTraceRequest() = default;
};
class AddBodyTraceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<long> personId{};
  shared_ptr<string> imagesShrink{};
  shared_ptr<string> extraData{};

  AddBodyTraceShrinkRequest() {}

  explicit AddBodyTraceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (imagesShrink) {
      res["Images"] = boost::any(*imagesShrink);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<long>(boost::any_cast<long>(m["PersonId"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      imagesShrink = make_shared<string>(boost::any_cast<string>(m["Images"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
  }


  virtual ~AddBodyTraceShrinkRequest() = default;
};
class AddBodyTraceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  AddBodyTraceResponseBodyData() {}

  explicit AddBodyTraceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~AddBodyTraceResponseBodyData() = default;
};
class AddBodyTraceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AddBodyTraceResponseBodyData> data{};

  AddBodyTraceResponseBody() {}

  explicit AddBodyTraceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddBodyTraceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddBodyTraceResponseBodyData>(model1);
      }
    }
  }


  virtual ~AddBodyTraceResponseBody() = default;
};
class AddBodyTraceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddBodyTraceResponseBody> body{};

  AddBodyTraceResponse() {}

  explicit AddBodyTraceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddBodyTraceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBodyTraceResponseBody>(model1);
      }
    }
  }


  virtual ~AddBodyTraceResponse() = default;
};
class SearchBodyTraceRequestImages : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<uint8_t>> imageData{};

  SearchBodyTraceRequestImages() {}

  explicit SearchBodyTraceRequestImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ImageData"]));
    }
  }


  virtual ~SearchBodyTraceRequestImages() = default;
};
class SearchBodyTraceRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<vector<SearchBodyTraceRequestImages>> images{};
  shared_ptr<long> limit{};
  shared_ptr<double> minScore{};

  SearchBodyTraceRequest() {}

  explicit SearchBodyTraceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (minScore) {
      res["MinScore"] = boost::any(*minScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<SearchBodyTraceRequestImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchBodyTraceRequestImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<SearchBodyTraceRequestImages>>(expect1);
      }
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("MinScore") != m.end() && !m["MinScore"].empty()) {
      minScore = make_shared<double>(boost::any_cast<double>(m["MinScore"]));
    }
  }


  virtual ~SearchBodyTraceRequest() = default;
};
class SearchBodyTraceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> imagesShrink{};
  shared_ptr<long> limit{};
  shared_ptr<double> minScore{};

  SearchBodyTraceShrinkRequest() {}

  explicit SearchBodyTraceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (imagesShrink) {
      res["Images"] = boost::any(*imagesShrink);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (minScore) {
      res["MinScore"] = boost::any(*minScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      imagesShrink = make_shared<string>(boost::any_cast<string>(m["Images"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("MinScore") != m.end() && !m["MinScore"].empty()) {
      minScore = make_shared<double>(boost::any_cast<double>(m["MinScore"]));
    }
  }


  virtual ~SearchBodyTraceShrinkRequest() = default;
};
class SearchBodyTraceResponseBodyDataMatchList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<long> personId{};
  shared_ptr<long> traceId{};
  shared_ptr<double> score{};
  shared_ptr<string> extraData{};

  SearchBodyTraceResponseBodyDataMatchList() {}

  explicit SearchBodyTraceResponseBodyDataMatchList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<long>(boost::any_cast<long>(m["PersonId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<long>(boost::any_cast<long>(m["TraceId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
  }


  virtual ~SearchBodyTraceResponseBodyDataMatchList() = default;
};
class SearchBodyTraceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchBodyTraceResponseBodyDataMatchList>> matchList{};

  SearchBodyTraceResponseBodyData() {}

  explicit SearchBodyTraceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchList) {
      vector<boost::any> temp1;
      for(auto item1:*matchList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MatchList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchList") != m.end() && !m["MatchList"].empty()) {
      if (typeid(vector<boost::any>) == m["MatchList"].type()) {
        vector<SearchBodyTraceResponseBodyDataMatchList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MatchList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchBodyTraceResponseBodyDataMatchList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchList = make_shared<vector<SearchBodyTraceResponseBodyDataMatchList>>(expect1);
      }
    }
  }


  virtual ~SearchBodyTraceResponseBodyData() = default;
};
class SearchBodyTraceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SearchBodyTraceResponseBodyData> data{};

  SearchBodyTraceResponseBody() {}

  explicit SearchBodyTraceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchBodyTraceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchBodyTraceResponseBodyData>(model1);
      }
    }
  }


  virtual ~SearchBodyTraceResponseBody() = default;
};
class SearchBodyTraceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchBodyTraceResponseBody> body{};

  SearchBodyTraceResponse() {}

  explicit SearchBodyTraceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchBodyTraceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchBodyTraceResponseBody>(model1);
      }
    }
  }


  virtual ~SearchBodyTraceResponse() = default;
};
class AddFaceImageTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> imageURL{};

  AddFaceImageTemplateRequest() {}

  explicit AddFaceImageTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~AddFaceImageTemplateRequest() = default;
};
class AddFaceImageTemplateAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> userId{};

  AddFaceImageTemplateAdvanceRequest() {}

  explicit AddFaceImageTemplateAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddFaceImageTemplateAdvanceRequest() = default;
};
class AddFaceImageTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  AddFaceImageTemplateResponseBodyData() {}

  explicit AddFaceImageTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddFaceImageTemplateResponseBodyData() = default;
};
class AddFaceImageTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AddFaceImageTemplateResponseBodyData> data{};

  AddFaceImageTemplateResponseBody() {}

  explicit AddFaceImageTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFaceImageTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddFaceImageTemplateResponseBodyData>(model1);
      }
    }
  }


  virtual ~AddFaceImageTemplateResponseBody() = default;
};
class AddFaceImageTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddFaceImageTemplateResponseBody> body{};

  AddFaceImageTemplateResponse() {}

  explicit AddFaceImageTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFaceImageTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceImageTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceImageTemplateResponse() = default;
};
class CountCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<bool> isShow{};

  CountCrowdRequest() {}

  explicit CountCrowdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (isShow) {
      res["IsShow"] = boost::any(*isShow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("IsShow") != m.end() && !m["IsShow"].empty()) {
      isShow = make_shared<bool>(boost::any_cast<bool>(m["IsShow"]));
    }
  }


  virtual ~CountCrowdRequest() = default;
};
class CountCrowdAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<bool> isShow{};

  CountCrowdAdvanceRequest() {}

  explicit CountCrowdAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (isShow) {
      res["IsShow"] = boost::any(*isShow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("IsShow") != m.end() && !m["IsShow"].empty()) {
      isShow = make_shared<bool>(boost::any_cast<bool>(m["IsShow"]));
    }
  }


  virtual ~CountCrowdAdvanceRequest() = default;
};
class CountCrowdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> peopleNumber{};
  shared_ptr<string> hotMap{};

  CountCrowdResponseBodyData() {}

  explicit CountCrowdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peopleNumber) {
      res["PeopleNumber"] = boost::any(*peopleNumber);
    }
    if (hotMap) {
      res["HotMap"] = boost::any(*hotMap);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeopleNumber") != m.end() && !m["PeopleNumber"].empty()) {
      peopleNumber = make_shared<long>(boost::any_cast<long>(m["PeopleNumber"]));
    }
    if (m.find("HotMap") != m.end() && !m["HotMap"].empty()) {
      hotMap = make_shared<string>(boost::any_cast<string>(m["HotMap"]));
    }
  }


  virtual ~CountCrowdResponseBodyData() = default;
};
class CountCrowdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CountCrowdResponseBodyData> data{};

  CountCrowdResponseBody() {}

  explicit CountCrowdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CountCrowdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CountCrowdResponseBodyData>(model1);
      }
    }
  }


  virtual ~CountCrowdResponseBody() = default;
};
class CountCrowdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CountCrowdResponseBody> body{};

  CountCrowdResponse() {}

  explicit CountCrowdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CountCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CountCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~CountCrowdResponse() = default;
};
class AddFaceEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> entityId{};
  shared_ptr<string> labels{};

  AddFaceEntityRequest() {}

  explicit AddFaceEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
  }


  virtual ~AddFaceEntityRequest() = default;
};
class AddFaceEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddFaceEntityResponseBody() {}

  explicit AddFaceEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddFaceEntityResponseBody() = default;
};
class AddFaceEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddFaceEntityResponseBody> body{};

  AddFaceEntityResponse() {}

  explicit AddFaceEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFaceEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceEntityResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceEntityResponse() = default;
};
class RetouchBodyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<double> slimDegree{};
  shared_ptr<double> lengthenDegree{};

  RetouchBodyRequest() {}

  explicit RetouchBodyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (slimDegree) {
      res["SlimDegree"] = boost::any(*slimDegree);
    }
    if (lengthenDegree) {
      res["LengthenDegree"] = boost::any(*lengthenDegree);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("SlimDegree") != m.end() && !m["SlimDegree"].empty()) {
      slimDegree = make_shared<double>(boost::any_cast<double>(m["SlimDegree"]));
    }
    if (m.find("LengthenDegree") != m.end() && !m["LengthenDegree"].empty()) {
      lengthenDegree = make_shared<double>(boost::any_cast<double>(m["LengthenDegree"]));
    }
  }


  virtual ~RetouchBodyRequest() = default;
};
class RetouchBodyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<double> slimDegree{};
  shared_ptr<double> lengthenDegree{};

  RetouchBodyAdvanceRequest() {}

  explicit RetouchBodyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (slimDegree) {
      res["SlimDegree"] = boost::any(*slimDegree);
    }
    if (lengthenDegree) {
      res["LengthenDegree"] = boost::any(*lengthenDegree);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("SlimDegree") != m.end() && !m["SlimDegree"].empty()) {
      slimDegree = make_shared<double>(boost::any_cast<double>(m["SlimDegree"]));
    }
    if (m.find("LengthenDegree") != m.end() && !m["LengthenDegree"].empty()) {
      lengthenDegree = make_shared<double>(boost::any_cast<double>(m["LengthenDegree"]));
    }
  }


  virtual ~RetouchBodyAdvanceRequest() = default;
};
class RetouchBodyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RetouchBodyResponseBodyData() {}

  explicit RetouchBodyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RetouchBodyResponseBodyData() = default;
};
class RetouchBodyResponseBody : public Darabonba::Model {
public:
  shared_ptr<RetouchBodyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RetouchBodyResponseBody() {}

  explicit RetouchBodyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetouchBodyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RetouchBodyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RetouchBodyResponseBody() = default;
};
class RetouchBodyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RetouchBodyResponseBody> body{};

  RetouchBodyResponse() {}

  explicit RetouchBodyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetouchBodyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetouchBodyResponseBody>(model1);
      }
    }
  }


  virtual ~RetouchBodyResponse() = default;
};
class DeleteFaceEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> entityId{};

  DeleteFaceEntityRequest() {}

  explicit DeleteFaceEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
  }


  virtual ~DeleteFaceEntityRequest() = default;
};
class DeleteFaceEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFaceEntityResponseBody() {}

  explicit DeleteFaceEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFaceEntityResponseBody() = default;
};
class DeleteFaceEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFaceEntityResponseBody> body{};

  DeleteFaceEntityResponse() {}

  explicit DeleteFaceEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFaceEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceEntityResponse() = default;
};
class FaceTidyupRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<long> shapeType{};
  shared_ptr<double> strength{};

  FaceTidyupRequest() {}

  explicit FaceTidyupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (shapeType) {
      res["ShapeType"] = boost::any(*shapeType);
    }
    if (strength) {
      res["Strength"] = boost::any(*strength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("ShapeType") != m.end() && !m["ShapeType"].empty()) {
      shapeType = make_shared<long>(boost::any_cast<long>(m["ShapeType"]));
    }
    if (m.find("Strength") != m.end() && !m["Strength"].empty()) {
      strength = make_shared<double>(boost::any_cast<double>(m["Strength"]));
    }
  }


  virtual ~FaceTidyupRequest() = default;
};
class FaceTidyupAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> shapeType{};
  shared_ptr<double> strength{};

  FaceTidyupAdvanceRequest() {}

  explicit FaceTidyupAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (shapeType) {
      res["ShapeType"] = boost::any(*shapeType);
    }
    if (strength) {
      res["Strength"] = boost::any(*strength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("ShapeType") != m.end() && !m["ShapeType"].empty()) {
      shapeType = make_shared<long>(boost::any_cast<long>(m["ShapeType"]));
    }
    if (m.find("Strength") != m.end() && !m["Strength"].empty()) {
      strength = make_shared<double>(boost::any_cast<double>(m["Strength"]));
    }
  }


  virtual ~FaceTidyupAdvanceRequest() = default;
};
class FaceTidyupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  FaceTidyupResponseBodyData() {}

  explicit FaceTidyupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FaceTidyupResponseBodyData() = default;
};
class FaceTidyupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<FaceTidyupResponseBodyData> data{};

  FaceTidyupResponseBody() {}

  explicit FaceTidyupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceTidyupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FaceTidyupResponseBodyData>(model1);
      }
    }
  }


  virtual ~FaceTidyupResponseBody() = default;
};
class FaceTidyupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FaceTidyupResponseBody> body{};

  FaceTidyupResponse() {}

  explicit FaceTidyupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceTidyupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceTidyupResponseBody>(model1);
      }
    }
  }


  virtual ~FaceTidyupResponse() = default;
};
class BodyPostureRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  BodyPostureRequest() {}

  explicit BodyPostureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BodyPostureRequest() = default;
};
class BodyPostureAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  BodyPostureAdvanceRequest() {}

  explicit BodyPostureAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BodyPostureAdvanceRequest() = default;
};
class BodyPostureResponseBodyDataOutputsResultsBodiesPositions : public Darabonba::Model {
public:
  shared_ptr<vector<double>> points{};

  BodyPostureResponseBodyDataOutputsResultsBodiesPositions() {}

  explicit BodyPostureResponseBodyDataOutputsResultsBodiesPositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (points) {
      res["Points"] = boost::any(*points);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Points"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Points"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      points = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~BodyPostureResponseBodyDataOutputsResultsBodiesPositions() = default;
};
class BodyPostureResponseBodyDataOutputsResultsBodies : public Darabonba::Model {
public:
  shared_ptr<vector<BodyPostureResponseBodyDataOutputsResultsBodiesPositions>> positions{};
  shared_ptr<double> confident{};
  shared_ptr<string> label{};

  BodyPostureResponseBodyDataOutputsResultsBodies() {}

  explicit BodyPostureResponseBodyDataOutputsResultsBodies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (positions) {
      vector<boost::any> temp1;
      for(auto item1:*positions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Positions"] = boost::any(temp1);
    }
    if (confident) {
      res["Confident"] = boost::any(*confident);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Positions") != m.end() && !m["Positions"].empty()) {
      if (typeid(vector<boost::any>) == m["Positions"].type()) {
        vector<BodyPostureResponseBodyDataOutputsResultsBodiesPositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Positions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BodyPostureResponseBodyDataOutputsResultsBodiesPositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        positions = make_shared<vector<BodyPostureResponseBodyDataOutputsResultsBodiesPositions>>(expect1);
      }
    }
    if (m.find("Confident") != m.end() && !m["Confident"].empty()) {
      confident = make_shared<double>(boost::any_cast<double>(m["Confident"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~BodyPostureResponseBodyDataOutputsResultsBodies() = default;
};
class BodyPostureResponseBodyDataOutputsResults : public Darabonba::Model {
public:
  shared_ptr<vector<BodyPostureResponseBodyDataOutputsResultsBodies>> bodies{};

  BodyPostureResponseBodyDataOutputsResults() {}

  explicit BodyPostureResponseBodyDataOutputsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodies) {
      vector<boost::any> temp1;
      for(auto item1:*bodies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bodies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bodies") != m.end() && !m["Bodies"].empty()) {
      if (typeid(vector<boost::any>) == m["Bodies"].type()) {
        vector<BodyPostureResponseBodyDataOutputsResultsBodies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bodies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BodyPostureResponseBodyDataOutputsResultsBodies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodies = make_shared<vector<BodyPostureResponseBodyDataOutputsResultsBodies>>(expect1);
      }
    }
  }


  virtual ~BodyPostureResponseBodyDataOutputsResults() = default;
};
class BodyPostureResponseBodyDataOutputs : public Darabonba::Model {
public:
  shared_ptr<long> humanCount{};
  shared_ptr<vector<BodyPostureResponseBodyDataOutputsResults>> results{};

  BodyPostureResponseBodyDataOutputs() {}

  explicit BodyPostureResponseBodyDataOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (humanCount) {
      res["HumanCount"] = boost::any(*humanCount);
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
    if (m.find("HumanCount") != m.end() && !m["HumanCount"].empty()) {
      humanCount = make_shared<long>(boost::any_cast<long>(m["HumanCount"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BodyPostureResponseBodyDataOutputsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BodyPostureResponseBodyDataOutputsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BodyPostureResponseBodyDataOutputsResults>>(expect1);
      }
    }
  }


  virtual ~BodyPostureResponseBodyDataOutputs() = default;
};
class BodyPostureResponseBodyDataMetaObject : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  BodyPostureResponseBodyDataMetaObject() {}

  explicit BodyPostureResponseBodyDataMetaObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~BodyPostureResponseBodyDataMetaObject() = default;
};
class BodyPostureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BodyPostureResponseBodyDataOutputs>> outputs{};
  shared_ptr<BodyPostureResponseBodyDataMetaObject> metaObject{};

  BodyPostureResponseBodyData() {}

  explicit BodyPostureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metaObject) {
      res["MetaObject"] = metaObject ? boost::any(metaObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["Outputs"].type()) {
        vector<BodyPostureResponseBodyDataOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BodyPostureResponseBodyDataOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<BodyPostureResponseBodyDataOutputs>>(expect1);
      }
    }
    if (m.find("MetaObject") != m.end() && !m["MetaObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetaObject"].type()) {
        BodyPostureResponseBodyDataMetaObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetaObject"]));
        metaObject = make_shared<BodyPostureResponseBodyDataMetaObject>(model1);
      }
    }
  }


  virtual ~BodyPostureResponseBodyData() = default;
};
class BodyPostureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<BodyPostureResponseBodyData> data{};

  BodyPostureResponseBody() {}

  explicit BodyPostureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BodyPostureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BodyPostureResponseBodyData>(model1);
      }
    }
  }


  virtual ~BodyPostureResponseBody() = default;
};
class BodyPostureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BodyPostureResponseBody> body{};

  BodyPostureResponse() {}

  explicit BodyPostureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BodyPostureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BodyPostureResponseBody>(model1);
      }
    }
  }


  virtual ~BodyPostureResponse() = default;
};
class MonitorExaminationRequest : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> imageURL{};

  MonitorExaminationRequest() {}

  explicit MonitorExaminationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~MonitorExaminationRequest() = default;
};
class MonitorExaminationAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> type{};

  MonitorExaminationAdvanceRequest() {}

  explicit MonitorExaminationAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~MonitorExaminationAdvanceRequest() = default;
};
class MonitorExaminationResponseBodyDataFaceInfoPose : public Darabonba::Model {
public:
  shared_ptr<double> pitch{};
  shared_ptr<double> roll{};
  shared_ptr<double> yaw{};

  MonitorExaminationResponseBodyDataFaceInfoPose() {}

  explicit MonitorExaminationResponseBodyDataFaceInfoPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pitch) {
      res["Pitch"] = boost::any(*pitch);
    }
    if (roll) {
      res["Roll"] = boost::any(*roll);
    }
    if (yaw) {
      res["Yaw"] = boost::any(*yaw);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pitch") != m.end() && !m["Pitch"].empty()) {
      pitch = make_shared<double>(boost::any_cast<double>(m["Pitch"]));
    }
    if (m.find("Roll") != m.end() && !m["Roll"].empty()) {
      roll = make_shared<double>(boost::any_cast<double>(m["Roll"]));
    }
    if (m.find("Yaw") != m.end() && !m["Yaw"].empty()) {
      yaw = make_shared<double>(boost::any_cast<double>(m["Yaw"]));
    }
  }


  virtual ~MonitorExaminationResponseBodyDataFaceInfoPose() = default;
};
class MonitorExaminationResponseBodyDataFaceInfo : public Darabonba::Model {
public:
  shared_ptr<long> completeness{};
  shared_ptr<long> faceNumber{};
  shared_ptr<MonitorExaminationResponseBodyDataFaceInfoPose> pose{};

  MonitorExaminationResponseBodyDataFaceInfo() {}

  explicit MonitorExaminationResponseBodyDataFaceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completeness) {
      res["Completeness"] = boost::any(*completeness);
    }
    if (faceNumber) {
      res["FaceNumber"] = boost::any(*faceNumber);
    }
    if (pose) {
      res["Pose"] = pose ? boost::any(pose->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Completeness") != m.end() && !m["Completeness"].empty()) {
      completeness = make_shared<long>(boost::any_cast<long>(m["Completeness"]));
    }
    if (m.find("FaceNumber") != m.end() && !m["FaceNumber"].empty()) {
      faceNumber = make_shared<long>(boost::any_cast<long>(m["FaceNumber"]));
    }
    if (m.find("Pose") != m.end() && !m["Pose"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pose"].type()) {
        MonitorExaminationResponseBodyDataFaceInfoPose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pose"]));
        pose = make_shared<MonitorExaminationResponseBodyDataFaceInfoPose>(model1);
      }
    }
  }


  virtual ~MonitorExaminationResponseBodyDataFaceInfo() = default;
};
class MonitorExaminationResponseBodyDataPersonInfoCellPhone : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<double> threshold{};

  MonitorExaminationResponseBodyDataPersonInfoCellPhone() {}

  explicit MonitorExaminationResponseBodyDataPersonInfoCellPhone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~MonitorExaminationResponseBodyDataPersonInfoCellPhone() = default;
};
class MonitorExaminationResponseBodyDataPersonInfoEarPhone : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<double> threshold{};

  MonitorExaminationResponseBodyDataPersonInfoEarPhone() {}

  explicit MonitorExaminationResponseBodyDataPersonInfoEarPhone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~MonitorExaminationResponseBodyDataPersonInfoEarPhone() = default;
};
class MonitorExaminationResponseBodyDataPersonInfo : public Darabonba::Model {
public:
  shared_ptr<MonitorExaminationResponseBodyDataPersonInfoCellPhone> cellPhone{};
  shared_ptr<MonitorExaminationResponseBodyDataPersonInfoEarPhone> earPhone{};
  shared_ptr<long> personNumber{};

  MonitorExaminationResponseBodyDataPersonInfo() {}

  explicit MonitorExaminationResponseBodyDataPersonInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cellPhone) {
      res["CellPhone"] = cellPhone ? boost::any(cellPhone->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (earPhone) {
      res["EarPhone"] = earPhone ? boost::any(earPhone->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (personNumber) {
      res["PersonNumber"] = boost::any(*personNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CellPhone") != m.end() && !m["CellPhone"].empty()) {
      if (typeid(map<string, boost::any>) == m["CellPhone"].type()) {
        MonitorExaminationResponseBodyDataPersonInfoCellPhone model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CellPhone"]));
        cellPhone = make_shared<MonitorExaminationResponseBodyDataPersonInfoCellPhone>(model1);
      }
    }
    if (m.find("EarPhone") != m.end() && !m["EarPhone"].empty()) {
      if (typeid(map<string, boost::any>) == m["EarPhone"].type()) {
        MonitorExaminationResponseBodyDataPersonInfoEarPhone model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EarPhone"]));
        earPhone = make_shared<MonitorExaminationResponseBodyDataPersonInfoEarPhone>(model1);
      }
    }
    if (m.find("PersonNumber") != m.end() && !m["PersonNumber"].empty()) {
      personNumber = make_shared<long>(boost::any_cast<long>(m["PersonNumber"]));
    }
  }


  virtual ~MonitorExaminationResponseBodyDataPersonInfo() = default;
};
class MonitorExaminationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<MonitorExaminationResponseBodyDataFaceInfo> faceInfo{};
  shared_ptr<MonitorExaminationResponseBodyDataPersonInfo> personInfo{};
  shared_ptr<double> chatScore{};
  shared_ptr<double> threshold{};

  MonitorExaminationResponseBodyData() {}

  explicit MonitorExaminationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceInfo) {
      res["FaceInfo"] = faceInfo ? boost::any(faceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (personInfo) {
      res["PersonInfo"] = personInfo ? boost::any(personInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chatScore) {
      res["ChatScore"] = boost::any(*chatScore);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceInfo") != m.end() && !m["FaceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceInfo"].type()) {
        MonitorExaminationResponseBodyDataFaceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceInfo"]));
        faceInfo = make_shared<MonitorExaminationResponseBodyDataFaceInfo>(model1);
      }
    }
    if (m.find("PersonInfo") != m.end() && !m["PersonInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PersonInfo"].type()) {
        MonitorExaminationResponseBodyDataPersonInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PersonInfo"]));
        personInfo = make_shared<MonitorExaminationResponseBodyDataPersonInfo>(model1);
      }
    }
    if (m.find("ChatScore") != m.end() && !m["ChatScore"].empty()) {
      chatScore = make_shared<double>(boost::any_cast<double>(m["ChatScore"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~MonitorExaminationResponseBodyData() = default;
};
class MonitorExaminationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<MonitorExaminationResponseBodyData> data{};

  MonitorExaminationResponseBody() {}

  explicit MonitorExaminationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MonitorExaminationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MonitorExaminationResponseBodyData>(model1);
      }
    }
  }


  virtual ~MonitorExaminationResponseBody() = default;
};
class MonitorExaminationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MonitorExaminationResponseBody> body{};

  MonitorExaminationResponse() {}

  explicit MonitorExaminationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MonitorExaminationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MonitorExaminationResponseBody>(model1);
      }
    }
  }


  virtual ~MonitorExaminationResponse() = default;
};
class CreateBodyDbRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  CreateBodyDbRequest() {}

  explicit CreateBodyDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateBodyDbRequest() = default;
};
class CreateBodyDbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  CreateBodyDbResponseBodyData() {}

  explicit CreateBodyDbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateBodyDbResponseBodyData() = default;
};
class CreateBodyDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateBodyDbResponseBodyData> data{};

  CreateBodyDbResponseBody() {}

  explicit CreateBodyDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBodyDbResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateBodyDbResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateBodyDbResponseBody() = default;
};
class CreateBodyDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBodyDbResponseBody> body{};

  CreateBodyDbResponse() {}

  explicit CreateBodyDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBodyDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBodyDbResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBodyDbResponse() = default;
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
  ExtractPedestrianFeatureAttrResponse extractPedestrianFeatureAttrWithOptions(shared_ptr<ExtractPedestrianFeatureAttrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractPedestrianFeatureAttrResponse extractPedestrianFeatureAttr(shared_ptr<ExtractPedestrianFeatureAttrRequest> request);
  ExtractPedestrianFeatureAttrResponse extractPedestrianFeatureAttrAdvance(shared_ptr<ExtractPedestrianFeatureAttrAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectBodyCountResponse detectBodyCountWithOptions(shared_ptr<DetectBodyCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectBodyCountResponse detectBodyCount(shared_ptr<DetectBodyCountRequest> request);
  DetectBodyCountResponse detectBodyCountAdvance(shared_ptr<DetectBodyCountAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVideoLivingFaceResponse detectVideoLivingFaceWithOptions(shared_ptr<DetectVideoLivingFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVideoLivingFaceResponse detectVideoLivingFace(shared_ptr<DetectVideoLivingFaceRequest> request);
  DetectVideoLivingFaceResponse detectVideoLivingFaceAdvance(shared_ptr<DetectVideoLivingFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFaceResponse recognizeFaceWithOptions(shared_ptr<RecognizeFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFaceResponse recognizeFace(shared_ptr<RecognizeFaceRequest> request);
  RecognizeFaceResponse recognizeFaceAdvance(shared_ptr<RecognizeFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyFaceMaskResponse verifyFaceMaskWithOptions(shared_ptr<VerifyFaceMaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyFaceMaskResponse verifyFaceMask(shared_ptr<VerifyFaceMaskRequest> request);
  DetectIPCPedestrianResponse detectIPCPedestrianWithOptions(shared_ptr<DetectIPCPedestrianRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectIPCPedestrianResponse detectIPCPedestrian(shared_ptr<DetectIPCPedestrianRequest> request);
  DetectIPCPedestrianResponse detectIPCPedestrianAdvance(shared_ptr<DetectIPCPedestrianAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFaceEntityResponse getFaceEntityWithOptions(shared_ptr<GetFaceEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFaceEntityResponse getFaceEntity(shared_ptr<GetFaceEntityRequest> request);
  CompareFaceResponse compareFaceWithOptions(shared_ptr<CompareFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareFaceResponse compareFace(shared_ptr<CompareFaceRequest> request);
  PedestrianDetectAttributeResponse pedestrianDetectAttributeWithOptions(shared_ptr<PedestrianDetectAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PedestrianDetectAttributeResponse pedestrianDetectAttribute(shared_ptr<PedestrianDetectAttributeRequest> request);
  PedestrianDetectAttributeResponse pedestrianDetectAttributeAdvance(shared_ptr<PedestrianDetectAttributeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceFilterResponse faceFilterWithOptions(shared_ptr<FaceFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceFilterResponse faceFilter(shared_ptr<FaceFilterRequest> request);
  FaceFilterResponse faceFilterAdvance(shared_ptr<FaceFilterAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceBeautyResponse faceBeautyWithOptions(shared_ptr<FaceBeautyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceBeautyResponse faceBeauty(shared_ptr<FaceBeautyRequest> request);
  FaceBeautyResponse faceBeautyAdvance(shared_ptr<FaceBeautyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateHumanAnimeStyleResponse generateHumanAnimeStyleWithOptions(shared_ptr<GenerateHumanAnimeStyleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateHumanAnimeStyleResponse generateHumanAnimeStyle(shared_ptr<GenerateHumanAnimeStyleRequest> request);
  GenerateHumanAnimeStyleResponse generateHumanAnimeStyleAdvance(shared_ptr<GenerateHumanAnimeStyleAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceImageTemplateResponse queryFaceImageTemplateWithOptions(shared_ptr<QueryFaceImageTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceImageTemplateResponse queryFaceImageTemplate(shared_ptr<QueryFaceImageTemplateRequest> request);
  DetectFaceResponse detectFaceWithOptions(shared_ptr<DetectFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectFaceResponse detectFace(shared_ptr<DetectFaceRequest> request);
  DetectFaceResponse detectFaceAdvance(shared_ptr<DetectFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectMaskResponse detectMaskWithOptions(shared_ptr<DetectMaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectMaskResponse detectMask(shared_ptr<DetectMaskRequest> request);
  DetectMaskResponse detectMaskAdvance(shared_ptr<DetectMaskAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenRealPersonVerificationTokenResponse genRealPersonVerificationTokenWithOptions(shared_ptr<GenRealPersonVerificationTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenRealPersonVerificationTokenResponse genRealPersonVerificationToken(shared_ptr<GenRealPersonVerificationTokenRequest> request);
  ListFaceDbsResponse listFaceDbsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFaceDbsResponse listFaceDbs();
  RecognizeActionResponse recognizeActionWithOptions(shared_ptr<RecognizeActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeActionResponse recognizeAction(shared_ptr<RecognizeActionRequest> request);
  DetectChefCapResponse detectChefCapWithOptions(shared_ptr<DetectChefCapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectChefCapResponse detectChefCap(shared_ptr<DetectChefCapRequest> request);
  DetectChefCapResponse detectChefCapAdvance(shared_ptr<DetectChefCapAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLivingFaceResponse detectLivingFaceWithOptions(shared_ptr<DetectLivingFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLivingFaceResponse detectLivingFace(shared_ptr<DetectLivingFaceRequest> request);
  DetectCelebrityResponse detectCelebrityWithOptions(shared_ptr<DetectCelebrityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectCelebrityResponse detectCelebrity(shared_ptr<DetectCelebrityRequest> request);
  DetectCelebrityResponse detectCelebrityAdvance(shared_ptr<DetectCelebrityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRealPersonVerificationResultResponse getRealPersonVerificationResultWithOptions(shared_ptr<GetRealPersonVerificationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRealPersonVerificationResultResponse getRealPersonVerificationResult(shared_ptr<GetRealPersonVerificationResultRequest> request);
  DeleteFaceResponse deleteFaceWithOptions(shared_ptr<DeleteFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceResponse deleteFace(shared_ptr<DeleteFaceRequest> request);
  ExtractPedestrianFeatureAttributeResponse extractPedestrianFeatureAttributeWithOptions(shared_ptr<ExtractPedestrianFeatureAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractPedestrianFeatureAttributeResponse extractPedestrianFeatureAttribute(shared_ptr<ExtractPedestrianFeatureAttributeRequest> request);
  RecognizeExpressionResponse recognizeExpressionWithOptions(shared_ptr<RecognizeExpressionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeExpressionResponse recognizeExpression(shared_ptr<RecognizeExpressionRequest> request);
  RecognizeExpressionResponse recognizeExpressionAdvance(shared_ptr<RecognizeExpressionAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeImageFaceResponse mergeImageFaceWithOptions(shared_ptr<MergeImageFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeImageFaceResponse mergeImageFace(shared_ptr<MergeImageFaceRequest> request);
  MergeImageFaceResponse mergeImageFaceAdvance(shared_ptr<MergeImageFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractFingerPrintResponse extractFingerPrintWithOptions(shared_ptr<ExtractFingerPrintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractFingerPrintResponse extractFingerPrint(shared_ptr<ExtractFingerPrintRequest> request);
  ExtractFingerPrintResponse extractFingerPrintAdvance(shared_ptr<ExtractFingerPrintAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBodyPersonResponse deleteBodyPersonWithOptions(shared_ptr<DeleteBodyPersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBodyPersonResponse deleteBodyPerson(shared_ptr<DeleteBodyPersonRequest> request);
  DetectPedestrianResponse detectPedestrianWithOptions(shared_ptr<DetectPedestrianRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectPedestrianResponse detectPedestrian(shared_ptr<DetectPedestrianRequest> request);
  DetectPedestrianResponse detectPedestrianAdvance(shared_ptr<DetectPedestrianAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwapFacialFeaturesResponse swapFacialFeaturesWithOptions(shared_ptr<SwapFacialFeaturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwapFacialFeaturesResponse swapFacialFeatures(shared_ptr<SwapFacialFeaturesRequest> request);
  SearchFaceResponse searchFaceWithOptions(shared_ptr<SearchFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchFaceResponse searchFace(shared_ptr<SearchFaceRequest> request);
  SearchFaceResponse searchFaceAdvance(shared_ptr<SearchFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaceEntityResponse updateFaceEntityWithOptions(shared_ptr<UpdateFaceEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaceEntityResponse updateFaceEntity(shared_ptr<UpdateFaceEntityRequest> request);
  BlurFaceResponse blurFaceWithOptions(shared_ptr<BlurFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BlurFaceResponse blurFace(shared_ptr<BlurFaceRequest> request);
  BlurFaceResponse blurFaceAdvance(shared_ptr<BlurFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceMakeupResponse faceMakeupWithOptions(shared_ptr<FaceMakeupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceMakeupResponse faceMakeup(shared_ptr<FaceMakeupRequest> request);
  FaceMakeupResponse faceMakeupAdvance(shared_ptr<FaceMakeupAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBodyPersonResponse createBodyPersonWithOptions(shared_ptr<CreateBodyPersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBodyPersonResponse createBodyPerson(shared_ptr<CreateBodyPersonRequest> request);
  AddFaceResponse addFaceWithOptions(shared_ptr<AddFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceResponse addFace(shared_ptr<AddFaceRequest> request);
  AddFaceResponse addFaceAdvance(shared_ptr<AddFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateHumanSketchStyleResponse generateHumanSketchStyleWithOptions(shared_ptr<GenerateHumanSketchStyleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateHumanSketchStyleResponse generateHumanSketchStyle(shared_ptr<GenerateHumanSketchStyleRequest> request);
  GenerateHumanSketchStyleResponse generateHumanSketchStyleAdvance(shared_ptr<GenerateHumanSketchStyleAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBodyDbResponse deleteBodyDbWithOptions(shared_ptr<DeleteBodyDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBodyDbResponse deleteBodyDb(shared_ptr<DeleteBodyDbRequest> request);
  DetectPedestrianIntrusionResponse detectPedestrianIntrusionWithOptions(shared_ptr<DetectPedestrianIntrusionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectPedestrianIntrusionResponse detectPedestrianIntrusion(shared_ptr<DetectPedestrianIntrusionRequest> request);
  DetectPedestrianIntrusionResponse detectPedestrianIntrusionAdvance(shared_ptr<DetectPedestrianIntrusionAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeautifyBodyResponse beautifyBodyWithOptions(shared_ptr<BeautifyBodyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeautifyBodyResponse beautifyBody(shared_ptr<BeautifyBodyRequest> request);
  BeautifyBodyResponse beautifyBodyAdvance(shared_ptr<BeautifyBodyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HandPostureResponse handPostureWithOptions(shared_ptr<HandPostureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HandPostureResponse handPosture(shared_ptr<HandPostureRequest> request);
  HandPostureResponse handPostureAdvance(shared_ptr<HandPostureAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhanceFaceResponse enhanceFaceWithOptions(shared_ptr<EnhanceFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhanceFaceResponse enhanceFace(shared_ptr<EnhanceFaceRequest> request);
  EnhanceFaceResponse enhanceFaceAdvance(shared_ptr<EnhanceFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBodyPersonResponse getBodyPersonWithOptions(shared_ptr<GetBodyPersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBodyPersonResponse getBodyPerson(shared_ptr<GetBodyPersonRequest> request);
  RecognizeHandGestureResponse recognizeHandGestureWithOptions(shared_ptr<RecognizeHandGestureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeHandGestureResponse recognizeHandGesture(shared_ptr<RecognizeHandGestureRequest> request);
  RecognizeHandGestureResponse recognizeHandGestureAdvance(shared_ptr<RecognizeHandGestureAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceDbResponse deleteFaceDbWithOptions(shared_ptr<DeleteFaceDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceDbResponse deleteFaceDb(shared_ptr<DeleteFaceDbRequest> request);
  ListBodyPersonResponse listBodyPersonWithOptions(shared_ptr<ListBodyPersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBodyPersonResponse listBodyPerson(shared_ptr<ListBodyPersonRequest> request);
  ListBodyDbsResponse listBodyDbsWithOptions(shared_ptr<ListBodyDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBodyDbsResponse listBodyDbs(shared_ptr<ListBodyDbsRequest> request);
  ListFaceEntitiesResponse listFaceEntitiesWithOptions(shared_ptr<ListFaceEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFaceEntitiesResponse listFaceEntities(shared_ptr<ListFaceEntitiesRequest> request);
  RecognizePublicFaceResponse recognizePublicFaceWithOptions(shared_ptr<RecognizePublicFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePublicFaceResponse recognizePublicFace(shared_ptr<RecognizePublicFaceRequest> request);
  DeleteFaceImageTemplateResponse deleteFaceImageTemplateWithOptions(shared_ptr<DeleteFaceImageTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceImageTemplateResponse deleteFaceImageTemplate(shared_ptr<DeleteFaceImageTemplateRequest> request);
  CreateFaceDbResponse createFaceDbWithOptions(shared_ptr<CreateFaceDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFaceDbResponse createFaceDb(shared_ptr<CreateFaceDbRequest> request);
  AddBodyTraceResponse addBodyTraceWithOptions(shared_ptr<AddBodyTraceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBodyTraceResponse addBodyTrace(shared_ptr<AddBodyTraceRequest> request);
  SearchBodyTraceResponse searchBodyTraceWithOptions(shared_ptr<SearchBodyTraceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchBodyTraceResponse searchBodyTrace(shared_ptr<SearchBodyTraceRequest> request);
  AddFaceImageTemplateResponse addFaceImageTemplateWithOptions(shared_ptr<AddFaceImageTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceImageTemplateResponse addFaceImageTemplate(shared_ptr<AddFaceImageTemplateRequest> request);
  AddFaceImageTemplateResponse addFaceImageTemplateAdvance(shared_ptr<AddFaceImageTemplateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CountCrowdResponse countCrowdWithOptions(shared_ptr<CountCrowdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CountCrowdResponse countCrowd(shared_ptr<CountCrowdRequest> request);
  CountCrowdResponse countCrowdAdvance(shared_ptr<CountCrowdAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceEntityResponse addFaceEntityWithOptions(shared_ptr<AddFaceEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceEntityResponse addFaceEntity(shared_ptr<AddFaceEntityRequest> request);
  RetouchBodyResponse retouchBodyWithOptions(shared_ptr<RetouchBodyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetouchBodyResponse retouchBody(shared_ptr<RetouchBodyRequest> request);
  RetouchBodyResponse retouchBodyAdvance(shared_ptr<RetouchBodyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceEntityResponse deleteFaceEntityWithOptions(shared_ptr<DeleteFaceEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceEntityResponse deleteFaceEntity(shared_ptr<DeleteFaceEntityRequest> request);
  FaceTidyupResponse faceTidyupWithOptions(shared_ptr<FaceTidyupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceTidyupResponse faceTidyup(shared_ptr<FaceTidyupRequest> request);
  FaceTidyupResponse faceTidyupAdvance(shared_ptr<FaceTidyupAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BodyPostureResponse bodyPostureWithOptions(shared_ptr<BodyPostureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BodyPostureResponse bodyPosture(shared_ptr<BodyPostureRequest> request);
  BodyPostureResponse bodyPostureAdvance(shared_ptr<BodyPostureAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MonitorExaminationResponse monitorExaminationWithOptions(shared_ptr<MonitorExaminationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MonitorExaminationResponse monitorExamination(shared_ptr<MonitorExaminationRequest> request);
  MonitorExaminationResponse monitorExaminationAdvance(shared_ptr<MonitorExaminationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBodyDbResponse createBodyDbWithOptions(shared_ptr<CreateBodyDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBodyDbResponse createBodyDb(shared_ptr<CreateBodyDbRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Facebody20191230

#endif
