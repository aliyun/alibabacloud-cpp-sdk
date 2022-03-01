// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IVPD20190625_H_
#define ALIBABACLOUD_IVPD20190625_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ivpd20190625 {
class ChangeImageSizeRequest : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<string> url{};
  shared_ptr<long> width{};

  ChangeImageSizeRequest() {}

  explicit ChangeImageSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
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
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~ChangeImageSizeRequest() = default;
};
class ChangeImageSizeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  ChangeImageSizeResponseBodyData() {}

  explicit ChangeImageSizeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeImageSizeResponseBodyData() = default;
};
class ChangeImageSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ChangeImageSizeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChangeImageSizeResponseBody() {}

  explicit ChangeImageSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeImageSizeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChangeImageSizeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChangeImageSizeResponseBody() = default;
};
class ChangeImageSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeImageSizeResponseBody> body{};

  ChangeImageSizeResponse() {}

  explicit ChangeImageSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeImageSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeImageSizeResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeImageSizeResponse() = default;
};
class CreateSegmentBodyJobRequestDataList : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> imageUrl{};

  CreateSegmentBodyJobRequestDataList() {}

  explicit CreateSegmentBodyJobRequestDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~CreateSegmentBodyJobRequestDataList() = default;
};
class CreateSegmentBodyJobRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateSegmentBodyJobRequestDataList>> dataList{};
  shared_ptr<string> jobId{};
  shared_ptr<long> timeToLive{};

  CreateSegmentBodyJobRequest() {}

  explicit CreateSegmentBodyJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (timeToLive) {
      res["TimeToLive"] = boost::any(*timeToLive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<CreateSegmentBodyJobRequestDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSegmentBodyJobRequestDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<CreateSegmentBodyJobRequestDataList>>(expect1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("TimeToLive") != m.end() && !m["TimeToLive"].empty()) {
      timeToLive = make_shared<long>(boost::any_cast<long>(m["TimeToLive"]));
    }
  }


  virtual ~CreateSegmentBodyJobRequest() = default;
};
class CreateSegmentBodyJobResponseBodyDataResultListResultData : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  CreateSegmentBodyJobResponseBodyDataResultListResultData() {}

  explicit CreateSegmentBodyJobResponseBodyDataResultListResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSegmentBodyJobResponseBodyDataResultListResultData() = default;
};
class CreateSegmentBodyJobResponseBodyDataResultList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dataId{};
  shared_ptr<string> message{};
  shared_ptr<CreateSegmentBodyJobResponseBodyDataResultListResultData> resultData{};
  shared_ptr<bool> success{};

  CreateSegmentBodyJobResponseBodyDataResultList() {}

  explicit CreateSegmentBodyJobResponseBodyDataResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (resultData) {
      res["ResultData"] = resultData ? boost::any(resultData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ResultData") != m.end() && !m["ResultData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultData"].type()) {
        CreateSegmentBodyJobResponseBodyDataResultListResultData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultData"]));
        resultData = make_shared<CreateSegmentBodyJobResponseBodyDataResultListResultData>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSegmentBodyJobResponseBodyDataResultList() = default;
};
class CreateSegmentBodyJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> batchSize{};
  shared_ptr<bool> completed{};
  shared_ptr<string> jobId{};
  shared_ptr<long> progress{};
  shared_ptr<vector<CreateSegmentBodyJobResponseBodyDataResultList>> resultList{};
  shared_ptr<string> status{};
  shared_ptr<long> totalUsedTime{};

  CreateSegmentBodyJobResponseBodyData() {}

  explicit CreateSegmentBodyJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (resultList) {
      vector<boost::any> temp1;
      for(auto item1:*resultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalUsedTime) {
      res["TotalUsedTime"] = boost::any(*totalUsedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<long>(boost::any_cast<long>(m["BatchSize"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("ResultList") != m.end() && !m["ResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultList"].type()) {
        vector<CreateSegmentBodyJobResponseBodyDataResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSegmentBodyJobResponseBodyDataResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultList = make_shared<vector<CreateSegmentBodyJobResponseBodyDataResultList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalUsedTime") != m.end() && !m["TotalUsedTime"].empty()) {
      totalUsedTime = make_shared<long>(boost::any_cast<long>(m["TotalUsedTime"]));
    }
  }


  virtual ~CreateSegmentBodyJobResponseBodyData() = default;
};
class CreateSegmentBodyJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateSegmentBodyJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateSegmentBodyJobResponseBody() {}

  explicit CreateSegmentBodyJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSegmentBodyJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateSegmentBodyJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSegmentBodyJobResponseBody() = default;
};
class CreateSegmentBodyJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSegmentBodyJobResponseBody> body{};

  CreateSegmentBodyJobResponse() {}

  explicit CreateSegmentBodyJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSegmentBodyJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSegmentBodyJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSegmentBodyJobResponse() = default;
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
class DetectImageElementsResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<double> score{};
  shared_ptr<string> type{};
  shared_ptr<long> width{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DetectImageElementsResponseBodyDataElements() {}

  explicit DetectImageElementsResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
  shared_ptr<string> code{};
  shared_ptr<DetectImageElementsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetectImageElementsResponseBody() {}

  explicit DetectImageElementsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageElementsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectImageElementsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class EraseLogoInVideoRequestBoxes : public Darabonba::Model {
public:
  shared_ptr<double> h{};
  shared_ptr<double> w{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  EraseLogoInVideoRequestBoxes() {}

  explicit EraseLogoInVideoRequestBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EraseLogoInVideoRequestBoxes() = default;
};
class EraseLogoInVideoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<EraseLogoInVideoRequestBoxes>> boxes{};
  shared_ptr<string> jobId{};
  shared_ptr<string> videoUrl{};

  EraseLogoInVideoRequest() {}

  explicit EraseLogoInVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<EraseLogoInVideoRequestBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EraseLogoInVideoRequestBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<EraseLogoInVideoRequestBoxes>>(expect1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~EraseLogoInVideoRequest() = default;
};
class EraseLogoInVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> videoUrl{};

  EraseLogoInVideoResponseBodyData() {}

  explicit EraseLogoInVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~EraseLogoInVideoResponseBodyData() = default;
};
class EraseLogoInVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<EraseLogoInVideoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EraseLogoInVideoResponseBody() {}

  explicit EraseLogoInVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EraseLogoInVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EraseLogoInVideoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EraseLogoInVideoResponseBody() = default;
};
class EraseLogoInVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EraseLogoInVideoResponseBody> body{};

  EraseLogoInVideoResponse() {}

  explicit EraseLogoInVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EraseLogoInVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EraseLogoInVideoResponseBody>(model1);
      }
    }
  }


  virtual ~EraseLogoInVideoResponse() = default;
};
class ExtendImageStyleRequest : public Darabonba::Model {
public:
  shared_ptr<string> majorUrl{};
  shared_ptr<string> styleUrl{};

