// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EDUEMBED20240101_H_
#define ALIBABACLOUD_EDUEMBED20240101_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EduEmbed20240101 {
class CreateLabReservationRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> labId{};
  shared_ptr<long> memberCount{};
  shared_ptr<string> startTime{};

  CreateLabReservationRequest() {}

  explicit CreateLabReservationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (labId) {
      res["LabId"] = boost::any(*labId);
    }
    if (memberCount) {
      res["MemberCount"] = boost::any(*memberCount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("LabId") != m.end() && !m["LabId"].empty()) {
      labId = make_shared<long>(boost::any_cast<long>(m["LabId"]));
    }
    if (m.find("MemberCount") != m.end() && !m["MemberCount"].empty()) {
      memberCount = make_shared<long>(boost::any_cast<long>(m["MemberCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~CreateLabReservationRequest() = default;
};
class CreateLabReservationResponseBodyLabReservation : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateLabReservationResponseBodyLabReservation() {}

  explicit CreateLabReservationResponseBodyLabReservation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateLabReservationResponseBodyLabReservation() = default;
};
class CreateLabReservationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateLabReservationResponseBodyLabReservation> labReservation{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateLabReservationResponseBody() {}

  explicit CreateLabReservationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (labReservation) {
      res["LabReservation"] = labReservation ? boost::any(labReservation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("LabReservation") != m.end() && !m["LabReservation"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabReservation"].type()) {
        CreateLabReservationResponseBodyLabReservation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabReservation"]));
        labReservation = make_shared<CreateLabReservationResponseBodyLabReservation>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateLabReservationResponseBody() = default;
};
class CreateLabReservationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLabReservationResponseBody> body{};

  CreateLabReservationResponse() {}

  explicit CreateLabReservationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLabReservationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLabReservationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLabReservationResponse() = default;
};
class CreateLabSessionRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<long> labId{};
  shared_ptr<long> ramAccountId{};

  CreateLabSessionRequest() {}

  explicit CreateLabSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (labId) {
      res["LabId"] = boost::any(*labId);
    }
    if (ramAccountId) {
      res["RamAccountId"] = boost::any(*ramAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("LabId") != m.end() && !m["LabId"].empty()) {
      labId = make_shared<long>(boost::any_cast<long>(m["LabId"]));
    }
    if (m.find("RamAccountId") != m.end() && !m["RamAccountId"].empty()) {
      ramAccountId = make_shared<long>(boost::any_cast<long>(m["RamAccountId"]));
    }
  }


  virtual ~CreateLabSessionRequest() = default;
};
class CreateLabSessionResponseBodyLabSession : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> url{};

  CreateLabSessionResponseBodyLabSession() {}

  explicit CreateLabSessionResponseBodyLabSession(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateLabSessionResponseBodyLabSession() = default;
};
class CreateLabSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateLabSessionResponseBodyLabSession> labSession{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateLabSessionResponseBody() {}

  explicit CreateLabSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (labSession) {
      res["LabSession"] = labSession ? boost::any(labSession->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("LabSession") != m.end() && !m["LabSession"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabSession"].type()) {
        CreateLabSessionResponseBodyLabSession model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabSession"]));
        labSession = make_shared<CreateLabSessionResponseBodyLabSession>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateLabSessionResponseBody() = default;
};
class CreateLabSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLabSessionResponseBody> body{};

  CreateLabSessionResponse() {}

  explicit CreateLabSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLabSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLabSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLabSessionResponse() = default;
};
class DescribeCourseRequest : public Darabonba::Model {
public:
  shared_ptr<long> courseId{};

  DescribeCourseRequest() {}

  explicit DescribeCourseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (courseId) {
      res["CourseId"] = boost::any(*courseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CourseId") != m.end() && !m["CourseId"].empty()) {
      courseId = make_shared<long>(boost::any_cast<long>(m["CourseId"]));
    }
  }


  virtual ~DescribeCourseRequest() = default;
};
class DescribeCourseResponseBodyCourseChaptersLessons : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> id{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  DescribeCourseResponseBodyCourseChaptersLessons() {}

  explicit DescribeCourseResponseBodyCourseChaptersLessons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCourseResponseBodyCourseChaptersLessons() = default;
};
class DescribeCourseResponseBodyCourseChaptersUnitLessons : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> id{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  DescribeCourseResponseBodyCourseChaptersUnitLessons() {}

  explicit DescribeCourseResponseBodyCourseChaptersUnitLessons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCourseResponseBodyCourseChaptersUnitLessons() = default;
};
class DescribeCourseResponseBodyCourseChaptersUnit : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCourseResponseBodyCourseChaptersUnitLessons>> lessons{};
  shared_ptr<long> number{};
  shared_ptr<string> title{};

  DescribeCourseResponseBodyCourseChaptersUnit() {}

  explicit DescribeCourseResponseBodyCourseChaptersUnit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lessons) {
      vector<boost::any> temp1;
      for(auto item1:*lessons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Lessons"] = boost::any(temp1);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lessons") != m.end() && !m["Lessons"].empty()) {
      if (typeid(vector<boost::any>) == m["Lessons"].type()) {
        vector<DescribeCourseResponseBodyCourseChaptersUnitLessons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Lessons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCourseResponseBodyCourseChaptersUnitLessons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lessons = make_shared<vector<DescribeCourseResponseBodyCourseChaptersUnitLessons>>(expect1);
      }
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeCourseResponseBodyCourseChaptersUnit() = default;
};
class DescribeCourseResponseBodyCourseChapters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCourseResponseBodyCourseChaptersLessons>> lessons{};
  shared_ptr<long> number{};
  shared_ptr<string> title{};
  shared_ptr<vector<DescribeCourseResponseBodyCourseChaptersUnit>> unit{};

  DescribeCourseResponseBodyCourseChapters() {}

  explicit DescribeCourseResponseBodyCourseChapters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lessons) {
      vector<boost::any> temp1;
      for(auto item1:*lessons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Lessons"] = boost::any(temp1);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (unit) {
      vector<boost::any> temp1;
      for(auto item1:*unit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Unit"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lessons") != m.end() && !m["Lessons"].empty()) {
      if (typeid(vector<boost::any>) == m["Lessons"].type()) {
        vector<DescribeCourseResponseBodyCourseChaptersLessons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Lessons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCourseResponseBodyCourseChaptersLessons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lessons = make_shared<vector<DescribeCourseResponseBodyCourseChaptersLessons>>(expect1);
      }
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      if (typeid(vector<boost::any>) == m["Unit"].type()) {
        vector<DescribeCourseResponseBodyCourseChaptersUnit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Unit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCourseResponseBodyCourseChaptersUnit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unit = make_shared<vector<DescribeCourseResponseBodyCourseChaptersUnit>>(expect1);
      }
    }
  }


  virtual ~DescribeCourseResponseBodyCourseChapters() = default;
};
class DescribeCourseResponseBodyCourseLessons : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> id{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  DescribeCourseResponseBodyCourseLessons() {}

  explicit DescribeCourseResponseBodyCourseLessons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCourseResponseBodyCourseLessons() = default;
};
class DescribeCourseResponseBodyCourse : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<DescribeCourseResponseBodyCourseChapters>> chapters{};
  shared_ptr<string> id{};
  shared_ptr<string> introduction{};
  shared_ptr<long> lessonNum{};
  shared_ptr<vector<DescribeCourseResponseBodyCourseLessons>> lessons{};
  shared_ptr<string> pictureUrl{};
  shared_ptr<string> tags{};
  shared_ptr<string> title{};

  DescribeCourseResponseBodyCourse() {}

  explicit DescribeCourseResponseBodyCourse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (chapters) {
      vector<boost::any> temp1;
      for(auto item1:*chapters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Chapters"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (lessonNum) {
      res["LessonNum"] = boost::any(*lessonNum);
    }
    if (lessons) {
      vector<boost::any> temp1;
      for(auto item1:*lessons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Lessons"] = boost::any(temp1);
    }
    if (pictureUrl) {
      res["PictureUrl"] = boost::any(*pictureUrl);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Chapters") != m.end() && !m["Chapters"].empty()) {
      if (typeid(vector<boost::any>) == m["Chapters"].type()) {
        vector<DescribeCourseResponseBodyCourseChapters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Chapters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCourseResponseBodyCourseChapters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chapters = make_shared<vector<DescribeCourseResponseBodyCourseChapters>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LessonNum") != m.end() && !m["LessonNum"].empty()) {
      lessonNum = make_shared<long>(boost::any_cast<long>(m["LessonNum"]));
    }
    if (m.find("Lessons") != m.end() && !m["Lessons"].empty()) {
      if (typeid(vector<boost::any>) == m["Lessons"].type()) {
        vector<DescribeCourseResponseBodyCourseLessons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Lessons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCourseResponseBodyCourseLessons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lessons = make_shared<vector<DescribeCourseResponseBodyCourseLessons>>(expect1);
      }
    }
    if (m.find("PictureUrl") != m.end() && !m["PictureUrl"].empty()) {
      pictureUrl = make_shared<string>(boost::any_cast<string>(m["PictureUrl"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeCourseResponseBodyCourse() = default;
};
class DescribeCourseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeCourseResponseBodyCourse> course{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCourseResponseBody() {}

  explicit DescribeCourseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (course) {
      res["Course"] = course ? boost::any(course->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Course") != m.end() && !m["Course"].empty()) {
      if (typeid(map<string, boost::any>) == m["Course"].type()) {
        DescribeCourseResponseBodyCourse model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Course"]));
        course = make_shared<DescribeCourseResponseBodyCourse>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeCourseResponseBody() = default;
};
class DescribeCourseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCourseResponseBody> body{};

  DescribeCourseResponse() {}

  explicit DescribeCourseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCourseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCourseResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCourseResponse() = default;
};
class DescribeCourseLessonRequest : public Darabonba::Model {
public:
  shared_ptr<long> lessonId{};

  DescribeCourseLessonRequest() {}

  explicit DescribeCourseLessonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lessonId) {
      res["LessonId"] = boost::any(*lessonId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LessonId") != m.end() && !m["LessonId"].empty()) {
      lessonId = make_shared<long>(boost::any_cast<long>(m["LessonId"]));
    }
  }


  virtual ~DescribeCourseLessonRequest() = default;
};
class DescribeCourseLessonResponseBodyCourseLesson : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> url{};

  DescribeCourseLessonResponseBodyCourseLesson() {}

  explicit DescribeCourseLessonResponseBodyCourseLesson(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeCourseLessonResponseBodyCourseLesson() = default;
};
class DescribeCourseLessonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeCourseLessonResponseBodyCourseLesson> courseLesson{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCourseLessonResponseBody() {}

  explicit DescribeCourseLessonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (courseLesson) {
      res["CourseLesson"] = courseLesson ? boost::any(courseLesson->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("CourseLesson") != m.end() && !m["CourseLesson"].empty()) {
      if (typeid(map<string, boost::any>) == m["CourseLesson"].type()) {
        DescribeCourseLessonResponseBodyCourseLesson model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CourseLesson"]));
        courseLesson = make_shared<DescribeCourseLessonResponseBodyCourseLesson>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeCourseLessonResponseBody() = default;
};
class DescribeCourseLessonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCourseLessonResponseBody> body{};

  DescribeCourseLessonResponse() {}

  explicit DescribeCourseLessonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCourseLessonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCourseLessonResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCourseLessonResponse() = default;
};
class DescribeLabRequest : public Darabonba::Model {
public:
  shared_ptr<long> labId{};

  DescribeLabRequest() {}

  explicit DescribeLabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labId) {
      res["LabId"] = boost::any(*labId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabId") != m.end() && !m["LabId"].empty()) {
      labId = make_shared<long>(boost::any_cast<long>(m["LabId"]));
    }
  }


  virtual ~DescribeLabRequest() = default;
};
class DescribeLabResponseBodyLab : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> id{};
  shared_ptr<string> introduction{};
  shared_ptr<string> subTitle{};
  shared_ptr<string> title{};

  DescribeLabResponseBodyLab() {}

  explicit DescribeLabResponseBodyLab(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (subTitle) {
      res["SubTitle"] = boost::any(*subTitle);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("SubTitle") != m.end() && !m["SubTitle"].empty()) {
      subTitle = make_shared<string>(boost::any_cast<string>(m["SubTitle"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeLabResponseBodyLab() = default;
};
class DescribeLabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeLabResponseBodyLab> lab{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeLabResponseBody() {}

  explicit DescribeLabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (lab) {
      res["Lab"] = lab ? boost::any(lab->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Lab") != m.end() && !m["Lab"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lab"].type()) {
        DescribeLabResponseBodyLab model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lab"]));
        lab = make_shared<DescribeLabResponseBodyLab>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeLabResponseBody() = default;
};
class DescribeLabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLabResponseBody> body{};

  DescribeLabResponse() {}

  explicit DescribeLabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLabResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLabResponse() = default;
};
class DescribeLabReservationRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> labReservationId{};

  DescribeLabReservationRequest() {}

  explicit DescribeLabReservationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (labReservationId) {
      res["LabReservationId"] = boost::any(*labReservationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("LabReservationId") != m.end() && !m["LabReservationId"].empty()) {
      labReservationId = make_shared<string>(boost::any_cast<string>(m["LabReservationId"]));
    }
  }


  virtual ~DescribeLabReservationRequest() = default;
};
class DescribeLabReservationResponseBodyLabReservation : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> id{};
  shared_ptr<long> memberCount{};
  shared_ptr<string> startTime{};

  DescribeLabReservationResponseBodyLabReservation() {}

  explicit DescribeLabReservationResponseBodyLabReservation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (memberCount) {
      res["MemberCount"] = boost::any(*memberCount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MemberCount") != m.end() && !m["MemberCount"].empty()) {
      memberCount = make_shared<long>(boost::any_cast<long>(m["MemberCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeLabReservationResponseBodyLabReservation() = default;
};
class DescribeLabReservationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeLabReservationResponseBodyLabReservation> labReservation{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeLabReservationResponseBody() {}

  explicit DescribeLabReservationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (labReservation) {
      res["LabReservation"] = labReservation ? boost::any(labReservation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("LabReservation") != m.end() && !m["LabReservation"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabReservation"].type()) {
        DescribeLabReservationResponseBodyLabReservation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabReservation"]));
        labReservation = make_shared<DescribeLabReservationResponseBodyLabReservation>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeLabReservationResponseBody() = default;
};
class DescribeLabReservationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLabReservationResponseBody> body{};

  DescribeLabReservationResponse() {}

  explicit DescribeLabReservationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLabReservationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLabReservationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLabReservationResponse() = default;
};
class DescribeLabSessionRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> labSessionId{};
  shared_ptr<long> ramAccountId{};

  DescribeLabSessionRequest() {}

  explicit DescribeLabSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (labSessionId) {
      res["LabSessionId"] = boost::any(*labSessionId);
    }
    if (ramAccountId) {
      res["RamAccountId"] = boost::any(*ramAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("LabSessionId") != m.end() && !m["LabSessionId"].empty()) {
      labSessionId = make_shared<string>(boost::any_cast<string>(m["LabSessionId"]));
    }
    if (m.find("RamAccountId") != m.end() && !m["RamAccountId"].empty()) {
      ramAccountId = make_shared<long>(boost::any_cast<long>(m["RamAccountId"]));
    }
  }


  virtual ~DescribeLabSessionRequest() = default;
};
class DescribeLabSessionResponseBodyLabSession : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> finished{};
  shared_ptr<string> id{};
  shared_ptr<long> labId{};
  shared_ptr<string> url{};

  DescribeLabSessionResponseBodyLabSession() {}

  explicit DescribeLabSessionResponseBodyLabSession(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (finished) {
      res["Finished"] = boost::any(*finished);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (labId) {
      res["LabId"] = boost::any(*labId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Finished") != m.end() && !m["Finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["Finished"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LabId") != m.end() && !m["LabId"].empty()) {
      labId = make_shared<long>(boost::any_cast<long>(m["LabId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeLabSessionResponseBodyLabSession() = default;
};
class DescribeLabSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeLabSessionResponseBodyLabSession> labSession{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeLabSessionResponseBody() {}

  explicit DescribeLabSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (labSession) {
      res["LabSession"] = labSession ? boost::any(labSession->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("LabSession") != m.end() && !m["LabSession"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabSession"].type()) {
        DescribeLabSessionResponseBodyLabSession model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabSession"]));
        labSession = make_shared<DescribeLabSessionResponseBodyLabSession>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeLabSessionResponseBody() = default;
};
class DescribeLabSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLabSessionResponseBody> body{};

  DescribeLabSessionResponse() {}

  explicit DescribeLabSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLabSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLabSessionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLabSessionResponse() = default;
};
class ListCoursesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> id{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  ListCoursesRequest() {}

  explicit ListCoursesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Id"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Id"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      id = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCoursesRequest() = default;
};
class ListCoursesResponseBodyCourses : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> id{};
  shared_ptr<string> introduction{};
  shared_ptr<long> lessonNum{};
  shared_ptr<string> pictureUrl{};
  shared_ptr<string> tags{};
  shared_ptr<string> title{};

  ListCoursesResponseBodyCourses() {}

  explicit ListCoursesResponseBodyCourses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (lessonNum) {
      res["LessonNum"] = boost::any(*lessonNum);
    }
    if (pictureUrl) {
      res["PictureUrl"] = boost::any(*pictureUrl);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LessonNum") != m.end() && !m["LessonNum"].empty()) {
      lessonNum = make_shared<long>(boost::any_cast<long>(m["LessonNum"]));
    }
    if (m.find("PictureUrl") != m.end() && !m["PictureUrl"].empty()) {
      pictureUrl = make_shared<string>(boost::any_cast<string>(m["PictureUrl"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListCoursesResponseBodyCourses() = default;
};
class ListCoursesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListCoursesResponseBodyCourses>> courses{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListCoursesResponseBody() {}

  explicit ListCoursesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (courses) {
      vector<boost::any> temp1;
      for(auto item1:*courses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Courses"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Courses") != m.end() && !m["Courses"].empty()) {
      if (typeid(vector<boost::any>) == m["Courses"].type()) {
        vector<ListCoursesResponseBodyCourses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Courses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCoursesResponseBodyCourses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        courses = make_shared<vector<ListCoursesResponseBodyCourses>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCoursesResponseBody() = default;
};
class ListCoursesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCoursesResponseBody> body{};

  ListCoursesResponse() {}

  explicit ListCoursesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCoursesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCoursesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCoursesResponse() = default;
};
class PageListLabReservationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  PageListLabReservationsRequest() {}

  explicit PageListLabReservationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~PageListLabReservationsRequest() = default;
};
class PageListLabReservationsResponseBodyLabReservations : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> id{};
  shared_ptr<long> memberCount{};
  shared_ptr<string> startTime{};

  PageListLabReservationsResponseBodyLabReservations() {}

  explicit PageListLabReservationsResponseBodyLabReservations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (memberCount) {
      res["MemberCount"] = boost::any(*memberCount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MemberCount") != m.end() && !m["MemberCount"].empty()) {
      memberCount = make_shared<long>(boost::any_cast<long>(m["MemberCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~PageListLabReservationsResponseBodyLabReservations() = default;
};
class PageListLabReservationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PageListLabReservationsResponseBodyLabReservations>> labReservations{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  PageListLabReservationsResponseBody() {}

  explicit PageListLabReservationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (labReservations) {
      vector<boost::any> temp1;
      for(auto item1:*labReservations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabReservations"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LabReservations") != m.end() && !m["LabReservations"].empty()) {
      if (typeid(vector<boost::any>) == m["LabReservations"].type()) {
        vector<PageListLabReservationsResponseBodyLabReservations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabReservations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PageListLabReservationsResponseBodyLabReservations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labReservations = make_shared<vector<PageListLabReservationsResponseBodyLabReservations>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~PageListLabReservationsResponseBody() = default;
};
class PageListLabReservationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageListLabReservationsResponseBody> body{};

  PageListLabReservationsResponse() {}

  explicit PageListLabReservationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PageListLabReservationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageListLabReservationsResponseBody>(model1);
      }
    }
  }


  virtual ~PageListLabReservationsResponse() = default;
};
class PageListLabSessionsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> finished{};
  shared_ptr<long> labId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> ramAccountId{};

  PageListLabSessionsRequest() {}

  explicit PageListLabSessionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finished) {
      res["Finished"] = boost::any(*finished);
    }
    if (labId) {
      res["LabId"] = boost::any(*labId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (ramAccountId) {
      res["RamAccountId"] = boost::any(*ramAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Finished") != m.end() && !m["Finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["Finished"]));
    }
    if (m.find("LabId") != m.end() && !m["LabId"].empty()) {
      labId = make_shared<long>(boost::any_cast<long>(m["LabId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RamAccountId") != m.end() && !m["RamAccountId"].empty()) {
      ramAccountId = make_shared<long>(boost::any_cast<long>(m["RamAccountId"]));
    }
  }


  virtual ~PageListLabSessionsRequest() = default;
};
class PageListLabSessionsResponseBodyLabSessions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> finished{};
  shared_ptr<string> id{};
  shared_ptr<long> labId{};
  shared_ptr<string> url{};

  PageListLabSessionsResponseBodyLabSessions() {}

  explicit PageListLabSessionsResponseBodyLabSessions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (finished) {
      res["Finished"] = boost::any(*finished);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (labId) {
      res["LabId"] = boost::any(*labId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Finished") != m.end() && !m["Finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["Finished"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LabId") != m.end() && !m["LabId"].empty()) {
      labId = make_shared<long>(boost::any_cast<long>(m["LabId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PageListLabSessionsResponseBodyLabSessions() = default;
};
class PageListLabSessionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PageListLabSessionsResponseBodyLabSessions>> labSessions{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  PageListLabSessionsResponseBody() {}

  explicit PageListLabSessionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (labSessions) {
      vector<boost::any> temp1;
      for(auto item1:*labSessions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabSessions"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LabSessions") != m.end() && !m["LabSessions"].empty()) {
      if (typeid(vector<boost::any>) == m["LabSessions"].type()) {
        vector<PageListLabSessionsResponseBodyLabSessions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabSessions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PageListLabSessionsResponseBodyLabSessions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labSessions = make_shared<vector<PageListLabSessionsResponseBodyLabSessions>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~PageListLabSessionsResponseBody() = default;
};
class PageListLabSessionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageListLabSessionsResponseBody> body{};

  PageListLabSessionsResponse() {}

  explicit PageListLabSessionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PageListLabSessionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageListLabSessionsResponseBody>(model1);
      }
    }
  }


  virtual ~PageListLabSessionsResponse() = default;
};
class PageListLabsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> id{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  PageListLabsRequest() {}

  explicit PageListLabsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Id"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Id"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      id = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~PageListLabsRequest() = default;
};
class PageListLabsResponseBodyLabs : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> id{};
  shared_ptr<string> introduction{};
  shared_ptr<string> subTitle{};
  shared_ptr<string> title{};

  PageListLabsResponseBodyLabs() {}

  explicit PageListLabsResponseBodyLabs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (subTitle) {
      res["SubTitle"] = boost::any(*subTitle);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("SubTitle") != m.end() && !m["SubTitle"].empty()) {
      subTitle = make_shared<string>(boost::any_cast<string>(m["SubTitle"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PageListLabsResponseBodyLabs() = default;
};
class PageListLabsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PageListLabsResponseBodyLabs>> labs{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  PageListLabsResponseBody() {}

  explicit PageListLabsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (labs) {
      vector<boost::any> temp1;
      for(auto item1:*labs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labs"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Labs") != m.end() && !m["Labs"].empty()) {
      if (typeid(vector<boost::any>) == m["Labs"].type()) {
        vector<PageListLabsResponseBodyLabs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PageListLabsResponseBodyLabs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labs = make_shared<vector<PageListLabsResponseBodyLabs>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~PageListLabsResponseBody() = default;
};
class PageListLabsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageListLabsResponseBody> body{};

  PageListLabsResponse() {}

  explicit PageListLabsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PageListLabsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageListLabsResponseBody>(model1);
      }
    }
  }


  virtual ~PageListLabsResponse() = default;
};
class RemoveLabReservationRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> labReservationId{};

  RemoveLabReservationRequest() {}

  explicit RemoveLabReservationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (labReservationId) {
      res["LabReservationId"] = boost::any(*labReservationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("LabReservationId") != m.end() && !m["LabReservationId"].empty()) {
      labReservationId = make_shared<string>(boost::any_cast<string>(m["LabReservationId"]));
    }
  }


  virtual ~RemoveLabReservationRequest() = default;
};
class RemoveLabReservationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  RemoveLabReservationResponseBody() {}

  explicit RemoveLabReservationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveLabReservationResponseBody() = default;
};
class RemoveLabReservationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveLabReservationResponseBody> body{};

  RemoveLabReservationResponse() {}

  explicit RemoveLabReservationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveLabReservationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveLabReservationResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveLabReservationResponse() = default;
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
  CreateLabReservationResponse createLabReservationWithOptions(shared_ptr<CreateLabReservationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLabReservationResponse createLabReservation(shared_ptr<CreateLabReservationRequest> request);
  CreateLabSessionResponse createLabSessionWithOptions(shared_ptr<CreateLabSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLabSessionResponse createLabSession(shared_ptr<CreateLabSessionRequest> request);
  DescribeCourseResponse describeCourseWithOptions(shared_ptr<DescribeCourseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCourseResponse describeCourse(shared_ptr<DescribeCourseRequest> request);
  DescribeCourseLessonResponse describeCourseLessonWithOptions(shared_ptr<DescribeCourseLessonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCourseLessonResponse describeCourseLesson(shared_ptr<DescribeCourseLessonRequest> request);
  DescribeLabResponse describeLabWithOptions(shared_ptr<DescribeLabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLabResponse describeLab(shared_ptr<DescribeLabRequest> request);
  DescribeLabReservationResponse describeLabReservationWithOptions(shared_ptr<DescribeLabReservationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLabReservationResponse describeLabReservation(shared_ptr<DescribeLabReservationRequest> request);
  DescribeLabSessionResponse describeLabSessionWithOptions(shared_ptr<DescribeLabSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLabSessionResponse describeLabSession(shared_ptr<DescribeLabSessionRequest> request);
  ListCoursesResponse listCoursesWithOptions(shared_ptr<ListCoursesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCoursesResponse listCourses(shared_ptr<ListCoursesRequest> request);
  PageListLabReservationsResponse pageListLabReservationsWithOptions(shared_ptr<PageListLabReservationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageListLabReservationsResponse pageListLabReservations(shared_ptr<PageListLabReservationsRequest> request);
  PageListLabSessionsResponse pageListLabSessionsWithOptions(shared_ptr<PageListLabSessionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageListLabSessionsResponse pageListLabSessions(shared_ptr<PageListLabSessionsRequest> request);
  PageListLabsResponse pageListLabsWithOptions(shared_ptr<PageListLabsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageListLabsResponse pageListLabs(shared_ptr<PageListLabsRequest> request);
  RemoveLabReservationResponse removeLabReservationWithOptions(shared_ptr<RemoveLabReservationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveLabReservationResponse removeLabReservation(shared_ptr<RemoveLabReservationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EduEmbed20240101

#endif
