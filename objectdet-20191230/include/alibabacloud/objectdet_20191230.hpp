// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OBJECTDET20191230_H_
#define ALIBABACLOUD_OBJECTDET20191230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Objectdet20191230 {
class DetectTransparentImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectTransparentImageRequest() {}

  explicit DetectTransparentImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectTransparentImageRequest() = default;
};
class DetectTransparentImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectTransparentImageAdvanceRequest() {}

  explicit DetectTransparentImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectTransparentImageAdvanceRequest() = default;
};
class DetectTransparentImageResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<long> transparentImage{};

  DetectTransparentImageResponseBodyDataElements() {}

  explicit DetectTransparentImageResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transparentImage) {
      res["TransparentImage"] = boost::any(*transparentImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransparentImage") != m.end() && !m["TransparentImage"].empty()) {
      transparentImage = make_shared<long>(boost::any_cast<long>(m["TransparentImage"]));
    }
  }


  virtual ~DetectTransparentImageResponseBodyDataElements() = default;
};
class DetectTransparentImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectTransparentImageResponseBodyDataElements>> elements{};

  DetectTransparentImageResponseBodyData() {}

  explicit DetectTransparentImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectTransparentImageResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectTransparentImageResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectTransparentImageResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~DetectTransparentImageResponseBodyData() = default;
};
class DetectTransparentImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectTransparentImageResponseBodyData> data{};

  DetectTransparentImageResponseBody() {}

  explicit DetectTransparentImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectTransparentImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectTransparentImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectTransparentImageResponseBody() = default;
};
class DetectTransparentImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectTransparentImageResponseBody> body{};

  DetectTransparentImageResponse() {}

  explicit DetectTransparentImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectTransparentImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectTransparentImageResponseBody>(model1);
      }
    }
  }


  virtual ~DetectTransparentImageResponse() = default;
};
class DetectVehicleICongestionRequestRoadRegionsRoadRegionPoint : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DetectVehicleICongestionRequestRoadRegionsRoadRegionPoint() {}

  explicit DetectVehicleICongestionRequestRoadRegionsRoadRegionPoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVehicleICongestionRequestRoadRegionsRoadRegionPoint() = default;
};
class DetectVehicleICongestionRequestRoadRegionsRoadRegion : public Darabonba::Model {
public:
  shared_ptr<DetectVehicleICongestionRequestRoadRegionsRoadRegionPoint> point{};

  DetectVehicleICongestionRequestRoadRegionsRoadRegion() {}

  explicit DetectVehicleICongestionRequestRoadRegionsRoadRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = point ? boost::any(point->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      if (typeid(map<string, boost::any>) == m["Point"].type()) {
        DetectVehicleICongestionRequestRoadRegionsRoadRegionPoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Point"]));
        point = make_shared<DetectVehicleICongestionRequestRoadRegionsRoadRegionPoint>(model1);
      }
    }
  }


  virtual ~DetectVehicleICongestionRequestRoadRegionsRoadRegion() = default;
};
class DetectVehicleICongestionRequestRoadRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DetectVehicleICongestionRequestRoadRegionsRoadRegion>> roadRegion{};

  DetectVehicleICongestionRequestRoadRegions() {}

  explicit DetectVehicleICongestionRequestRoadRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roadRegion) {
      vector<boost::any> temp1;
      for(auto item1:*roadRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoadRegion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoadRegion") != m.end() && !m["RoadRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["RoadRegion"].type()) {
        vector<DetectVehicleICongestionRequestRoadRegionsRoadRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoadRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleICongestionRequestRoadRegionsRoadRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roadRegion = make_shared<vector<DetectVehicleICongestionRequestRoadRegionsRoadRegion>>(expect1);
      }
    }
  }


  virtual ~DetectVehicleICongestionRequestRoadRegions() = default;
};
class DetectVehicleICongestionRequestPreRegionIntersectFeatures : public Darabonba::Model {
public:
  shared_ptr<vector<string>> features{};

  DetectVehicleICongestionRequestPreRegionIntersectFeatures() {}

  explicit DetectVehicleICongestionRequestPreRegionIntersectFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (features) {
      res["Features"] = boost::any(*features);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Features"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      features = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DetectVehicleICongestionRequestPreRegionIntersectFeatures() = default;
};
class DetectVehicleICongestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<DetectVehicleICongestionRequestRoadRegions>> roadRegions{};
  shared_ptr<vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures>> preRegionIntersectFeatures{};

  DetectVehicleICongestionRequest() {}

  explicit DetectVehicleICongestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (roadRegions) {
      vector<boost::any> temp1;
      for(auto item1:*roadRegions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoadRegions"] = boost::any(temp1);
    }
    if (preRegionIntersectFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*preRegionIntersectFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PreRegionIntersectFeatures"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("RoadRegions") != m.end() && !m["RoadRegions"].empty()) {
      if (typeid(vector<boost::any>) == m["RoadRegions"].type()) {
        vector<DetectVehicleICongestionRequestRoadRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoadRegions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleICongestionRequestRoadRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roadRegions = make_shared<vector<DetectVehicleICongestionRequestRoadRegions>>(expect1);
      }
    }
    if (m.find("PreRegionIntersectFeatures") != m.end() && !m["PreRegionIntersectFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["PreRegionIntersectFeatures"].type()) {
        vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PreRegionIntersectFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleICongestionRequestPreRegionIntersectFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        preRegionIntersectFeatures = make_shared<vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures>>(expect1);
      }
    }
  }


