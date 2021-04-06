// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMAGEPROCESS20200320_H_
#define ALIBABACLOUD_IMAGEPROCESS20200320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imageprocess20200320 {
class ClassifyFNFRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  ClassifyFNFRequest() {}

  explicit ClassifyFNFRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~ClassifyFNFRequest() = default;
};
class ClassifyFNFAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  ClassifyFNFAdvanceRequest() {}

  explicit ClassifyFNFAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~ClassifyFNFAdvanceRequest() = default;
};
class ClassifyFNFResponseBodyDataFracturesTag : public Darabonba::Model {
public:
  shared_ptr<string> label{};

  ClassifyFNFResponseBodyDataFracturesTag() {}

  explicit ClassifyFNFResponseBodyDataFracturesTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~ClassifyFNFResponseBodyDataFracturesTag() = default;
};
class ClassifyFNFResponseBodyDataFractures : public Darabonba::Model {
public:
  shared_ptr<double> value{};
  shared_ptr<vector<long>> boxes{};
  shared_ptr<ClassifyFNFResponseBodyDataFracturesTag> tag{};

  ClassifyFNFResponseBodyDataFractures() {}

  explicit ClassifyFNFResponseBodyDataFractures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (tag) {
      res["Tag"] = tag ? boost::any(tag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tag"].type()) {
        ClassifyFNFResponseBodyDataFracturesTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tag"]));
        tag = make_shared<ClassifyFNFResponseBodyDataFracturesTag>(model1);
      }
    }
  }


  virtual ~ClassifyFNFResponseBodyDataFractures() = default;
};
class ClassifyFNFResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ClassifyFNFResponseBodyDataFractures>> fractures{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  ClassifyFNFResponseBodyData() {}

  explicit ClassifyFNFResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fractures) {
      vector<boost::any> temp1;
      for(auto item1:*fractures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fractures"] = boost::any(temp1);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fractures") != m.end() && !m["Fractures"].empty()) {
      if (typeid(vector<boost::any>) == m["Fractures"].type()) {
        vector<ClassifyFNFResponseBodyDataFractures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fractures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ClassifyFNFResponseBodyDataFractures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fractures = make_shared<vector<ClassifyFNFResponseBodyDataFractures>>(expect1);
      }
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~ClassifyFNFResponseBodyData() = default;
};
class ClassifyFNFResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ClassifyFNFResponseBodyData> data{};

  ClassifyFNFResponseBody() {}

  explicit ClassifyFNFResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyFNFResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ClassifyFNFResponseBodyData>(model1);
      }
    }
  }


  virtual ~ClassifyFNFResponseBody() = default;
};
class ClassifyFNFResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClassifyFNFResponseBody> body{};

  ClassifyFNFResponse() {}

  explicit ClassifyFNFResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyFNFResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClassifyFNFResponseBody>(model1);
      }
    }
  }


  virtual ~ClassifyFNFResponse() = default;
};
class DetectLungNoduleRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectLungNoduleRequestURLList() {}

  explicit DetectLungNoduleRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectLungNoduleRequestURLList() = default;
};
class DetectLungNoduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};
  shared_ptr<vector<DetectLungNoduleRequestURLList>> URLList{};
  shared_ptr<double> threshold{};

  DetectLungNoduleRequest() {}

  explicit DetectLungNoduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectLungNoduleRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLungNoduleRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectLungNoduleRequestURLList>>(expect1);
      }
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~DetectLungNoduleRequest() = default;
};
class DetectLungNoduleResponseBodyDataSeriesElements : public Darabonba::Model {
public:
  shared_ptr<double> z{};
  shared_ptr<string> lobe{};
  shared_ptr<double> meanValue{};
  shared_ptr<double> imageZ{};
  shared_ptr<string> lung{};
  shared_ptr<double> confidence{};
  shared_ptr<string> SOPInstanceUID{};
  shared_ptr<double> imageX{};
  shared_ptr<double> y{};
  shared_ptr<string> category{};
  shared_ptr<double> volume{};
  shared_ptr<double> imageY{};
  shared_ptr<double> diameter{};
  shared_ptr<double> x{};

  DetectLungNoduleResponseBodyDataSeriesElements() {}

