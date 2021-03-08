// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMAGEAUDIT20191230_H_
#define ALIBABACLOUD_IMAGEAUDIT20191230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imageaudit20191230 {
class ScanTextRequestTasks : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  ScanTextRequestTasks() {}

  explicit ScanTextRequestTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~ScanTextRequestTasks() = default;
};
class ScanTextRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> label{};

  ScanTextRequestLabels() {}

  explicit ScanTextRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ScanTextRequestLabels() = default;
};
class ScanTextRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ScanTextRequestTasks>> tasks{};
  shared_ptr<vector<ScanTextRequestLabels>> labels{};

  ScanTextRequest() {}

  explicit ScanTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ScanTextRequestTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanTextRequestTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ScanTextRequestTasks>>(expect1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ScanTextRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanTextRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ScanTextRequestLabels>>(expect1);
      }
    }
  }


  virtual ~ScanTextRequest() = default;
};
class ScanTextResponseBodyDataElementsResultsDetailsContexts : public Darabonba::Model {
public:
  shared_ptr<string> context{};

  ScanTextResponseBodyDataElementsResultsDetailsContexts() {}

  explicit ScanTextResponseBodyDataElementsResultsDetailsContexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["Context"] = boost::any(*context);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
  }


  virtual ~ScanTextResponseBodyDataElementsResultsDetailsContexts() = default;
};
class ScanTextResponseBodyDataElementsResultsDetails : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<vector<ScanTextResponseBodyDataElementsResultsDetailsContexts>> contexts{};

  ScanTextResponseBodyDataElementsResultsDetails() {}

  explicit ScanTextResponseBodyDataElementsResultsDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (contexts) {
      vector<boost::any> temp1;
      for(auto item1:*contexts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contexts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Contexts") != m.end() && !m["Contexts"].empty()) {
      if (typeid(vector<boost::any>) == m["Contexts"].type()) {
        vector<ScanTextResponseBodyDataElementsResultsDetailsContexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contexts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanTextResponseBodyDataElementsResultsDetailsContexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contexts = make_shared<vector<ScanTextResponseBodyDataElementsResultsDetailsContexts>>(expect1);
      }
    }
  }


  virtual ~ScanTextResponseBodyDataElementsResultsDetails() = default;
};
class ScanTextResponseBodyDataElementsResults : public Darabonba::Model {
public:
  shared_ptr<string> suggestion{};
  shared_ptr<string> label{};
  shared_ptr<double> rate{};
  shared_ptr<vector<ScanTextResponseBodyDataElementsResultsDetails>> details{};

  ScanTextResponseBodyDataElementsResults() {}

  explicit ScanTextResponseBodyDataElementsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Details"] = boost::any(temp1);
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
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(vector<boost::any>) == m["Details"].type()) {
        vector<ScanTextResponseBodyDataElementsResultsDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanTextResponseBodyDataElementsResultsDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<ScanTextResponseBodyDataElementsResultsDetails>>(expect1);
      }
    }
  }


  virtual ~ScanTextResponseBodyDataElementsResults() = default;
};
class ScanTextResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<vector<ScanTextResponseBodyDataElementsResults>> results{};

  ScanTextResponseBodyDataElements() {}

  explicit ScanTextResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<ScanTextResponseBodyDataElementsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanTextResponseBodyDataElementsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<ScanTextResponseBodyDataElementsResults>>(expect1);
      }
    }
  }


  virtual ~ScanTextResponseBodyDataElements() = default;
};
class ScanTextResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ScanTextResponseBodyDataElements>> elements{};

  ScanTextResponseBodyData() {}

  explicit ScanTextResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ScanTextResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanTextResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<ScanTextResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~ScanTextResponseBodyData() = default;
};
class ScanTextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ScanTextResponseBodyData> data{};

  ScanTextResponseBody() {}

  explicit ScanTextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScanTextResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScanTextResponseBodyData>(model1);
      }
    }
  }


  virtual ~ScanTextResponseBody() = default;
};
class ScanTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScanTextResponseBody> body{};

  ScanTextResponse() {}

  explicit ScanTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScanTextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScanTextResponseBody>(model1);
      }
    }
  }


  virtual ~ScanTextResponse() = default;
};
class ScanImageRequestTask : public Darabonba::Model {
public:
  shared_ptr<long> imageTimeMillisecond{};
  shared_ptr<long> interval{};
  shared_ptr<string> imageURL{};
  shared_ptr<long> maxFrames{};
  shared_ptr<string> dataId{};