  virtual ~DetectVehicleICongestionRequest() = default;
};
class DetectVehicleICongestionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> roadRegionsShrink{};
  shared_ptr<string> preRegionIntersectFeaturesShrink{};

  DetectVehicleICongestionShrinkRequest() {}

  explicit DetectVehicleICongestionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (roadRegionsShrink) {
      res["RoadRegions"] = boost::any(*roadRegionsShrink);
    }
    if (preRegionIntersectFeaturesShrink) {
      res["PreRegionIntersectFeatures"] = boost::any(*preRegionIntersectFeaturesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("RoadRegions") != m.end() && !m["RoadRegions"].empty()) {
      roadRegionsShrink = make_shared<string>(boost::any_cast<string>(m["RoadRegions"]));
    }
    if (m.find("PreRegionIntersectFeatures") != m.end() && !m["PreRegionIntersectFeatures"].empty()) {
      preRegionIntersectFeaturesShrink = make_shared<string>(boost::any_cast<string>(m["PreRegionIntersectFeatures"]));
    }
  }


  virtual ~DetectVehicleICongestionShrinkRequest() = default;
};
class DetectVehicleICongestionResponseBodyDataElementsBoxes : public Darabonba::Model {
public:
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> right{};
  shared_ptr<long> bottom{};

  DetectVehicleICongestionResponseBodyDataElementsBoxes() {}

  explicit DetectVehicleICongestionResponseBodyDataElementsBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVehicleICongestionResponseBodyDataElementsBoxes() = default;
};
class DetectVehicleICongestionResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<vector<DetectVehicleICongestionResponseBodyDataElementsBoxes>> boxes{};
  shared_ptr<double> score{};
  shared_ptr<string> typeName_{};

  DetectVehicleICongestionResponseBodyDataElements() {}

  explicit DetectVehicleICongestionResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<DetectVehicleICongestionResponseBodyDataElementsBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleICongestionResponseBodyDataElementsBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<DetectVehicleICongestionResponseBodyDataElementsBoxes>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~DetectVehicleICongestionResponseBodyDataElements() = default;
};
class DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures : public Darabonba::Model {
public:
  shared_ptr<vector<string>> features{};

  DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures() {}

  explicit DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (features) {
      res["Features"] = boost::any(*features);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Features"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      features = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures() = default;
};
class DetectVehicleICongestionResponseBodyDataRegionIntersectMatched : public Darabonba::Model {
public:
  shared_ptr<vector<long>> ids{};

  DetectVehicleICongestionResponseBodyDataRegionIntersectMatched() {}

  explicit DetectVehicleICongestionResponseBodyDataRegionIntersectMatched(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ids = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DetectVehicleICongestionResponseBodyDataRegionIntersectMatched() = default;
};
class DetectVehicleICongestionResponseBodyDataRegionIntersects : public Darabonba::Model {
public:
  shared_ptr<vector<long>> ids{};

  DetectVehicleICongestionResponseBodyDataRegionIntersects() {}

  explicit DetectVehicleICongestionResponseBodyDataRegionIntersects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ids = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DetectVehicleICongestionResponseBodyDataRegionIntersects() = default;
};
class DetectVehicleICongestionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectVehicleICongestionResponseBodyDataElements>> elements{};
  shared_ptr<vector<DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures>> regionIntersectFeatures{};
  shared_ptr<vector<DetectVehicleICongestionResponseBodyDataRegionIntersectMatched>> regionIntersectMatched{};
  shared_ptr<vector<DetectVehicleICongestionResponseBodyDataRegionIntersects>> regionIntersects{};

  DetectVehicleICongestionResponseBodyData() {}

  explicit DetectVehicleICongestionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionIntersectFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*regionIntersectFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionIntersectFeatures"] = boost::any(temp1);
    }
    if (regionIntersectMatched) {
      vector<boost::any> temp1;
      for(auto item1:*regionIntersectMatched){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionIntersectMatched"] = boost::any(temp1);
    }
    if (regionIntersects) {
      vector<boost::any> temp1;
      for(auto item1:*regionIntersects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionIntersects"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<DetectVehicleICongestionResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleICongestionResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectVehicleICongestionResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("RegionIntersectFeatures") != m.end() && !m["RegionIntersectFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionIntersectFeatures"].type()) {
        vector<DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionIntersectFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionIntersectFeatures = make_shared<vector<DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures>>(expect1);
      }
    }
    if (m.find("RegionIntersectMatched") != m.end() && !m["RegionIntersectMatched"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionIntersectMatched"].type()) {
        vector<DetectVehicleICongestionResponseBodyDataRegionIntersectMatched> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionIntersectMatched"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleICongestionResponseBodyDataRegionIntersectMatched model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionIntersectMatched = make_shared<vector<DetectVehicleICongestionResponseBodyDataRegionIntersectMatched>>(expect1);
      }
    }
    if (m.find("RegionIntersects") != m.end() && !m["RegionIntersects"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionIntersects"].type()) {
        vector<DetectVehicleICongestionResponseBodyDataRegionIntersects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionIntersects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleICongestionResponseBodyDataRegionIntersects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionIntersects = make_shared<vector<DetectVehicleICongestionResponseBodyDataRegionIntersects>>(expect1);
      }
    }
  }