  explicit DetectLungNoduleResponseBodyDataSeriesElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (z) {
      res["Z"] = boost::any(*z);
    }
    if (lobe) {
      res["Lobe"] = boost::any(*lobe);
    }
    if (meanValue) {
      res["MeanValue"] = boost::any(*meanValue);
    }
    if (imageZ) {
      res["ImageZ"] = boost::any(*imageZ);
    }
    if (lung) {
      res["Lung"] = boost::any(*lung);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (SOPInstanceUID) {
      res["SOPInstanceUID"] = boost::any(*SOPInstanceUID);
    }
    if (imageX) {
      res["ImageX"] = boost::any(*imageX);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    if (imageY) {
      res["ImageY"] = boost::any(*imageY);
    }
    if (diameter) {
      res["Diameter"] = boost::any(*diameter);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Z") != m.end() && !m["Z"].empty()) {
      z = make_shared<double>(boost::any_cast<double>(m["Z"]));
    }
    if (m.find("Lobe") != m.end() && !m["Lobe"].empty()) {
      lobe = make_shared<string>(boost::any_cast<string>(m["Lobe"]));
    }
    if (m.find("MeanValue") != m.end() && !m["MeanValue"].empty()) {
      meanValue = make_shared<double>(boost::any_cast<double>(m["MeanValue"]));
    }
    if (m.find("ImageZ") != m.end() && !m["ImageZ"].empty()) {
      imageZ = make_shared<double>(boost::any_cast<double>(m["ImageZ"]));
    }
    if (m.find("Lung") != m.end() && !m["Lung"].empty()) {
      lung = make_shared<string>(boost::any_cast<string>(m["Lung"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("SOPInstanceUID") != m.end() && !m["SOPInstanceUID"].empty()) {
      SOPInstanceUID = make_shared<string>(boost::any_cast<string>(m["SOPInstanceUID"]));
    }
    if (m.find("ImageX") != m.end() && !m["ImageX"].empty()) {
      imageX = make_shared<double>(boost::any_cast<double>(m["ImageX"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<double>(boost::any_cast<double>(m["Volume"]));
    }
    if (m.find("ImageY") != m.end() && !m["ImageY"].empty()) {
      imageY = make_shared<double>(boost::any_cast<double>(m["ImageY"]));
    }
    if (m.find("Diameter") != m.end() && !m["Diameter"].empty()) {
      diameter = make_shared<double>(boost::any_cast<double>(m["Diameter"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~DetectLungNoduleResponseBodyDataSeriesElements() = default;
};
class DetectLungNoduleResponseBodyDataSeries : public Darabonba::Model {
public:
  shared_ptr<string> seriesInstanceUid{};
  shared_ptr<vector<DetectLungNoduleResponseBodyDataSeriesElements>> elements{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> report{};
  shared_ptr<vector<double>> spacing{};

  DetectLungNoduleResponseBodyDataSeries() {}

  explicit DetectLungNoduleResponseBodyDataSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (report) {
      res["Report"] = boost::any(*report);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<DetectLungNoduleResponseBodyDataSeriesElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLungNoduleResponseBodyDataSeriesElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectLungNoduleResponseBodyDataSeriesElements>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Report") != m.end() && !m["Report"].empty()) {
      report = make_shared<string>(boost::any_cast<string>(m["Report"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectLungNoduleResponseBodyDataSeries() = default;
};
class DetectLungNoduleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectLungNoduleResponseBodyDataSeries>> series{};

  DetectLungNoduleResponseBodyData() {}

  explicit DetectLungNoduleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DetectLungNoduleResponseBodyDataSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLungNoduleResponseBodyDataSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DetectLungNoduleResponseBodyDataSeries>>(expect1);
      }
    }
  }


  virtual ~DetectLungNoduleResponseBodyData() = default;
};
class DetectLungNoduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectLungNoduleResponseBodyData> data{};

  DetectLungNoduleResponseBody() {}

  explicit DetectLungNoduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectLungNoduleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectLungNoduleResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectLungNoduleResponseBody() = default;
};
class DetectLungNoduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectLungNoduleResponseBody> body{};

  DetectLungNoduleResponse() {}

  explicit DetectLungNoduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectLungNoduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectLungNoduleResponseBody>(model1);
      }
    }
  }


  virtual ~DetectLungNoduleResponse() = default;
};
class RunCTRegistrationRequestReferenceList : public Darabonba::Model {
public:
  shared_ptr<string> referenceURL{};

  RunCTRegistrationRequestReferenceList() {}

  explicit RunCTRegistrationRequestReferenceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (referenceURL) {
      res["ReferenceURL"] = boost::any(*referenceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReferenceURL") != m.end() && !m["ReferenceURL"].empty()) {
      referenceURL = make_shared<string>(boost::any_cast<string>(m["ReferenceURL"]));
    }
  }


  virtual ~RunCTRegistrationRequestReferenceList() = default;
};
class RunCTRegistrationRequestFloatingList : public Darabonba::Model {
public:
  shared_ptr<string> floatingURL{};

  RunCTRegistrationRequestFloatingList() {}

  explicit RunCTRegistrationRequestFloatingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (floatingURL) {
      res["FloatingURL"] = boost::any(*floatingURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FloatingURL") != m.end() && !m["FloatingURL"].empty()) {
      floatingURL = make_shared<string>(boost::any_cast<string>(m["FloatingURL"]));
    }
  }


  virtual ~RunCTRegistrationRequestFloatingList() = default;
};
class RunCTRegistrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<RunCTRegistrationRequestReferenceList>> referenceList{};
  shared_ptr<vector<RunCTRegistrationRequestFloatingList>> floatingList{};

  RunCTRegistrationRequest() {}

  explicit RunCTRegistrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (referenceList) {
      vector<boost::any> temp1;
      for(auto item1:*referenceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReferenceList"] = boost::any(temp1);
    }
    if (floatingList) {
      vector<boost::any> temp1;
      for(auto item1:*floatingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FloatingList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("ReferenceList") != m.end() && !m["ReferenceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ReferenceList"].type()) {
        vector<RunCTRegistrationRequestReferenceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReferenceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCTRegistrationRequestReferenceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        referenceList = make_shared<vector<RunCTRegistrationRequestReferenceList>>(expect1);
      }
    }
    if (m.find("FloatingList") != m.end() && !m["FloatingList"].empty()) {
      if (typeid(vector<boost::any>) == m["FloatingList"].type()) {
        vector<RunCTRegistrationRequestFloatingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FloatingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCTRegistrationRequestFloatingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        floatingList = make_shared<vector<RunCTRegistrationRequestFloatingList>>(expect1);
      }
    }
  }


  virtual ~RunCTRegistrationRequest() = default;
};
class RunCTRegistrationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DUrl{};
  shared_ptr<string> NUrl{};

  RunCTRegistrationResponseBodyData() {}

  explicit RunCTRegistrationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DUrl) {
      res["DUrl"] = boost::any(*DUrl);
    }
    if (NUrl) {
      res["NUrl"] = boost::any(*NUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DUrl") != m.end() && !m["DUrl"].empty()) {
      DUrl = make_shared<string>(boost::any_cast<string>(m["DUrl"]));
    }
    if (m.find("NUrl") != m.end() && !m["NUrl"].empty()) {
      NUrl = make_shared<string>(boost::any_cast<string>(m["NUrl"]));
    }
  }


  virtual ~RunCTRegistrationResponseBodyData() = default;
};
class RunCTRegistrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RunCTRegistrationResponseBodyData> data{};

  RunCTRegistrationResponseBody() {}

  explicit RunCTRegistrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunCTRegistrationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RunCTRegistrationResponseBodyData>(model1);
      }
    }
  }


  virtual ~RunCTRegistrationResponseBody() = default;
};
class RunCTRegistrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RunCTRegistrationResponseBody> body{};

  RunCTRegistrationResponse() {}

  explicit RunCTRegistrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunCTRegistrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunCTRegistrationResponseBody>(model1);
      }
    }
  }


  virtual ~RunCTRegistrationResponse() = default;
};
class TranslateMedRequest : public Darabonba::Model {
public:
  shared_ptr<string> fromLanguage{};
  shared_ptr<string> toLanguage{};
  shared_ptr<string> text{};

  TranslateMedRequest() {}