  ScanImageRequestTask() {}

  explicit ScanImageRequestTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageTimeMillisecond) {
      res["ImageTimeMillisecond"] = boost::any(*imageTimeMillisecond);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (maxFrames) {
      res["MaxFrames"] = boost::any(*maxFrames);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageTimeMillisecond") != m.end() && !m["ImageTimeMillisecond"].empty()) {
      imageTimeMillisecond = make_shared<long>(boost::any_cast<long>(m["ImageTimeMillisecond"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("MaxFrames") != m.end() && !m["MaxFrames"].empty()) {
      maxFrames = make_shared<long>(boost::any_cast<long>(m["MaxFrames"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
  }


  virtual ~ScanImageRequestTask() = default;
};
class ScanImageRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ScanImageRequestTask>> task{};
  shared_ptr<vector<string>> scene{};

  ScanImageRequest() {}

  explicit ScanImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<ScanImageRequestTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageRequestTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<ScanImageRequestTask>>(expect1);
      }
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Scene"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Scene"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scene = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ScanImageRequest() = default;
};
class ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<double> rate{};

  ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces() {}

  explicit ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces() = default;
};
class ScanImageResponseBodyDataResultsSubResultsSfaceDataList : public Darabonba::Model {
public:
  shared_ptr<double> width{};
  shared_ptr<vector<ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces>> faces{};
  shared_ptr<double> height{};
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  ScanImageResponseBodyDataResultsSubResultsSfaceDataList() {}

  explicit ScanImageResponseBodyDataResultsSubResultsSfaceDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
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
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces>>(expect1);
      }
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~ScanImageResponseBodyDataResultsSubResultsSfaceDataList() = default;
};
class ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList : public Darabonba::Model {
public:
  shared_ptr<string> context{};

  ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList() {}

  explicit ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["Context"] = boost::any(*context);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
  }


  virtual ~ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList() = default;
};
class ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList : public Darabonba::Model {
public:
  shared_ptr<double> width{};
  shared_ptr<double> height{};
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList() {}

  explicit ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList() = default;
};
class ScanImageResponseBodyDataResultsSubResultsFrames : public Darabonba::Model {
public:
  shared_ptr<string> URL{};
  shared_ptr<double> rate{};

  ScanImageResponseBodyDataResultsSubResultsFrames() {}

  explicit ScanImageResponseBodyDataResultsSubResultsFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~ScanImageResponseBodyDataResultsSubResultsFrames() = default;
};
class ScanImageResponseBodyDataResultsSubResultsLogoDataList : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<double> width{};
  shared_ptr<double> height{};
  shared_ptr<double> y{};
  shared_ptr<string> name{};
  shared_ptr<double> x{};

  ScanImageResponseBodyDataResultsSubResultsLogoDataList() {}

  explicit ScanImageResponseBodyDataResultsSubResultsLogoDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
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


  virtual ~ScanImageResponseBodyDataResultsSubResultsLogoDataList() = default;
};
class ScanImageResponseBodyDataResultsSubResults : public Darabonba::Model {
public:
  shared_ptr<vector<ScanImageResponseBodyDataResultsSubResultsSfaceDataList>> sfaceDataList{};
  shared_ptr<vector<ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList>> hintWordsInfoList{};
  shared_ptr<string> suggestion{};
  shared_ptr<vector<ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList>> programCodeDataList{};
  shared_ptr<vector<string>> OCRDataList{};
  shared_ptr<vector<ScanImageResponseBodyDataResultsSubResultsFrames>> frames{};
  shared_ptr<vector<ScanImageResponseBodyDataResultsSubResultsLogoDataList>> logoDataList{};
  shared_ptr<string> label{};
  shared_ptr<string> scene{};
  shared_ptr<double> rate{};

  ScanImageResponseBodyDataResultsSubResults() {}

