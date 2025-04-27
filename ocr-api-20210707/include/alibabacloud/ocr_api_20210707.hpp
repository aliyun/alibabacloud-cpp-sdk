// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OCR-API20210707_H_
#define ALIBABACLOUD_OCR-API20210707_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ocr-api20210707 {
class DataSubImagesFigureInfoValueFigureDetailsFigurePoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DataSubImagesFigureInfoValueFigureDetailsFigurePoints() {}

  explicit DataSubImagesFigureInfoValueFigureDetailsFigurePoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DataSubImagesFigureInfoValueFigureDetailsFigurePoints() = default;
};
class DataSubImagesFigureInfoValueFigureDetailsFigureRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DataSubImagesFigureInfoValueFigureDetailsFigureRect() {}

  explicit DataSubImagesFigureInfoValueFigureDetailsFigureRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DataSubImagesFigureInfoValueFigureDetailsFigureRect() = default;
};
class DataSubImagesFigureInfoValueFigureDetails : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<boost::any> data{};
  shared_ptr<vector<DataSubImagesFigureInfoValueFigureDetailsFigurePoints>> figurePoints{};
  shared_ptr<DataSubImagesFigureInfoValueFigureDetailsFigureRect> figureRect{};
  shared_ptr<long> figureAngle{};

  DataSubImagesFigureInfoValueFigureDetails() {}

  explicit DataSubImagesFigureInfoValueFigureDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (figurePoints) {
      vector<boost::any> temp1;
      for(auto item1:*figurePoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FigurePoints"] = boost::any(temp1);
    }
    if (figureRect) {
      res["FigureRect"] = figureRect ? boost::any(figureRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (figureAngle) {
      res["FigureAngle"] = boost::any(*figureAngle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("FigurePoints") != m.end() && !m["FigurePoints"].empty()) {
      if (typeid(vector<boost::any>) == m["FigurePoints"].type()) {
        vector<DataSubImagesFigureInfoValueFigureDetailsFigurePoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FigurePoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSubImagesFigureInfoValueFigureDetailsFigurePoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        figurePoints = make_shared<vector<DataSubImagesFigureInfoValueFigureDetailsFigurePoints>>(expect1);
      }
    }
    if (m.find("FigureRect") != m.end() && !m["FigureRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["FigureRect"].type()) {
        DataSubImagesFigureInfoValueFigureDetailsFigureRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FigureRect"]));
        figureRect = make_shared<DataSubImagesFigureInfoValueFigureDetailsFigureRect>(model1);
      }
    }
    if (m.find("FigureAngle") != m.end() && !m["FigureAngle"].empty()) {
      figureAngle = make_shared<long>(boost::any_cast<long>(m["FigureAngle"]));
    }
  }


  virtual ~DataSubImagesFigureInfoValueFigureDetails() = default;
};
class DataSubImagesFigureInfoValue : public Darabonba::Model {
public:
  shared_ptr<long> figureCount{};
  shared_ptr<vector<DataSubImagesFigureInfoValueFigureDetails>> figureDetails{};

  DataSubImagesFigureInfoValue() {}

  explicit DataSubImagesFigureInfoValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figureCount) {
      res["FigureCount"] = boost::any(*figureCount);
    }
    if (figureDetails) {
      vector<boost::any> temp1;
      for(auto item1:*figureDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FigureDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FigureCount") != m.end() && !m["FigureCount"].empty()) {
      figureCount = make_shared<long>(boost::any_cast<long>(m["FigureCount"]));
    }
    if (m.find("FigureDetails") != m.end() && !m["FigureDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["FigureDetails"].type()) {
        vector<DataSubImagesFigureInfoValueFigureDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FigureDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSubImagesFigureInfoValueFigureDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        figureDetails = make_shared<vector<DataSubImagesFigureInfoValueFigureDetails>>(expect1);
      }
    }
  }


  virtual ~DataSubImagesFigureInfoValue() = default;
};
class DataSubImagesKvInfoKvDetailsValueValuePoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DataSubImagesKvInfoKvDetailsValueValuePoints() {}

  explicit DataSubImagesKvInfoKvDetailsValueValuePoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DataSubImagesKvInfoKvDetailsValueValuePoints() = default;
};
class DataSubImagesKvInfoKvDetailsValueValueRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DataSubImagesKvInfoKvDetailsValueValueRect() {}

  explicit DataSubImagesKvInfoKvDetailsValueValueRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DataSubImagesKvInfoKvDetailsValueValueRect() = default;
};
class DataSubImagesKvInfoKvDetailsValue : public Darabonba::Model {
public:
  shared_ptr<string> keyName{};
  shared_ptr<long> keyConfidence{};
  shared_ptr<string> value{};
  shared_ptr<long> valueConfidence{};
  shared_ptr<vector<DataSubImagesKvInfoKvDetailsValueValuePoints>> valuePoints{};
  shared_ptr<DataSubImagesKvInfoKvDetailsValueValueRect> valueRect{};
  shared_ptr<long> valueAngle{};

  DataSubImagesKvInfoKvDetailsValue() {}