  ExtendImageStyleRequest() {}

  explicit ExtendImageStyleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (majorUrl) {
      res["MajorUrl"] = boost::any(*majorUrl);
    }
    if (styleUrl) {
      res["StyleUrl"] = boost::any(*styleUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MajorUrl") != m.end() && !m["MajorUrl"].empty()) {
      majorUrl = make_shared<string>(boost::any_cast<string>(m["MajorUrl"]));
    }
    if (m.find("StyleUrl") != m.end() && !m["StyleUrl"].empty()) {
      styleUrl = make_shared<string>(boost::any_cast<string>(m["StyleUrl"]));
    }
  }


  virtual ~ExtendImageStyleRequest() = default;
};
class ExtendImageStyleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> majorUrl{};
  shared_ptr<string> url{};

  ExtendImageStyleResponseBodyData() {}

  explicit ExtendImageStyleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (majorUrl) {
      res["MajorUrl"] = boost::any(*majorUrl);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MajorUrl") != m.end() && !m["MajorUrl"].empty()) {
      majorUrl = make_shared<string>(boost::any_cast<string>(m["MajorUrl"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ExtendImageStyleResponseBodyData() = default;
};
class ExtendImageStyleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ExtendImageStyleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ExtendImageStyleResponseBody() {}

  explicit ExtendImageStyleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtendImageStyleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExtendImageStyleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExtendImageStyleResponseBody() = default;
};
class ExtendImageStyleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtendImageStyleResponseBody> body{};

  ExtendImageStyleResponse() {}

  explicit ExtendImageStyleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtendImageStyleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtendImageStyleResponseBody>(model1);
      }
    }
  }


  virtual ~ExtendImageStyleResponse() = default;
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
class GetAsyncResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetAsyncResultRequest() {}

  explicit GetAsyncResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAsyncResultRequest() = default;
};
class GetAsyncResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> batchSize{};
  shared_ptr<string> code{};
  shared_ptr<bool> completed{};
  shared_ptr<bool> finish{};
  shared_ptr<string> message{};
  shared_ptr<double> progress{};
  shared_ptr<map<string, boost::any>> result{};
  shared_ptr<string> status{};
  shared_ptr<long> totalUsedTime{};

  GetAsyncResultResponseBodyData() {}

  explicit GetAsyncResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (finish) {
      res["Finish"] = boost::any(*finish);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalUsedTime) {
      res["TotalUsedTime"] = boost::any(*totalUsedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<string>(boost::any_cast<string>(m["BatchSize"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("Finish") != m.end() && !m["Finish"].empty()) {
      finish = make_shared<bool>(boost::any_cast<bool>(m["Finish"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["Progress"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalUsedTime") != m.end() && !m["TotalUsedTime"].empty()) {
      totalUsedTime = make_shared<long>(boost::any_cast<long>(m["TotalUsedTime"]));
    }
  }


  virtual ~GetAsyncResultResponseBodyData() = default;
};
class GetAsyncResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAsyncResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetAsyncResultResponseBody() {}

  explicit GetAsyncResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsyncResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAsyncResultResponseBody() = default;
};
class GetAsyncResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAsyncResultResponseBody> body{};

  GetAsyncResultResponse() {}

  explicit GetAsyncResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncResultResponse() = default;
};
class GetJobResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetJobResultRequest() {}

  explicit GetJobResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetJobResultRequest() = default;
};
class GetJobResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> batchSize{};
  shared_ptr<bool> completed{};
  shared_ptr<bool> finish{};
  shared_ptr<string> message{};
  shared_ptr<double> progress{};
  shared_ptr<vector<map<string, boost::any>>> resultList{};
  shared_ptr<string> status{};
  shared_ptr<long> totalUsedTime{};

  GetJobResultResponseBodyData() {}

  explicit GetJobResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (finish) {
      res["Finish"] = boost::any(*finish);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (resultList) {
      res["ResultList"] = boost::any(*resultList);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalUsedTime) {
      res["TotalUsedTime"] = boost::any(*totalUsedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<string>(boost::any_cast<string>(m["BatchSize"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("Finish") != m.end() && !m["Finish"].empty()) {
      finish = make_shared<bool>(boost::any_cast<bool>(m["Finish"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["Progress"]));
    }
    if (m.find("ResultList") != m.end() && !m["ResultList"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["ResultList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResultList"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      resultList = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalUsedTime") != m.end() && !m["TotalUsedTime"].empty()) {
      totalUsedTime = make_shared<long>(boost::any_cast<long>(m["TotalUsedTime"]));
    }
  }


  virtual ~GetJobResultResponseBodyData() = default;
};
class GetJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetJobResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetJobResultResponseBody() {}

  explicit GetJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetJobResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobResultResponseBody() = default;
};
class GetJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJobResultResponseBody> body{};

  GetJobResultResponse() {}

  explicit GetJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobResultResponse() = default;
};
class GetJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetJobStatusRequest() {}

  explicit GetJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetJobStatusRequest() = default;
};
class GetJobStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> batchSize{};
  shared_ptr<bool> completed{};
  shared_ptr<bool> finish{};
  shared_ptr<string> message{};
  shared_ptr<double> progress{};
  shared_ptr<string> status{};
  shared_ptr<long> timeToLive{};
  shared_ptr<long> totalUsedTime{};

  GetJobStatusResponseBodyData() {}

  explicit GetJobStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (finish) {
      res["Finish"] = boost::any(*finish);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeToLive) {
      res["TimeToLive"] = boost::any(*timeToLive);
    }
    if (totalUsedTime) {
      res["TotalUsedTime"] = boost::any(*totalUsedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<string>(boost::any_cast<string>(m["BatchSize"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("Finish") != m.end() && !m["Finish"].empty()) {
      finish = make_shared<bool>(boost::any_cast<bool>(m["Finish"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TimeToLive") != m.end() && !m["TimeToLive"].empty()) {
      timeToLive = make_shared<long>(boost::any_cast<long>(m["TimeToLive"]));
    }
    if (m.find("TotalUsedTime") != m.end() && !m["TotalUsedTime"].empty()) {
      totalUsedTime = make_shared<long>(boost::any_cast<long>(m["TotalUsedTime"]));
    }
  }


  virtual ~GetJobStatusResponseBodyData() = default;
};
class GetJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetJobStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetJobStatusResponseBody() {}

  explicit GetJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetJobStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobStatusResponseBody() = default;
};
class GetJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJobStatusResponseBody> body{};

  GetJobStatusResponse() {}

  explicit GetJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobStatusResponse() = default;
};
class GetUserBucketConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> region{};
  shared_ptr<string> regionName{};

  GetUserBucketConfigResponseBodyData() {}

  explicit GetUserBucketConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~GetUserBucketConfigResponseBodyData() = default;
};
class GetUserBucketConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetUserBucketConfigResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetUserBucketConfigResponseBody() {}

  explicit GetUserBucketConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetUserBucketConfigResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserBucketConfigResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetUserBucketConfigResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserBucketConfigResponseBody() = default;
};
class GetUserBucketConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserBucketConfigResponseBody> body{};

  GetUserBucketConfigResponse() {}

  explicit GetUserBucketConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserBucketConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserBucketConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserBucketConfigResponse() = default;
};
class HighlightGameVideoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> async{};
  shared_ptr<string> videoUrl{};

  HighlightGameVideoRequest() {}

  explicit HighlightGameVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (async) {
      res["Async"] = boost::any(*async);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~HighlightGameVideoRequest() = default;
};
class HighlightGameVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<bool> async{};

  HighlightGameVideoAdvanceRequest() {}

  explicit HighlightGameVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~HighlightGameVideoAdvanceRequest() = default;
};
class HighlightGameVideoResponseBodyDataGameList : public Darabonba::Model {
public:
  shared_ptr<double> end{};
  shared_ptr<map<string, boost::any>> gameInfo{};
  shared_ptr<string> id{};
  shared_ptr<double> start{};

  HighlightGameVideoResponseBodyDataGameList() {}

  explicit HighlightGameVideoResponseBodyDataGameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (gameInfo) {
      res["GameInfo"] = boost::any(*gameInfo);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<double>(boost::any_cast<double>(m["End"]));
    }
    if (m.find("GameInfo") != m.end() && !m["GameInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["GameInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      gameInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<double>(boost::any_cast<double>(m["Start"]));
    }
  }


  virtual ~HighlightGameVideoResponseBodyDataGameList() = default;
};
class HighlightGameVideoResponseBodyDataHighlightList : public Darabonba::Model {
public:
  shared_ptr<double> end{};
  shared_ptr<double> start{};

  HighlightGameVideoResponseBodyDataHighlightList() {}

  explicit HighlightGameVideoResponseBodyDataHighlightList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<double>(boost::any_cast<double>(m["End"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<double>(boost::any_cast<double>(m["Start"]));
    }
  }


  virtual ~HighlightGameVideoResponseBodyDataHighlightList() = default;
};
class HighlightGameVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<HighlightGameVideoResponseBodyDataGameList>> gameList{};
  shared_ptr<vector<HighlightGameVideoResponseBodyDataHighlightList>> highlightList{};

  HighlightGameVideoResponseBodyData() {}

  explicit HighlightGameVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameList) {
      vector<boost::any> temp1;
      for(auto item1:*gameList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GameList"] = boost::any(temp1);
    }
    if (highlightList) {
      vector<boost::any> temp1;
      for(auto item1:*highlightList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HighlightList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameList") != m.end() && !m["GameList"].empty()) {
      if (typeid(vector<boost::any>) == m["GameList"].type()) {
        vector<HighlightGameVideoResponseBodyDataGameList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GameList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HighlightGameVideoResponseBodyDataGameList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gameList = make_shared<vector<HighlightGameVideoResponseBodyDataGameList>>(expect1);
      }
    }
    if (m.find("HighlightList") != m.end() && !m["HighlightList"].empty()) {
      if (typeid(vector<boost::any>) == m["HighlightList"].type()) {
        vector<HighlightGameVideoResponseBodyDataHighlightList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HighlightList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HighlightGameVideoResponseBodyDataHighlightList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        highlightList = make_shared<vector<HighlightGameVideoResponseBodyDataHighlightList>>(expect1);
      }
    }
  }


  virtual ~HighlightGameVideoResponseBodyData() = default;
};
class HighlightGameVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<HighlightGameVideoResponseBodyData> data{};
  shared_ptr<string> requestId{};

  HighlightGameVideoResponseBody() {}

  explicit HighlightGameVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HighlightGameVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<HighlightGameVideoResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~HighlightGameVideoResponseBody() = default;
};
class HighlightGameVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HighlightGameVideoResponseBody> body{};

  HighlightGameVideoResponse() {}

  explicit HighlightGameVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HighlightGameVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HighlightGameVideoResponseBody>(model1);
      }
    }
  }


  virtual ~HighlightGameVideoResponse() = default;
};
class ListPackageDesignModelTypesResponseBodyDataModelTypeListElements : public Darabonba::Model {
public:
  shared_ptr<string> sideName{};