  virtual ~DetectVehicleICongestionResponseBodyData() = default;
};
class DetectVehicleICongestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectVehicleICongestionResponseBodyData> data{};

  DetectVehicleICongestionResponseBody() {}

  explicit DetectVehicleICongestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVehicleICongestionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectVehicleICongestionResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectVehicleICongestionResponseBody() = default;
};
class DetectVehicleICongestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectVehicleICongestionResponseBody> body{};

  DetectVehicleICongestionResponse() {}

  explicit DetectVehicleICongestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVehicleICongestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectVehicleICongestionResponseBody>(model1);
      }
    }
  }


  virtual ~DetectVehicleICongestionResponse() = default;
};
class ClassifyVehicleInsuranceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ClassifyVehicleInsuranceRequest() {}

  explicit ClassifyVehicleInsuranceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClassifyVehicleInsuranceRequest() = default;
};
class ClassifyVehicleInsuranceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  ClassifyVehicleInsuranceAdvanceRequest() {}

  explicit ClassifyVehicleInsuranceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClassifyVehicleInsuranceAdvanceRequest() = default;
};
class ClassifyVehicleInsuranceResponseBodyDataLabels : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  ClassifyVehicleInsuranceResponseBodyDataLabels() {}

  explicit ClassifyVehicleInsuranceResponseBodyDataLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClassifyVehicleInsuranceResponseBodyDataLabels() = default;
};
class ClassifyVehicleInsuranceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ClassifyVehicleInsuranceResponseBodyDataLabels>> labels{};
  shared_ptr<double> threshold{};

  ClassifyVehicleInsuranceResponseBodyData() {}

  explicit ClassifyVehicleInsuranceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ClassifyVehicleInsuranceResponseBodyDataLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ClassifyVehicleInsuranceResponseBodyDataLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ClassifyVehicleInsuranceResponseBodyDataLabels>>(expect1);
      }
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~ClassifyVehicleInsuranceResponseBodyData() = default;
};
class ClassifyVehicleInsuranceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ClassifyVehicleInsuranceResponseBodyData> data{};

  ClassifyVehicleInsuranceResponseBody() {}

  explicit ClassifyVehicleInsuranceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyVehicleInsuranceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ClassifyVehicleInsuranceResponseBodyData>(model1);
      }
    }
  }


  virtual ~ClassifyVehicleInsuranceResponseBody() = default;
};
class ClassifyVehicleInsuranceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClassifyVehicleInsuranceResponseBody> body{};

  ClassifyVehicleInsuranceResponse() {}

  explicit ClassifyVehicleInsuranceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyVehicleInsuranceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClassifyVehicleInsuranceResponseBody>(model1);
      }
    }
  }


  virtual ~ClassifyVehicleInsuranceResponse() = default;
};
class DetectIPCObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectIPCObjectRequest() {}

  explicit DetectIPCObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectIPCObjectRequest() = default;
};
class DetectIPCObjectResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<double> score{};
  shared_ptr<vector<long>> box{};
  shared_ptr<double> targetRate{};

  DetectIPCObjectResponseBodyDataElements() {}

  explicit DetectIPCObjectResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (targetRate) {
      res["TargetRate"] = boost::any(*targetRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
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
    if (m.find("TargetRate") != m.end() && !m["TargetRate"].empty()) {
      targetRate = make_shared<double>(boost::any_cast<double>(m["TargetRate"]));
    }
  }


  virtual ~DetectIPCObjectResponseBodyDataElements() = default;
};
class DetectIPCObjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectIPCObjectResponseBodyDataElements>> elements{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DetectIPCObjectResponseBodyData() {}

  explicit DetectIPCObjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectIPCObjectResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectIPCObjectResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectIPCObjectResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DetectIPCObjectResponseBodyData() = default;
};
class DetectIPCObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectIPCObjectResponseBodyData> data{};

  DetectIPCObjectResponseBody() {}

  explicit DetectIPCObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectIPCObjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectIPCObjectResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectIPCObjectResponseBody() = default;
};
class DetectIPCObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectIPCObjectResponseBody> body{};

  DetectIPCObjectResponse() {}

  explicit DetectIPCObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectIPCObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectIPCObjectResponseBody>(model1);
      }
    }
  }


  virtual ~DetectIPCObjectResponse() = default;
};
class GetVehicleRepairPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> carNumberImage{};
  shared_ptr<string> vinCodeImage{};

  GetVehicleRepairPlanRequest() {}

  explicit GetVehicleRepairPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (carNumberImage) {
      res["CarNumberImage"] = boost::any(*carNumberImage);
    }
    if (vinCodeImage) {
      res["VinCodeImage"] = boost::any(*vinCodeImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("CarNumberImage") != m.end() && !m["CarNumberImage"].empty()) {
      carNumberImage = make_shared<string>(boost::any_cast<string>(m["CarNumberImage"]));
    }
    if (m.find("VinCodeImage") != m.end() && !m["VinCodeImage"].empty()) {
      vinCodeImage = make_shared<string>(boost::any_cast<string>(m["VinCodeImage"]));
    }
  }


  virtual ~GetVehicleRepairPlanRequest() = default;
};
class GetVehicleRepairPlanResponseBodyDataRepairParts : public Darabonba::Model {
public:
  shared_ptr<string> relationType{};
  shared_ptr<string> partsStdCode{};
  shared_ptr<bool> partNameMatch{};
  shared_ptr<string> repairFee{};
  shared_ptr<string> outStandardPartsName{};
  shared_ptr<string> partsStdName{};
  shared_ptr<string> repairTypeName{};
  shared_ptr<string> repairType{};
  shared_ptr<bool> oeMatch{};
  shared_ptr<string> outStandardPartsId{};
  shared_ptr<string> garageType{};

  GetVehicleRepairPlanResponseBodyDataRepairParts() {}