  explicit TranslateMedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromLanguage) {
      res["FromLanguage"] = boost::any(*fromLanguage);
    }
    if (toLanguage) {
      res["ToLanguage"] = boost::any(*toLanguage);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromLanguage") != m.end() && !m["FromLanguage"].empty()) {
      fromLanguage = make_shared<string>(boost::any_cast<string>(m["FromLanguage"]));
    }
    if (m.find("ToLanguage") != m.end() && !m["ToLanguage"].empty()) {
      toLanguage = make_shared<string>(boost::any_cast<string>(m["ToLanguage"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~TranslateMedRequest() = default;
};
class TranslateMedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> words{};
  shared_ptr<string> text{};

  TranslateMedResponseBodyData() {}

  explicit TranslateMedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<long>(boost::any_cast<long>(m["Words"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~TranslateMedResponseBodyData() = default;
};
class TranslateMedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<TranslateMedResponseBodyData> data{};

  TranslateMedResponseBody() {}

  explicit TranslateMedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateMedResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TranslateMedResponseBodyData>(model1);
      }
    }
  }


  virtual ~TranslateMedResponseBody() = default;
};
class TranslateMedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TranslateMedResponseBody> body{};

  TranslateMedResponse() {}

  explicit TranslateMedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateMedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateMedResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateMedResponse() = default;
};
class DetectSpineMRIRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectSpineMRIRequestURLList() {}

  explicit DetectSpineMRIRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectSpineMRIRequestURLList() = default;
};
class DetectSpineMRIRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};
  shared_ptr<vector<DetectSpineMRIRequestURLList>> URLList{};

  DetectSpineMRIRequest() {}

  explicit DetectSpineMRIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectSpineMRIRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectSpineMRIRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectSpineMRIRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectSpineMRIRequest() = default;
};
class DetectSpineMRIResponseBodyDataDiscs : public Darabonba::Model {
public:
  shared_ptr<string> identification{};
  shared_ptr<string> disease{};
  shared_ptr<vector<double>> location{};

  DetectSpineMRIResponseBodyDataDiscs() {}

  explicit DetectSpineMRIResponseBodyDataDiscs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identification) {
      res["Identification"] = boost::any(*identification);
    }
    if (disease) {
      res["Disease"] = boost::any(*disease);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identification") != m.end() && !m["Identification"].empty()) {
      identification = make_shared<string>(boost::any_cast<string>(m["Identification"]));
    }
    if (m.find("Disease") != m.end() && !m["Disease"].empty()) {
      disease = make_shared<string>(boost::any_cast<string>(m["Disease"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Location"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Location"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      location = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectSpineMRIResponseBodyDataDiscs() = default;
};
class DetectSpineMRIResponseBodyDataVertebras : public Darabonba::Model {
public:
  shared_ptr<string> identification{};
  shared_ptr<string> disease{};
  shared_ptr<vector<double>> location{};

  DetectSpineMRIResponseBodyDataVertebras() {}

  explicit DetectSpineMRIResponseBodyDataVertebras(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identification) {
      res["Identification"] = boost::any(*identification);
    }
    if (disease) {
      res["Disease"] = boost::any(*disease);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identification") != m.end() && !m["Identification"].empty()) {
      identification = make_shared<string>(boost::any_cast<string>(m["Identification"]));
    }
    if (m.find("Disease") != m.end() && !m["Disease"].empty()) {
      disease = make_shared<string>(boost::any_cast<string>(m["Disease"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Location"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Location"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      location = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectSpineMRIResponseBodyDataVertebras() = default;
};
class DetectSpineMRIResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectSpineMRIResponseBodyDataDiscs>> discs{};
  shared_ptr<vector<DetectSpineMRIResponseBodyDataVertebras>> vertebras{};

  DetectSpineMRIResponseBodyData() {}

  explicit DetectSpineMRIResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discs) {
      vector<boost::any> temp1;
      for(auto item1:*discs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Discs"] = boost::any(temp1);
    }
    if (vertebras) {
      vector<boost::any> temp1;
      for(auto item1:*vertebras){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vertebras"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Discs") != m.end() && !m["Discs"].empty()) {
      if (typeid(vector<boost::any>) == m["Discs"].type()) {
        vector<DetectSpineMRIResponseBodyDataDiscs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Discs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectSpineMRIResponseBodyDataDiscs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        discs = make_shared<vector<DetectSpineMRIResponseBodyDataDiscs>>(expect1);
      }
    }
    if (m.find("Vertebras") != m.end() && !m["Vertebras"].empty()) {
      if (typeid(vector<boost::any>) == m["Vertebras"].type()) {
        vector<DetectSpineMRIResponseBodyDataVertebras> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vertebras"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectSpineMRIResponseBodyDataVertebras model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vertebras = make_shared<vector<DetectSpineMRIResponseBodyDataVertebras>>(expect1);
      }
    }
  }


  virtual ~DetectSpineMRIResponseBodyData() = default;
};
class DetectSpineMRIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectSpineMRIResponseBodyData> data{};

  DetectSpineMRIResponseBody() {}

  explicit DetectSpineMRIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectSpineMRIResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectSpineMRIResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectSpineMRIResponseBody() = default;
};
class DetectSpineMRIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectSpineMRIResponseBody> body{};

  DetectSpineMRIResponse() {}

  explicit DetectSpineMRIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectSpineMRIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectSpineMRIResponseBody>(model1);
      }
    }
  }


  virtual ~DetectSpineMRIResponse() = default;
};
class CalcCACSRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  CalcCACSRequestURLList() {}

  explicit CalcCACSRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CalcCACSRequestURLList() = default;
};
class CalcCACSRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<CalcCACSRequestURLList>> URLList{};

  CalcCACSRequest() {}

  explicit CalcCACSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<CalcCACSRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CalcCACSRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<CalcCACSRequestURLList>>(expect1);
      }
    }
  }


  virtual ~CalcCACSRequest() = default;
};
class CalcCACSResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultUrl{};
  shared_ptr<string> score{};

  CalcCACSResponseBodyData() {}

  explicit CalcCACSResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
  }


  virtual ~CalcCACSResponseBodyData() = default;
};
class CalcCACSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CalcCACSResponseBodyData> data{};

  CalcCACSResponseBody() {}

  explicit CalcCACSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CalcCACSResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CalcCACSResponseBodyData>(model1);
      }
    }
  }


  virtual ~CalcCACSResponseBody() = default;
};
class CalcCACSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CalcCACSResponseBody> body{};

  CalcCACSResponse() {}

  explicit CalcCACSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CalcCACSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CalcCACSResponseBody>(model1);
      }
    }
  }


  virtual ~CalcCACSResponse() = default;
};
class DetectHipKeypointXRayRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  DetectHipKeypointXRayRequest() {}

  explicit DetectHipKeypointXRayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~DetectHipKeypointXRayRequest() = default;
};
class DetectHipKeypointXRayAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  DetectHipKeypointXRayAdvanceRequest() {}

  explicit DetectHipKeypointXRayAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~DetectHipKeypointXRayAdvanceRequest() = default;
};
class DetectHipKeypointXRayResponseBodyDataKeyPointsTag : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> label{};

  DetectHipKeypointXRayResponseBodyDataKeyPointsTag() {}

  explicit DetectHipKeypointXRayResponseBodyDataKeyPointsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~DetectHipKeypointXRayResponseBodyDataKeyPointsTag() = default;
};
class DetectHipKeypointXRayResponseBodyDataKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> value{};
  shared_ptr<vector<long>> coordinates{};
  shared_ptr<DetectHipKeypointXRayResponseBodyDataKeyPointsTag> tag{};

  DetectHipKeypointXRayResponseBodyDataKeyPoints() {}

  explicit DetectHipKeypointXRayResponseBodyDataKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (tag) {
      res["Tag"] = tag ? boost::any(tag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinates = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tag"].type()) {
        DetectHipKeypointXRayResponseBodyDataKeyPointsTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tag"]));
        tag = make_shared<DetectHipKeypointXRayResponseBodyDataKeyPointsTag>(model1);
      }
    }
  }


  virtual ~DetectHipKeypointXRayResponseBodyDataKeyPoints() = default;
};
class DetectHipKeypointXRayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectHipKeypointXRayResponseBodyDataKeyPoints>> keyPoints{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  DetectHipKeypointXRayResponseBodyData() {}