  ListPackageDesignModelTypesResponseBodyDataModelTypeListElements() {}

  explicit ListPackageDesignModelTypesResponseBodyDataModelTypeListElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sideName) {
      res["SideName"] = boost::any(*sideName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SideName") != m.end() && !m["SideName"].empty()) {
      sideName = make_shared<string>(boost::any_cast<string>(m["SideName"]));
    }
  }


  virtual ~ListPackageDesignModelTypesResponseBodyDataModelTypeListElements() = default;
};
class ListPackageDesignModelTypesResponseBodyDataModelTypeList : public Darabonba::Model {
public:
  shared_ptr<vector<ListPackageDesignModelTypesResponseBodyDataModelTypeListElements>> elements{};
  shared_ptr<string> modelType{};

  ListPackageDesignModelTypesResponseBodyDataModelTypeList() {}

  explicit ListPackageDesignModelTypesResponseBodyDataModelTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<ListPackageDesignModelTypesResponseBodyDataModelTypeListElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPackageDesignModelTypesResponseBodyDataModelTypeListElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<ListPackageDesignModelTypesResponseBodyDataModelTypeListElements>>(expect1);
      }
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
  }


  virtual ~ListPackageDesignModelTypesResponseBodyDataModelTypeList() = default;
};
class ListPackageDesignModelTypesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListPackageDesignModelTypesResponseBodyDataModelTypeList>> modelTypeList{};

  ListPackageDesignModelTypesResponseBodyData() {}

  explicit ListPackageDesignModelTypesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*modelTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelTypeList") != m.end() && !m["ModelTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTypeList"].type()) {
        vector<ListPackageDesignModelTypesResponseBodyDataModelTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPackageDesignModelTypesResponseBodyDataModelTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTypeList = make_shared<vector<ListPackageDesignModelTypesResponseBodyDataModelTypeList>>(expect1);
      }
    }
  }


  virtual ~ListPackageDesignModelTypesResponseBodyData() = default;
};
class ListPackageDesignModelTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListPackageDesignModelTypesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListPackageDesignModelTypesResponseBody() {}

  explicit ListPackageDesignModelTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPackageDesignModelTypesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListPackageDesignModelTypesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPackageDesignModelTypesResponseBody() = default;
};
class ListPackageDesignModelTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPackageDesignModelTypesResponseBody> body{};

  ListPackageDesignModelTypesResponse() {}

  explicit ListPackageDesignModelTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPackageDesignModelTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPackageDesignModelTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPackageDesignModelTypesResponse() = default;
};
class ListUserBucketsRequestData : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListUserBucketsRequestData() {}

  explicit ListUserBucketsRequestData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListUserBucketsRequestData() = default;
};
class ListUserBucketsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserBucketsRequestData>> data{};

  ListUserBucketsRequest() {}

  explicit ListUserBucketsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListUserBucketsRequestData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserBucketsRequestData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListUserBucketsRequestData>>(expect1);
      }
    }
  }


  virtual ~ListUserBucketsRequest() = default;
};
class ListUserBucketsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListUserBucketsResponseBody() {}

  explicit ListUserBucketsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserBucketsResponseBody() = default;
};
class ListUserBucketsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserBucketsResponseBody> body{};

  ListUserBucketsResponse() {}

  explicit ListUserBucketsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserBucketsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserBucketsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserBucketsResponse() = default;
};
class MakeSuperResolutionImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  MakeSuperResolutionImageRequest() {}

  explicit MakeSuperResolutionImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MakeSuperResolutionImageRequest() = default;
};
class MakeSuperResolutionImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  MakeSuperResolutionImageResponseBodyData() {}

  explicit MakeSuperResolutionImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MakeSuperResolutionImageResponseBodyData() = default;
};
class MakeSuperResolutionImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<MakeSuperResolutionImageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  MakeSuperResolutionImageResponseBody() {}

  explicit MakeSuperResolutionImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MakeSuperResolutionImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MakeSuperResolutionImageResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MakeSuperResolutionImageResponseBody() = default;
};
class MakeSuperResolutionImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MakeSuperResolutionImageResponseBody> body{};

  MakeSuperResolutionImageResponse() {}

  explicit MakeSuperResolutionImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MakeSuperResolutionImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MakeSuperResolutionImageResponseBody>(model1);
      }
    }
  }


  virtual ~MakeSuperResolutionImageResponse() = default;
};
class RecognizeImageColorRequest : public Darabonba::Model {
public:
  shared_ptr<string> colorCount{};
  shared_ptr<string> url{};