  explicit GetVehicleRepairPlanResponseBodyDataRepairParts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relationType) {
      res["RelationType"] = boost::any(*relationType);
    }
    if (partsStdCode) {
      res["PartsStdCode"] = boost::any(*partsStdCode);
    }
    if (partNameMatch) {
      res["PartNameMatch"] = boost::any(*partNameMatch);
    }
    if (repairFee) {
      res["RepairFee"] = boost::any(*repairFee);
    }
    if (outStandardPartsName) {
      res["OutStandardPartsName"] = boost::any(*outStandardPartsName);
    }
    if (partsStdName) {
      res["PartsStdName"] = boost::any(*partsStdName);
    }
    if (repairTypeName) {
      res["RepairTypeName"] = boost::any(*repairTypeName);
    }
    if (repairType) {
      res["RepairType"] = boost::any(*repairType);
    }
    if (oeMatch) {
      res["OeMatch"] = boost::any(*oeMatch);
    }
    if (outStandardPartsId) {
      res["OutStandardPartsId"] = boost::any(*outStandardPartsId);
    }
    if (garageType) {
      res["GarageType"] = boost::any(*garageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelationType") != m.end() && !m["RelationType"].empty()) {
      relationType = make_shared<string>(boost::any_cast<string>(m["RelationType"]));
    }
    if (m.find("PartsStdCode") != m.end() && !m["PartsStdCode"].empty()) {
      partsStdCode = make_shared<string>(boost::any_cast<string>(m["PartsStdCode"]));
    }
    if (m.find("PartNameMatch") != m.end() && !m["PartNameMatch"].empty()) {
      partNameMatch = make_shared<bool>(boost::any_cast<bool>(m["PartNameMatch"]));
    }
    if (m.find("RepairFee") != m.end() && !m["RepairFee"].empty()) {
      repairFee = make_shared<string>(boost::any_cast<string>(m["RepairFee"]));
    }
    if (m.find("OutStandardPartsName") != m.end() && !m["OutStandardPartsName"].empty()) {
      outStandardPartsName = make_shared<string>(boost::any_cast<string>(m["OutStandardPartsName"]));
    }
    if (m.find("PartsStdName") != m.end() && !m["PartsStdName"].empty()) {
      partsStdName = make_shared<string>(boost::any_cast<string>(m["PartsStdName"]));
    }
    if (m.find("RepairTypeName") != m.end() && !m["RepairTypeName"].empty()) {
      repairTypeName = make_shared<string>(boost::any_cast<string>(m["RepairTypeName"]));
    }
    if (m.find("RepairType") != m.end() && !m["RepairType"].empty()) {
      repairType = make_shared<string>(boost::any_cast<string>(m["RepairType"]));
    }
    if (m.find("OeMatch") != m.end() && !m["OeMatch"].empty()) {
      oeMatch = make_shared<bool>(boost::any_cast<bool>(m["OeMatch"]));
    }
    if (m.find("OutStandardPartsId") != m.end() && !m["OutStandardPartsId"].empty()) {
      outStandardPartsId = make_shared<string>(boost::any_cast<string>(m["OutStandardPartsId"]));
    }
    if (m.find("GarageType") != m.end() && !m["GarageType"].empty()) {
      garageType = make_shared<string>(boost::any_cast<string>(m["GarageType"]));
    }
  }


  virtual ~GetVehicleRepairPlanResponseBodyDataRepairParts() = default;
};
class GetVehicleRepairPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetVehicleRepairPlanResponseBodyDataRepairParts>> repairParts{};
  shared_ptr<string> frameNo{};

  GetVehicleRepairPlanResponseBodyData() {}

  explicit GetVehicleRepairPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (repairParts) {
      vector<boost::any> temp1;
      for(auto item1:*repairParts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RepairParts"] = boost::any(temp1);
    }
    if (frameNo) {
      res["FrameNo"] = boost::any(*frameNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RepairParts") != m.end() && !m["RepairParts"].empty()) {
      if (typeid(vector<boost::any>) == m["RepairParts"].type()) {
        vector<GetVehicleRepairPlanResponseBodyDataRepairParts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RepairParts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVehicleRepairPlanResponseBodyDataRepairParts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        repairParts = make_shared<vector<GetVehicleRepairPlanResponseBodyDataRepairParts>>(expect1);
      }
    }
    if (m.find("FrameNo") != m.end() && !m["FrameNo"].empty()) {
      frameNo = make_shared<string>(boost::any_cast<string>(m["FrameNo"]));
    }
  }


  virtual ~GetVehicleRepairPlanResponseBodyData() = default;
};
class GetVehicleRepairPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<GetVehicleRepairPlanResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetVehicleRepairPlanResponseBody() {}

  explicit GetVehicleRepairPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetVehicleRepairPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetVehicleRepairPlanResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetVehicleRepairPlanResponseBody() = default;
};
class GetVehicleRepairPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVehicleRepairPlanResponseBody> body{};

  GetVehicleRepairPlanResponse() {}

  explicit GetVehicleRepairPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVehicleRepairPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVehicleRepairPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetVehicleRepairPlanResponse() = default;
};
class DetectWhiteBaseImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectWhiteBaseImageRequest() {}

  explicit DetectWhiteBaseImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectWhiteBaseImageRequest() = default;
};
class DetectWhiteBaseImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectWhiteBaseImageAdvanceRequest() {}

  explicit DetectWhiteBaseImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectWhiteBaseImageAdvanceRequest() = default;
};
class DetectWhiteBaseImageResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<long> whiteBase{};

  DetectWhiteBaseImageResponseBodyDataElements() {}

  explicit DetectWhiteBaseImageResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (whiteBase) {
      res["WhiteBase"] = boost::any(*whiteBase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WhiteBase") != m.end() && !m["WhiteBase"].empty()) {
      whiteBase = make_shared<long>(boost::any_cast<long>(m["WhiteBase"]));
    }
  }


  virtual ~DetectWhiteBaseImageResponseBodyDataElements() = default;
};
class DetectWhiteBaseImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectWhiteBaseImageResponseBodyDataElements>> elements{};

  DetectWhiteBaseImageResponseBodyData() {}

  explicit DetectWhiteBaseImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectWhiteBaseImageResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectWhiteBaseImageResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectWhiteBaseImageResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~DetectWhiteBaseImageResponseBodyData() = default;
};
class DetectWhiteBaseImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectWhiteBaseImageResponseBodyData> data{};

  DetectWhiteBaseImageResponseBody() {}

  explicit DetectWhiteBaseImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectWhiteBaseImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectWhiteBaseImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectWhiteBaseImageResponseBody() = default;
};
class DetectWhiteBaseImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectWhiteBaseImageResponseBody> body{};

  DetectWhiteBaseImageResponse() {}

  explicit DetectWhiteBaseImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectWhiteBaseImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectWhiteBaseImageResponseBody>(model1);
      }
    }
  }


  virtual ~DetectWhiteBaseImageResponse() = default;
};
class DetectVideoIPCObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  DetectVideoIPCObjectRequest() {}

  explicit DetectVideoIPCObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVideoIPCObjectRequest() = default;
};
class DetectVideoIPCObjectAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};

  DetectVideoIPCObjectAdvanceRequest() {}

  explicit DetectVideoIPCObjectAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURLObject") != m.end() && !m["VideoURLObject"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURLObject"]));
    }
  }


  virtual ~DetectVideoIPCObjectAdvanceRequest() = default;
};
class DetectVideoIPCObjectResponseBodyDataFramesElements : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<double> score{};

  DetectVideoIPCObjectResponseBodyDataFramesElements() {}

  explicit DetectVideoIPCObjectResponseBodyDataFramesElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVideoIPCObjectResponseBodyDataFramesElements() = default;
};
class DetectVideoIPCObjectResponseBodyDataFrames : public Darabonba::Model {
public:
  shared_ptr<long> time{};
  shared_ptr<vector<DetectVideoIPCObjectResponseBodyDataFramesElements>> elements{};