  explicit DetectHipKeypointXRayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<DetectHipKeypointXRayResponseBodyDataKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectHipKeypointXRayResponseBodyDataKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<DetectHipKeypointXRayResponseBodyDataKeyPoints>>(expect1);
      }
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~DetectHipKeypointXRayResponseBodyData() = default;
};
class DetectHipKeypointXRayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectHipKeypointXRayResponseBodyData> data{};

  DetectHipKeypointXRayResponseBody() {}

  explicit DetectHipKeypointXRayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectHipKeypointXRayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectHipKeypointXRayResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectHipKeypointXRayResponseBody() = default;
};
class DetectHipKeypointXRayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectHipKeypointXRayResponseBody> body{};

  DetectHipKeypointXRayResponse() {}

  explicit DetectHipKeypointXRayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectHipKeypointXRayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectHipKeypointXRayResponseBody>(model1);
      }
    }
  }


  virtual ~DetectHipKeypointXRayResponse() = default;
};
class DetectKneeKeypointXRayRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  DetectKneeKeypointXRayRequest() {}

  explicit DetectKneeKeypointXRayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~DetectKneeKeypointXRayRequest() = default;
};
class DetectKneeKeypointXRayAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  DetectKneeKeypointXRayAdvanceRequest() {}

  explicit DetectKneeKeypointXRayAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrlObject") != m.end() && !m["ImageUrlObject"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrlObject"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~DetectKneeKeypointXRayAdvanceRequest() = default;
};
class DetectKneeKeypointXRayResponseBodyDataKeyPointsTag : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> label{};

  DetectKneeKeypointXRayResponseBodyDataKeyPointsTag() {}

  explicit DetectKneeKeypointXRayResponseBodyDataKeyPointsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~DetectKneeKeypointXRayResponseBodyDataKeyPointsTag() = default;
};
class DetectKneeKeypointXRayResponseBodyDataKeyPoints : public Darabonba::Model {
public:
  shared_ptr<double> value{};
  shared_ptr<vector<long>> coordinates{};
  shared_ptr<DetectKneeKeypointXRayResponseBodyDataKeyPointsTag> tag{};

  DetectKneeKeypointXRayResponseBodyDataKeyPoints() {}

  explicit DetectKneeKeypointXRayResponseBodyDataKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (tag) {
      res["Tag"] = tag ? boost::any(tag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinates = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tag"].type()) {
        DetectKneeKeypointXRayResponseBodyDataKeyPointsTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tag"]));
        tag = make_shared<DetectKneeKeypointXRayResponseBodyDataKeyPointsTag>(model1);
      }
    }
  }


  virtual ~DetectKneeKeypointXRayResponseBodyDataKeyPoints() = default;
};
class DetectKneeKeypointXRayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectKneeKeypointXRayResponseBodyDataKeyPoints>> keyPoints{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  DetectKneeKeypointXRayResponseBodyData() {}

  explicit DetectKneeKeypointXRayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<DetectKneeKeypointXRayResponseBodyDataKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectKneeKeypointXRayResponseBodyDataKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<DetectKneeKeypointXRayResponseBodyDataKeyPoints>>(expect1);
      }
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~DetectKneeKeypointXRayResponseBodyData() = default;
};
class DetectKneeKeypointXRayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectKneeKeypointXRayResponseBodyData> data{};

  DetectKneeKeypointXRayResponseBody() {}

  explicit DetectKneeKeypointXRayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectKneeKeypointXRayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectKneeKeypointXRayResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectKneeKeypointXRayResponseBody() = default;
};
class DetectKneeKeypointXRayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectKneeKeypointXRayResponseBody> body{};

  DetectKneeKeypointXRayResponse() {}

  explicit DetectKneeKeypointXRayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectKneeKeypointXRayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectKneeKeypointXRayResponseBody>(model1);
      }
    }
  }


  virtual ~DetectKneeKeypointXRayResponse() = default;
};
class RunMedQARequest : public Darabonba::Model {
public:
  shared_ptr<string> question{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  RunMedQARequest() {}

  explicit RunMedQARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["Question"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~RunMedQARequest() = default;
};
class RunMedQAResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<vector<string>> similarQuestion{};

  RunMedQAResponseBodyData() {}

  explicit RunMedQAResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = boost::any(*answer);
    }
    if (similarQuestion) {
      res["SimilarQuestion"] = boost::any(*similarQuestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["Answer"]));
    }
    if (m.find("SimilarQuestion") != m.end() && !m["SimilarQuestion"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SimilarQuestion"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SimilarQuestion"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      similarQuestion = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunMedQAResponseBodyData() = default;
};
class RunMedQAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RunMedQAResponseBodyData> data{};

  RunMedQAResponseBody() {}

  explicit RunMedQAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunMedQAResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RunMedQAResponseBodyData>(model1);
      }
    }
  }


  virtual ~RunMedQAResponseBody() = default;
};
class RunMedQAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RunMedQAResponseBody> body{};

  RunMedQAResponse() {}

  explicit RunMedQAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunMedQAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunMedQAResponseBody>(model1);
      }
    }
  }


  virtual ~RunMedQAResponse() = default;
};
class DetectKneeXRayRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};

  DetectKneeXRayRequest() {}

  explicit DetectKneeXRayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
  }


  virtual ~DetectKneeXRayRequest() = default;
};
class DetectKneeXRayAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};

  DetectKneeXRayAdvanceRequest() {}

  explicit DetectKneeXRayAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
  }


  virtual ~DetectKneeXRayAdvanceRequest() = default;
};
class DetectKneeXRayResponseBodyDataKLDetections : public Darabonba::Model {
public:
  shared_ptr<vector<double>> detections{};

