// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DPLUS20201216_H_
#define ALIBABACLOUD_DPLUS20201216_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dplus20201216 {
class AePredictCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};

  AePredictCategoryRequest() {}

  explicit AePredictCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~AePredictCategoryRequest() = default;
};
class AePredictCategoryAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};

  AePredictCategoryAdvanceRequest() {}

  explicit AePredictCategoryAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
  }


  virtual ~AePredictCategoryAdvanceRequest() = default;
};
class AePredictCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<map<string, boost::any>> body{};

  AePredictCategoryResponse() {}

  explicit AePredictCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~AePredictCategoryResponse() = default;
};
class AePropRecRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};

  AePropRecRequest() {}

  explicit AePropRecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~AePropRecRequest() = default;
};
class AePropRecAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};

  AePropRecAdvanceRequest() {}

  explicit AePropRecAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
  }


  virtual ~AePropRecAdvanceRequest() = default;
};
class AePropRecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<map<string, boost::any>> body{};

  AePropRecResponse() {}

  explicit AePropRecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~AePropRecResponse() = default;
};
class CreateImageAmazonTaskRequest : public Darabonba::Model {
public:
  shared_ptr<bool> gif{};
  shared_ptr<vector<string>> imgUrlList{};
  shared_ptr<string> templateMode{};
  shared_ptr<vector<string>> textList{};

  CreateImageAmazonTaskRequest() {}

  explicit CreateImageAmazonTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gif) {
      res["Gif"] = boost::any(*gif);
    }
    if (imgUrlList) {
      res["ImgUrlList"] = boost::any(*imgUrlList);
    }
    if (templateMode) {
      res["TemplateMode"] = boost::any(*templateMode);
    }
    if (textList) {
      res["TextList"] = boost::any(*textList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gif") != m.end() && !m["Gif"].empty()) {
      gif = make_shared<bool>(boost::any_cast<bool>(m["Gif"]));
    }
    if (m.find("ImgUrlList") != m.end() && !m["ImgUrlList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImgUrlList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImgUrlList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imgUrlList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateMode") != m.end() && !m["TemplateMode"].empty()) {
      templateMode = make_shared<string>(boost::any_cast<string>(m["TemplateMode"]));
    }
    if (m.find("TextList") != m.end() && !m["TextList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TextList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TextList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      textList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateImageAmazonTaskRequest() = default;
};
class CreateImageAmazonTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> gif{};
  shared_ptr<string> imgUrlListShrink{};
  shared_ptr<string> templateMode{};
  shared_ptr<string> textListShrink{};

  CreateImageAmazonTaskShrinkRequest() {}

  explicit CreateImageAmazonTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gif) {
      res["Gif"] = boost::any(*gif);
    }
    if (imgUrlListShrink) {
      res["ImgUrlList"] = boost::any(*imgUrlListShrink);
    }
    if (templateMode) {
      res["TemplateMode"] = boost::any(*templateMode);
    }
    if (textListShrink) {
      res["TextList"] = boost::any(*textListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gif") != m.end() && !m["Gif"].empty()) {
      gif = make_shared<bool>(boost::any_cast<bool>(m["Gif"]));
    }
    if (m.find("ImgUrlList") != m.end() && !m["ImgUrlList"].empty()) {
      imgUrlListShrink = make_shared<string>(boost::any_cast<string>(m["ImgUrlList"]));
    }
    if (m.find("TemplateMode") != m.end() && !m["TemplateMode"].empty()) {
      templateMode = make_shared<string>(boost::any_cast<string>(m["TemplateMode"]));
    }
    if (m.find("TextList") != m.end() && !m["TextList"].empty()) {
      textListShrink = make_shared<string>(boost::any_cast<string>(m["TextList"]));
    }
  }


  virtual ~CreateImageAmazonTaskShrinkRequest() = default;
};
class CreateImageAmazonTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  CreateImageAmazonTaskResponseBody() {}

  explicit CreateImageAmazonTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~CreateImageAmazonTaskResponseBody() = default;
};
class CreateImageAmazonTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateImageAmazonTaskResponseBody> body{};

  CreateImageAmazonTaskResponse() {}

  explicit CreateImageAmazonTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageAmazonTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageAmazonTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageAmazonTaskResponse() = default;
};
class GetTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  GetTaskResultRequest() {}

  explicit GetTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetTaskResultRequest() = default;
};
class GetTaskResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resuslt{};
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<long> taskId{};

  GetTaskResultResponseBodyData() {}

  explicit GetTaskResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resuslt) {
      res["Resuslt"] = boost::any(*resuslt);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resuslt") != m.end() && !m["Resuslt"].empty()) {
      resuslt = make_shared<string>(boost::any_cast<string>(m["Resuslt"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetTaskResultResponseBodyData() = default;
};
class GetTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTaskResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTaskResultResponseBody() {}

  explicit GetTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTaskResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTaskResultResponseBody() = default;
};
class GetTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskResultResponseBody> body{};

  GetTaskResultResponse() {}

  explicit GetTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResultResponse() = default;
};
class GetTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  GetTaskStatusRequest() {}

  explicit GetTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetTaskStatusRequest() = default;
};
class GetTaskStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<long> taskId{};

  GetTaskStatusResponseBodyData() {}

  explicit GetTaskStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetTaskStatusResponseBodyData() = default;
};
class GetTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTaskStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTaskStatusResponseBody() {}

  explicit GetTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTaskStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTaskStatusResponseBody() = default;
};
class GetTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskStatusResponseBody> body{};

  GetTaskStatusResponse() {}

  explicit GetTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskStatusResponse() = default;
};
class RemoveWordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};

  RemoveWordsRequest() {}

  explicit RemoveWordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~RemoveWordsRequest() = default;
};
class RemoveWordsAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};

  RemoveWordsAdvanceRequest() {}

  explicit RemoveWordsAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
  }


  virtual ~RemoveWordsAdvanceRequest() = default;
};
class RemoveWordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<map<string, boost::any>> body{};

  RemoveWordsResponse() {}

  explicit RemoveWordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RemoveWordsResponse() = default;
};
class ReplaceBackgroundRequest : public Darabonba::Model {
public:
  shared_ptr<string> backgroundId{};
  shared_ptr<long> num{};
  shared_ptr<string> picBackgroundUrl{};
  shared_ptr<string> picUrl{};