  DetectVideoIPCObjectResponseBodyDataFrames() {}

  explicit DetectVideoIPCObjectResponseBodyDataFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
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
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<DetectVideoIPCObjectResponseBodyDataFramesElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVideoIPCObjectResponseBodyDataFramesElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectVideoIPCObjectResponseBodyDataFramesElements>>(expect1);
      }
    }
  }


  virtual ~DetectVideoIPCObjectResponseBodyDataFrames() = default;
};
class DetectVideoIPCObjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<vector<DetectVideoIPCObjectResponseBodyDataFrames>> frames{};
  shared_ptr<string> inputFile{};

  DetectVideoIPCObjectResponseBodyData() {}

  explicit DetectVideoIPCObjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Frames"] = boost::any(temp1);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
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
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      if (typeid(vector<boost::any>) == m["Frames"].type()) {
        vector<DetectVideoIPCObjectResponseBodyDataFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVideoIPCObjectResponseBodyDataFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<DetectVideoIPCObjectResponseBodyDataFrames>>(expect1);
      }
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
  }


  virtual ~DetectVideoIPCObjectResponseBodyData() = default;
};
class DetectVideoIPCObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectVideoIPCObjectResponseBodyData> data{};

  DetectVideoIPCObjectResponseBody() {}

  explicit DetectVideoIPCObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVideoIPCObjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectVideoIPCObjectResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectVideoIPCObjectResponseBody() = default;
};
class DetectVideoIPCObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectVideoIPCObjectResponseBody> body{};

  DetectVideoIPCObjectResponse() {}

  explicit DetectVideoIPCObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVideoIPCObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectVideoIPCObjectResponseBody>(model1);
      }
    }
  }


  virtual ~DetectVideoIPCObjectResponse() = default;
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
class DetectMainBodyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectMainBodyRequest() {}

  explicit DetectMainBodyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectMainBodyRequest() = default;
};
class DetectMainBodyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectMainBodyAdvanceRequest() {}

  explicit DetectMainBodyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectMainBodyAdvanceRequest() = default;
};
class DetectMainBodyResponseBodyDataLocation : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> y{};
  shared_ptr<long> x{};

  DetectMainBodyResponseBodyDataLocation() {}

  explicit DetectMainBodyResponseBodyDataLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectMainBodyResponseBodyDataLocation() = default;
};
class DetectMainBodyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DetectMainBodyResponseBodyDataLocation> location{};

  DetectMainBodyResponseBodyData() {}

  explicit DetectMainBodyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        DetectMainBodyResponseBodyDataLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<DetectMainBodyResponseBodyDataLocation>(model1);
      }
    }
  }


  virtual ~DetectMainBodyResponseBodyData() = default;
};
class DetectMainBodyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectMainBodyResponseBodyData> data{};

  DetectMainBodyResponseBody() {}

  explicit DetectMainBodyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectMainBodyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectMainBodyResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectMainBodyResponseBody() = default;
};
class DetectMainBodyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectMainBodyResponseBody> body{};

  DetectMainBodyResponse() {}

  explicit DetectMainBodyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectMainBodyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectMainBodyResponseBody>(model1);
      }
    }
  }


  virtual ~DetectMainBodyResponse() = default;
};
class DetectVehicleRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectVehicleRequest() {}

  explicit DetectVehicleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVehicleRequest() = default;
};
class DetectVehicleAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectVehicleAdvanceRequest() {}

  explicit DetectVehicleAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVehicleAdvanceRequest() = default;
};
class DetectVehicleResponseBodyDataDetectObjectInfoList : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<vector<long>> boxes{};
  shared_ptr<double> score{};
  shared_ptr<long> id{};

  DetectVehicleResponseBodyDataDetectObjectInfoList() {}

  explicit DetectVehicleResponseBodyDataDetectObjectInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DetectVehicleResponseBodyDataDetectObjectInfoList() = default;
};
class DetectVehicleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectVehicleResponseBodyDataDetectObjectInfoList>> detectObjectInfoList{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DetectVehicleResponseBodyData() {}

  explicit DetectVehicleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detectObjectInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*detectObjectInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetectObjectInfoList"] = boost::any(temp1);
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
    if (m.find("DetectObjectInfoList") != m.end() && !m["DetectObjectInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetectObjectInfoList"].type()) {
        vector<DetectVehicleResponseBodyDataDetectObjectInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetectObjectInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleResponseBodyDataDetectObjectInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detectObjectInfoList = make_shared<vector<DetectVehicleResponseBodyDataDetectObjectInfoList>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DetectVehicleResponseBodyData() = default;
};
class DetectVehicleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectVehicleResponseBodyData> data{};

  DetectVehicleResponseBody() {}

  explicit DetectVehicleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVehicleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectVehicleResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectVehicleResponseBody() = default;
};
class DetectVehicleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectVehicleResponseBody> body{};

  DetectVehicleResponse() {}

  explicit DetectVehicleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVehicleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectVehicleResponseBody>(model1);
      }
    }
  }


  virtual ~DetectVehicleResponse() = default;
};
class DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint() {}

  explicit DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint() = default;
};
class DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion : public Darabonba::Model {
public:
  shared_ptr<DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint> point{};

  DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion() {}