  DetectKneeXRayResponseBodyDataKLDetections() {}

  explicit DetectKneeXRayResponseBodyDataKLDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      res["Detections"] = boost::any(*detections);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Detections"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      detections = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectKneeXRayResponseBodyDataKLDetections() = default;
};
class DetectKneeXRayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectKneeXRayResponseBodyDataKLDetections>> KLDetections{};

  DetectKneeXRayResponseBodyData() {}

  explicit DetectKneeXRayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (KLDetections) {
      vector<boost::any> temp1;
      for(auto item1:*KLDetections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KLDetections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KLDetections") != m.end() && !m["KLDetections"].empty()) {
      if (typeid(vector<boost::any>) == m["KLDetections"].type()) {
        vector<DetectKneeXRayResponseBodyDataKLDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KLDetections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectKneeXRayResponseBodyDataKLDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        KLDetections = make_shared<vector<DetectKneeXRayResponseBodyDataKLDetections>>(expect1);
      }
    }
  }


  virtual ~DetectKneeXRayResponseBodyData() = default;
};
class DetectKneeXRayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectKneeXRayResponseBodyData> data{};

  DetectKneeXRayResponseBody() {}

  explicit DetectKneeXRayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectKneeXRayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectKneeXRayResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectKneeXRayResponseBody() = default;
};
class DetectKneeXRayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectKneeXRayResponseBody> body{};

  DetectKneeXRayResponse() {}

  explicit DetectKneeXRayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectKneeXRayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectKneeXRayResponseBody>(model1);
      }
    }
  }


  virtual ~DetectKneeXRayResponse() = default;
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
class DetectRibFractureRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectRibFractureRequestURLList() {}

  explicit DetectRibFractureRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectRibFractureRequestURLList() = default;
};
class DetectRibFractureRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<DetectRibFractureRequestURLList>> URLList{};

  DetectRibFractureRequest() {}

  explicit DetectRibFractureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectRibFractureRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectRibFractureRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectRibFractureRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectRibFractureRequest() = default;
};
class DetectRibFractureResponseBodyDataDetections : public Darabonba::Model {
public:
  shared_ptr<vector<long>> coordinates{};
  shared_ptr<long> fractureId{};
  shared_ptr<vector<long>> coordinateImage{};
  shared_ptr<double> fractureConfidence{};
  shared_ptr<string> fractureCategory{};
  shared_ptr<string> fractureLocation{};
  shared_ptr<long> fractureSegment{};

  DetectRibFractureResponseBodyDataDetections() {}

  explicit DetectRibFractureResponseBodyDataDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (fractureId) {
      res["FractureId"] = boost::any(*fractureId);
    }
    if (coordinateImage) {
      res["CoordinateImage"] = boost::any(*coordinateImage);
    }
    if (fractureConfidence) {
      res["FractureConfidence"] = boost::any(*fractureConfidence);
    }
    if (fractureCategory) {
      res["FractureCategory"] = boost::any(*fractureCategory);
    }
    if (fractureLocation) {
      res["FractureLocation"] = boost::any(*fractureLocation);
    }
    if (fractureSegment) {
      res["FractureSegment"] = boost::any(*fractureSegment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinates = make_shared<vector<long>>(toVec1);
    }
    if (m.find("FractureId") != m.end() && !m["FractureId"].empty()) {
      fractureId = make_shared<long>(boost::any_cast<long>(m["FractureId"]));
    }
    if (m.find("CoordinateImage") != m.end() && !m["CoordinateImage"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CoordinateImage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoordinateImage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinateImage = make_shared<vector<long>>(toVec1);
    }
    if (m.find("FractureConfidence") != m.end() && !m["FractureConfidence"].empty()) {
      fractureConfidence = make_shared<double>(boost::any_cast<double>(m["FractureConfidence"]));
    }
    if (m.find("FractureCategory") != m.end() && !m["FractureCategory"].empty()) {
      fractureCategory = make_shared<string>(boost::any_cast<string>(m["FractureCategory"]));
    }
    if (m.find("FractureLocation") != m.end() && !m["FractureLocation"].empty()) {
      fractureLocation = make_shared<string>(boost::any_cast<string>(m["FractureLocation"]));
    }
    if (m.find("FractureSegment") != m.end() && !m["FractureSegment"].empty()) {
      fractureSegment = make_shared<long>(boost::any_cast<long>(m["FractureSegment"]));
    }
  }


  virtual ~DetectRibFractureResponseBodyDataDetections() = default;
};
class DetectRibFractureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectRibFractureResponseBodyDataDetections>> detections{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> resultURL{};
  shared_ptr<vector<double>> spacing{};

  DetectRibFractureResponseBodyData() {}

  explicit DetectRibFractureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<DetectRibFractureResponseBodyDataDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectRibFractureResponseBodyDataDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<DetectRibFractureResponseBodyDataDetections>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectRibFractureResponseBodyData() = default;
};
class DetectRibFractureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectRibFractureResponseBodyData> data{};

  DetectRibFractureResponseBody() {}