  explicit ScanImageResponseBodyDataResultsSubResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sfaceDataList) {
      vector<boost::any> temp1;
      for(auto item1:*sfaceDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SfaceDataList"] = boost::any(temp1);
    }
    if (hintWordsInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*hintWordsInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HintWordsInfoList"] = boost::any(temp1);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (programCodeDataList) {
      vector<boost::any> temp1;
      for(auto item1:*programCodeDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProgramCodeDataList"] = boost::any(temp1);
    }
    if (OCRDataList) {
      res["OCRDataList"] = boost::any(*OCRDataList);
    }
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Frames"] = boost::any(temp1);
    }
    if (logoDataList) {
      vector<boost::any> temp1;
      for(auto item1:*logoDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogoDataList"] = boost::any(temp1);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SfaceDataList") != m.end() && !m["SfaceDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["SfaceDataList"].type()) {
        vector<ScanImageResponseBodyDataResultsSubResultsSfaceDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SfaceDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageResponseBodyDataResultsSubResultsSfaceDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sfaceDataList = make_shared<vector<ScanImageResponseBodyDataResultsSubResultsSfaceDataList>>(expect1);
      }
    }
    if (m.find("HintWordsInfoList") != m.end() && !m["HintWordsInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["HintWordsInfoList"].type()) {
        vector<ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HintWordsInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hintWordsInfoList = make_shared<vector<ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList>>(expect1);
      }
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("ProgramCodeDataList") != m.end() && !m["ProgramCodeDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProgramCodeDataList"].type()) {
        vector<ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProgramCodeDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        programCodeDataList = make_shared<vector<ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList>>(expect1);
      }
    }
    if (m.find("OCRDataList") != m.end() && !m["OCRDataList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OCRDataList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OCRDataList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      OCRDataList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      if (typeid(vector<boost::any>) == m["Frames"].type()) {
        vector<ScanImageResponseBodyDataResultsSubResultsFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageResponseBodyDataResultsSubResultsFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<ScanImageResponseBodyDataResultsSubResultsFrames>>(expect1);
      }
    }
    if (m.find("LogoDataList") != m.end() && !m["LogoDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogoDataList"].type()) {
        vector<ScanImageResponseBodyDataResultsSubResultsLogoDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogoDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageResponseBodyDataResultsSubResultsLogoDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logoDataList = make_shared<vector<ScanImageResponseBodyDataResultsSubResultsLogoDataList>>(expect1);
      }
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~ScanImageResponseBodyDataResultsSubResults() = default;
};
class ScanImageResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> dataId{};
  shared_ptr<vector<ScanImageResponseBodyDataResultsSubResults>> subResults{};
  shared_ptr<string> taskId{};

  ScanImageResponseBodyDataResults() {}

  explicit ScanImageResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (subResults) {
      vector<boost::any> temp1;
      for(auto item1:*subResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubResults"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("SubResults") != m.end() && !m["SubResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SubResults"].type()) {
        vector<ScanImageResponseBodyDataResultsSubResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageResponseBodyDataResultsSubResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subResults = make_shared<vector<ScanImageResponseBodyDataResultsSubResults>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ScanImageResponseBodyDataResults() = default;
};
class ScanImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ScanImageResponseBodyDataResults>> results{};

  ScanImageResponseBodyData() {}

  explicit ScanImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<ScanImageResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScanImageResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<ScanImageResponseBodyDataResults>>(expect1);
      }
    }
  }


  virtual ~ScanImageResponseBodyData() = default;
};
class ScanImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ScanImageResponseBodyData> data{};

  ScanImageResponseBody() {}

  explicit ScanImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScanImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScanImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~ScanImageResponseBody() = default;
};
class ScanImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScanImageResponseBody> body{};

  ScanImageResponse() {}

  explicit ScanImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScanImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScanImageResponseBody>(model1);
      }
    }
  }


  virtual ~ScanImageResponse() = default;
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
  ScanTextResponse scanTextWithOptions(shared_ptr<ScanTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScanTextResponse scanText(shared_ptr<ScanTextRequest> request);
  ScanImageResponse scanImageWithOptions(shared_ptr<ScanImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScanImageResponse scanImage(shared_ptr<ScanImageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imageaudit20191230

#endif