  explicit DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = point ? boost::any(point->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      if (typeid(map<string, boost::any>) == m["Point"].type()) {
        DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Point"]));
        point = make_shared<DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint>(model1);
      }
    }
  }


  virtual ~DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion() = default;
};
class DetectVehicleIllegalParkingRequestRoadRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion>> roadRegion{};

  DetectVehicleIllegalParkingRequestRoadRegions() {}

  explicit DetectVehicleIllegalParkingRequestRoadRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roadRegion) {
      vector<boost::any> temp1;
      for(auto item1:*roadRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoadRegion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoadRegion") != m.end() && !m["RoadRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["RoadRegion"].type()) {
        vector<DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoadRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roadRegion = make_shared<vector<DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion>>(expect1);
      }
    }
  }


  virtual ~DetectVehicleIllegalParkingRequestRoadRegions() = default;
};
class DetectVehicleIllegalParkingRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<DetectVehicleIllegalParkingRequestRoadRegions>> roadRegions{};

  DetectVehicleIllegalParkingRequest() {}

  explicit DetectVehicleIllegalParkingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (roadRegions) {
      vector<boost::any> temp1;
      for(auto item1:*roadRegions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoadRegions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("RoadRegions") != m.end() && !m["RoadRegions"].empty()) {
      if (typeid(vector<boost::any>) == m["RoadRegions"].type()) {
        vector<DetectVehicleIllegalParkingRequestRoadRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoadRegions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleIllegalParkingRequestRoadRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roadRegions = make_shared<vector<DetectVehicleIllegalParkingRequestRoadRegions>>(expect1);
      }
    }
  }


  virtual ~DetectVehicleIllegalParkingRequest() = default;
};
class DetectVehicleIllegalParkingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> roadRegionsShrink{};

  DetectVehicleIllegalParkingShrinkRequest() {}

  explicit DetectVehicleIllegalParkingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (roadRegionsShrink) {
      res["RoadRegions"] = boost::any(*roadRegionsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("RoadRegions") != m.end() && !m["RoadRegions"].empty()) {
      roadRegionsShrink = make_shared<string>(boost::any_cast<string>(m["RoadRegions"]));
    }
  }


  virtual ~DetectVehicleIllegalParkingShrinkRequest() = default;
};
class DetectVehicleIllegalParkingResponseBodyDataElementsBoxes : public Darabonba::Model {
public:
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> right{};
  shared_ptr<long> bottom{};

  DetectVehicleIllegalParkingResponseBodyDataElementsBoxes() {}

  explicit DetectVehicleIllegalParkingResponseBodyDataElementsBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectVehicleIllegalParkingResponseBodyDataElementsBoxes() = default;
};
class DetectVehicleIllegalParkingResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<vector<DetectVehicleIllegalParkingResponseBodyDataElementsBoxes>> boxes{};
  shared_ptr<double> score{};
  shared_ptr<string> typeName_{};

  DetectVehicleIllegalParkingResponseBodyDataElements() {}

  explicit DetectVehicleIllegalParkingResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<DetectVehicleIllegalParkingResponseBodyDataElementsBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleIllegalParkingResponseBodyDataElementsBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<DetectVehicleIllegalParkingResponseBodyDataElementsBoxes>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~DetectVehicleIllegalParkingResponseBodyDataElements() = default;
};
class DetectVehicleIllegalParkingResponseBodyDataRegionIntersects : public Darabonba::Model {
public:
  shared_ptr<vector<long>> ids{};

  DetectVehicleIllegalParkingResponseBodyDataRegionIntersects() {}