  explicit DetectRibFractureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectRibFractureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectRibFractureResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectRibFractureResponseBody() = default;
};
class DetectRibFractureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectRibFractureResponseBody> body{};

  DetectRibFractureResponse() {}

  explicit DetectRibFractureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectRibFractureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectRibFractureResponseBody>(model1);
      }
    }
  }


  virtual ~DetectRibFractureResponse() = default;
};
class DetectCovid19CadRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectCovid19CadRequestURLList() {}

  explicit DetectCovid19CadRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectCovid19CadRequestURLList() = default;
};
class DetectCovid19CadRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};
  shared_ptr<vector<DetectCovid19CadRequestURLList>> URLList{};

  DetectCovid19CadRequest() {}

  explicit DetectCovid19CadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectCovid19CadRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectCovid19CadRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectCovid19CadRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectCovid19CadRequest() = default;
};
class DetectCovid19CadResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> normalProbability{};
  shared_ptr<string> newProbability{};
  shared_ptr<string> lesionRatio{};
  shared_ptr<string> otherProbability{};
  shared_ptr<string> mask{};

  DetectCovid19CadResponseBodyData() {}

  explicit DetectCovid19CadResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (normalProbability) {
      res["NormalProbability"] = boost::any(*normalProbability);
    }
    if (newProbability) {
      res["NewProbability"] = boost::any(*newProbability);
    }
    if (lesionRatio) {
      res["LesionRatio"] = boost::any(*lesionRatio);
    }
    if (otherProbability) {
      res["OtherProbability"] = boost::any(*otherProbability);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NormalProbability") != m.end() && !m["NormalProbability"].empty()) {
      normalProbability = make_shared<string>(boost::any_cast<string>(m["NormalProbability"]));
    }
    if (m.find("NewProbability") != m.end() && !m["NewProbability"].empty()) {
      newProbability = make_shared<string>(boost::any_cast<string>(m["NewProbability"]));
    }
    if (m.find("LesionRatio") != m.end() && !m["LesionRatio"].empty()) {
      lesionRatio = make_shared<string>(boost::any_cast<string>(m["LesionRatio"]));
    }
    if (m.find("OtherProbability") != m.end() && !m["OtherProbability"].empty()) {
      otherProbability = make_shared<string>(boost::any_cast<string>(m["OtherProbability"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
  }


  virtual ~DetectCovid19CadResponseBodyData() = default;
};
class DetectCovid19CadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectCovid19CadResponseBodyData> data{};

  DetectCovid19CadResponseBody() {}

  explicit DetectCovid19CadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectCovid19CadResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectCovid19CadResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectCovid19CadResponseBody() = default;
};
class DetectCovid19CadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectCovid19CadResponseBody> body{};

  DetectCovid19CadResponse() {}

  explicit DetectCovid19CadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectCovid19CadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectCovid19CadResponseBody>(model1);
      }
    }
  }


  virtual ~DetectCovid19CadResponse() = default;
};
class ScreenChestCTRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  ScreenChestCTRequestURLList() {}

  explicit ScreenChestCTRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ScreenChestCTRequestURLList() = default;
};
class ScreenChestCTRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgName{};
  shared_ptr<string> orgId{};
  shared_ptr<vector<ScreenChestCTRequestURLList>> URLList{};

  ScreenChestCTRequest() {}

  explicit ScreenChestCTRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenChestCTRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenChestCTRequestURLList>>(expect1);
      }
    }
  }


  virtual ~ScreenChestCTRequest() = default;
};
class ScreenChestCTResponseBodyDataLungNoduleSeriesElements : public Darabonba::Model {
public:
  shared_ptr<string> lobe{};
  shared_ptr<double> meanValue{};
  shared_ptr<string> lung{};
  shared_ptr<double> confidence{};
  shared_ptr<string> SOPInstanceUID{};
  shared_ptr<string> category{};
  shared_ptr<double> volume{};
  shared_ptr<double> diameter{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<double> z{};
  shared_ptr<double> imageX{};
  shared_ptr<double> imageY{};
  shared_ptr<double> imageZ{};

  ScreenChestCTResponseBodyDataLungNoduleSeriesElements() {}

  explicit ScreenChestCTResponseBodyDataLungNoduleSeriesElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lobe) {
      res["Lobe"] = boost::any(*lobe);
    }
    if (meanValue) {
      res["MeanValue"] = boost::any(*meanValue);
    }
    if (lung) {
      res["Lung"] = boost::any(*lung);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (SOPInstanceUID) {
      res["SOPInstanceUID"] = boost::any(*SOPInstanceUID);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    if (diameter) {
      res["Diameter"] = boost::any(*diameter);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (z) {
      res["Z"] = boost::any(*z);
    }
    if (imageX) {
      res["ImageX"] = boost::any(*imageX);
    }
    if (imageY) {
      res["ImageY"] = boost::any(*imageY);
    }
    if (imageZ) {
      res["ImageZ"] = boost::any(*imageZ);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lobe") != m.end() && !m["Lobe"].empty()) {
      lobe = make_shared<string>(boost::any_cast<string>(m["Lobe"]));
    }
    if (m.find("MeanValue") != m.end() && !m["MeanValue"].empty()) {
      meanValue = make_shared<double>(boost::any_cast<double>(m["MeanValue"]));
    }
    if (m.find("Lung") != m.end() && !m["Lung"].empty()) {
      lung = make_shared<string>(boost::any_cast<string>(m["Lung"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("SOPInstanceUID") != m.end() && !m["SOPInstanceUID"].empty()) {
      SOPInstanceUID = make_shared<string>(boost::any_cast<string>(m["SOPInstanceUID"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<double>(boost::any_cast<double>(m["Volume"]));
    }
    if (m.find("Diameter") != m.end() && !m["Diameter"].empty()) {
      diameter = make_shared<double>(boost::any_cast<double>(m["Diameter"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Z") != m.end() && !m["Z"].empty()) {
      z = make_shared<double>(boost::any_cast<double>(m["Z"]));
    }
    if (m.find("ImageX") != m.end() && !m["ImageX"].empty()) {
      imageX = make_shared<double>(boost::any_cast<double>(m["ImageX"]));
    }
    if (m.find("ImageY") != m.end() && !m["ImageY"].empty()) {
      imageY = make_shared<double>(boost::any_cast<double>(m["ImageY"]));
    }
    if (m.find("ImageZ") != m.end() && !m["ImageZ"].empty()) {
      imageZ = make_shared<double>(boost::any_cast<double>(m["ImageZ"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataLungNoduleSeriesElements() = default;
};
class ScreenChestCTResponseBodyDataLungNoduleSeries : public Darabonba::Model {
public:
  shared_ptr<string> seriesInstanceUid{};
  shared_ptr<vector<ScreenChestCTResponseBodyDataLungNoduleSeriesElements>> elements{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> report{};
  shared_ptr<vector<double>> spacing{};

  ScreenChestCTResponseBodyDataLungNoduleSeries() {}

  explicit ScreenChestCTResponseBodyDataLungNoduleSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (report) {
      res["Report"] = boost::any(*report);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<ScreenChestCTResponseBodyDataLungNoduleSeriesElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataLungNoduleSeriesElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<ScreenChestCTResponseBodyDataLungNoduleSeriesElements>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Report") != m.end() && !m["Report"].empty()) {
      report = make_shared<string>(boost::any_cast<string>(m["Report"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataLungNoduleSeries() = default;
};
class ScreenChestCTResponseBodyDataLungNodule : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataLungNoduleSeries>> series{};

  ScreenChestCTResponseBodyDataLungNodule() {}

  explicit ScreenChestCTResponseBodyDataLungNodule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<ScreenChestCTResponseBodyDataLungNoduleSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataLungNoduleSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<ScreenChestCTResponseBodyDataLungNoduleSeries>>(expect1);
      }
    }
  }


  virtual ~ScreenChestCTResponseBodyDataLungNodule() = default;
};
class ScreenChestCTResponseBodyDataCACS : public Darabonba::Model {
public:
  shared_ptr<string> resultUrl{};
  shared_ptr<string> score{};

  ScreenChestCTResponseBodyDataCACS() {}

  explicit ScreenChestCTResponseBodyDataCACS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataCACS() = default;
};
class ScreenChestCTResponseBodyDataCovid : public Darabonba::Model {
public:
  shared_ptr<string> normalProbability{};
  shared_ptr<string> newProbability{};
  shared_ptr<string> lesionRatio{};
  shared_ptr<string> otherProbability{};
  shared_ptr<string> mask{};

  ScreenChestCTResponseBodyDataCovid() {}

  explicit ScreenChestCTResponseBodyDataCovid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (normalProbability) {
      res["NormalProbability"] = boost::any(*normalProbability);
    }
    if (newProbability) {
      res["NewProbability"] = boost::any(*newProbability);
    }
    if (lesionRatio) {
      res["LesionRatio"] = boost::any(*lesionRatio);
    }
    if (otherProbability) {
      res["OtherProbability"] = boost::any(*otherProbability);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NormalProbability") != m.end() && !m["NormalProbability"].empty()) {
      normalProbability = make_shared<string>(boost::any_cast<string>(m["NormalProbability"]));
    }
    if (m.find("NewProbability") != m.end() && !m["NewProbability"].empty()) {
      newProbability = make_shared<string>(boost::any_cast<string>(m["NewProbability"]));
    }
    if (m.find("LesionRatio") != m.end() && !m["LesionRatio"].empty()) {
      lesionRatio = make_shared<string>(boost::any_cast<string>(m["LesionRatio"]));
    }
    if (m.find("OtherProbability") != m.end() && !m["OtherProbability"].empty()) {
      otherProbability = make_shared<string>(boost::any_cast<string>(m["OtherProbability"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataCovid() = default;
};
class ScreenChestCTResponseBodyDataDetectRibFractureDetections : public Darabonba::Model {
public:
  shared_ptr<long> fractureId{};
  shared_ptr<double> fractureConfidence{};
  shared_ptr<long> fractureCategory{};
  shared_ptr<vector<long>> coordinates{};
  shared_ptr<vector<long>> coordinateImage{};
  shared_ptr<string> fractureLocation{};
  shared_ptr<long> fractureSegment{};

  ScreenChestCTResponseBodyDataDetectRibFractureDetections() {}

  explicit ScreenChestCTResponseBodyDataDetectRibFractureDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fractureId) {
      res["FractureId"] = boost::any(*fractureId);
    }
    if (fractureConfidence) {
      res["FractureConfidence"] = boost::any(*fractureConfidence);
    }
    if (fractureCategory) {
      res["FractureCategory"] = boost::any(*fractureCategory);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (coordinateImage) {
      res["CoordinateImage"] = boost::any(*coordinateImage);
    }
    if (fractureLocation) {
      res["FractureLocation"] = boost::any(*fractureLocation);
    }
    if (fractureSegment) {
      res["FractureSegment"] = boost::any(*fractureSegment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FractureId") != m.end() && !m["FractureId"].empty()) {
      fractureId = make_shared<long>(boost::any_cast<long>(m["FractureId"]));
    }
    if (m.find("FractureConfidence") != m.end() && !m["FractureConfidence"].empty()) {
      fractureConfidence = make_shared<double>(boost::any_cast<double>(m["FractureConfidence"]));
    }
    if (m.find("FractureCategory") != m.end() && !m["FractureCategory"].empty()) {
      fractureCategory = make_shared<long>(boost::any_cast<long>(m["FractureCategory"]));
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinates = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CoordinateImage") != m.end() && !m["CoordinateImage"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CoordinateImage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoordinateImage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinateImage = make_shared<vector<long>>(toVec1);
    }
    if (m.find("FractureLocation") != m.end() && !m["FractureLocation"].empty()) {
      fractureLocation = make_shared<string>(boost::any_cast<string>(m["FractureLocation"]));
    }
    if (m.find("FractureSegment") != m.end() && !m["FractureSegment"].empty()) {
      fractureSegment = make_shared<long>(boost::any_cast<long>(m["FractureSegment"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectRibFractureDetections() = default;
};
class ScreenChestCTResponseBodyDataDetectRibFracture : public Darabonba::Model {
public:
  shared_ptr<string> resultURL{};
  shared_ptr<vector<double>> spacing{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<vector<ScreenChestCTResponseBodyDataDetectRibFractureDetections>> detections{};

  ScreenChestCTResponseBodyDataDetectRibFracture() {}

  explicit ScreenChestCTResponseBodyDataDetectRibFracture(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<ScreenChestCTResponseBodyDataDetectRibFractureDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataDetectRibFractureDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<ScreenChestCTResponseBodyDataDetectRibFractureDetections>>(expect1);
      }
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectRibFracture() = default;
};
class ScreenChestCTResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataLungNodule> lungNodule{};
  shared_ptr<ScreenChestCTResponseBodyDataCACS> CACS{};
  shared_ptr<ScreenChestCTResponseBodyDataCovid> covid{};
  shared_ptr<ScreenChestCTResponseBodyDataDetectRibFracture> detectRibFracture{};

  ScreenChestCTResponseBodyData() {}

  explicit ScreenChestCTResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lungNodule) {
      res["LungNodule"] = lungNodule ? boost::any(lungNodule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (CACS) {
      res["CACS"] = CACS ? boost::any(CACS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (covid) {
      res["Covid"] = covid ? boost::any(covid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectRibFracture) {
      res["DetectRibFracture"] = detectRibFracture ? boost::any(detectRibFracture->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LungNodule") != m.end() && !m["LungNodule"].empty()) {
      if (typeid(map<string, boost::any>) == m["LungNodule"].type()) {
        ScreenChestCTResponseBodyDataLungNodule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LungNodule"]));
        lungNodule = make_shared<ScreenChestCTResponseBodyDataLungNodule>(model1);
      }
    }
    if (m.find("CACS") != m.end() && !m["CACS"].empty()) {
      if (typeid(map<string, boost::any>) == m["CACS"].type()) {
        ScreenChestCTResponseBodyDataCACS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CACS"]));
        CACS = make_shared<ScreenChestCTResponseBodyDataCACS>(model1);
      }
    }
    if (m.find("Covid") != m.end() && !m["Covid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Covid"].type()) {
        ScreenChestCTResponseBodyDataCovid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Covid"]));
        covid = make_shared<ScreenChestCTResponseBodyDataCovid>(model1);
      }
    }
    if (m.find("DetectRibFracture") != m.end() && !m["DetectRibFracture"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetectRibFracture"].type()) {
        ScreenChestCTResponseBodyDataDetectRibFracture model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetectRibFracture"]));
        detectRibFracture = make_shared<ScreenChestCTResponseBodyDataDetectRibFracture>(model1);
      }
    }
  }


  virtual ~ScreenChestCTResponseBodyData() = default;
};
class ScreenChestCTResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ScreenChestCTResponseBodyData> data{};

  ScreenChestCTResponseBody() {}

  explicit ScreenChestCTResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScreenChestCTResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScreenChestCTResponseBodyData>(model1);
      }
    }
  }


  virtual ~ScreenChestCTResponseBody() = default;
};
class ScreenChestCTResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScreenChestCTResponseBody> body{};

  ScreenChestCTResponse() {}

  explicit ScreenChestCTResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScreenChestCTResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScreenChestCTResponseBody>(model1);
      }
    }
  }


  virtual ~ScreenChestCTResponse() = default;
};
class DetectSkinDiseaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  DetectSkinDiseaseRequest() {}

  explicit DetectSkinDiseaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~DetectSkinDiseaseRequest() = default;
};
class DetectSkinDiseaseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  DetectSkinDiseaseAdvanceRequest() {}

  explicit DetectSkinDiseaseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~DetectSkinDiseaseAdvanceRequest() = default;
};
class DetectSkinDiseaseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> results{};

  DetectSkinDiseaseResponseBodyData() {}

  explicit DetectSkinDiseaseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (results) {
      res["Results"] = boost::any(*results);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Results"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      results = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DetectSkinDiseaseResponseBodyData() = default;
};
class DetectSkinDiseaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectSkinDiseaseResponseBodyData> data{};

  DetectSkinDiseaseResponseBody() {}

  explicit DetectSkinDiseaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectSkinDiseaseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectSkinDiseaseResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectSkinDiseaseResponseBody() = default;
};
class DetectSkinDiseaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectSkinDiseaseResponseBody> body{};

  DetectSkinDiseaseResponse() {}

  explicit DetectSkinDiseaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectSkinDiseaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectSkinDiseaseResponseBody>(model1);
      }
    }
  }


  virtual ~DetectSkinDiseaseResponse() = default;
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
  ClassifyFNFResponse classifyFNFWithOptions(shared_ptr<ClassifyFNFRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClassifyFNFResponse classifyFNF(shared_ptr<ClassifyFNFRequest> request);
  ClassifyFNFResponse classifyFNFAdvance(shared_ptr<ClassifyFNFAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLungNoduleResponse detectLungNoduleWithOptions(shared_ptr<DetectLungNoduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLungNoduleResponse detectLungNodule(shared_ptr<DetectLungNoduleRequest> request);
  RunCTRegistrationResponse runCTRegistrationWithOptions(shared_ptr<RunCTRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCTRegistrationResponse runCTRegistration(shared_ptr<RunCTRegistrationRequest> request);
  TranslateMedResponse translateMedWithOptions(shared_ptr<TranslateMedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateMedResponse translateMed(shared_ptr<TranslateMedRequest> request);
  DetectSpineMRIResponse detectSpineMRIWithOptions(shared_ptr<DetectSpineMRIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectSpineMRIResponse detectSpineMRI(shared_ptr<DetectSpineMRIRequest> request);
  CalcCACSResponse calcCACSWithOptions(shared_ptr<CalcCACSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CalcCACSResponse calcCACS(shared_ptr<CalcCACSRequest> request);
  DetectHipKeypointXRayResponse detectHipKeypointXRayWithOptions(shared_ptr<DetectHipKeypointXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectHipKeypointXRayResponse detectHipKeypointXRay(shared_ptr<DetectHipKeypointXRayRequest> request);
  DetectHipKeypointXRayResponse detectHipKeypointXRayAdvance(shared_ptr<DetectHipKeypointXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectKneeKeypointXRayResponse detectKneeKeypointXRayWithOptions(shared_ptr<DetectKneeKeypointXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectKneeKeypointXRayResponse detectKneeKeypointXRay(shared_ptr<DetectKneeKeypointXRayRequest> request);
  DetectKneeKeypointXRayResponse detectKneeKeypointXRayAdvance(shared_ptr<DetectKneeKeypointXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunMedQAResponse runMedQAWithOptions(shared_ptr<RunMedQARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunMedQAResponse runMedQA(shared_ptr<RunMedQARequest> request);
  DetectKneeXRayResponse detectKneeXRayWithOptions(shared_ptr<DetectKneeXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectKneeXRayResponse detectKneeXRay(shared_ptr<DetectKneeXRayRequest> request);
  DetectKneeXRayResponse detectKneeXRayAdvance(shared_ptr<DetectKneeXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  DetectRibFractureResponse detectRibFractureWithOptions(shared_ptr<DetectRibFractureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectRibFractureResponse detectRibFracture(shared_ptr<DetectRibFractureRequest> request);
  DetectCovid19CadResponse detectCovid19CadWithOptions(shared_ptr<DetectCovid19CadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectCovid19CadResponse detectCovid19Cad(shared_ptr<DetectCovid19CadRequest> request);
  ScreenChestCTResponse screenChestCTWithOptions(shared_ptr<ScreenChestCTRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenChestCTResponse screenChestCT(shared_ptr<ScreenChestCTRequest> request);
  DetectSkinDiseaseResponse detectSkinDiseaseWithOptions(shared_ptr<DetectSkinDiseaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectSkinDiseaseResponse detectSkinDisease(shared_ptr<DetectSkinDiseaseRequest> request);
  DetectSkinDiseaseResponse detectSkinDiseaseAdvance(shared_ptr<DetectSkinDiseaseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imageprocess20200320

#endif