  ReplaceBackgroundRequest() {}

  explicit ReplaceBackgroundRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backgroundId) {
      res["BackgroundId"] = boost::any(*backgroundId);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picBackgroundUrl) {
      res["PicBackgroundUrl"] = boost::any(*picBackgroundUrl);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackgroundId") != m.end() && !m["BackgroundId"].empty()) {
      backgroundId = make_shared<string>(boost::any_cast<string>(m["BackgroundId"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicBackgroundUrl") != m.end() && !m["PicBackgroundUrl"].empty()) {
      picBackgroundUrl = make_shared<string>(boost::any_cast<string>(m["PicBackgroundUrl"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
  }


  virtual ~ReplaceBackgroundRequest() = default;
};
class ReplaceBackgroundAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> picUrlObject{};
  shared_ptr<string> backgroundId{};
  shared_ptr<long> num{};
  shared_ptr<string> picBackgroundUrl{};

  ReplaceBackgroundAdvanceRequest() {}

  explicit ReplaceBackgroundAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!picUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("picUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrlObject) {
      res["PicUrlObject"] = boost::any(*picUrlObject);
    }
    if (backgroundId) {
      res["BackgroundId"] = boost::any(*backgroundId);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picBackgroundUrl) {
      res["PicBackgroundUrl"] = boost::any(*picBackgroundUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrlObject") != m.end() && !m["PicUrlObject"].empty()) {
      picUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicUrlObject"]));
    }
    if (m.find("BackgroundId") != m.end() && !m["BackgroundId"].empty()) {
      backgroundId = make_shared<string>(boost::any_cast<string>(m["BackgroundId"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicBackgroundUrl") != m.end() && !m["PicBackgroundUrl"].empty()) {
      picBackgroundUrl = make_shared<string>(boost::any_cast<string>(m["PicBackgroundUrl"]));
    }
  }


  virtual ~ReplaceBackgroundAdvanceRequest() = default;
};
class ReplaceBackgroundResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<map<string, boost::any>> body{};

  ReplaceBackgroundResponse() {}

  explicit ReplaceBackgroundResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ReplaceBackgroundResponse() = default;
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
  AePredictCategoryResponse aePredictCategoryWithOptions(shared_ptr<AePredictCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AePredictCategoryResponse aePredictCategory(shared_ptr<AePredictCategoryRequest> request);
  AePredictCategoryResponse aePredictCategoryAdvance(shared_ptr<AePredictCategoryAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AePropRecResponse aePropRecWithOptions(shared_ptr<AePropRecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AePropRecResponse aePropRec(shared_ptr<AePropRecRequest> request);
  AePropRecResponse aePropRecAdvance(shared_ptr<AePropRecAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageAmazonTaskResponse createImageAmazonTaskWithOptions(shared_ptr<CreateImageAmazonTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageAmazonTaskResponse createImageAmazonTask(shared_ptr<CreateImageAmazonTaskRequest> request);
  GetTaskResultResponse getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResultResponse getTaskResult(shared_ptr<GetTaskResultRequest> request);
  GetTaskStatusResponse getTaskStatusWithOptions(shared_ptr<GetTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskStatusResponse getTaskStatus(shared_ptr<GetTaskStatusRequest> request);
  RemoveWordsResponse removeWordsWithOptions(shared_ptr<RemoveWordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveWordsResponse removeWords(shared_ptr<RemoveWordsRequest> request);
  RemoveWordsResponse removeWordsAdvance(shared_ptr<RemoveWordsAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceBackgroundResponse replaceBackgroundWithOptions(shared_ptr<ReplaceBackgroundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceBackgroundResponse replaceBackground(shared_ptr<ReplaceBackgroundRequest> request);
  ReplaceBackgroundResponse replaceBackgroundAdvance(shared_ptr<ReplaceBackgroundAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dplus20201216

#endif