  explicit DetectVehicleIllegalParkingResponseBodyDataRegionIntersects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ids = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DetectVehicleIllegalParkingResponseBodyDataRegionIntersects() = default;
};
class DetectVehicleIllegalParkingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectVehicleIllegalParkingResponseBodyDataElements>> elements{};
  shared_ptr<vector<DetectVehicleIllegalParkingResponseBodyDataRegionIntersects>> regionIntersects{};

  DetectVehicleIllegalParkingResponseBodyData() {}

  explicit DetectVehicleIllegalParkingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionIntersects) {
      vector<boost::any> temp1;
      for(auto item1:*regionIntersects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionIntersects"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<DetectVehicleIllegalParkingResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleIllegalParkingResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectVehicleIllegalParkingResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("RegionIntersects") != m.end() && !m["RegionIntersects"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionIntersects"].type()) {
        vector<DetectVehicleIllegalParkingResponseBodyDataRegionIntersects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionIntersects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectVehicleIllegalParkingResponseBodyDataRegionIntersects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionIntersects = make_shared<vector<DetectVehicleIllegalParkingResponseBodyDataRegionIntersects>>(expect1);
      }
    }
  }


  virtual ~DetectVehicleIllegalParkingResponseBodyData() = default;
};
class DetectVehicleIllegalParkingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectVehicleIllegalParkingResponseBodyData> data{};

  DetectVehicleIllegalParkingResponseBody() {}

  explicit DetectVehicleIllegalParkingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVehicleIllegalParkingResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectVehicleIllegalParkingResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectVehicleIllegalParkingResponseBody() = default;
};
class DetectVehicleIllegalParkingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectVehicleIllegalParkingResponseBody> body{};

  DetectVehicleIllegalParkingResponse() {}

  explicit DetectVehicleIllegalParkingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectVehicleIllegalParkingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectVehicleIllegalParkingResponseBody>(model1);
      }
    }
  }


  virtual ~DetectVehicleIllegalParkingResponse() = default;
};
class RecognizeVehicleDamageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVehicleDamageRequest() {}

  explicit RecognizeVehicleDamageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehicleDamageRequest() = default;
};
class RecognizeVehicleDamageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVehicleDamageAdvanceRequest() {}

  explicit RecognizeVehicleDamageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehicleDamageAdvanceRequest() = default;
};
class RecognizeVehicleDamageResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<vector<double>> scores{};
  shared_ptr<vector<long>> boxes{};
  shared_ptr<double> score{};

  RecognizeVehicleDamageResponseBodyDataElements() {}

  explicit RecognizeVehicleDamageResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (scores) {
      res["Scores"] = boost::any(*scores);
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


  virtual ~RecognizeVehicleDamageResponseBodyDataElements() = default;
};
class RecognizeVehicleDamageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVehicleDamageResponseBodyDataElements>> elements{};

  RecognizeVehicleDamageResponseBodyData() {}

  explicit RecognizeVehicleDamageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizeVehicleDamageResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVehicleDamageResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeVehicleDamageResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeVehicleDamageResponseBodyData() = default;
};
class RecognizeVehicleDamageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeVehicleDamageResponseBodyData> data{};

  RecognizeVehicleDamageResponseBody() {}

  explicit RecognizeVehicleDamageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleDamageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVehicleDamageResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleDamageResponseBody() = default;
};
class RecognizeVehicleDamageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeVehicleDamageResponseBody> body{};

  RecognizeVehicleDamageResponse() {}

  explicit RecognizeVehicleDamageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleDamageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVehicleDamageResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleDamageResponse() = default;
};
class RecognizeVehicleDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVehicleDashboardRequest() {}

  explicit RecognizeVehicleDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehicleDashboardRequest() = default;
};
class RecognizeVehicleDashboardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVehicleDashboardAdvanceRequest() {}

  explicit RecognizeVehicleDashboardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehicleDashboardAdvanceRequest() = default;
};
class RecognizeVehicleDashboardResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<vector<double>> boxes{};
  shared_ptr<double> score{};
  shared_ptr<string> label{};
  shared_ptr<string> className{};

  RecognizeVehicleDashboardResponseBodyDataElements() {}

  explicit RecognizeVehicleDashboardResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (className) {
      res["ClassName"] = boost::any(*className);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Boxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      boxes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("ClassName") != m.end() && !m["ClassName"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["ClassName"]));
    }
  }


  virtual ~RecognizeVehicleDashboardResponseBodyDataElements() = default;
};
class RecognizeVehicleDashboardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVehicleDashboardResponseBodyDataElements>> elements{};

  RecognizeVehicleDashboardResponseBodyData() {}

  explicit RecognizeVehicleDashboardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RecognizeVehicleDashboardResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVehicleDashboardResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeVehicleDashboardResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeVehicleDashboardResponseBodyData() = default;
};
class RecognizeVehicleDashboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeVehicleDashboardResponseBodyData> data{};

  RecognizeVehicleDashboardResponseBody() {}

  explicit RecognizeVehicleDashboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleDashboardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVehicleDashboardResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleDashboardResponseBody() = default;
};
class RecognizeVehicleDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeVehicleDashboardResponseBody> body{};

  RecognizeVehicleDashboardResponse() {}

  explicit RecognizeVehicleDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleDashboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVehicleDashboardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleDashboardResponse() = default;
};
class RecognizeVehiclePartsRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVehiclePartsRequest() {}

  explicit RecognizeVehiclePartsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehiclePartsRequest() = default;
};
class RecognizeVehiclePartsAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVehiclePartsAdvanceRequest() {}

  explicit RecognizeVehiclePartsAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehiclePartsAdvanceRequest() = default;
};
class RecognizeVehiclePartsResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<vector<long>> boxes{};
  shared_ptr<double> score{};

  RecognizeVehiclePartsResponseBodyDataElements() {}

  explicit RecognizeVehiclePartsResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVehiclePartsResponseBodyDataElements() = default;
};
class RecognizeVehiclePartsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVehiclePartsResponseBodyDataElements>> elements{};
  shared_ptr<vector<long>> originShapes{};

  RecognizeVehiclePartsResponseBodyData() {}

  explicit RecognizeVehiclePartsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (originShapes) {
      res["OriginShapes"] = boost::any(*originShapes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<RecognizeVehiclePartsResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVehiclePartsResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeVehiclePartsResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("OriginShapes") != m.end() && !m["OriginShapes"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["OriginShapes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OriginShapes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      originShapes = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RecognizeVehiclePartsResponseBodyData() = default;
};
class RecognizeVehiclePartsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeVehiclePartsResponseBodyData> data{};

  RecognizeVehiclePartsResponseBody() {}

  explicit RecognizeVehiclePartsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehiclePartsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVehiclePartsResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeVehiclePartsResponseBody() = default;
};
class RecognizeVehiclePartsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeVehiclePartsResponseBody> body{};

  RecognizeVehiclePartsResponse() {}

  explicit RecognizeVehiclePartsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehiclePartsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVehiclePartsResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVehiclePartsResponse() = default;
};
class GenerateVehicleRepairPlanRequestDamageImageList : public Darabonba::Model {
public:
  shared_ptr<string> createTimeStamp{};
  shared_ptr<string> imageUrl{};

  GenerateVehicleRepairPlanRequestDamageImageList() {}

  explicit GenerateVehicleRepairPlanRequestDamageImageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<string>(boost::any_cast<string>(m["CreateTimeStamp"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~GenerateVehicleRepairPlanRequestDamageImageList() = default;
};
class GenerateVehicleRepairPlanRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateVehicleRepairPlanRequestDamageImageList>> damageImageList{};

  GenerateVehicleRepairPlanRequest() {}

  explicit GenerateVehicleRepairPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (damageImageList) {
      vector<boost::any> temp1;
      for(auto item1:*damageImageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DamageImageList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DamageImageList") != m.end() && !m["DamageImageList"].empty()) {
      if (typeid(vector<boost::any>) == m["DamageImageList"].type()) {
        vector<GenerateVehicleRepairPlanRequestDamageImageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DamageImageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateVehicleRepairPlanRequestDamageImageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        damageImageList = make_shared<vector<GenerateVehicleRepairPlanRequestDamageImageList>>(expect1);
      }
    }
  }


  virtual ~GenerateVehicleRepairPlanRequest() = default;
};
class GenerateVehicleRepairPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GenerateVehicleRepairPlanResponseBodyData() {}

  explicit GenerateVehicleRepairPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GenerateVehicleRepairPlanResponseBodyData() = default;
};
class GenerateVehicleRepairPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<GenerateVehicleRepairPlanResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GenerateVehicleRepairPlanResponseBody() {}

  explicit GenerateVehicleRepairPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GenerateVehicleRepairPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateVehicleRepairPlanResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GenerateVehicleRepairPlanResponseBody() = default;
};
class GenerateVehicleRepairPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateVehicleRepairPlanResponseBody> body{};

  GenerateVehicleRepairPlanResponse() {}

  explicit GenerateVehicleRepairPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateVehicleRepairPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateVehicleRepairPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateVehicleRepairPlanResponse() = default;
};
class DetectObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectObjectRequest() {}

  explicit DetectObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectObjectRequest() = default;
};
class DetectObjectAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectObjectAdvanceRequest() {}

  explicit DetectObjectAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectObjectAdvanceRequest() = default;
};
class DetectObjectResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<vector<long>> boxes{};
  shared_ptr<double> score{};

  DetectObjectResponseBodyDataElements() {}

  explicit DetectObjectResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectObjectResponseBodyDataElements() = default;
};
class DetectObjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectObjectResponseBodyDataElements>> elements{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DetectObjectResponseBodyData() {}