  RecognizeImageColorRequest() {}

  explicit RecognizeImageColorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colorCount) {
      res["ColorCount"] = boost::any(*colorCount);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColorCount") != m.end() && !m["ColorCount"].empty()) {
      colorCount = make_shared<string>(boost::any_cast<string>(m["ColorCount"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~RecognizeImageColorRequest() = default;
};
class RecognizeImageColorResponseBodyDataColorTemplateList : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<string> label{};
  shared_ptr<double> percentage{};

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
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (percentage) {
      res["Percentage"] = boost::any(*percentage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Percentage") != m.end() && !m["Percentage"].empty()) {
      percentage = make_shared<double>(boost::any_cast<double>(m["Percentage"]));
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
  shared_ptr<string> code{};
  shared_ptr<RecognizeImageColorResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeImageColorResponseBody() {}

  explicit RecognizeImageColorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeImageColorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeImageColorResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> code{};
  shared_ptr<RecognizeImageStyleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeImageStyleResponseBody() {}

  explicit RecognizeImageStyleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeImageStyleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeImageStyleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class RecolorImageRequestColorTemplate : public Darabonba::Model {
public:
  shared_ptr<string> color{};

  RecolorImageRequestColorTemplate() {}

  explicit RecolorImageRequestColorTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
  }


  virtual ~RecolorImageRequestColorTemplate() = default;
};
class RecolorImageRequest : public Darabonba::Model {
public:
  shared_ptr<long> colorCount{};
  shared_ptr<vector<RecolorImageRequestColorTemplate>> colorTemplate{};
  shared_ptr<string> mode{};
  shared_ptr<string> refUrl{};
  shared_ptr<string> url{};

  RecolorImageRequest() {}

  explicit RecolorImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colorCount) {
      res["ColorCount"] = boost::any(*colorCount);
    }
    if (colorTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*colorTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColorTemplate"] = boost::any(temp1);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (refUrl) {
      res["RefUrl"] = boost::any(*refUrl);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColorCount") != m.end() && !m["ColorCount"].empty()) {
      colorCount = make_shared<long>(boost::any_cast<long>(m["ColorCount"]));
    }
    if (m.find("ColorTemplate") != m.end() && !m["ColorTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["ColorTemplate"].type()) {
        vector<RecolorImageRequestColorTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColorTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecolorImageRequestColorTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        colorTemplate = make_shared<vector<RecolorImageRequestColorTemplate>>(expect1);
      }
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RefUrl") != m.end() && !m["RefUrl"].empty()) {
      refUrl = make_shared<string>(boost::any_cast<string>(m["RefUrl"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~RecolorImageRequest() = default;
};
class RecolorImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imageList{};

  RecolorImageResponseBodyData() {}

  explicit RecolorImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageList) {
      res["ImageList"] = boost::any(*imageList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageList") != m.end() && !m["ImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecolorImageResponseBodyData() = default;
};
class RecolorImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RecolorImageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecolorImageResponseBody() {}

  explicit RecolorImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecolorImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecolorImageResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecolorImageResponseBody() = default;
};
class RecolorImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecolorImageResponseBody> body{};

  RecolorImageResponse() {}

  explicit RecolorImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecolorImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecolorImageResponseBody>(model1);
      }
    }
  }


  virtual ~RecolorImageResponse() = default;
};
class SegmentBodyRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  SegmentBodyRequest() {}

  explicit SegmentBodyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentBodyRequest() = default;
};
class SegmentBodyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  SegmentBodyResponseBodyData() {}

  explicit SegmentBodyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentBodyResponseBodyData() = default;
};
class SegmentBodyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SegmentBodyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SegmentBodyResponseBody() {}

  explicit SegmentBodyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentBodyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentBodyResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
  shared_ptr<SegmentBodyResponseBody> body{};

  SegmentBodyResponse() {}

  explicit SegmentBodyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentBodyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentBodyResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentBodyResponse() = default;
};
class SegmentCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~SegmentCommodityRequest() = default;
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
  shared_ptr<SegmentCommodityResponseBody> body{};

  SegmentCommodityResponse() {}

  explicit SegmentCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentCommodityResponse() = default;
};
class SegmentImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  SegmentImageRequest() {}

  explicit SegmentImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentImageRequest() = default;
};
class SegmentImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  SegmentImageResponseBodyData() {}

  explicit SegmentImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SegmentImageResponseBodyData() = default;
};
class SegmentImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SegmentImageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SegmentImageResponseBody() {}

  explicit SegmentImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentImageResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentImageResponseBody() = default;
};
class SegmentImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SegmentImageResponseBody> body{};

  SegmentImageResponse() {}

  explicit SegmentImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentImageResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentImageResponse() = default;
};
class UpdateUserBucketConfigRequestData : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> region{};

  UpdateUserBucketConfigRequestData() {}

  explicit UpdateUserBucketConfigRequestData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~UpdateUserBucketConfigRequestData() = default;
};
class UpdateUserBucketConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateUserBucketConfigRequestData>> data{};

  UpdateUserBucketConfigRequest() {}

  explicit UpdateUserBucketConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<UpdateUserBucketConfigRequestData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateUserBucketConfigRequestData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<UpdateUserBucketConfigRequestData>>(expect1);
      }
    }
  }


  virtual ~UpdateUserBucketConfigRequest() = default;
};
class UpdateUserBucketConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> region{};
  shared_ptr<string> regionName{};

  UpdateUserBucketConfigResponseBodyData() {}

  explicit UpdateUserBucketConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~UpdateUserBucketConfigResponseBodyData() = default;
};
class UpdateUserBucketConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<UpdateUserBucketConfigResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateUserBucketConfigResponseBody() {}

  explicit UpdateUserBucketConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<UpdateUserBucketConfigResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateUserBucketConfigResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<UpdateUserBucketConfigResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateUserBucketConfigResponseBody() = default;
};
class UpdateUserBucketConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateUserBucketConfigResponseBody> body{};

  UpdateUserBucketConfigResponse() {}

  explicit UpdateUserBucketConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserBucketConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserBucketConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserBucketConfigResponse() = default;
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
  ChangeImageSizeResponse changeImageSizeWithOptions(shared_ptr<ChangeImageSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeImageSizeResponse changeImageSize(shared_ptr<ChangeImageSizeRequest> request);
  CreateSegmentBodyJobResponse createSegmentBodyJobWithOptions(shared_ptr<CreateSegmentBodyJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSegmentBodyJobResponse createSegmentBodyJob(shared_ptr<CreateSegmentBodyJobRequest> request);
  DetectImageElementsResponse detectImageElementsWithOptions(shared_ptr<DetectImageElementsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageElementsResponse detectImageElements(shared_ptr<DetectImageElementsRequest> request);
  EraseLogoInVideoResponse eraseLogoInVideoWithOptions(shared_ptr<EraseLogoInVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseLogoInVideoResponse eraseLogoInVideo(shared_ptr<EraseLogoInVideoRequest> request);
  ExtendImageStyleResponse extendImageStyleWithOptions(shared_ptr<ExtendImageStyleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtendImageStyleResponse extendImageStyle(shared_ptr<ExtendImageStyleRequest> request);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  GetAsyncResultResponse getAsyncResultWithOptions(shared_ptr<GetAsyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncResultResponse getAsyncResult(shared_ptr<GetAsyncResultRequest> request);
  GetJobResultResponse getJobResultWithOptions(shared_ptr<GetJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResultResponse getJobResult(shared_ptr<GetJobResultRequest> request);
  GetJobStatusResponse getJobStatusWithOptions(shared_ptr<GetJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobStatusResponse getJobStatus(shared_ptr<GetJobStatusRequest> request);
  GetUserBucketConfigResponse getUserBucketConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserBucketConfigResponse getUserBucketConfig();
  HighlightGameVideoResponse highlightGameVideoWithOptions(shared_ptr<HighlightGameVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HighlightGameVideoResponse highlightGameVideo(shared_ptr<HighlightGameVideoRequest> request);
  HighlightGameVideoResponse highlightGameVideoAdvance(shared_ptr<HighlightGameVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPackageDesignModelTypesResponse listPackageDesignModelTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPackageDesignModelTypesResponse listPackageDesignModelTypes();
  ListUserBucketsResponse listUserBucketsWithOptions(shared_ptr<ListUserBucketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserBucketsResponse listUserBuckets(shared_ptr<ListUserBucketsRequest> request);
  MakeSuperResolutionImageResponse makeSuperResolutionImageWithOptions(shared_ptr<MakeSuperResolutionImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MakeSuperResolutionImageResponse makeSuperResolutionImage(shared_ptr<MakeSuperResolutionImageRequest> request);
  RecognizeImageColorResponse recognizeImageColorWithOptions(shared_ptr<RecognizeImageColorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeImageColorResponse recognizeImageColor(shared_ptr<RecognizeImageColorRequest> request);
  RecognizeImageStyleResponse recognizeImageStyleWithOptions(shared_ptr<RecognizeImageStyleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeImageStyleResponse recognizeImageStyle(shared_ptr<RecognizeImageStyleRequest> request);
  RecolorImageResponse recolorImageWithOptions(shared_ptr<RecolorImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecolorImageResponse recolorImage(shared_ptr<RecolorImageRequest> request);
  SegmentBodyResponse segmentBodyWithOptions(shared_ptr<SegmentBodyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentBodyResponse segmentBody(shared_ptr<SegmentBodyRequest> request);
  SegmentCommodityResponse segmentCommodityWithOptions(shared_ptr<SegmentCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentCommodityResponse segmentCommodity(shared_ptr<SegmentCommodityRequest> request);
  SegmentImageResponse segmentImageWithOptions(shared_ptr<SegmentImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentImageResponse segmentImage(shared_ptr<SegmentImageRequest> request);
  UpdateUserBucketConfigResponse updateUserBucketConfigWithOptions(shared_ptr<UpdateUserBucketConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserBucketConfigResponse updateUserBucketConfig(shared_ptr<UpdateUserBucketConfigRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ivpd20190625

#endif