  explicit DataSubImagesKvInfoKvDetailsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyName) {
      res["KeyName"] = boost::any(*keyName);
    }
    if (keyConfidence) {
      res["KeyConfidence"] = boost::any(*keyConfidence);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueConfidence) {
      res["ValueConfidence"] = boost::any(*valueConfidence);
    }
    if (valuePoints) {
      vector<boost::any> temp1;
      for(auto item1:*valuePoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ValuePoints"] = boost::any(temp1);
    }
    if (valueRect) {
      res["ValueRect"] = valueRect ? boost::any(valueRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (valueAngle) {
      res["ValueAngle"] = boost::any(*valueAngle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyName") != m.end() && !m["KeyName"].empty()) {
      keyName = make_shared<string>(boost::any_cast<string>(m["KeyName"]));
    }
    if (m.find("KeyConfidence") != m.end() && !m["KeyConfidence"].empty()) {
      keyConfidence = make_shared<long>(boost::any_cast<long>(m["KeyConfidence"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueConfidence") != m.end() && !m["ValueConfidence"].empty()) {
      valueConfidence = make_shared<long>(boost::any_cast<long>(m["ValueConfidence"]));
    }
    if (m.find("ValuePoints") != m.end() && !m["ValuePoints"].empty()) {
      if (typeid(vector<boost::any>) == m["ValuePoints"].type()) {
        vector<DataSubImagesKvInfoKvDetailsValueValuePoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ValuePoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSubImagesKvInfoKvDetailsValueValuePoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valuePoints = make_shared<vector<DataSubImagesKvInfoKvDetailsValueValuePoints>>(expect1);
      }
    }
    if (m.find("ValueRect") != m.end() && !m["ValueRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["ValueRect"].type()) {
        DataSubImagesKvInfoKvDetailsValueValueRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ValueRect"]));
        valueRect = make_shared<DataSubImagesKvInfoKvDetailsValueValueRect>(model1);
      }
    }
    if (m.find("ValueAngle") != m.end() && !m["ValueAngle"].empty()) {
      valueAngle = make_shared<long>(boost::any_cast<long>(m["ValueAngle"]));
    }
  }


  virtual ~DataSubImagesKvInfoKvDetailsValue() = default;
};
class RecognizeAdvancedRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> needSortPage{};
  shared_ptr<bool> noStamp{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputFigure{};
  shared_ptr<bool> outputTable{};
  shared_ptr<bool> paragraph{};
  shared_ptr<bool> row{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeAdvancedRequest() {}

  explicit RecognizeAdvancedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (needSortPage) {
      res["NeedSortPage"] = boost::any(*needSortPage);
    }
    if (noStamp) {
      res["NoStamp"] = boost::any(*noStamp);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputFigure) {
      res["OutputFigure"] = boost::any(*outputFigure);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (paragraph) {
      res["Paragraph"] = boost::any(*paragraph);
    }
    if (row) {
      res["Row"] = boost::any(*row);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("NeedSortPage") != m.end() && !m["NeedSortPage"].empty()) {
      needSortPage = make_shared<bool>(boost::any_cast<bool>(m["NeedSortPage"]));
    }
    if (m.find("NoStamp") != m.end() && !m["NoStamp"].empty()) {
      noStamp = make_shared<bool>(boost::any_cast<bool>(m["NoStamp"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputFigure") != m.end() && !m["OutputFigure"].empty()) {
      outputFigure = make_shared<bool>(boost::any_cast<bool>(m["OutputFigure"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Paragraph") != m.end() && !m["Paragraph"].empty()) {
      paragraph = make_shared<bool>(boost::any_cast<bool>(m["Paragraph"]));
    }
    if (m.find("Row") != m.end() && !m["Row"].empty()) {
      row = make_shared<bool>(boost::any_cast<bool>(m["Row"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeAdvancedRequest() = default;
};
class RecognizeAdvancedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeAdvancedResponseBody() {}

  explicit RecognizeAdvancedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeAdvancedResponseBody() = default;
};
class RecognizeAdvancedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeAdvancedResponseBody> body{};

  RecognizeAdvancedResponse() {}

  explicit RecognizeAdvancedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeAdvancedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeAdvancedResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeAdvancedResponse() = default;
};
class RecognizeAirItineraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeAirItineraryRequest() {}

  explicit RecognizeAirItineraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeAirItineraryRequest() = default;
};
class RecognizeAirItineraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeAirItineraryResponseBody() {}

  explicit RecognizeAirItineraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeAirItineraryResponseBody() = default;
};
class RecognizeAirItineraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeAirItineraryResponseBody> body{};

  RecognizeAirItineraryResponse() {}

  explicit RecognizeAirItineraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeAirItineraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeAirItineraryResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeAirItineraryResponse() = default;
};
class RecognizeAllTextRequestAdvancedConfig : public Darabonba::Model {
public:
  shared_ptr<bool> isHandWritingTable{};
  shared_ptr<bool> isLineLessTable{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputParagraph{};
  shared_ptr<bool> outputRow{};
  shared_ptr<bool> outputTable{};
  shared_ptr<bool> outputTableExcel{};
  shared_ptr<bool> outputTableHtml{};

  RecognizeAllTextRequestAdvancedConfig() {}

  explicit RecognizeAllTextRequestAdvancedConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isHandWritingTable) {
      res["IsHandWritingTable"] = boost::any(*isHandWritingTable);
    }
    if (isLineLessTable) {
      res["IsLineLessTable"] = boost::any(*isLineLessTable);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputParagraph) {
      res["OutputParagraph"] = boost::any(*outputParagraph);
    }
    if (outputRow) {
      res["OutputRow"] = boost::any(*outputRow);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (outputTableExcel) {
      res["OutputTableExcel"] = boost::any(*outputTableExcel);
    }
    if (outputTableHtml) {
      res["OutputTableHtml"] = boost::any(*outputTableHtml);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsHandWritingTable") != m.end() && !m["IsHandWritingTable"].empty()) {
      isHandWritingTable = make_shared<bool>(boost::any_cast<bool>(m["IsHandWritingTable"]));
    }
    if (m.find("IsLineLessTable") != m.end() && !m["IsLineLessTable"].empty()) {
      isLineLessTable = make_shared<bool>(boost::any_cast<bool>(m["IsLineLessTable"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputParagraph") != m.end() && !m["OutputParagraph"].empty()) {
      outputParagraph = make_shared<bool>(boost::any_cast<bool>(m["OutputParagraph"]));
    }
    if (m.find("OutputRow") != m.end() && !m["OutputRow"].empty()) {
      outputRow = make_shared<bool>(boost::any_cast<bool>(m["OutputRow"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("OutputTableExcel") != m.end() && !m["OutputTableExcel"].empty()) {
      outputTableExcel = make_shared<bool>(boost::any_cast<bool>(m["OutputTableExcel"]));
    }
    if (m.find("OutputTableHtml") != m.end() && !m["OutputTableHtml"].empty()) {
      outputTableHtml = make_shared<bool>(boost::any_cast<bool>(m["OutputTableHtml"]));
    }
  }


  virtual ~RecognizeAllTextRequestAdvancedConfig() = default;
};
class RecognizeAllTextRequestIdCardConfig : public Darabonba::Model {
public:
  shared_ptr<bool> llmRec{};
  shared_ptr<bool> outputIdCardQuality{};

  RecognizeAllTextRequestIdCardConfig() {}

  explicit RecognizeAllTextRequestIdCardConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (llmRec) {
      res["Llm_rec"] = boost::any(*llmRec);
    }
    if (outputIdCardQuality) {
      res["OutputIdCardQuality"] = boost::any(*outputIdCardQuality);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Llm_rec") != m.end() && !m["Llm_rec"].empty()) {
      llmRec = make_shared<bool>(boost::any_cast<bool>(m["Llm_rec"]));
    }
    if (m.find("OutputIdCardQuality") != m.end() && !m["OutputIdCardQuality"].empty()) {
      outputIdCardQuality = make_shared<bool>(boost::any_cast<bool>(m["OutputIdCardQuality"]));
    }
  }


  virtual ~RecognizeAllTextRequestIdCardConfig() = default;
};
class RecognizeAllTextRequestInternationalBusinessLicenseConfig : public Darabonba::Model {
public:
  shared_ptr<string> country{};

  RecognizeAllTextRequestInternationalBusinessLicenseConfig() {}

  explicit RecognizeAllTextRequestInternationalBusinessLicenseConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (country) {
      res["Country"] = boost::any(*country);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
  }


  virtual ~RecognizeAllTextRequestInternationalBusinessLicenseConfig() = default;
};
class RecognizeAllTextRequestInternationalIdCardConfig : public Darabonba::Model {
public:
  shared_ptr<string> country{};

  RecognizeAllTextRequestInternationalIdCardConfig() {}

  explicit RecognizeAllTextRequestInternationalIdCardConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (country) {
      res["Country"] = boost::any(*country);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
  }


  virtual ~RecognizeAllTextRequestInternationalIdCardConfig() = default;
};
class RecognizeAllTextRequestMultiLanConfig : public Darabonba::Model {
public:
  shared_ptr<string> languages{};

  RecognizeAllTextRequestMultiLanConfig() {}

  explicit RecognizeAllTextRequestMultiLanConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (languages) {
      res["Languages"] = boost::any(*languages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Languages") != m.end() && !m["Languages"].empty()) {
      languages = make_shared<string>(boost::any_cast<string>(m["Languages"]));
    }
  }


  virtual ~RecognizeAllTextRequestMultiLanConfig() = default;
};
class RecognizeAllTextRequestTableConfig : public Darabonba::Model {
public:
  shared_ptr<bool> isHandWritingTable{};
  shared_ptr<bool> isLineLessTable{};
  shared_ptr<bool> outputTableExcel{};
  shared_ptr<bool> outputTableHtml{};

  RecognizeAllTextRequestTableConfig() {}

  explicit RecognizeAllTextRequestTableConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isHandWritingTable) {
      res["IsHandWritingTable"] = boost::any(*isHandWritingTable);
    }
    if (isLineLessTable) {
      res["IsLineLessTable"] = boost::any(*isLineLessTable);
    }
    if (outputTableExcel) {
      res["OutputTableExcel"] = boost::any(*outputTableExcel);
    }
    if (outputTableHtml) {
      res["OutputTableHtml"] = boost::any(*outputTableHtml);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsHandWritingTable") != m.end() && !m["IsHandWritingTable"].empty()) {
      isHandWritingTable = make_shared<bool>(boost::any_cast<bool>(m["IsHandWritingTable"]));
    }
    if (m.find("IsLineLessTable") != m.end() && !m["IsLineLessTable"].empty()) {
      isLineLessTable = make_shared<bool>(boost::any_cast<bool>(m["IsLineLessTable"]));
    }
    if (m.find("OutputTableExcel") != m.end() && !m["OutputTableExcel"].empty()) {
      outputTableExcel = make_shared<bool>(boost::any_cast<bool>(m["OutputTableExcel"]));
    }
    if (m.find("OutputTableHtml") != m.end() && !m["OutputTableHtml"].empty()) {
      outputTableHtml = make_shared<bool>(boost::any_cast<bool>(m["OutputTableHtml"]));
    }
  }


  virtual ~RecognizeAllTextRequestTableConfig() = default;
};
class RecognizeAllTextRequest : public Darabonba::Model {
public:
  shared_ptr<RecognizeAllTextRequestAdvancedConfig> advancedConfig{};
  shared_ptr<RecognizeAllTextRequestIdCardConfig> idCardConfig{};
  shared_ptr<RecognizeAllTextRequestInternationalBusinessLicenseConfig> internationalBusinessLicenseConfig{};
  shared_ptr<RecognizeAllTextRequestInternationalIdCardConfig> internationalIdCardConfig{};
  shared_ptr<RecognizeAllTextRequestMultiLanConfig> multiLanConfig{};
  shared_ptr<bool> outputBarCode{};
  shared_ptr<string> outputCoordinate{};
  shared_ptr<bool> outputFigure{};
  shared_ptr<bool> outputKVExcel{};
  shared_ptr<bool> outputOricoord{};
  shared_ptr<bool> outputQrcode{};
  shared_ptr<bool> outputStamp{};
  shared_ptr<long> pageNo{};
  shared_ptr<RecognizeAllTextRequestTableConfig> tableConfig{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeAllTextRequest() {}

  explicit RecognizeAllTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedConfig) {
      res["AdvancedConfig"] = advancedConfig ? boost::any(advancedConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idCardConfig) {
      res["IdCardConfig"] = idCardConfig ? boost::any(idCardConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internationalBusinessLicenseConfig) {
      res["InternationalBusinessLicenseConfig"] = internationalBusinessLicenseConfig ? boost::any(internationalBusinessLicenseConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internationalIdCardConfig) {
      res["InternationalIdCardConfig"] = internationalIdCardConfig ? boost::any(internationalIdCardConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (multiLanConfig) {
      res["MultiLanConfig"] = multiLanConfig ? boost::any(multiLanConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputBarCode) {
      res["OutputBarCode"] = boost::any(*outputBarCode);
    }
    if (outputCoordinate) {
      res["OutputCoordinate"] = boost::any(*outputCoordinate);
    }
    if (outputFigure) {
      res["OutputFigure"] = boost::any(*outputFigure);
    }
    if (outputKVExcel) {
      res["OutputKVExcel"] = boost::any(*outputKVExcel);
    }
    if (outputOricoord) {
      res["OutputOricoord"] = boost::any(*outputOricoord);
    }
    if (outputQrcode) {
      res["OutputQrcode"] = boost::any(*outputQrcode);
    }
    if (outputStamp) {
      res["OutputStamp"] = boost::any(*outputStamp);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (tableConfig) {
      res["TableConfig"] = tableConfig ? boost::any(tableConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedConfig") != m.end() && !m["AdvancedConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdvancedConfig"].type()) {
        RecognizeAllTextRequestAdvancedConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdvancedConfig"]));
        advancedConfig = make_shared<RecognizeAllTextRequestAdvancedConfig>(model1);
      }
    }
    if (m.find("IdCardConfig") != m.end() && !m["IdCardConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardConfig"].type()) {
        RecognizeAllTextRequestIdCardConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardConfig"]));
        idCardConfig = make_shared<RecognizeAllTextRequestIdCardConfig>(model1);
      }
    }
    if (m.find("InternationalBusinessLicenseConfig") != m.end() && !m["InternationalBusinessLicenseConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InternationalBusinessLicenseConfig"].type()) {
        RecognizeAllTextRequestInternationalBusinessLicenseConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InternationalBusinessLicenseConfig"]));
        internationalBusinessLicenseConfig = make_shared<RecognizeAllTextRequestInternationalBusinessLicenseConfig>(model1);
      }
    }
    if (m.find("InternationalIdCardConfig") != m.end() && !m["InternationalIdCardConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InternationalIdCardConfig"].type()) {
        RecognizeAllTextRequestInternationalIdCardConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InternationalIdCardConfig"]));
        internationalIdCardConfig = make_shared<RecognizeAllTextRequestInternationalIdCardConfig>(model1);
      }
    }
    if (m.find("MultiLanConfig") != m.end() && !m["MultiLanConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MultiLanConfig"].type()) {
        RecognizeAllTextRequestMultiLanConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MultiLanConfig"]));
        multiLanConfig = make_shared<RecognizeAllTextRequestMultiLanConfig>(model1);
      }
    }
    if (m.find("OutputBarCode") != m.end() && !m["OutputBarCode"].empty()) {
      outputBarCode = make_shared<bool>(boost::any_cast<bool>(m["OutputBarCode"]));
    }
    if (m.find("OutputCoordinate") != m.end() && !m["OutputCoordinate"].empty()) {
      outputCoordinate = make_shared<string>(boost::any_cast<string>(m["OutputCoordinate"]));
    }
    if (m.find("OutputFigure") != m.end() && !m["OutputFigure"].empty()) {
      outputFigure = make_shared<bool>(boost::any_cast<bool>(m["OutputFigure"]));
    }
    if (m.find("OutputKVExcel") != m.end() && !m["OutputKVExcel"].empty()) {
      outputKVExcel = make_shared<bool>(boost::any_cast<bool>(m["OutputKVExcel"]));
    }
    if (m.find("OutputOricoord") != m.end() && !m["OutputOricoord"].empty()) {
      outputOricoord = make_shared<bool>(boost::any_cast<bool>(m["OutputOricoord"]));
    }
    if (m.find("OutputQrcode") != m.end() && !m["OutputQrcode"].empty()) {
      outputQrcode = make_shared<bool>(boost::any_cast<bool>(m["OutputQrcode"]));
    }
    if (m.find("OutputStamp") != m.end() && !m["OutputStamp"].empty()) {
      outputStamp = make_shared<bool>(boost::any_cast<bool>(m["OutputStamp"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("TableConfig") != m.end() && !m["TableConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableConfig"].type()) {
        RecognizeAllTextRequestTableConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableConfig"]));
        tableConfig = make_shared<RecognizeAllTextRequestTableConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeAllTextRequest() = default;
};
class RecognizeAllTextShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> advancedConfigShrink{};
  shared_ptr<string> idCardConfigShrink{};
  shared_ptr<string> internationalBusinessLicenseConfigShrink{};
  shared_ptr<string> internationalIdCardConfigShrink{};
  shared_ptr<string> multiLanConfigShrink{};
  shared_ptr<bool> outputBarCode{};
  shared_ptr<string> outputCoordinate{};
  shared_ptr<bool> outputFigure{};
  shared_ptr<bool> outputKVExcel{};
  shared_ptr<bool> outputOricoord{};
  shared_ptr<bool> outputQrcode{};
  shared_ptr<bool> outputStamp{};
  shared_ptr<long> pageNo{};
  shared_ptr<string> tableConfigShrink{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeAllTextShrinkRequest() {}

  explicit RecognizeAllTextShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedConfigShrink) {
      res["AdvancedConfig"] = boost::any(*advancedConfigShrink);
    }
    if (idCardConfigShrink) {
      res["IdCardConfig"] = boost::any(*idCardConfigShrink);
    }
    if (internationalBusinessLicenseConfigShrink) {
      res["InternationalBusinessLicenseConfig"] = boost::any(*internationalBusinessLicenseConfigShrink);
    }
    if (internationalIdCardConfigShrink) {
      res["InternationalIdCardConfig"] = boost::any(*internationalIdCardConfigShrink);
    }
    if (multiLanConfigShrink) {
      res["MultiLanConfig"] = boost::any(*multiLanConfigShrink);
    }
    if (outputBarCode) {
      res["OutputBarCode"] = boost::any(*outputBarCode);
    }
    if (outputCoordinate) {
      res["OutputCoordinate"] = boost::any(*outputCoordinate);
    }
    if (outputFigure) {
      res["OutputFigure"] = boost::any(*outputFigure);
    }
    if (outputKVExcel) {
      res["OutputKVExcel"] = boost::any(*outputKVExcel);
    }
    if (outputOricoord) {
      res["OutputOricoord"] = boost::any(*outputOricoord);
    }
    if (outputQrcode) {
      res["OutputQrcode"] = boost::any(*outputQrcode);
    }
    if (outputStamp) {
      res["OutputStamp"] = boost::any(*outputStamp);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (tableConfigShrink) {
      res["TableConfig"] = boost::any(*tableConfigShrink);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedConfig") != m.end() && !m["AdvancedConfig"].empty()) {
      advancedConfigShrink = make_shared<string>(boost::any_cast<string>(m["AdvancedConfig"]));
    }
    if (m.find("IdCardConfig") != m.end() && !m["IdCardConfig"].empty()) {
      idCardConfigShrink = make_shared<string>(boost::any_cast<string>(m["IdCardConfig"]));
    }
    if (m.find("InternationalBusinessLicenseConfig") != m.end() && !m["InternationalBusinessLicenseConfig"].empty()) {
      internationalBusinessLicenseConfigShrink = make_shared<string>(boost::any_cast<string>(m["InternationalBusinessLicenseConfig"]));
    }
    if (m.find("InternationalIdCardConfig") != m.end() && !m["InternationalIdCardConfig"].empty()) {
      internationalIdCardConfigShrink = make_shared<string>(boost::any_cast<string>(m["InternationalIdCardConfig"]));
    }
    if (m.find("MultiLanConfig") != m.end() && !m["MultiLanConfig"].empty()) {
      multiLanConfigShrink = make_shared<string>(boost::any_cast<string>(m["MultiLanConfig"]));
    }
    if (m.find("OutputBarCode") != m.end() && !m["OutputBarCode"].empty()) {
      outputBarCode = make_shared<bool>(boost::any_cast<bool>(m["OutputBarCode"]));
    }
    if (m.find("OutputCoordinate") != m.end() && !m["OutputCoordinate"].empty()) {
      outputCoordinate = make_shared<string>(boost::any_cast<string>(m["OutputCoordinate"]));
    }
    if (m.find("OutputFigure") != m.end() && !m["OutputFigure"].empty()) {
      outputFigure = make_shared<bool>(boost::any_cast<bool>(m["OutputFigure"]));
    }
    if (m.find("OutputKVExcel") != m.end() && !m["OutputKVExcel"].empty()) {
      outputKVExcel = make_shared<bool>(boost::any_cast<bool>(m["OutputKVExcel"]));
    }
    if (m.find("OutputOricoord") != m.end() && !m["OutputOricoord"].empty()) {
      outputOricoord = make_shared<bool>(boost::any_cast<bool>(m["OutputOricoord"]));
    }
    if (m.find("OutputQrcode") != m.end() && !m["OutputQrcode"].empty()) {
      outputQrcode = make_shared<bool>(boost::any_cast<bool>(m["OutputQrcode"]));
    }
    if (m.find("OutputStamp") != m.end() && !m["OutputStamp"].empty()) {
      outputStamp = make_shared<bool>(boost::any_cast<bool>(m["OutputStamp"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("TableConfig") != m.end() && !m["TableConfig"].empty()) {
      tableConfigShrink = make_shared<string>(boost::any_cast<string>(m["TableConfig"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeAllTextShrinkRequest() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodePoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodePoints() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodePoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodePoints() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodeRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodeRect() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodeRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodeRect() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetails : public Darabonba::Model {
public:
  shared_ptr<long> barCodeAngle{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodePoints>> barCodePoints{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodeRect> barCodeRect{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> type{};

  RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetails() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (barCodeAngle) {
      res["BarCodeAngle"] = boost::any(*barCodeAngle);
    }
    if (barCodePoints) {
      vector<boost::any> temp1;
      for(auto item1:*barCodePoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BarCodePoints"] = boost::any(temp1);
    }
    if (barCodeRect) {
      res["BarCodeRect"] = barCodeRect ? boost::any(barCodeRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BarCodeAngle") != m.end() && !m["BarCodeAngle"].empty()) {
      barCodeAngle = make_shared<long>(boost::any_cast<long>(m["BarCodeAngle"]));
    }
    if (m.find("BarCodePoints") != m.end() && !m["BarCodePoints"].empty()) {
      if (typeid(vector<boost::any>) == m["BarCodePoints"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodePoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BarCodePoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodePoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        barCodePoints = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodePoints>>(expect1);
      }
    }
    if (m.find("BarCodeRect") != m.end() && !m["BarCodeRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["BarCodeRect"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodeRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BarCodeRect"]));
        barCodeRect = make_shared<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetailsBarCodeRect>(model1);
      }
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetails() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBarCodeInfo : public Darabonba::Model {
public:
  shared_ptr<long> barCodeCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetails>> barCodeDetails{};

  RecognizeAllTextResponseBodyDataSubImagesBarCodeInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBarCodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (barCodeCount) {
      res["BarCodeCount"] = boost::any(*barCodeCount);
    }
    if (barCodeDetails) {
      vector<boost::any> temp1;
      for(auto item1:*barCodeDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BarCodeDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BarCodeCount") != m.end() && !m["BarCodeCount"].empty()) {
      barCodeCount = make_shared<long>(boost::any_cast<long>(m["BarCodeCount"]));
    }
    if (m.find("BarCodeDetails") != m.end() && !m["BarCodeDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["BarCodeDetails"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BarCodeDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        barCodeDetails = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfoBarCodeDetails>>(expect1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBarCodeInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockPoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockPoints() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockPoints() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockRect() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockRect() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharPoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharPoints() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharPoints() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharRect() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharRect() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfos : public Darabonba::Model {
public:
  shared_ptr<long> charConfidence{};
  shared_ptr<string> charContent{};
  shared_ptr<long> charId{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharPoints>> charPoints{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharRect> charRect{};

  RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfos() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (charConfidence) {
      res["CharConfidence"] = boost::any(*charConfidence);
    }
    if (charContent) {
      res["CharContent"] = boost::any(*charContent);
    }
    if (charId) {
      res["CharId"] = boost::any(*charId);
    }
    if (charPoints) {
      vector<boost::any> temp1;
      for(auto item1:*charPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CharPoints"] = boost::any(temp1);
    }
    if (charRect) {
      res["CharRect"] = charRect ? boost::any(charRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharConfidence") != m.end() && !m["CharConfidence"].empty()) {
      charConfidence = make_shared<long>(boost::any_cast<long>(m["CharConfidence"]));
    }
    if (m.find("CharContent") != m.end() && !m["CharContent"].empty()) {
      charContent = make_shared<string>(boost::any_cast<string>(m["CharContent"]));
    }
    if (m.find("CharId") != m.end() && !m["CharId"].empty()) {
      charId = make_shared<long>(boost::any_cast<long>(m["CharId"]));
    }
    if (m.find("CharPoints") != m.end() && !m["CharPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["CharPoints"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CharPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        charPoints = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharPoints>>(expect1);
      }
    }
    if (m.find("CharRect") != m.end() && !m["CharRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["CharRect"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CharRect"]));
        charRect = make_shared<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfosCharRect>(model1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfos() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetails : public Darabonba::Model {
public:
  shared_ptr<long> blockAngle{};
  shared_ptr<long> blockConfidence{};
  shared_ptr<string> blockContent{};
  shared_ptr<long> blockId{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockPoints>> blockPoints{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockRect> blockRect{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfos>> charInfos{};

  RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetails() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockAngle) {
      res["BlockAngle"] = boost::any(*blockAngle);
    }
    if (blockConfidence) {
      res["BlockConfidence"] = boost::any(*blockConfidence);
    }
    if (blockContent) {
      res["BlockContent"] = boost::any(*blockContent);
    }
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (blockPoints) {
      vector<boost::any> temp1;
      for(auto item1:*blockPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockPoints"] = boost::any(temp1);
    }
    if (blockRect) {
      res["BlockRect"] = blockRect ? boost::any(blockRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (charInfos) {
      vector<boost::any> temp1;
      for(auto item1:*charInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CharInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockAngle") != m.end() && !m["BlockAngle"].empty()) {
      blockAngle = make_shared<long>(boost::any_cast<long>(m["BlockAngle"]));
    }
    if (m.find("BlockConfidence") != m.end() && !m["BlockConfidence"].empty()) {
      blockConfidence = make_shared<long>(boost::any_cast<long>(m["BlockConfidence"]));
    }
    if (m.find("BlockContent") != m.end() && !m["BlockContent"].empty()) {
      blockContent = make_shared<string>(boost::any_cast<string>(m["BlockContent"]));
    }
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<long>(boost::any_cast<long>(m["BlockId"]));
    }
    if (m.find("BlockPoints") != m.end() && !m["BlockPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockPoints"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockPoints = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockPoints>>(expect1);
      }
    }
    if (m.find("BlockRect") != m.end() && !m["BlockRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlockRect"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlockRect"]));
        blockRect = make_shared<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsBlockRect>(model1);
      }
    }
    if (m.find("CharInfos") != m.end() && !m["CharInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CharInfos"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CharInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        charInfos = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetailsCharInfos>>(expect1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetails() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesBlockInfo : public Darabonba::Model {
public:
  shared_ptr<long> blockCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetails>> blockDetails{};

  RecognizeAllTextResponseBodyDataSubImagesBlockInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesBlockInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockCount) {
      res["BlockCount"] = boost::any(*blockCount);
    }
    if (blockDetails) {
      vector<boost::any> temp1;
      for(auto item1:*blockDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockCount") != m.end() && !m["BlockCount"].empty()) {
      blockCount = make_shared<long>(boost::any_cast<long>(m["BlockCount"]));
    }
    if (m.find("BlockDetails") != m.end() && !m["BlockDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockDetails"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockDetails = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesBlockInfoBlockDetails>>(expect1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesBlockInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesKvInfo : public Darabonba::Model {
public:
  shared_ptr<boost::any> data{};
  shared_ptr<long> kvCount{};
  shared_ptr<map<string, DataSubImagesKvInfoKvDetailsValue>> kvDetails{};

  RecognizeAllTextResponseBodyDataSubImagesKvInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesKvInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (kvCount) {
      res["KvCount"] = boost::any(*kvCount);
    }
    if (kvDetails) {
      map<string, boost::any> temp1;
      for(auto item1:*kvDetails){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["KvDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("KvCount") != m.end() && !m["KvCount"].empty()) {
      kvCount = make_shared<long>(boost::any_cast<long>(m["KvCount"]));
    }
    if (m.find("KvDetails") != m.end() && !m["KvDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["KvDetails"].type()) {
        map<string, DataSubImagesKvInfoKvDetailsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["KvDetails"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSubImagesKvInfoKvDetailsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        kvDetails = make_shared<map<string, DataSubImagesKvInfoKvDetailsValue>>(expect1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesKvInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesParagraphInfoParagraphDetails : public Darabonba::Model {
public:
  shared_ptr<vector<long>> blockList{};
  shared_ptr<string> paragraphContent{};
  shared_ptr<long> paragraphId{};

  RecognizeAllTextResponseBodyDataSubImagesParagraphInfoParagraphDetails() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesParagraphInfoParagraphDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockList) {
      res["BlockList"] = boost::any(*blockList);
    }
    if (paragraphContent) {
      res["ParagraphContent"] = boost::any(*paragraphContent);
    }
    if (paragraphId) {
      res["ParagraphId"] = boost::any(*paragraphId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockList") != m.end() && !m["BlockList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["BlockList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlockList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      blockList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ParagraphContent") != m.end() && !m["ParagraphContent"].empty()) {
      paragraphContent = make_shared<string>(boost::any_cast<string>(m["ParagraphContent"]));
    }
    if (m.find("ParagraphId") != m.end() && !m["ParagraphId"].empty()) {
      paragraphId = make_shared<long>(boost::any_cast<long>(m["ParagraphId"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesParagraphInfoParagraphDetails() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesParagraphInfo : public Darabonba::Model {
public:
  shared_ptr<long> paragraphCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesParagraphInfoParagraphDetails>> paragraphDetails{};

  RecognizeAllTextResponseBodyDataSubImagesParagraphInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesParagraphInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paragraphCount) {
      res["ParagraphCount"] = boost::any(*paragraphCount);
    }
    if (paragraphDetails) {
      vector<boost::any> temp1;
      for(auto item1:*paragraphDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParagraphDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParagraphCount") != m.end() && !m["ParagraphCount"].empty()) {
      paragraphCount = make_shared<long>(boost::any_cast<long>(m["ParagraphCount"]));
    }
    if (m.find("ParagraphDetails") != m.end() && !m["ParagraphDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ParagraphDetails"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesParagraphInfoParagraphDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParagraphDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesParagraphInfoParagraphDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paragraphDetails = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesParagraphInfoParagraphDetails>>(expect1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesParagraphInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodePoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodePoints() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodePoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodePoints() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodeRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodeRect() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodeRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodeRect() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetails : public Darabonba::Model {
public:
  shared_ptr<boost::any> data{};
  shared_ptr<long> qrCodeAngle{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodePoints>> qrCodePoints{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodeRect> qrCodeRect{};

  RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetails() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (qrCodeAngle) {
      res["QrCodeAngle"] = boost::any(*qrCodeAngle);
    }
    if (qrCodePoints) {
      vector<boost::any> temp1;
      for(auto item1:*qrCodePoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QrCodePoints"] = boost::any(temp1);
    }
    if (qrCodeRect) {
      res["QrCodeRect"] = qrCodeRect ? boost::any(qrCodeRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("QrCodeAngle") != m.end() && !m["QrCodeAngle"].empty()) {
      qrCodeAngle = make_shared<long>(boost::any_cast<long>(m["QrCodeAngle"]));
    }
    if (m.find("QrCodePoints") != m.end() && !m["QrCodePoints"].empty()) {
      if (typeid(vector<boost::any>) == m["QrCodePoints"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodePoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QrCodePoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodePoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qrCodePoints = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodePoints>>(expect1);
      }
    }
    if (m.find("QrCodeRect") != m.end() && !m["QrCodeRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["QrCodeRect"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodeRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QrCodeRect"]));
        qrCodeRect = make_shared<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetailsQrCodeRect>(model1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetails() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesQrCodeInfo : public Darabonba::Model {
public:
  shared_ptr<long> qrCodeCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetails>> qrCodeDetails{};

  RecognizeAllTextResponseBodyDataSubImagesQrCodeInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesQrCodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qrCodeCount) {
      res["QrCodeCount"] = boost::any(*qrCodeCount);
    }
    if (qrCodeDetails) {
      vector<boost::any> temp1;
      for(auto item1:*qrCodeDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QrCodeDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QrCodeCount") != m.end() && !m["QrCodeCount"].empty()) {
      qrCodeCount = make_shared<long>(boost::any_cast<long>(m["QrCodeCount"]));
    }
    if (m.find("QrCodeDetails") != m.end() && !m["QrCodeDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["QrCodeDetails"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QrCodeDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qrCodeDetails = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfoQrCodeDetails>>(expect1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesQrCodeInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesQualityInfo : public Darabonba::Model {
public:
  shared_ptr<double> completenessScore{};
  shared_ptr<bool> isCopy{};
  shared_ptr<bool> isReshoot{};
  shared_ptr<double> qualityScore{};
  shared_ptr<double> tamperScore{};

  RecognizeAllTextResponseBodyDataSubImagesQualityInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesQualityInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completenessScore) {
      res["CompletenessScore"] = boost::any(*completenessScore);
    }
    if (isCopy) {
      res["IsCopy"] = boost::any(*isCopy);
    }
    if (isReshoot) {
      res["IsReshoot"] = boost::any(*isReshoot);
    }
    if (qualityScore) {
      res["QualityScore"] = boost::any(*qualityScore);
    }
    if (tamperScore) {
      res["TamperScore"] = boost::any(*tamperScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletenessScore") != m.end() && !m["CompletenessScore"].empty()) {
      completenessScore = make_shared<double>(boost::any_cast<double>(m["CompletenessScore"]));
    }
    if (m.find("IsCopy") != m.end() && !m["IsCopy"].empty()) {
      isCopy = make_shared<bool>(boost::any_cast<bool>(m["IsCopy"]));
    }
    if (m.find("IsReshoot") != m.end() && !m["IsReshoot"].empty()) {
      isReshoot = make_shared<bool>(boost::any_cast<bool>(m["IsReshoot"]));
    }
    if (m.find("QualityScore") != m.end() && !m["QualityScore"].empty()) {
      qualityScore = make_shared<double>(boost::any_cast<double>(m["QualityScore"]));
    }
    if (m.find("TamperScore") != m.end() && !m["TamperScore"].empty()) {
      tamperScore = make_shared<double>(boost::any_cast<double>(m["TamperScore"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesQualityInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesRowInfoRowDetails : public Darabonba::Model {
public:
  shared_ptr<vector<long>> blockList{};
  shared_ptr<string> rowContent{};
  shared_ptr<long> rowId{};

  RecognizeAllTextResponseBodyDataSubImagesRowInfoRowDetails() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesRowInfoRowDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockList) {
      res["BlockList"] = boost::any(*blockList);
    }
    if (rowContent) {
      res["RowContent"] = boost::any(*rowContent);
    }
    if (rowId) {
      res["RowId"] = boost::any(*rowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockList") != m.end() && !m["BlockList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["BlockList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlockList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      blockList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RowContent") != m.end() && !m["RowContent"].empty()) {
      rowContent = make_shared<string>(boost::any_cast<string>(m["RowContent"]));
    }
    if (m.find("RowId") != m.end() && !m["RowId"].empty()) {
      rowId = make_shared<long>(boost::any_cast<long>(m["RowId"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesRowInfoRowDetails() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesRowInfo : public Darabonba::Model {
public:
  shared_ptr<long> rowCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesRowInfoRowDetails>> rowDetails{};

  RecognizeAllTextResponseBodyDataSubImagesRowInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesRowInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (rowDetails) {
      vector<boost::any> temp1;
      for(auto item1:*rowDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RowDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("RowDetails") != m.end() && !m["RowDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["RowDetails"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesRowInfoRowDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RowDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesRowInfoRowDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rowDetails = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesRowInfoRowDetails>>(expect1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesRowInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsData : public Darabonba::Model {
public:
  shared_ptr<string> antiFakeCode{};
  shared_ptr<string> companyId{};
  shared_ptr<string> organizationName{};
  shared_ptr<string> organizationNameEng{};
  shared_ptr<string> otherText{};
  shared_ptr<string> taxpayerId{};
  shared_ptr<string> topText{};

  RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsData() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiFakeCode) {
      res["AntiFakeCode"] = boost::any(*antiFakeCode);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (organizationName) {
      res["OrganizationName"] = boost::any(*organizationName);
    }
    if (organizationNameEng) {
      res["OrganizationNameEng"] = boost::any(*organizationNameEng);
    }
    if (otherText) {
      res["OtherText"] = boost::any(*otherText);
    }
    if (taxpayerId) {
      res["TaxpayerId"] = boost::any(*taxpayerId);
    }
    if (topText) {
      res["TopText"] = boost::any(*topText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiFakeCode") != m.end() && !m["AntiFakeCode"].empty()) {
      antiFakeCode = make_shared<string>(boost::any_cast<string>(m["AntiFakeCode"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("OrganizationName") != m.end() && !m["OrganizationName"].empty()) {
      organizationName = make_shared<string>(boost::any_cast<string>(m["OrganizationName"]));
    }
    if (m.find("OrganizationNameEng") != m.end() && !m["OrganizationNameEng"].empty()) {
      organizationNameEng = make_shared<string>(boost::any_cast<string>(m["OrganizationNameEng"]));
    }
    if (m.find("OtherText") != m.end() && !m["OtherText"].empty()) {
      otherText = make_shared<string>(boost::any_cast<string>(m["OtherText"]));
    }
    if (m.find("TaxpayerId") != m.end() && !m["TaxpayerId"].empty()) {
      taxpayerId = make_shared<string>(boost::any_cast<string>(m["TaxpayerId"]));
    }
    if (m.find("TopText") != m.end() && !m["TopText"].empty()) {
      topText = make_shared<string>(boost::any_cast<string>(m["TopText"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsData() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampPoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampPoints() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampPoints() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampRect() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampRect() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetails : public Darabonba::Model {
public:
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsData> data{};
  shared_ptr<long> stampAngle{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampPoints>> stampPoints{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampRect> stampRect{};

  RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetails() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stampAngle) {
      res["StampAngle"] = boost::any(*stampAngle);
    }
    if (stampPoints) {
      vector<boost::any> temp1;
      for(auto item1:*stampPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StampPoints"] = boost::any(temp1);
    }
    if (stampRect) {
      res["StampRect"] = stampRect ? boost::any(stampRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsData>(model1);
      }
    }
    if (m.find("StampAngle") != m.end() && !m["StampAngle"].empty()) {
      stampAngle = make_shared<long>(boost::any_cast<long>(m["StampAngle"]));
    }
    if (m.find("StampPoints") != m.end() && !m["StampPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["StampPoints"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StampPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stampPoints = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampPoints>>(expect1);
      }
    }
    if (m.find("StampRect") != m.end() && !m["StampRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["StampRect"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StampRect"]));
        stampRect = make_shared<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetailsStampRect>(model1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetails() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesStampInfo : public Darabonba::Model {
public:
  shared_ptr<long> stampCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetails>> stampDetails{};

  RecognizeAllTextResponseBodyDataSubImagesStampInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesStampInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stampCount) {
      res["StampCount"] = boost::any(*stampCount);
    }
    if (stampDetails) {
      vector<boost::any> temp1;
      for(auto item1:*stampDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StampDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StampCount") != m.end() && !m["StampCount"].empty()) {
      stampCount = make_shared<long>(boost::any_cast<long>(m["StampCount"]));
    }
    if (m.find("StampDetails") != m.end() && !m["StampDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["StampDetails"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StampDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stampDetails = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesStampInfoStampDetails>>(expect1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesStampInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesSubImagePoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeAllTextResponseBodyDataSubImagesSubImagePoints() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesSubImagePoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAllTextResponseBodyDataSubImagesSubImagePoints() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesSubImageRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  RecognizeAllTextResponseBodyDataSubImagesSubImageRect() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesSubImageRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesSubImageRect() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellPoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellPoints() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellPoints() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellRect() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellRect() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetails : public Darabonba::Model {
public:
  shared_ptr<vector<long>> blockList{};
  shared_ptr<long> cellAngle{};
  shared_ptr<string> cellContent{};
  shared_ptr<long> cellId{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellPoints>> cellPoints{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellRect> cellRect{};
  shared_ptr<long> columnEnd{};
  shared_ptr<long> columnStart{};
  shared_ptr<long> rowEnd{};
  shared_ptr<long> rowStart{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetails() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockList) {
      res["BlockList"] = boost::any(*blockList);
    }
    if (cellAngle) {
      res["CellAngle"] = boost::any(*cellAngle);
    }
    if (cellContent) {
      res["CellContent"] = boost::any(*cellContent);
    }
    if (cellId) {
      res["CellId"] = boost::any(*cellId);
    }
    if (cellPoints) {
      vector<boost::any> temp1;
      for(auto item1:*cellPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CellPoints"] = boost::any(temp1);
    }
    if (cellRect) {
      res["CellRect"] = cellRect ? boost::any(cellRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (columnEnd) {
      res["ColumnEnd"] = boost::any(*columnEnd);
    }
    if (columnStart) {
      res["ColumnStart"] = boost::any(*columnStart);
    }
    if (rowEnd) {
      res["RowEnd"] = boost::any(*rowEnd);
    }
    if (rowStart) {
      res["RowStart"] = boost::any(*rowStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockList") != m.end() && !m["BlockList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["BlockList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlockList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      blockList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CellAngle") != m.end() && !m["CellAngle"].empty()) {
      cellAngle = make_shared<long>(boost::any_cast<long>(m["CellAngle"]));
    }
    if (m.find("CellContent") != m.end() && !m["CellContent"].empty()) {
      cellContent = make_shared<string>(boost::any_cast<string>(m["CellContent"]));
    }
    if (m.find("CellId") != m.end() && !m["CellId"].empty()) {
      cellId = make_shared<long>(boost::any_cast<long>(m["CellId"]));
    }
    if (m.find("CellPoints") != m.end() && !m["CellPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["CellPoints"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CellPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cellPoints = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellPoints>>(expect1);
      }
    }
    if (m.find("CellRect") != m.end() && !m["CellRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["CellRect"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CellRect"]));
        cellRect = make_shared<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetailsCellRect>(model1);
      }
    }
    if (m.find("ColumnEnd") != m.end() && !m["ColumnEnd"].empty()) {
      columnEnd = make_shared<long>(boost::any_cast<long>(m["ColumnEnd"]));
    }
    if (m.find("ColumnStart") != m.end() && !m["ColumnStart"].empty()) {
      columnStart = make_shared<long>(boost::any_cast<long>(m["ColumnStart"]));
    }
    if (m.find("RowEnd") != m.end() && !m["RowEnd"].empty()) {
      rowEnd = make_shared<long>(boost::any_cast<long>(m["RowEnd"]));
    }
    if (m.find("RowStart") != m.end() && !m["RowStart"].empty()) {
      rowStart = make_shared<long>(boost::any_cast<long>(m["RowStart"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetails() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsFooter : public Darabonba::Model {
public:
  shared_ptr<long> blockId{};
  shared_ptr<vector<string>> contents{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsFooter() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsFooter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (contents) {
      res["Contents"] = boost::any(*contents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<long>(boost::any_cast<long>(m["BlockId"]));
    }
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Contents"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Contents"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contents = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsFooter() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsHeader : public Darabonba::Model {
public:
  shared_ptr<long> blockId{};
  shared_ptr<vector<string>> contents{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsHeader() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (contents) {
      res["Contents"] = boost::any(*contents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<long>(boost::any_cast<long>(m["BlockId"]));
    }
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Contents"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Contents"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contents = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsHeader() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTablePoints : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTablePoints() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTablePoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTablePoints() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTableRect : public Darabonba::Model {
public:
  shared_ptr<long> centerX{};
  shared_ptr<long> centerY{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTableRect() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTableRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centerX) {
      res["CenterX"] = boost::any(*centerX);
    }
    if (centerY) {
      res["CenterY"] = boost::any(*centerY);
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
    if (m.find("CenterX") != m.end() && !m["CenterX"].empty()) {
      centerX = make_shared<long>(boost::any_cast<long>(m["CenterX"]));
    }
    if (m.find("CenterY") != m.end() && !m["CenterY"].empty()) {
      centerY = make_shared<long>(boost::any_cast<long>(m["CenterY"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTableRect() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetails : public Darabonba::Model {
public:
  shared_ptr<long> cellCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetails>> cellDetails{};
  shared_ptr<long> columnCount{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsFooter> footer{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsHeader> header{};
  shared_ptr<long> rowCount{};
  shared_ptr<long> tableId{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTablePoints>> tablePoints{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTableRect> tableRect{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetails() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cellCount) {
      res["CellCount"] = boost::any(*cellCount);
    }
    if (cellDetails) {
      vector<boost::any> temp1;
      for(auto item1:*cellDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CellDetails"] = boost::any(temp1);
    }
    if (columnCount) {
      res["ColumnCount"] = boost::any(*columnCount);
    }
    if (footer) {
      res["Footer"] = footer ? boost::any(footer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (tablePoints) {
      vector<boost::any> temp1;
      for(auto item1:*tablePoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TablePoints"] = boost::any(temp1);
    }
    if (tableRect) {
      res["TableRect"] = tableRect ? boost::any(tableRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CellCount") != m.end() && !m["CellCount"].empty()) {
      cellCount = make_shared<long>(boost::any_cast<long>(m["CellCount"]));
    }
    if (m.find("CellDetails") != m.end() && !m["CellDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["CellDetails"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CellDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cellDetails = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsCellDetails>>(expect1);
      }
    }
    if (m.find("ColumnCount") != m.end() && !m["ColumnCount"].empty()) {
      columnCount = make_shared<long>(boost::any_cast<long>(m["ColumnCount"]));
    }
    if (m.find("Footer") != m.end() && !m["Footer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Footer"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsFooter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Footer"]));
        footer = make_shared<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsFooter>(model1);
      }
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsHeader>(model1);
      }
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<long>(boost::any_cast<long>(m["TableId"]));
    }
    if (m.find("TablePoints") != m.end() && !m["TablePoints"].empty()) {
      if (typeid(vector<boost::any>) == m["TablePoints"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTablePoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TablePoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTablePoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tablePoints = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTablePoints>>(expect1);
      }
    }
    if (m.find("TableRect") != m.end() && !m["TableRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableRect"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTableRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableRect"]));
        tableRect = make_shared<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetailsTableRect>(model1);
      }
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetails() = default;
};
class RecognizeAllTextResponseBodyDataSubImagesTableInfo : public Darabonba::Model {
public:
  shared_ptr<long> tableCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetails>> tableDetails{};
  shared_ptr<string> tableExcel{};
  shared_ptr<string> tableHtml{};

  RecognizeAllTextResponseBodyDataSubImagesTableInfo() {}

  explicit RecognizeAllTextResponseBodyDataSubImagesTableInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableCount) {
      res["TableCount"] = boost::any(*tableCount);
    }
    if (tableDetails) {
      vector<boost::any> temp1;
      for(auto item1:*tableDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableDetails"] = boost::any(temp1);
    }
    if (tableExcel) {
      res["TableExcel"] = boost::any(*tableExcel);
    }
    if (tableHtml) {
      res["TableHtml"] = boost::any(*tableHtml);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableCount") != m.end() && !m["TableCount"].empty()) {
      tableCount = make_shared<long>(boost::any_cast<long>(m["TableCount"]));
    }
    if (m.find("TableDetails") != m.end() && !m["TableDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["TableDetails"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableDetails = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesTableInfoTableDetails>>(expect1);
      }
    }
    if (m.find("TableExcel") != m.end() && !m["TableExcel"].empty()) {
      tableExcel = make_shared<string>(boost::any_cast<string>(m["TableExcel"]));
    }
    if (m.find("TableHtml") != m.end() && !m["TableHtml"].empty()) {
      tableHtml = make_shared<string>(boost::any_cast<string>(m["TableHtml"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImagesTableInfo() = default;
};
class RecognizeAllTextResponseBodyDataSubImages : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfo> barCodeInfo{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesBlockInfo> blockInfo{};
  shared_ptr<map<string, DataSubImagesFigureInfoValue>> figureInfo{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesKvInfo> kvInfo{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesParagraphInfo> paragraphInfo{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfo> qrCodeInfo{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesQualityInfo> qualityInfo{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesRowInfo> rowInfo{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesStampInfo> stampInfo{};
  shared_ptr<long> subImageId{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImagesSubImagePoints>> subImagePoints{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesSubImageRect> subImageRect{};
  shared_ptr<RecognizeAllTextResponseBodyDataSubImagesTableInfo> tableInfo{};
  shared_ptr<string> type{};

  RecognizeAllTextResponseBodyDataSubImages() {}

  explicit RecognizeAllTextResponseBodyDataSubImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (barCodeInfo) {
      res["BarCodeInfo"] = barCodeInfo ? boost::any(barCodeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (blockInfo) {
      res["BlockInfo"] = blockInfo ? boost::any(blockInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (figureInfo) {
      map<string, boost::any> temp1;
      for(auto item1:*figureInfo){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["FigureInfo"] = boost::any(temp1);
    }
    if (kvInfo) {
      res["KvInfo"] = kvInfo ? boost::any(kvInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paragraphInfo) {
      res["ParagraphInfo"] = paragraphInfo ? boost::any(paragraphInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qrCodeInfo) {
      res["QrCodeInfo"] = qrCodeInfo ? boost::any(qrCodeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualityInfo) {
      res["QualityInfo"] = qualityInfo ? boost::any(qualityInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rowInfo) {
      res["RowInfo"] = rowInfo ? boost::any(rowInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stampInfo) {
      res["StampInfo"] = stampInfo ? boost::any(stampInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subImageId) {
      res["SubImageId"] = boost::any(*subImageId);
    }
    if (subImagePoints) {
      vector<boost::any> temp1;
      for(auto item1:*subImagePoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubImagePoints"] = boost::any(temp1);
    }
    if (subImageRect) {
      res["SubImageRect"] = subImageRect ? boost::any(subImageRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableInfo) {
      res["TableInfo"] = tableInfo ? boost::any(tableInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("BarCodeInfo") != m.end() && !m["BarCodeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BarCodeInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesBarCodeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BarCodeInfo"]));
        barCodeInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesBarCodeInfo>(model1);
      }
    }
    if (m.find("BlockInfo") != m.end() && !m["BlockInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlockInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesBlockInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlockInfo"]));
        blockInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesBlockInfo>(model1);
      }
    }
    if (m.find("FigureInfo") != m.end() && !m["FigureInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FigureInfo"].type()) {
        map<string, DataSubImagesFigureInfoValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["FigureInfo"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSubImagesFigureInfoValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        figureInfo = make_shared<map<string, DataSubImagesFigureInfoValue>>(expect1);
      }
    }
    if (m.find("KvInfo") != m.end() && !m["KvInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["KvInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesKvInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KvInfo"]));
        kvInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesKvInfo>(model1);
      }
    }
    if (m.find("ParagraphInfo") != m.end() && !m["ParagraphInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ParagraphInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesParagraphInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ParagraphInfo"]));
        paragraphInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesParagraphInfo>(model1);
      }
    }
    if (m.find("QrCodeInfo") != m.end() && !m["QrCodeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["QrCodeInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesQrCodeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QrCodeInfo"]));
        qrCodeInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesQrCodeInfo>(model1);
      }
    }
    if (m.find("QualityInfo") != m.end() && !m["QualityInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["QualityInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesQualityInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QualityInfo"]));
        qualityInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesQualityInfo>(model1);
      }
    }
    if (m.find("RowInfo") != m.end() && !m["RowInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["RowInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesRowInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RowInfo"]));
        rowInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesRowInfo>(model1);
      }
    }
    if (m.find("StampInfo") != m.end() && !m["StampInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["StampInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesStampInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StampInfo"]));
        stampInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesStampInfo>(model1);
      }
    }
    if (m.find("SubImageId") != m.end() && !m["SubImageId"].empty()) {
      subImageId = make_shared<long>(boost::any_cast<long>(m["SubImageId"]));
    }
    if (m.find("SubImagePoints") != m.end() && !m["SubImagePoints"].empty()) {
      if (typeid(vector<boost::any>) == m["SubImagePoints"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImagesSubImagePoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubImagePoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImagesSubImagePoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subImagePoints = make_shared<vector<RecognizeAllTextResponseBodyDataSubImagesSubImagePoints>>(expect1);
      }
    }
    if (m.find("SubImageRect") != m.end() && !m["SubImageRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubImageRect"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesSubImageRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubImageRect"]));
        subImageRect = make_shared<RecognizeAllTextResponseBodyDataSubImagesSubImageRect>(model1);
      }
    }
    if (m.find("TableInfo") != m.end() && !m["TableInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableInfo"].type()) {
        RecognizeAllTextResponseBodyDataSubImagesTableInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableInfo"]));
        tableInfo = make_shared<RecognizeAllTextResponseBodyDataSubImagesTableInfo>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyDataSubImages() = default;
};
class RecognizeAllTextResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> algoServer{};
  shared_ptr<string> algoVersion{};
  shared_ptr<string> content{};
  shared_ptr<boost::any> debugInfo{};
  shared_ptr<long> height{};
  shared_ptr<bool> isMixedMode{};
  shared_ptr<string> kvExcelUrl{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> subImageCount{};
  shared_ptr<vector<RecognizeAllTextResponseBodyDataSubImages>> subImages{};
  shared_ptr<long> width{};
  shared_ptr<string> xmlResult{};

  RecognizeAllTextResponseBodyData() {}

  explicit RecognizeAllTextResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algoServer) {
      res["AlgoServer"] = boost::any(*algoServer);
    }
    if (algoVersion) {
      res["AlgoVersion"] = boost::any(*algoVersion);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (debugInfo) {
      res["DebugInfo"] = boost::any(*debugInfo);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (isMixedMode) {
      res["IsMixedMode"] = boost::any(*isMixedMode);
    }
    if (kvExcelUrl) {
      res["KvExcelUrl"] = boost::any(*kvExcelUrl);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (subImageCount) {
      res["SubImageCount"] = boost::any(*subImageCount);
    }
    if (subImages) {
      vector<boost::any> temp1;
      for(auto item1:*subImages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubImages"] = boost::any(temp1);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (xmlResult) {
      res["XmlResult"] = boost::any(*xmlResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgoServer") != m.end() && !m["AlgoServer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AlgoServer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlgoServer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      algoServer = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AlgoVersion") != m.end() && !m["AlgoVersion"].empty()) {
      algoVersion = make_shared<string>(boost::any_cast<string>(m["AlgoVersion"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DebugInfo") != m.end() && !m["DebugInfo"].empty()) {
      debugInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["DebugInfo"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("IsMixedMode") != m.end() && !m["IsMixedMode"].empty()) {
      isMixedMode = make_shared<bool>(boost::any_cast<bool>(m["IsMixedMode"]));
    }
    if (m.find("KvExcelUrl") != m.end() && !m["KvExcelUrl"].empty()) {
      kvExcelUrl = make_shared<string>(boost::any_cast<string>(m["KvExcelUrl"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("SubImageCount") != m.end() && !m["SubImageCount"].empty()) {
      subImageCount = make_shared<long>(boost::any_cast<long>(m["SubImageCount"]));
    }
    if (m.find("SubImages") != m.end() && !m["SubImages"].empty()) {
      if (typeid(vector<boost::any>) == m["SubImages"].type()) {
        vector<RecognizeAllTextResponseBodyDataSubImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubImages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAllTextResponseBodyDataSubImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subImages = make_shared<vector<RecognizeAllTextResponseBodyDataSubImages>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("XmlResult") != m.end() && !m["XmlResult"].empty()) {
      xmlResult = make_shared<string>(boost::any_cast<string>(m["XmlResult"]));
    }
  }


  virtual ~RecognizeAllTextResponseBodyData() = default;
};
class RecognizeAllTextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RecognizeAllTextResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeAllTextResponseBody() {}

  explicit RecognizeAllTextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeAllTextResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeAllTextResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeAllTextResponseBody() = default;
};
class RecognizeAllTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeAllTextResponseBody> body{};

  RecognizeAllTextResponse() {}

  explicit RecognizeAllTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeAllTextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeAllTextResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeAllTextResponse() = default;
};
class RecognizeBankAcceptanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeBankAcceptanceRequest() {}

  explicit RecognizeBankAcceptanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeBankAcceptanceRequest() = default;
};
class RecognizeBankAcceptanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeBankAcceptanceResponseBody() {}

  explicit RecognizeBankAcceptanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBankAcceptanceResponseBody() = default;
};
class RecognizeBankAcceptanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBankAcceptanceResponseBody> body{};

  RecognizeBankAcceptanceResponse() {}

  explicit RecognizeBankAcceptanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBankAcceptanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBankAcceptanceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBankAcceptanceResponse() = default;
};
class RecognizeBankAccountLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeBankAccountLicenseRequest() {}

  explicit RecognizeBankAccountLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeBankAccountLicenseRequest() = default;
};
class RecognizeBankAccountLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeBankAccountLicenseResponseBody() {}

  explicit RecognizeBankAccountLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBankAccountLicenseResponseBody() = default;
};
class RecognizeBankAccountLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBankAccountLicenseResponseBody> body{};

  RecognizeBankAccountLicenseResponse() {}

  explicit RecognizeBankAccountLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBankAccountLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBankAccountLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBankAccountLicenseResponse() = default;
};
class RecognizeBankCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeBankCardRequest() {}

  explicit RecognizeBankCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeBankCardRequest() = default;
};
class RecognizeBankCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeBankCardResponseBody() {}

  explicit RecognizeBankCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
        RecognizeBankCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBankCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBankCardResponse() = default;
};
class RecognizeBasicRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeBasicRequest() {}

  explicit RecognizeBasicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeBasicRequest() = default;
};
class RecognizeBasicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeBasicResponseBody() {}

  explicit RecognizeBasicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBasicResponseBody() = default;
};
class RecognizeBasicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBasicResponseBody> body{};

  RecognizeBasicResponse() {}

  explicit RecognizeBasicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBasicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBasicResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBasicResponse() = default;
};
class RecognizeBirthCertificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeBirthCertificationRequest() {}

  explicit RecognizeBirthCertificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeBirthCertificationRequest() = default;
};
class RecognizeBirthCertificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeBirthCertificationResponseBody() {}

  explicit RecognizeBirthCertificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBirthCertificationResponseBody() = default;
};
class RecognizeBirthCertificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBirthCertificationResponseBody> body{};

  RecognizeBirthCertificationResponse() {}

  explicit RecognizeBirthCertificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBirthCertificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBirthCertificationResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBirthCertificationResponse() = default;
};
class RecognizeBusShipTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeBusShipTicketRequest() {}

  explicit RecognizeBusShipTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeBusShipTicketRequest() = default;
};
class RecognizeBusShipTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeBusShipTicketResponseBody() {}

  explicit RecognizeBusShipTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBusShipTicketResponseBody() = default;
};
class RecognizeBusShipTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBusShipTicketResponseBody> body{};

  RecognizeBusShipTicketResponse() {}

  explicit RecognizeBusShipTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusShipTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBusShipTicketResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBusShipTicketResponse() = default;
};
class RecognizeBusinessLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeBusinessLicenseRequest() {}

  explicit RecognizeBusinessLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeBusinessLicenseRequest() = default;
};
class RecognizeBusinessLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeBusinessLicenseResponseBody() {}

  explicit RecognizeBusinessLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
        RecognizeBusinessLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBusinessLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessLicenseResponse() = default;
};
class RecognizeCarInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeCarInvoiceRequest() {}

  explicit RecognizeCarInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeCarInvoiceRequest() = default;
};
class RecognizeCarInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeCarInvoiceResponseBody() {}

  explicit RecognizeCarInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCarInvoiceResponseBody() = default;
};
class RecognizeCarInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCarInvoiceResponseBody> body{};

  RecognizeCarInvoiceResponse() {}

  explicit RecognizeCarInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCarInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCarInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCarInvoiceResponse() = default;
};
class RecognizeCarNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeCarNumberRequest() {}

  explicit RecognizeCarNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeCarNumberRequest() = default;
};
class RecognizeCarNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeCarNumberResponseBody() {}

  explicit RecognizeCarNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCarNumberResponseBody() = default;
};
class RecognizeCarNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCarNumberResponseBody> body{};

  RecognizeCarNumberResponse() {}

  explicit RecognizeCarNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCarNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCarNumberResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCarNumberResponse() = default;
};
class RecognizeCarVinCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeCarVinCodeRequest() {}

  explicit RecognizeCarVinCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeCarVinCodeRequest() = default;
};
class RecognizeCarVinCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeCarVinCodeResponseBody() {}

  explicit RecognizeCarVinCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCarVinCodeResponseBody() = default;
};
class RecognizeCarVinCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCarVinCodeResponseBody> body{};

  RecognizeCarVinCodeResponse() {}

  explicit RecognizeCarVinCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCarVinCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCarVinCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCarVinCodeResponse() = default;
};
class RecognizeChinesePassportRequest : public Darabonba::Model {
public:
  shared_ptr<bool> outputFigure{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeChinesePassportRequest() {}

  explicit RecognizeChinesePassportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputFigure) {
      res["OutputFigure"] = boost::any(*outputFigure);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputFigure") != m.end() && !m["OutputFigure"].empty()) {
      outputFigure = make_shared<bool>(boost::any_cast<bool>(m["OutputFigure"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeChinesePassportRequest() = default;
};
class RecognizeChinesePassportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeChinesePassportResponseBody() {}

  explicit RecognizeChinesePassportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeChinesePassportResponseBody() = default;
};
class RecognizeChinesePassportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeChinesePassportResponseBody> body{};

  RecognizeChinesePassportResponse() {}

  explicit RecognizeChinesePassportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeChinesePassportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeChinesePassportResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeChinesePassportResponse() = default;
};
class RecognizeCommonPrintedInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeCommonPrintedInvoiceRequest() {}

  explicit RecognizeCommonPrintedInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeCommonPrintedInvoiceRequest() = default;
};
class RecognizeCommonPrintedInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeCommonPrintedInvoiceResponseBody() {}

  explicit RecognizeCommonPrintedInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCommonPrintedInvoiceResponseBody() = default;
};
class RecognizeCommonPrintedInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCommonPrintedInvoiceResponseBody> body{};

  RecognizeCommonPrintedInvoiceResponse() {}

  explicit RecognizeCommonPrintedInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCommonPrintedInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCommonPrintedInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCommonPrintedInvoiceResponse() = default;
};
class RecognizeCosmeticProduceLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeCosmeticProduceLicenseRequest() {}

  explicit RecognizeCosmeticProduceLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeCosmeticProduceLicenseRequest() = default;
};
class RecognizeCosmeticProduceLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeCosmeticProduceLicenseResponseBody() {}

  explicit RecognizeCosmeticProduceLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCosmeticProduceLicenseResponseBody() = default;
};
class RecognizeCosmeticProduceLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCosmeticProduceLicenseResponseBody> body{};

  RecognizeCosmeticProduceLicenseResponse() {}

  explicit RecognizeCosmeticProduceLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCosmeticProduceLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCosmeticProduceLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCosmeticProduceLicenseResponse() = default;
};
class RecognizeCovidTestReportRequest : public Darabonba::Model {
public:
  shared_ptr<bool> multipleResult{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeCovidTestReportRequest() {}

  explicit RecognizeCovidTestReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multipleResult) {
      res["MultipleResult"] = boost::any(*multipleResult);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MultipleResult") != m.end() && !m["MultipleResult"].empty()) {
      multipleResult = make_shared<bool>(boost::any_cast<bool>(m["MultipleResult"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeCovidTestReportRequest() = default;
};
class RecognizeCovidTestReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeCovidTestReportResponseBody() {}

  explicit RecognizeCovidTestReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCovidTestReportResponseBody() = default;
};
class RecognizeCovidTestReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCovidTestReportResponseBody> body{};

  RecognizeCovidTestReportResponse() {}

  explicit RecognizeCovidTestReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCovidTestReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCovidTestReportResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCovidTestReportResponse() = default;
};
class RecognizeCtwoMedicalDeviceManageLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeCtwoMedicalDeviceManageLicenseRequest() {}

  explicit RecognizeCtwoMedicalDeviceManageLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeCtwoMedicalDeviceManageLicenseRequest() = default;
};
class RecognizeCtwoMedicalDeviceManageLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeCtwoMedicalDeviceManageLicenseResponseBody() {}

  explicit RecognizeCtwoMedicalDeviceManageLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCtwoMedicalDeviceManageLicenseResponseBody() = default;
};
class RecognizeCtwoMedicalDeviceManageLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCtwoMedicalDeviceManageLicenseResponseBody> body{};

  RecognizeCtwoMedicalDeviceManageLicenseResponse() {}

  explicit RecognizeCtwoMedicalDeviceManageLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCtwoMedicalDeviceManageLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCtwoMedicalDeviceManageLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCtwoMedicalDeviceManageLicenseResponse() = default;
};
class RecognizeDocumentStructureRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> needSortPage{};
  shared_ptr<bool> noStamp{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<bool> page{};
  shared_ptr<bool> paragraph{};
  shared_ptr<bool> row{};
  shared_ptr<string> url{};
  shared_ptr<bool> useNewStyleOutput{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeDocumentStructureRequest() {}

  explicit RecognizeDocumentStructureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (needSortPage) {
      res["NeedSortPage"] = boost::any(*needSortPage);
    }
    if (noStamp) {
      res["NoStamp"] = boost::any(*noStamp);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (paragraph) {
      res["Paragraph"] = boost::any(*paragraph);
    }
    if (row) {
      res["Row"] = boost::any(*row);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (useNewStyleOutput) {
      res["UseNewStyleOutput"] = boost::any(*useNewStyleOutput);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("NeedSortPage") != m.end() && !m["NeedSortPage"].empty()) {
      needSortPage = make_shared<bool>(boost::any_cast<bool>(m["NeedSortPage"]));
    }
    if (m.find("NoStamp") != m.end() && !m["NoStamp"].empty()) {
      noStamp = make_shared<bool>(boost::any_cast<bool>(m["NoStamp"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<bool>(boost::any_cast<bool>(m["Page"]));
    }
    if (m.find("Paragraph") != m.end() && !m["Paragraph"].empty()) {
      paragraph = make_shared<bool>(boost::any_cast<bool>(m["Paragraph"]));
    }
    if (m.find("Row") != m.end() && !m["Row"].empty()) {
      row = make_shared<bool>(boost::any_cast<bool>(m["Row"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UseNewStyleOutput") != m.end() && !m["UseNewStyleOutput"].empty()) {
      useNewStyleOutput = make_shared<bool>(boost::any_cast<bool>(m["UseNewStyleOutput"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeDocumentStructureRequest() = default;
};
class RecognizeDocumentStructureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeDocumentStructureResponseBody() {}

  explicit RecognizeDocumentStructureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeDocumentStructureResponseBody() = default;
};
class RecognizeDocumentStructureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeDocumentStructureResponseBody> body{};

  RecognizeDocumentStructureResponse() {}

  explicit RecognizeDocumentStructureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDocumentStructureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeDocumentStructureResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeDocumentStructureResponse() = default;
};
class RecognizeDrivingLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeDrivingLicenseRequest() {}

  explicit RecognizeDrivingLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeDrivingLicenseRequest() = default;
};
class RecognizeDrivingLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeDrivingLicenseResponseBody() {}

  explicit RecognizeDrivingLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
        RecognizeDrivingLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeDrivingLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeDrivingLicenseResponse() = default;
};
class RecognizeEduFormulaRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeEduFormulaRequest() {}

  explicit RecognizeEduFormulaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeEduFormulaRequest() = default;
};
class RecognizeEduFormulaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeEduFormulaResponseBody() {}

  explicit RecognizeEduFormulaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeEduFormulaResponseBody() = default;
};
class RecognizeEduFormulaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeEduFormulaResponseBody> body{};

  RecognizeEduFormulaResponse() {}

  explicit RecognizeEduFormulaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeEduFormulaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeEduFormulaResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeEduFormulaResponse() = default;
};
class RecognizeEduOralCalculationRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeEduOralCalculationRequest() {}

  explicit RecognizeEduOralCalculationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeEduOralCalculationRequest() = default;
};
class RecognizeEduOralCalculationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeEduOralCalculationResponseBody() {}

  explicit RecognizeEduOralCalculationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeEduOralCalculationResponseBody() = default;
};
class RecognizeEduOralCalculationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeEduOralCalculationResponseBody> body{};

  RecognizeEduOralCalculationResponse() {}

  explicit RecognizeEduOralCalculationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeEduOralCalculationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeEduOralCalculationResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeEduOralCalculationResponse() = default;
};
class RecognizeEduPaperCutRequest : public Darabonba::Model {
public:
  shared_ptr<string> cutType{};
  shared_ptr<string> imageType{};
  shared_ptr<bool> outputOricoord{};
  shared_ptr<string> subject{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeEduPaperCutRequest() {}

  explicit RecognizeEduPaperCutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cutType) {
      res["CutType"] = boost::any(*cutType);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (outputOricoord) {
      res["OutputOricoord"] = boost::any(*outputOricoord);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CutType") != m.end() && !m["CutType"].empty()) {
      cutType = make_shared<string>(boost::any_cast<string>(m["CutType"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("OutputOricoord") != m.end() && !m["OutputOricoord"].empty()) {
      outputOricoord = make_shared<bool>(boost::any_cast<bool>(m["OutputOricoord"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeEduPaperCutRequest() = default;
};
class RecognizeEduPaperCutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeEduPaperCutResponseBody() {}

  explicit RecognizeEduPaperCutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeEduPaperCutResponseBody() = default;
};
class RecognizeEduPaperCutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeEduPaperCutResponseBody> body{};

  RecognizeEduPaperCutResponse() {}

  explicit RecognizeEduPaperCutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeEduPaperCutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeEduPaperCutResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeEduPaperCutResponse() = default;
};
class RecognizeEduPaperOcrRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageType{};
  shared_ptr<bool> outputOricoord{};
  shared_ptr<string> subject{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeEduPaperOcrRequest() {}

  explicit RecognizeEduPaperOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (outputOricoord) {
      res["OutputOricoord"] = boost::any(*outputOricoord);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("OutputOricoord") != m.end() && !m["OutputOricoord"].empty()) {
      outputOricoord = make_shared<bool>(boost::any_cast<bool>(m["OutputOricoord"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeEduPaperOcrRequest() = default;
};
class RecognizeEduPaperOcrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeEduPaperOcrResponseBody() {}

  explicit RecognizeEduPaperOcrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeEduPaperOcrResponseBody() = default;
};
class RecognizeEduPaperOcrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeEduPaperOcrResponseBody> body{};

  RecognizeEduPaperOcrResponse() {}

  explicit RecognizeEduPaperOcrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeEduPaperOcrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeEduPaperOcrResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeEduPaperOcrResponse() = default;
};
class RecognizeEduPaperStructedRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> outputOricoord{};
  shared_ptr<string> subject{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeEduPaperStructedRequest() {}

  explicit RecognizeEduPaperStructedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (outputOricoord) {
      res["OutputOricoord"] = boost::any(*outputOricoord);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("OutputOricoord") != m.end() && !m["OutputOricoord"].empty()) {
      outputOricoord = make_shared<bool>(boost::any_cast<bool>(m["OutputOricoord"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeEduPaperStructedRequest() = default;
};
class RecognizeEduPaperStructedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeEduPaperStructedResponseBody() {}

  explicit RecognizeEduPaperStructedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeEduPaperStructedResponseBody() = default;
};
class RecognizeEduPaperStructedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeEduPaperStructedResponseBody> body{};

  RecognizeEduPaperStructedResponse() {}

  explicit RecognizeEduPaperStructedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeEduPaperStructedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeEduPaperStructedResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeEduPaperStructedResponse() = default;
};
class RecognizeEduQuestionOcrRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeEduQuestionOcrRequest() {}

  explicit RecognizeEduQuestionOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeEduQuestionOcrRequest() = default;
};
class RecognizeEduQuestionOcrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeEduQuestionOcrResponseBody() {}

  explicit RecognizeEduQuestionOcrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeEduQuestionOcrResponseBody() = default;
};
class RecognizeEduQuestionOcrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeEduQuestionOcrResponseBody> body{};

  RecognizeEduQuestionOcrResponse() {}

  explicit RecognizeEduQuestionOcrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeEduQuestionOcrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeEduQuestionOcrResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeEduQuestionOcrResponse() = default;
};
class RecognizeEnglishRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> outputTable{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeEnglishRequest() {}

  explicit RecognizeEnglishRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeEnglishRequest() = default;
};
class RecognizeEnglishResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeEnglishResponseBody() {}

  explicit RecognizeEnglishResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeEnglishResponseBody() = default;
};
class RecognizeEnglishResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeEnglishResponseBody> body{};

  RecognizeEnglishResponse() {}

  explicit RecognizeEnglishResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeEnglishResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeEnglishResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeEnglishResponse() = default;
};
class RecognizeEstateCertificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeEstateCertificationRequest() {}

  explicit RecognizeEstateCertificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeEstateCertificationRequest() = default;
};
class RecognizeEstateCertificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeEstateCertificationResponseBody() {}

  explicit RecognizeEstateCertificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeEstateCertificationResponseBody() = default;
};
class RecognizeEstateCertificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeEstateCertificationResponseBody> body{};

  RecognizeEstateCertificationResponse() {}

  explicit RecognizeEstateCertificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeEstateCertificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeEstateCertificationResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeEstateCertificationResponse() = default;
};
class RecognizeExitEntryPermitToHKRequest : public Darabonba::Model {
public:
  shared_ptr<bool> outputFigure{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeExitEntryPermitToHKRequest() {}

  explicit RecognizeExitEntryPermitToHKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputFigure) {
      res["OutputFigure"] = boost::any(*outputFigure);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputFigure") != m.end() && !m["OutputFigure"].empty()) {
      outputFigure = make_shared<bool>(boost::any_cast<bool>(m["OutputFigure"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeExitEntryPermitToHKRequest() = default;
};
class RecognizeExitEntryPermitToHKResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeExitEntryPermitToHKResponseBody() {}

  explicit RecognizeExitEntryPermitToHKResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeExitEntryPermitToHKResponseBody() = default;
};
class RecognizeExitEntryPermitToHKResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeExitEntryPermitToHKResponseBody> body{};

  RecognizeExitEntryPermitToHKResponse() {}

  explicit RecognizeExitEntryPermitToHKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeExitEntryPermitToHKResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeExitEntryPermitToHKResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeExitEntryPermitToHKResponse() = default;
};
class RecognizeExitEntryPermitToMainlandRequest : public Darabonba::Model {
public:
  shared_ptr<bool> outputFigure{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeExitEntryPermitToMainlandRequest() {}

  explicit RecognizeExitEntryPermitToMainlandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputFigure) {
      res["OutputFigure"] = boost::any(*outputFigure);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputFigure") != m.end() && !m["OutputFigure"].empty()) {
      outputFigure = make_shared<bool>(boost::any_cast<bool>(m["OutputFigure"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeExitEntryPermitToMainlandRequest() = default;
};
class RecognizeExitEntryPermitToMainlandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeExitEntryPermitToMainlandResponseBody() {}

  explicit RecognizeExitEntryPermitToMainlandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeExitEntryPermitToMainlandResponseBody() = default;
};
class RecognizeExitEntryPermitToMainlandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeExitEntryPermitToMainlandResponseBody> body{};

  RecognizeExitEntryPermitToMainlandResponse() {}

  explicit RecognizeExitEntryPermitToMainlandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeExitEntryPermitToMainlandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeExitEntryPermitToMainlandResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeExitEntryPermitToMainlandResponse() = default;
};
class RecognizeFoodManageLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeFoodManageLicenseRequest() {}

  explicit RecognizeFoodManageLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeFoodManageLicenseRequest() = default;
};
class RecognizeFoodManageLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeFoodManageLicenseResponseBody() {}

  explicit RecognizeFoodManageLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeFoodManageLicenseResponseBody() = default;
};
class RecognizeFoodManageLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeFoodManageLicenseResponseBody> body{};

  RecognizeFoodManageLicenseResponse() {}

  explicit RecognizeFoodManageLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFoodManageLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeFoodManageLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeFoodManageLicenseResponse() = default;
};
class RecognizeFoodProduceLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeFoodProduceLicenseRequest() {}

  explicit RecognizeFoodProduceLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeFoodProduceLicenseRequest() = default;
};
class RecognizeFoodProduceLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeFoodProduceLicenseResponseBody() {}

  explicit RecognizeFoodProduceLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeFoodProduceLicenseResponseBody() = default;
};
class RecognizeFoodProduceLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeFoodProduceLicenseResponseBody> body{};

  RecognizeFoodProduceLicenseResponse() {}

  explicit RecognizeFoodProduceLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFoodProduceLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeFoodProduceLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeFoodProduceLicenseResponse() = default;
};
class RecognizeGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeGeneralRequest() {}

  explicit RecognizeGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeGeneralRequest() = default;
};
class RecognizeGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeGeneralResponseBody() {}

  explicit RecognizeGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeGeneralResponseBody() = default;
};
class RecognizeGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeGeneralResponseBody> body{};

  RecognizeGeneralResponse() {}

  explicit RecognizeGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeGeneralResponse() = default;
};
class RecognizeGeneralStructureRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keys{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeGeneralStructureRequest() {}

  explicit RecognizeGeneralStructureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeGeneralStructureRequest() = default;
};
class RecognizeGeneralStructureShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keysShrink{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeGeneralStructureShrinkRequest() {}

  explicit RecognizeGeneralStructureShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keysShrink) {
      res["Keys"] = boost::any(*keysShrink);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      keysShrink = make_shared<string>(boost::any_cast<string>(m["Keys"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeGeneralStructureShrinkRequest() = default;
};
class RecognizeGeneralStructureResponseBodyDataSubImagesKvInfo : public Darabonba::Model {
public:
  shared_ptr<boost::any> data{};
  shared_ptr<long> kvCount{};

  RecognizeGeneralStructureResponseBodyDataSubImagesKvInfo() {}

  explicit RecognizeGeneralStructureResponseBodyDataSubImagesKvInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (kvCount) {
      res["KvCount"] = boost::any(*kvCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("KvCount") != m.end() && !m["KvCount"].empty()) {
      kvCount = make_shared<long>(boost::any_cast<long>(m["KvCount"]));
    }
  }


  virtual ~RecognizeGeneralStructureResponseBodyDataSubImagesKvInfo() = default;
};
class RecognizeGeneralStructureResponseBodyDataSubImages : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<RecognizeGeneralStructureResponseBodyDataSubImagesKvInfo> kvInfo{};
  shared_ptr<long> subImageId{};

  RecognizeGeneralStructureResponseBodyDataSubImages() {}

  explicit RecognizeGeneralStructureResponseBodyDataSubImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (kvInfo) {
      res["KvInfo"] = kvInfo ? boost::any(kvInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subImageId) {
      res["SubImageId"] = boost::any(*subImageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("KvInfo") != m.end() && !m["KvInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["KvInfo"].type()) {
        RecognizeGeneralStructureResponseBodyDataSubImagesKvInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KvInfo"]));
        kvInfo = make_shared<RecognizeGeneralStructureResponseBodyDataSubImagesKvInfo>(model1);
      }
    }
    if (m.find("SubImageId") != m.end() && !m["SubImageId"].empty()) {
      subImageId = make_shared<long>(boost::any_cast<long>(m["SubImageId"]));
    }
  }


  virtual ~RecognizeGeneralStructureResponseBodyDataSubImages() = default;
};
class RecognizeGeneralStructureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> subImageCount{};
  shared_ptr<vector<RecognizeGeneralStructureResponseBodyDataSubImages>> subImages{};
  shared_ptr<long> width{};

  RecognizeGeneralStructureResponseBodyData() {}

  explicit RecognizeGeneralStructureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (subImageCount) {
      res["SubImageCount"] = boost::any(*subImageCount);
    }
    if (subImages) {
      vector<boost::any> temp1;
      for(auto item1:*subImages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubImages"] = boost::any(temp1);
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
    if (m.find("SubImageCount") != m.end() && !m["SubImageCount"].empty()) {
      subImageCount = make_shared<long>(boost::any_cast<long>(m["SubImageCount"]));
    }
    if (m.find("SubImages") != m.end() && !m["SubImages"].empty()) {
      if (typeid(vector<boost::any>) == m["SubImages"].type()) {
        vector<RecognizeGeneralStructureResponseBodyDataSubImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubImages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeGeneralStructureResponseBodyDataSubImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subImages = make_shared<vector<RecognizeGeneralStructureResponseBodyDataSubImages>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeGeneralStructureResponseBodyData() = default;
};
class RecognizeGeneralStructureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RecognizeGeneralStructureResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeGeneralStructureResponseBody() {}

  explicit RecognizeGeneralStructureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeGeneralStructureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeGeneralStructureResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeGeneralStructureResponseBody() = default;
};
class RecognizeGeneralStructureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeGeneralStructureResponseBody> body{};

  RecognizeGeneralStructureResponse() {}

  explicit RecognizeGeneralStructureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeGeneralStructureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeGeneralStructureResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeGeneralStructureResponse() = default;
};
class RecognizeHKIdcardRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeHKIdcardRequest() {}

  explicit RecognizeHKIdcardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeHKIdcardRequest() = default;
};
class RecognizeHKIdcardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeHKIdcardResponseBody() {}

  explicit RecognizeHKIdcardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeHKIdcardResponseBody() = default;
};
class RecognizeHKIdcardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeHKIdcardResponseBody> body{};

  RecognizeHKIdcardResponse() {}

  explicit RecognizeHKIdcardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeHKIdcardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeHKIdcardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeHKIdcardResponse() = default;
};
class RecognizeHandwritingRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> needSortPage{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<bool> paragraph{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeHandwritingRequest() {}

  explicit RecognizeHandwritingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (needSortPage) {
      res["NeedSortPage"] = boost::any(*needSortPage);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (paragraph) {
      res["Paragraph"] = boost::any(*paragraph);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("NeedSortPage") != m.end() && !m["NeedSortPage"].empty()) {
      needSortPage = make_shared<bool>(boost::any_cast<bool>(m["NeedSortPage"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Paragraph") != m.end() && !m["Paragraph"].empty()) {
      paragraph = make_shared<bool>(boost::any_cast<bool>(m["Paragraph"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeHandwritingRequest() = default;
};
class RecognizeHandwritingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeHandwritingResponseBody() {}

  explicit RecognizeHandwritingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeHandwritingResponseBody() = default;
};
class RecognizeHandwritingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeHandwritingResponseBody> body{};

  RecognizeHandwritingResponse() {}

  explicit RecognizeHandwritingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeHandwritingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeHandwritingResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeHandwritingResponse() = default;
};
class RecognizeHealthCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeHealthCodeRequest() {}

  explicit RecognizeHealthCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeHealthCodeRequest() = default;
};
class RecognizeHealthCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeHealthCodeResponseBody() {}

  explicit RecognizeHealthCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeHealthCodeResponseBody() = default;
};
class RecognizeHealthCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeHealthCodeResponseBody> body{};

  RecognizeHealthCodeResponse() {}

  explicit RecognizeHealthCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeHealthCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeHealthCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeHealthCodeResponse() = default;
};
class RecognizeHotelConsumeRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeHotelConsumeRequest() {}

  explicit RecognizeHotelConsumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeHotelConsumeRequest() = default;
};
class RecognizeHotelConsumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeHotelConsumeResponseBody() {}

  explicit RecognizeHotelConsumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeHotelConsumeResponseBody() = default;
};
class RecognizeHotelConsumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeHotelConsumeResponseBody> body{};

  RecognizeHotelConsumeResponse() {}

  explicit RecognizeHotelConsumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeHotelConsumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeHotelConsumeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeHotelConsumeResponse() = default;
};
class RecognizeHouseholdRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isResidentPage{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeHouseholdRequest() {}

  explicit RecognizeHouseholdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isResidentPage) {
      res["IsResidentPage"] = boost::any(*isResidentPage);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsResidentPage") != m.end() && !m["IsResidentPage"].empty()) {
      isResidentPage = make_shared<bool>(boost::any_cast<bool>(m["IsResidentPage"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeHouseholdRequest() = default;
};
class RecognizeHouseholdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeHouseholdResponseBody() {}

  explicit RecognizeHouseholdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeHouseholdResponseBody() = default;
};
class RecognizeHouseholdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeHouseholdResponseBody> body{};

  RecognizeHouseholdResponse() {}

  explicit RecognizeHouseholdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeHouseholdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeHouseholdResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeHouseholdResponse() = default;
};
class RecognizeIdcardRequest : public Darabonba::Model {
public:
  shared_ptr<bool> llmRec{};
  shared_ptr<bool> outputFigure{};
  shared_ptr<bool> outputQualityInfo{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeIdcardRequest() {}

  explicit RecognizeIdcardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (llmRec) {
      res["Llm_rec"] = boost::any(*llmRec);
    }
    if (outputFigure) {
      res["OutputFigure"] = boost::any(*outputFigure);
    }
    if (outputQualityInfo) {
      res["OutputQualityInfo"] = boost::any(*outputQualityInfo);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Llm_rec") != m.end() && !m["Llm_rec"].empty()) {
      llmRec = make_shared<bool>(boost::any_cast<bool>(m["Llm_rec"]));
    }
    if (m.find("OutputFigure") != m.end() && !m["OutputFigure"].empty()) {
      outputFigure = make_shared<bool>(boost::any_cast<bool>(m["OutputFigure"]));
    }
    if (m.find("OutputQualityInfo") != m.end() && !m["OutputQualityInfo"].empty()) {
      outputQualityInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputQualityInfo"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeIdcardRequest() = default;
};
class RecognizeIdcardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeIdcardResponseBody() {}

  explicit RecognizeIdcardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeIdcardResponseBody() = default;
};
class RecognizeIdcardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeIdcardResponseBody> body{};

  RecognizeIdcardResponse() {}

  explicit RecognizeIdcardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIdcardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeIdcardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeIdcardResponse() = default;
};
class RecognizeInternationalBusinessLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> country{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeInternationalBusinessLicenseRequest() {}

  explicit RecognizeInternationalBusinessLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeInternationalBusinessLicenseRequest() = default;
};
class RecognizeInternationalBusinessLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeInternationalBusinessLicenseResponseBody() {}

  explicit RecognizeInternationalBusinessLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeInternationalBusinessLicenseResponseBody() = default;
};
class RecognizeInternationalBusinessLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeInternationalBusinessLicenseResponseBody> body{};

  RecognizeInternationalBusinessLicenseResponse() {}

  explicit RecognizeInternationalBusinessLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeInternationalBusinessLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeInternationalBusinessLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeInternationalBusinessLicenseResponse() = default;
};
class RecognizeInternationalIdcardRequest : public Darabonba::Model {
public:
  shared_ptr<string> country{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeInternationalIdcardRequest() {}

  explicit RecognizeInternationalIdcardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeInternationalIdcardRequest() = default;
};
class RecognizeInternationalIdcardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeInternationalIdcardResponseBody() {}

  explicit RecognizeInternationalIdcardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeInternationalIdcardResponseBody() = default;
};
class RecognizeInternationalIdcardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeInternationalIdcardResponseBody> body{};

  RecognizeInternationalIdcardResponse() {}

  explicit RecognizeInternationalIdcardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeInternationalIdcardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeInternationalIdcardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeInternationalIdcardResponse() = default;
};
class RecognizeInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeInvoiceRequest() {}

  explicit RecognizeInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeInvoiceRequest() = default;
};
class RecognizeInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeInvoiceResponseBody() {}

  explicit RecognizeInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeInvoiceResponseBody() = default;
};
class RecognizeInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeInvoiceResponseBody> body{};

  RecognizeInvoiceResponse() {}

  explicit RecognizeInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeInvoiceResponse() = default;
};
class RecognizeJanpaneseRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeJanpaneseRequest() {}

  explicit RecognizeJanpaneseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeJanpaneseRequest() = default;
};
class RecognizeJanpaneseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeJanpaneseResponseBody() {}

  explicit RecognizeJanpaneseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeJanpaneseResponseBody() = default;
};
class RecognizeJanpaneseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeJanpaneseResponseBody> body{};

  RecognizeJanpaneseResponse() {}

  explicit RecognizeJanpaneseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeJanpaneseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeJanpaneseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeJanpaneseResponse() = default;
};
class RecognizeKoreanRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeKoreanRequest() {}

  explicit RecognizeKoreanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeKoreanRequest() = default;
};
class RecognizeKoreanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeKoreanResponseBody() {}

  explicit RecognizeKoreanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeKoreanResponseBody() = default;
};
class RecognizeKoreanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeKoreanResponseBody> body{};

  RecognizeKoreanResponse() {}

  explicit RecognizeKoreanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeKoreanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeKoreanResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeKoreanResponse() = default;
};
class RecognizeLatinRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeLatinRequest() {}

  explicit RecognizeLatinRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeLatinRequest() = default;
};
class RecognizeLatinResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeLatinResponseBody() {}

  explicit RecognizeLatinResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeLatinResponseBody() = default;
};
class RecognizeLatinResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeLatinResponseBody> body{};

  RecognizeLatinResponse() {}

  explicit RecognizeLatinResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeLatinResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeLatinResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeLatinResponse() = default;
};
class RecognizeMedicalDeviceManageLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeMedicalDeviceManageLicenseRequest() {}

  explicit RecognizeMedicalDeviceManageLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeMedicalDeviceManageLicenseRequest() = default;
};
class RecognizeMedicalDeviceManageLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeMedicalDeviceManageLicenseResponseBody() {}

  explicit RecognizeMedicalDeviceManageLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeMedicalDeviceManageLicenseResponseBody() = default;
};
class RecognizeMedicalDeviceManageLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeMedicalDeviceManageLicenseResponseBody> body{};

  RecognizeMedicalDeviceManageLicenseResponse() {}

  explicit RecognizeMedicalDeviceManageLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeMedicalDeviceManageLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeMedicalDeviceManageLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeMedicalDeviceManageLicenseResponse() = default;
};
class RecognizeMedicalDeviceProduceLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeMedicalDeviceProduceLicenseRequest() {}

  explicit RecognizeMedicalDeviceProduceLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeMedicalDeviceProduceLicenseRequest() = default;
};
class RecognizeMedicalDeviceProduceLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeMedicalDeviceProduceLicenseResponseBody() {}

  explicit RecognizeMedicalDeviceProduceLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeMedicalDeviceProduceLicenseResponseBody() = default;
};
class RecognizeMedicalDeviceProduceLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeMedicalDeviceProduceLicenseResponseBody> body{};

  RecognizeMedicalDeviceProduceLicenseResponse() {}

  explicit RecognizeMedicalDeviceProduceLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeMedicalDeviceProduceLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeMedicalDeviceProduceLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeMedicalDeviceProduceLicenseResponse() = default;
};
class RecognizeMixedInvoicesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> mergePdfPages{};
  shared_ptr<long> pageNo{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeMixedInvoicesRequest() {}

  explicit RecognizeMixedInvoicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mergePdfPages) {
      res["MergePdfPages"] = boost::any(*mergePdfPages);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MergePdfPages") != m.end() && !m["MergePdfPages"].empty()) {
      mergePdfPages = make_shared<bool>(boost::any_cast<bool>(m["MergePdfPages"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeMixedInvoicesRequest() = default;
};
class RecognizeMixedInvoicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeMixedInvoicesResponseBody() {}

  explicit RecognizeMixedInvoicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeMixedInvoicesResponseBody() = default;
};
class RecognizeMixedInvoicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeMixedInvoicesResponseBody> body{};

  RecognizeMixedInvoicesResponse() {}

  explicit RecognizeMixedInvoicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeMixedInvoicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeMixedInvoicesResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeMixedInvoicesResponse() = default;
};
class RecognizeMultiLanguageRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> languages{};
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> needSortPage{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeMultiLanguageRequest() {}

  explicit RecognizeMultiLanguageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (languages) {
      res["Languages"] = boost::any(*languages);
    }
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (needSortPage) {
      res["NeedSortPage"] = boost::any(*needSortPage);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Languages") != m.end() && !m["Languages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Languages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Languages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      languages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("NeedSortPage") != m.end() && !m["NeedSortPage"].empty()) {
      needSortPage = make_shared<bool>(boost::any_cast<bool>(m["NeedSortPage"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeMultiLanguageRequest() = default;
};
class RecognizeMultiLanguageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> languagesShrink{};
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> needSortPage{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeMultiLanguageShrinkRequest() {}

  explicit RecognizeMultiLanguageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (languagesShrink) {
      res["Languages"] = boost::any(*languagesShrink);
    }
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (needSortPage) {
      res["NeedSortPage"] = boost::any(*needSortPage);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Languages") != m.end() && !m["Languages"].empty()) {
      languagesShrink = make_shared<string>(boost::any_cast<string>(m["Languages"]));
    }
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("NeedSortPage") != m.end() && !m["NeedSortPage"].empty()) {
      needSortPage = make_shared<bool>(boost::any_cast<bool>(m["NeedSortPage"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeMultiLanguageShrinkRequest() = default;
};
class RecognizeMultiLanguageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeMultiLanguageResponseBody() {}

  explicit RecognizeMultiLanguageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeMultiLanguageResponseBody() = default;
};
class RecognizeMultiLanguageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeMultiLanguageResponseBody> body{};

  RecognizeMultiLanguageResponse() {}

  explicit RecognizeMultiLanguageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeMultiLanguageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeMultiLanguageResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeMultiLanguageResponse() = default;
};
class RecognizeNonTaxInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeNonTaxInvoiceRequest() {}

  explicit RecognizeNonTaxInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeNonTaxInvoiceRequest() = default;
};
class RecognizeNonTaxInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeNonTaxInvoiceResponseBody() {}

  explicit RecognizeNonTaxInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeNonTaxInvoiceResponseBody() = default;
};
class RecognizeNonTaxInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeNonTaxInvoiceResponseBody> body{};

  RecognizeNonTaxInvoiceResponse() {}

  explicit RecognizeNonTaxInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeNonTaxInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeNonTaxInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeNonTaxInvoiceResponse() = default;
};
class RecognizePassportRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizePassportRequest() {}

  explicit RecognizePassportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizePassportRequest() = default;
};
class RecognizePassportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizePassportResponseBody() {}

  explicit RecognizePassportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizePassportResponseBody() = default;
};
class RecognizePassportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizePassportResponseBody> body{};

  RecognizePassportResponse() {}

  explicit RecognizePassportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePassportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePassportResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePassportResponse() = default;
};
class RecognizePaymentRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizePaymentRecordRequest() {}

  explicit RecognizePaymentRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizePaymentRecordRequest() = default;
};
class RecognizePaymentRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizePaymentRecordResponseBody() {}

  explicit RecognizePaymentRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizePaymentRecordResponseBody() = default;
};
class RecognizePaymentRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizePaymentRecordResponseBody> body{};

  RecognizePaymentRecordResponse() {}

  explicit RecognizePaymentRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePaymentRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePaymentRecordResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePaymentRecordResponse() = default;
};
class RecognizePurchaseRecordRequest : public Darabonba::Model {
public:
  shared_ptr<bool> outputMultiOrders{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizePurchaseRecordRequest() {}

  explicit RecognizePurchaseRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputMultiOrders) {
      res["OutputMultiOrders"] = boost::any(*outputMultiOrders);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputMultiOrders") != m.end() && !m["OutputMultiOrders"].empty()) {
      outputMultiOrders = make_shared<bool>(boost::any_cast<bool>(m["OutputMultiOrders"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizePurchaseRecordRequest() = default;
};
class RecognizePurchaseRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizePurchaseRecordResponseBody() {}

  explicit RecognizePurchaseRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizePurchaseRecordResponseBody() = default;
};
class RecognizePurchaseRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizePurchaseRecordResponseBody> body{};

  RecognizePurchaseRecordResponse() {}

  explicit RecognizePurchaseRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePurchaseRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePurchaseRecordResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePurchaseRecordResponse() = default;
};
class RecognizeQuotaInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeQuotaInvoiceRequest() {}

  explicit RecognizeQuotaInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceRequest() = default;
};
class RecognizeQuotaInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeQuotaInvoiceResponseBody() {}

  explicit RecognizeQuotaInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
        RecognizeQuotaInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeQuotaInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeQuotaInvoiceResponse() = default;
};
class RecognizeRideHailingItineraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeRideHailingItineraryRequest() {}

  explicit RecognizeRideHailingItineraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeRideHailingItineraryRequest() = default;
};
class RecognizeRideHailingItineraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeRideHailingItineraryResponseBody() {}

  explicit RecognizeRideHailingItineraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeRideHailingItineraryResponseBody() = default;
};
class RecognizeRideHailingItineraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeRideHailingItineraryResponseBody> body{};

  RecognizeRideHailingItineraryResponse() {}

  explicit RecognizeRideHailingItineraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeRideHailingItineraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeRideHailingItineraryResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeRideHailingItineraryResponse() = default;
};
class RecognizeRollTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeRollTicketRequest() {}

  explicit RecognizeRollTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeRollTicketRequest() = default;
};
class RecognizeRollTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeRollTicketResponseBody() {}

  explicit RecognizeRollTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeRollTicketResponseBody() = default;
};
class RecognizeRollTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeRollTicketResponseBody> body{};

  RecognizeRollTicketResponse() {}

  explicit RecognizeRollTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeRollTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeRollTicketResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeRollTicketResponse() = default;
};
class RecognizeRussianRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeRussianRequest() {}

  explicit RecognizeRussianRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeRussianRequest() = default;
};
class RecognizeRussianResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeRussianResponseBody() {}

  explicit RecognizeRussianResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeRussianResponseBody() = default;
};
class RecognizeRussianResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeRussianResponseBody> body{};

  RecognizeRussianResponse() {}

  explicit RecognizeRussianResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeRussianResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeRussianResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeRussianResponse() = default;
};
class RecognizeShoppingReceiptRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeShoppingReceiptRequest() {}

  explicit RecognizeShoppingReceiptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeShoppingReceiptRequest() = default;
};
class RecognizeShoppingReceiptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeShoppingReceiptResponseBody() {}

  explicit RecognizeShoppingReceiptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeShoppingReceiptResponseBody() = default;
};
class RecognizeShoppingReceiptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeShoppingReceiptResponseBody> body{};

  RecognizeShoppingReceiptResponse() {}

  explicit RecognizeShoppingReceiptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeShoppingReceiptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeShoppingReceiptResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeShoppingReceiptResponse() = default;
};
class RecognizeSocialSecurityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeSocialSecurityCardRequest() {}

  explicit RecognizeSocialSecurityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeSocialSecurityCardRequest() = default;
};
class RecognizeSocialSecurityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeSocialSecurityCardResponseBody() {}

  explicit RecognizeSocialSecurityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeSocialSecurityCardResponseBody() = default;
};
class RecognizeSocialSecurityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeSocialSecurityCardResponseBody> body{};

  RecognizeSocialSecurityCardResponse() {}

  explicit RecognizeSocialSecurityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeSocialSecurityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeSocialSecurityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeSocialSecurityCardResponse() = default;
};
class RecognizeSocialSecurityCardVersionIIRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeSocialSecurityCardVersionIIRequest() {}

  explicit RecognizeSocialSecurityCardVersionIIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeSocialSecurityCardVersionIIRequest() = default;
};
class RecognizeSocialSecurityCardVersionIIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeSocialSecurityCardVersionIIResponseBody() {}

  explicit RecognizeSocialSecurityCardVersionIIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeSocialSecurityCardVersionIIResponseBody() = default;
};
class RecognizeSocialSecurityCardVersionIIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeSocialSecurityCardVersionIIResponseBody> body{};

  RecognizeSocialSecurityCardVersionIIResponse() {}

  explicit RecognizeSocialSecurityCardVersionIIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeSocialSecurityCardVersionIIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeSocialSecurityCardVersionIIResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeSocialSecurityCardVersionIIResponse() = default;
};
class RecognizeTableOcrRequest : public Darabonba::Model {
public:
  shared_ptr<string> isHandWriting{};
  shared_ptr<bool> lineLess{};
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> skipDetection{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeTableOcrRequest() {}

  explicit RecognizeTableOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isHandWriting) {
      res["IsHandWriting"] = boost::any(*isHandWriting);
    }
    if (lineLess) {
      res["LineLess"] = boost::any(*lineLess);
    }
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (skipDetection) {
      res["SkipDetection"] = boost::any(*skipDetection);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsHandWriting") != m.end() && !m["IsHandWriting"].empty()) {
      isHandWriting = make_shared<string>(boost::any_cast<string>(m["IsHandWriting"]));
    }
    if (m.find("LineLess") != m.end() && !m["LineLess"].empty()) {
      lineLess = make_shared<bool>(boost::any_cast<bool>(m["LineLess"]));
    }
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("SkipDetection") != m.end() && !m["SkipDetection"].empty()) {
      skipDetection = make_shared<bool>(boost::any_cast<bool>(m["SkipDetection"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeTableOcrRequest() = default;
};
class RecognizeTableOcrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeTableOcrResponseBody() {}

  explicit RecognizeTableOcrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTableOcrResponseBody() = default;
};
class RecognizeTableOcrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTableOcrResponseBody> body{};

  RecognizeTableOcrResponse() {}

  explicit RecognizeTableOcrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTableOcrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTableOcrResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTableOcrResponse() = default;
};
class RecognizeTaxClearanceCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeTaxClearanceCertificateRequest() {}

  explicit RecognizeTaxClearanceCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeTaxClearanceCertificateRequest() = default;
};
class RecognizeTaxClearanceCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeTaxClearanceCertificateResponseBody() {}

  explicit RecognizeTaxClearanceCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTaxClearanceCertificateResponseBody() = default;
};
class RecognizeTaxClearanceCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTaxClearanceCertificateResponseBody> body{};

  RecognizeTaxClearanceCertificateResponse() {}

  explicit RecognizeTaxClearanceCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTaxClearanceCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTaxClearanceCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTaxClearanceCertificateResponse() = default;
};
class RecognizeTaxiInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeTaxiInvoiceRequest() {}

  explicit RecognizeTaxiInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceRequest() = default;
};
class RecognizeTaxiInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeTaxiInvoiceResponseBody() {}

  explicit RecognizeTaxiInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
        RecognizeTaxiInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTaxiInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponse() = default;
};
class RecognizeThaiRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needRotate{};
  shared_ptr<bool> outputCharInfo{};
  shared_ptr<bool> outputTable{};
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeThaiRequest() {}

  explicit RecognizeThaiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRotate) {
      res["NeedRotate"] = boost::any(*needRotate);
    }
    if (outputCharInfo) {
      res["OutputCharInfo"] = boost::any(*outputCharInfo);
    }
    if (outputTable) {
      res["OutputTable"] = boost::any(*outputTable);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRotate") != m.end() && !m["NeedRotate"].empty()) {
      needRotate = make_shared<bool>(boost::any_cast<bool>(m["NeedRotate"]));
    }
    if (m.find("OutputCharInfo") != m.end() && !m["OutputCharInfo"].empty()) {
      outputCharInfo = make_shared<bool>(boost::any_cast<bool>(m["OutputCharInfo"]));
    }
    if (m.find("OutputTable") != m.end() && !m["OutputTable"].empty()) {
      outputTable = make_shared<bool>(boost::any_cast<bool>(m["OutputTable"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeThaiRequest() = default;
};
class RecognizeThaiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeThaiResponseBody() {}

  explicit RecognizeThaiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeThaiResponseBody() = default;
};
class RecognizeThaiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeThaiResponseBody> body{};

  RecognizeThaiResponse() {}

  explicit RecognizeThaiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeThaiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeThaiResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeThaiResponse() = default;
};
class RecognizeTollInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeTollInvoiceRequest() {}

  explicit RecognizeTollInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeTollInvoiceRequest() = default;
};
class RecognizeTollInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeTollInvoiceResponseBody() {}

  explicit RecognizeTollInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTollInvoiceResponseBody() = default;
};
class RecognizeTollInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTollInvoiceResponseBody> body{};

  RecognizeTollInvoiceResponse() {}

  explicit RecognizeTollInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTollInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTollInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTollInvoiceResponse() = default;
};
class RecognizeTradeMarkCertificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeTradeMarkCertificationRequest() {}

  explicit RecognizeTradeMarkCertificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeTradeMarkCertificationRequest() = default;
};
class RecognizeTradeMarkCertificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeTradeMarkCertificationResponseBody() {}

  explicit RecognizeTradeMarkCertificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTradeMarkCertificationResponseBody() = default;
};
class RecognizeTradeMarkCertificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTradeMarkCertificationResponseBody> body{};

  RecognizeTradeMarkCertificationResponse() {}

  explicit RecognizeTradeMarkCertificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTradeMarkCertificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTradeMarkCertificationResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTradeMarkCertificationResponse() = default;
};
class RecognizeTrainInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeTrainInvoiceRequest() {}

  explicit RecognizeTrainInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeTrainInvoiceRequest() = default;
};
class RecognizeTrainInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeTrainInvoiceResponseBody() {}

  explicit RecognizeTrainInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTrainInvoiceResponseBody() = default;
};
class RecognizeTrainInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTrainInvoiceResponseBody> body{};

  RecognizeTrainInvoiceResponse() {}

  explicit RecognizeTrainInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTrainInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTrainInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTrainInvoiceResponse() = default;
};
class RecognizeUsedCarInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeUsedCarInvoiceRequest() {}

  explicit RecognizeUsedCarInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeUsedCarInvoiceRequest() = default;
};
class RecognizeUsedCarInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeUsedCarInvoiceResponseBody() {}

  explicit RecognizeUsedCarInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeUsedCarInvoiceResponseBody() = default;
};
class RecognizeUsedCarInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeUsedCarInvoiceResponseBody> body{};

  RecognizeUsedCarInvoiceResponse() {}

  explicit RecognizeUsedCarInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeUsedCarInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeUsedCarInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeUsedCarInvoiceResponse() = default;
};
class RecognizeVehicleCertificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeVehicleCertificationRequest() {}

  explicit RecognizeVehicleCertificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeVehicleCertificationRequest() = default;
};
class RecognizeVehicleCertificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeVehicleCertificationResponseBody() {}

  explicit RecognizeVehicleCertificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVehicleCertificationResponseBody() = default;
};
class RecognizeVehicleCertificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVehicleCertificationResponseBody> body{};

  RecognizeVehicleCertificationResponse() {}

  explicit RecognizeVehicleCertificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleCertificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVehicleCertificationResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleCertificationResponse() = default;
};
class RecognizeVehicleLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeVehicleLicenseRequest() {}

  explicit RecognizeVehicleLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeVehicleLicenseRequest() = default;
};
class RecognizeVehicleLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeVehicleLicenseResponseBody() {}

  explicit RecognizeVehicleLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVehicleLicenseResponseBody() = default;
};
class RecognizeVehicleLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVehicleLicenseResponseBody> body{};

  RecognizeVehicleLicenseResponse() {}

  explicit RecognizeVehicleLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVehicleLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleLicenseResponse() = default;
};
class RecognizeVehicleRegistrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeVehicleRegistrationRequest() {}

  explicit RecognizeVehicleRegistrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeVehicleRegistrationRequest() = default;
};
class RecognizeVehicleRegistrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeVehicleRegistrationResponseBody() {}

  explicit RecognizeVehicleRegistrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVehicleRegistrationResponseBody() = default;
};
class RecognizeVehicleRegistrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVehicleRegistrationResponseBody> body{};

  RecognizeVehicleRegistrationResponse() {}

  explicit RecognizeVehicleRegistrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVehicleRegistrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVehicleRegistrationResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVehicleRegistrationResponse() = default;
};
class RecognizeWaybillRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<Darabonba::Stream> body{};

  RecognizeWaybillRequest() {}

  explicit RecognizeWaybillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~RecognizeWaybillRequest() = default;
};
class RecognizeWaybillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeWaybillResponseBody() {}

  explicit RecognizeWaybillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeWaybillResponseBody() = default;
};
class RecognizeWaybillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeWaybillResponseBody> body{};

  RecognizeWaybillResponse() {}

  explicit RecognizeWaybillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeWaybillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeWaybillResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeWaybillResponse() = default;
};
class VerifyBusinessLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> companyName{};
  shared_ptr<string> creditCode{};
  shared_ptr<string> legalPerson{};

  VerifyBusinessLicenseRequest() {}

  explicit VerifyBusinessLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (creditCode) {
      res["CreditCode"] = boost::any(*creditCode);
    }
    if (legalPerson) {
      res["LegalPerson"] = boost::any(*legalPerson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("CreditCode") != m.end() && !m["CreditCode"].empty()) {
      creditCode = make_shared<string>(boost::any_cast<string>(m["CreditCode"]));
    }
    if (m.find("LegalPerson") != m.end() && !m["LegalPerson"].empty()) {
      legalPerson = make_shared<string>(boost::any_cast<string>(m["LegalPerson"]));
    }
  }


  virtual ~VerifyBusinessLicenseRequest() = default;
};
class VerifyBusinessLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  VerifyBusinessLicenseResponseBody() {}

  explicit VerifyBusinessLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyBusinessLicenseResponseBody() = default;
};
class VerifyBusinessLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyBusinessLicenseResponseBody> body{};

  VerifyBusinessLicenseResponse() {}

  explicit VerifyBusinessLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyBusinessLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyBusinessLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyBusinessLicenseResponse() = default;
};
class VerifyVATInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDate{};
  shared_ptr<long> invoiceKind{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> invoiceSum{};
  shared_ptr<string> verifyCode{};

  VerifyVATInvoiceRequest() {}

  explicit VerifyVATInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDate) {
      res["InvoiceDate"] = boost::any(*invoiceDate);
    }
    if (invoiceKind) {
      res["InvoiceKind"] = boost::any(*invoiceKind);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (invoiceSum) {
      res["InvoiceSum"] = boost::any(*invoiceSum);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDate") != m.end() && !m["InvoiceDate"].empty()) {
      invoiceDate = make_shared<string>(boost::any_cast<string>(m["InvoiceDate"]));
    }
    if (m.find("InvoiceKind") != m.end() && !m["InvoiceKind"].empty()) {
      invoiceKind = make_shared<long>(boost::any_cast<long>(m["InvoiceKind"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("InvoiceSum") != m.end() && !m["InvoiceSum"].empty()) {
      invoiceSum = make_shared<string>(boost::any_cast<string>(m["InvoiceSum"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~VerifyVATInvoiceRequest() = default;
};
class VerifyVATInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  VerifyVATInvoiceResponseBody() {}

  explicit VerifyVATInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyVATInvoiceResponseBody() = default;
};
class VerifyVATInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyVATInvoiceResponseBody> body{};

  VerifyVATInvoiceResponse() {}

  explicit VerifyVATInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyVATInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyVATInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyVATInvoiceResponse() = default;
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
  RecognizeAdvancedResponse recognizeAdvancedWithOptions(shared_ptr<RecognizeAdvancedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeAdvancedResponse recognizeAdvanced(shared_ptr<RecognizeAdvancedRequest> request);
  RecognizeAirItineraryResponse recognizeAirItineraryWithOptions(shared_ptr<RecognizeAirItineraryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeAirItineraryResponse recognizeAirItinerary(shared_ptr<RecognizeAirItineraryRequest> request);
  RecognizeAllTextResponse recognizeAllTextWithOptions(shared_ptr<RecognizeAllTextRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeAllTextResponse recognizeAllText(shared_ptr<RecognizeAllTextRequest> request);
  RecognizeBankAcceptanceResponse recognizeBankAcceptanceWithOptions(shared_ptr<RecognizeBankAcceptanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBankAcceptanceResponse recognizeBankAcceptance(shared_ptr<RecognizeBankAcceptanceRequest> request);
  RecognizeBankAccountLicenseResponse recognizeBankAccountLicenseWithOptions(shared_ptr<RecognizeBankAccountLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBankAccountLicenseResponse recognizeBankAccountLicense(shared_ptr<RecognizeBankAccountLicenseRequest> request);
  RecognizeBankCardResponse recognizeBankCardWithOptions(shared_ptr<RecognizeBankCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBankCardResponse recognizeBankCard(shared_ptr<RecognizeBankCardRequest> request);
  RecognizeBasicResponse recognizeBasicWithOptions(shared_ptr<RecognizeBasicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBasicResponse recognizeBasic(shared_ptr<RecognizeBasicRequest> request);
  RecognizeBirthCertificationResponse recognizeBirthCertificationWithOptions(shared_ptr<RecognizeBirthCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBirthCertificationResponse recognizeBirthCertification(shared_ptr<RecognizeBirthCertificationRequest> request);
  RecognizeBusShipTicketResponse recognizeBusShipTicketWithOptions(shared_ptr<RecognizeBusShipTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusShipTicketResponse recognizeBusShipTicket(shared_ptr<RecognizeBusShipTicketRequest> request);
  RecognizeBusinessLicenseResponse recognizeBusinessLicenseWithOptions(shared_ptr<RecognizeBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessLicenseResponse recognizeBusinessLicense(shared_ptr<RecognizeBusinessLicenseRequest> request);
  RecognizeCarInvoiceResponse recognizeCarInvoiceWithOptions(shared_ptr<RecognizeCarInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCarInvoiceResponse recognizeCarInvoice(shared_ptr<RecognizeCarInvoiceRequest> request);
  RecognizeCarNumberResponse recognizeCarNumberWithOptions(shared_ptr<RecognizeCarNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCarNumberResponse recognizeCarNumber(shared_ptr<RecognizeCarNumberRequest> request);
  RecognizeCarVinCodeResponse recognizeCarVinCodeWithOptions(shared_ptr<RecognizeCarVinCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCarVinCodeResponse recognizeCarVinCode(shared_ptr<RecognizeCarVinCodeRequest> request);
  RecognizeChinesePassportResponse recognizeChinesePassportWithOptions(shared_ptr<RecognizeChinesePassportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeChinesePassportResponse recognizeChinesePassport(shared_ptr<RecognizeChinesePassportRequest> request);
  RecognizeCommonPrintedInvoiceResponse recognizeCommonPrintedInvoiceWithOptions(shared_ptr<RecognizeCommonPrintedInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCommonPrintedInvoiceResponse recognizeCommonPrintedInvoice(shared_ptr<RecognizeCommonPrintedInvoiceRequest> request);
  RecognizeCosmeticProduceLicenseResponse recognizeCosmeticProduceLicenseWithOptions(shared_ptr<RecognizeCosmeticProduceLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCosmeticProduceLicenseResponse recognizeCosmeticProduceLicense(shared_ptr<RecognizeCosmeticProduceLicenseRequest> request);
  RecognizeCovidTestReportResponse recognizeCovidTestReportWithOptions(shared_ptr<RecognizeCovidTestReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCovidTestReportResponse recognizeCovidTestReport(shared_ptr<RecognizeCovidTestReportRequest> request);
  RecognizeCtwoMedicalDeviceManageLicenseResponse recognizeCtwoMedicalDeviceManageLicenseWithOptions(shared_ptr<RecognizeCtwoMedicalDeviceManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCtwoMedicalDeviceManageLicenseResponse recognizeCtwoMedicalDeviceManageLicense(shared_ptr<RecognizeCtwoMedicalDeviceManageLicenseRequest> request);
  RecognizeDocumentStructureResponse recognizeDocumentStructureWithOptions(shared_ptr<RecognizeDocumentStructureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDocumentStructureResponse recognizeDocumentStructure(shared_ptr<RecognizeDocumentStructureRequest> request);
  RecognizeDrivingLicenseResponse recognizeDrivingLicenseWithOptions(shared_ptr<RecognizeDrivingLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDrivingLicenseResponse recognizeDrivingLicense(shared_ptr<RecognizeDrivingLicenseRequest> request);
  RecognizeEduFormulaResponse recognizeEduFormulaWithOptions(shared_ptr<RecognizeEduFormulaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeEduFormulaResponse recognizeEduFormula(shared_ptr<RecognizeEduFormulaRequest> request);
  RecognizeEduOralCalculationResponse recognizeEduOralCalculationWithOptions(shared_ptr<RecognizeEduOralCalculationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeEduOralCalculationResponse recognizeEduOralCalculation(shared_ptr<RecognizeEduOralCalculationRequest> request);
  RecognizeEduPaperCutResponse recognizeEduPaperCutWithOptions(shared_ptr<RecognizeEduPaperCutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeEduPaperCutResponse recognizeEduPaperCut(shared_ptr<RecognizeEduPaperCutRequest> request);
  RecognizeEduPaperOcrResponse recognizeEduPaperOcrWithOptions(shared_ptr<RecognizeEduPaperOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeEduPaperOcrResponse recognizeEduPaperOcr(shared_ptr<RecognizeEduPaperOcrRequest> request);
  RecognizeEduPaperStructedResponse recognizeEduPaperStructedWithOptions(shared_ptr<RecognizeEduPaperStructedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeEduPaperStructedResponse recognizeEduPaperStructed(shared_ptr<RecognizeEduPaperStructedRequest> request);
  RecognizeEduQuestionOcrResponse recognizeEduQuestionOcrWithOptions(shared_ptr<RecognizeEduQuestionOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeEduQuestionOcrResponse recognizeEduQuestionOcr(shared_ptr<RecognizeEduQuestionOcrRequest> request);
  RecognizeEnglishResponse recognizeEnglishWithOptions(shared_ptr<RecognizeEnglishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeEnglishResponse recognizeEnglish(shared_ptr<RecognizeEnglishRequest> request);
  RecognizeEstateCertificationResponse recognizeEstateCertificationWithOptions(shared_ptr<RecognizeEstateCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeEstateCertificationResponse recognizeEstateCertification(shared_ptr<RecognizeEstateCertificationRequest> request);
  RecognizeExitEntryPermitToHKResponse recognizeExitEntryPermitToHKWithOptions(shared_ptr<RecognizeExitEntryPermitToHKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeExitEntryPermitToHKResponse recognizeExitEntryPermitToHK(shared_ptr<RecognizeExitEntryPermitToHKRequest> request);
  RecognizeExitEntryPermitToMainlandResponse recognizeExitEntryPermitToMainlandWithOptions(shared_ptr<RecognizeExitEntryPermitToMainlandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeExitEntryPermitToMainlandResponse recognizeExitEntryPermitToMainland(shared_ptr<RecognizeExitEntryPermitToMainlandRequest> request);
  RecognizeFoodManageLicenseResponse recognizeFoodManageLicenseWithOptions(shared_ptr<RecognizeFoodManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFoodManageLicenseResponse recognizeFoodManageLicense(shared_ptr<RecognizeFoodManageLicenseRequest> request);
  RecognizeFoodProduceLicenseResponse recognizeFoodProduceLicenseWithOptions(shared_ptr<RecognizeFoodProduceLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFoodProduceLicenseResponse recognizeFoodProduceLicense(shared_ptr<RecognizeFoodProduceLicenseRequest> request);
  RecognizeGeneralResponse recognizeGeneralWithOptions(shared_ptr<RecognizeGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeGeneralResponse recognizeGeneral(shared_ptr<RecognizeGeneralRequest> request);
  RecognizeGeneralStructureResponse recognizeGeneralStructureWithOptions(shared_ptr<RecognizeGeneralStructureRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeGeneralStructureResponse recognizeGeneralStructure(shared_ptr<RecognizeGeneralStructureRequest> request);
  RecognizeHKIdcardResponse recognizeHKIdcardWithOptions(shared_ptr<RecognizeHKIdcardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeHKIdcardResponse recognizeHKIdcard(shared_ptr<RecognizeHKIdcardRequest> request);
  RecognizeHandwritingResponse recognizeHandwritingWithOptions(shared_ptr<RecognizeHandwritingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeHandwritingResponse recognizeHandwriting(shared_ptr<RecognizeHandwritingRequest> request);
  RecognizeHealthCodeResponse recognizeHealthCodeWithOptions(shared_ptr<RecognizeHealthCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeHealthCodeResponse recognizeHealthCode(shared_ptr<RecognizeHealthCodeRequest> request);
  RecognizeHotelConsumeResponse recognizeHotelConsumeWithOptions(shared_ptr<RecognizeHotelConsumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeHotelConsumeResponse recognizeHotelConsume(shared_ptr<RecognizeHotelConsumeRequest> request);
  RecognizeHouseholdResponse recognizeHouseholdWithOptions(shared_ptr<RecognizeHouseholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeHouseholdResponse recognizeHousehold(shared_ptr<RecognizeHouseholdRequest> request);
  RecognizeIdcardResponse recognizeIdcardWithOptions(shared_ptr<RecognizeIdcardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIdcardResponse recognizeIdcard(shared_ptr<RecognizeIdcardRequest> request);
  RecognizeInternationalBusinessLicenseResponse recognizeInternationalBusinessLicenseWithOptions(shared_ptr<RecognizeInternationalBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeInternationalBusinessLicenseResponse recognizeInternationalBusinessLicense(shared_ptr<RecognizeInternationalBusinessLicenseRequest> request);
  RecognizeInternationalIdcardResponse recognizeInternationalIdcardWithOptions(shared_ptr<RecognizeInternationalIdcardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeInternationalIdcardResponse recognizeInternationalIdcard(shared_ptr<RecognizeInternationalIdcardRequest> request);
  RecognizeInvoiceResponse recognizeInvoiceWithOptions(shared_ptr<RecognizeInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeInvoiceResponse recognizeInvoice(shared_ptr<RecognizeInvoiceRequest> request);
  RecognizeJanpaneseResponse recognizeJanpaneseWithOptions(shared_ptr<RecognizeJanpaneseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeJanpaneseResponse recognizeJanpanese(shared_ptr<RecognizeJanpaneseRequest> request);
  RecognizeKoreanResponse recognizeKoreanWithOptions(shared_ptr<RecognizeKoreanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeKoreanResponse recognizeKorean(shared_ptr<RecognizeKoreanRequest> request);
  RecognizeLatinResponse recognizeLatinWithOptions(shared_ptr<RecognizeLatinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLatinResponse recognizeLatin(shared_ptr<RecognizeLatinRequest> request);
  RecognizeMedicalDeviceManageLicenseResponse recognizeMedicalDeviceManageLicenseWithOptions(shared_ptr<RecognizeMedicalDeviceManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeMedicalDeviceManageLicenseResponse recognizeMedicalDeviceManageLicense(shared_ptr<RecognizeMedicalDeviceManageLicenseRequest> request);
  RecognizeMedicalDeviceProduceLicenseResponse recognizeMedicalDeviceProduceLicenseWithOptions(shared_ptr<RecognizeMedicalDeviceProduceLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeMedicalDeviceProduceLicenseResponse recognizeMedicalDeviceProduceLicense(shared_ptr<RecognizeMedicalDeviceProduceLicenseRequest> request);
  RecognizeMixedInvoicesResponse recognizeMixedInvoicesWithOptions(shared_ptr<RecognizeMixedInvoicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeMixedInvoicesResponse recognizeMixedInvoices(shared_ptr<RecognizeMixedInvoicesRequest> request);
  RecognizeMultiLanguageResponse recognizeMultiLanguageWithOptions(shared_ptr<RecognizeMultiLanguageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeMultiLanguageResponse recognizeMultiLanguage(shared_ptr<RecognizeMultiLanguageRequest> request);
  RecognizeNonTaxInvoiceResponse recognizeNonTaxInvoiceWithOptions(shared_ptr<RecognizeNonTaxInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeNonTaxInvoiceResponse recognizeNonTaxInvoice(shared_ptr<RecognizeNonTaxInvoiceRequest> request);
  RecognizePassportResponse recognizePassportWithOptions(shared_ptr<RecognizePassportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePassportResponse recognizePassport(shared_ptr<RecognizePassportRequest> request);
  RecognizePaymentRecordResponse recognizePaymentRecordWithOptions(shared_ptr<RecognizePaymentRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePaymentRecordResponse recognizePaymentRecord(shared_ptr<RecognizePaymentRecordRequest> request);
  RecognizePurchaseRecordResponse recognizePurchaseRecordWithOptions(shared_ptr<RecognizePurchaseRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePurchaseRecordResponse recognizePurchaseRecord(shared_ptr<RecognizePurchaseRecordRequest> request);
  RecognizeQuotaInvoiceResponse recognizeQuotaInvoiceWithOptions(shared_ptr<RecognizeQuotaInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQuotaInvoiceResponse recognizeQuotaInvoice(shared_ptr<RecognizeQuotaInvoiceRequest> request);
  RecognizeRideHailingItineraryResponse recognizeRideHailingItineraryWithOptions(shared_ptr<RecognizeRideHailingItineraryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeRideHailingItineraryResponse recognizeRideHailingItinerary(shared_ptr<RecognizeRideHailingItineraryRequest> request);
  RecognizeRollTicketResponse recognizeRollTicketWithOptions(shared_ptr<RecognizeRollTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeRollTicketResponse recognizeRollTicket(shared_ptr<RecognizeRollTicketRequest> request);
  RecognizeRussianResponse recognizeRussianWithOptions(shared_ptr<RecognizeRussianRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeRussianResponse recognizeRussian(shared_ptr<RecognizeRussianRequest> request);
  RecognizeShoppingReceiptResponse recognizeShoppingReceiptWithOptions(shared_ptr<RecognizeShoppingReceiptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeShoppingReceiptResponse recognizeShoppingReceipt(shared_ptr<RecognizeShoppingReceiptRequest> request);
  RecognizeSocialSecurityCardResponse recognizeSocialSecurityCardWithOptions(shared_ptr<RecognizeSocialSecurityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeSocialSecurityCardResponse recognizeSocialSecurityCard(shared_ptr<RecognizeSocialSecurityCardRequest> request);
  RecognizeSocialSecurityCardVersionIIResponse recognizeSocialSecurityCardVersionIIWithOptions(shared_ptr<RecognizeSocialSecurityCardVersionIIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeSocialSecurityCardVersionIIResponse recognizeSocialSecurityCardVersionII(shared_ptr<RecognizeSocialSecurityCardVersionIIRequest> request);
  RecognizeTableOcrResponse recognizeTableOcrWithOptions(shared_ptr<RecognizeTableOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTableOcrResponse recognizeTableOcr(shared_ptr<RecognizeTableOcrRequest> request);
  RecognizeTaxClearanceCertificateResponse recognizeTaxClearanceCertificateWithOptions(shared_ptr<RecognizeTaxClearanceCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTaxClearanceCertificateResponse recognizeTaxClearanceCertificate(shared_ptr<RecognizeTaxClearanceCertificateRequest> request);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceWithOptions(shared_ptr<RecognizeTaxiInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoice(shared_ptr<RecognizeTaxiInvoiceRequest> request);
  RecognizeThaiResponse recognizeThaiWithOptions(shared_ptr<RecognizeThaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeThaiResponse recognizeThai(shared_ptr<RecognizeThaiRequest> request);
  RecognizeTollInvoiceResponse recognizeTollInvoiceWithOptions(shared_ptr<RecognizeTollInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTollInvoiceResponse recognizeTollInvoice(shared_ptr<RecognizeTollInvoiceRequest> request);
  RecognizeTradeMarkCertificationResponse recognizeTradeMarkCertificationWithOptions(shared_ptr<RecognizeTradeMarkCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTradeMarkCertificationResponse recognizeTradeMarkCertification(shared_ptr<RecognizeTradeMarkCertificationRequest> request);
  RecognizeTrainInvoiceResponse recognizeTrainInvoiceWithOptions(shared_ptr<RecognizeTrainInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTrainInvoiceResponse recognizeTrainInvoice(shared_ptr<RecognizeTrainInvoiceRequest> request);
  RecognizeUsedCarInvoiceResponse recognizeUsedCarInvoiceWithOptions(shared_ptr<RecognizeUsedCarInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeUsedCarInvoiceResponse recognizeUsedCarInvoice(shared_ptr<RecognizeUsedCarInvoiceRequest> request);
  RecognizeVehicleCertificationResponse recognizeVehicleCertificationWithOptions(shared_ptr<RecognizeVehicleCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehicleCertificationResponse recognizeVehicleCertification(shared_ptr<RecognizeVehicleCertificationRequest> request);
  RecognizeVehicleLicenseResponse recognizeVehicleLicenseWithOptions(shared_ptr<RecognizeVehicleLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehicleLicenseResponse recognizeVehicleLicense(shared_ptr<RecognizeVehicleLicenseRequest> request);
  RecognizeVehicleRegistrationResponse recognizeVehicleRegistrationWithOptions(shared_ptr<RecognizeVehicleRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVehicleRegistrationResponse recognizeVehicleRegistration(shared_ptr<RecognizeVehicleRegistrationRequest> request);
  RecognizeWaybillResponse recognizeWaybillWithOptions(shared_ptr<RecognizeWaybillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeWaybillResponse recognizeWaybill(shared_ptr<RecognizeWaybillRequest> request);
  VerifyBusinessLicenseResponse verifyBusinessLicenseWithOptions(shared_ptr<VerifyBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyBusinessLicenseResponse verifyBusinessLicense(shared_ptr<VerifyBusinessLicenseRequest> request);
  VerifyVATInvoiceResponse verifyVATInvoiceWithOptions(shared_ptr<VerifyVATInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyVATInvoiceResponse verifyVATInvoice(shared_ptr<VerifyVATInvoiceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ocr-api20210707

#endif