  explicit DetectObjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectObjectResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectObjectResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectObjectResponseBodyDataElements>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DetectObjectResponseBodyData() = default;
};
class DetectObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectObjectResponseBodyData> data{};

  DetectObjectResponseBody() {}

  explicit DetectObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectObjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectObjectResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectObjectResponseBody() = default;
};
class DetectObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectObjectResponseBody> body{};

  DetectObjectResponse() {}

  explicit DetectObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectObjectResponseBody>(model1);
      }
    }
  }


  virtual ~DetectObjectResponse() = default;
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
  DetectTransparentImageResponse detectTransparentImageWithOptions(shared_ptr<DetectTransparentImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectTransparentImageResponse detectTransparentImage(shared_ptr<DetectTransparentImageRequest> request);
  DetectTransparentImageResponse detectTransparentImageAdvance(shared_ptr<DetectTransparentImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVehicleICongestionResponse detectVehicleICongestionWithOptions(shared_ptr<DetectVehicleICongestionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVehicleICongestionResponse detectVehicleICongestion(shared_ptr<DetectVehicleICongestionRequest> request);
  ClassifyVehicleInsuranceResponse classifyVehicleInsuranceWithOptions(shared_ptr<ClassifyVehicleInsuranceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClassifyVehicleInsuranceResponse classifyVehicleInsurance(shared_ptr<ClassifyVehicleInsuranceRequest> request);
  ClassifyVehicleInsuranceResponse classifyVehicleInsuranceAdvance(shared_ptr<ClassifyVehicleInsuranceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectIPCObjectResponse detectIPCObjectWithOptions(shared_ptr<DetectIPCObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectIPCObjectResponse detectIPCObject(shared_ptr<DetectIPCObjectRequest> request);
  GetVehicleRepairPlanResponse getVehicleRepairPlanWithOptions(shared_ptr<GetVehicleRepairPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVehicleRepairPlanResponse getVehicleRepairPlan(shared_ptr<GetVehicleRepairPlanRequest> request);
  DetectWhiteBaseImageResponse detectWhiteBaseImageWithOptions(shared_ptr<DetectWhiteBaseImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectWhiteBaseImageResponse detectWhiteBaseImage(shared_ptr<DetectWhiteBaseImageRequest> request);
  DetectWhiteBaseImageResponse detectWhiteBaseImageAdvance(shared_ptr<DetectWhiteBaseImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVideoIPCObjectResponse detectVideoIPCObjectWithOptions(shared_ptr<DetectVideoIPCObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVideoIPCObjectResponse detectVideoIPCObject(shared_ptr<DetectVideoIPCObjectRequest> request);
  DetectVideoIPCObjectResponse detectVideoIPCObjectAdvance(shared_ptr<DetectVideoIPCObjectAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  DetectMainBodyResponse detectMainBodyWithOptions(shared_ptr<DetectMainBodyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectMainBodyResponse detectMainBody(shared_ptr<DetectMainBodyRequest> request);
  DetectMainBodyResponse detectMainBodyAdvance(shared_ptr<DetectMainBodyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVehicleResponse detectVehicleWithOptions(shared_ptr<DetectVehicleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVehicleResponse detectVehicle(shared_ptr<DetectVehicleRequest> request);
  DetectVehicleResponse detectVehicleAdvance(shared_ptr<DetectVehicleAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVehicleIllegalParkingResponse detectVehicleIllegalParkingWithOptions(shared_ptr<DetectVehicleIllegalParkingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectVehicleIllegalParkingResponse detectVehicleIllegalParking(shared_ptr<DetectVehicleIllegalParkingRequest> request);
  RecognizeVehicleDamageResponse recognizeVehicleDamageWithOptions(shared_ptr<RecognizeVehicleDamageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehicleDamageResponse recognizeVehicleDamage(shared_ptr<RecognizeVehicleDamageRequest> request);
  RecognizeVehicleDamageResponse recognizeVehicleDamageAdvance(shared_ptr<RecognizeVehicleDamageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehicleDashboardResponse recognizeVehicleDashboardWithOptions(shared_ptr<RecognizeVehicleDashboardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehicleDashboardResponse recognizeVehicleDashboard(shared_ptr<RecognizeVehicleDashboardRequest> request);
  RecognizeVehicleDashboardResponse recognizeVehicleDashboardAdvance(shared_ptr<RecognizeVehicleDashboardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehiclePartsResponse recognizeVehiclePartsWithOptions(shared_ptr<RecognizeVehiclePartsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehiclePartsResponse recognizeVehicleParts(shared_ptr<RecognizeVehiclePartsRequest> request);
  RecognizeVehiclePartsResponse recognizeVehiclePartsAdvance(shared_ptr<RecognizeVehiclePartsAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVehicleRepairPlanResponse generateVehicleRepairPlanWithOptions(shared_ptr<GenerateVehicleRepairPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVehicleRepairPlanResponse generateVehicleRepairPlan(shared_ptr<GenerateVehicleRepairPlanRequest> request);
  DetectObjectResponse detectObjectWithOptions(shared_ptr<DetectObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectObjectResponse detectObject(shared_ptr<DetectObjectRequest> request);
  DetectObjectResponse detectObjectAdvance(shared_ptr<DetectObjectAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Objectdet20191230

#endif
