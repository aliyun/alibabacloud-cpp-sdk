// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CHATBOT20171011_H_
#define ALIBABACLOUD_CHATBOT20171011_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Chatbot20171011 {
class Children : public Darabonba::Model {
public:
  shared_ptr<string> areaCode{};
  shared_ptr<long> categoryId{};
  shared_ptr<vector<Children>> childrens{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};

  Children() {}

  explicit Children(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaCode) {
      res["AreaCode"] = boost::any(*areaCode);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (childrens) {
      vector<boost::any> temp1;
      for(auto item1:*childrens){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Childrens"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaCode") != m.end() && !m["AreaCode"].empty()) {
      areaCode = make_shared<string>(boost::any_cast<string>(m["AreaCode"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Childrens") != m.end() && !m["Childrens"].empty()) {
      if (typeid(vector<boost::any>) == m["Childrens"].type()) {
        vector<Children> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Childrens"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Children model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childrens = make_shared<vector<Children>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
  }


  virtual ~Children() = default;
};
class RuleMtopDTO : public Darabonba::Model {
public:
  shared_ptr<vector<string>> error{};
  shared_ptr<bool> strict{};
  shared_ptr<string> text{};
  shared_ptr<vector<string>> warning{};

  RuleMtopDTO() {}

  explicit RuleMtopDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (strict) {
      res["Strict"] = boost::any(*strict);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (warning) {
      res["Warning"] = boost::any(*warning);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Error"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Error"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      error = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Strict") != m.end() && !m["Strict"].empty()) {
      strict = make_shared<bool>(boost::any_cast<bool>(m["Strict"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Warning") != m.end() && !m["Warning"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Warning"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Warning"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      warning = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RuleMtopDTO() = default;
};
class TagMtopDTO : public Darabonba::Model {
public:
  shared_ptr<string> userSayId{};
  shared_ptr<string> value{};

  TagMtopDTO() {}

  explicit TagMtopDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<string>(boost::any_cast<string>(m["UserSayId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagMtopDTO() = default;
};
class SlotrecordMtopDTO : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<bool> isArray{};
  shared_ptr<bool> isNecessary{};
  shared_ptr<long> lifeSpan{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> question{};
  shared_ptr<vector<TagMtopDTO>> tags{};
  shared_ptr<string> value{};

  SlotrecordMtopDTO() {}

  explicit SlotrecordMtopDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isArray) {
      res["IsArray"] = boost::any(*isArray);
    }
    if (isNecessary) {
      res["IsNecessary"] = boost::any(*isNecessary);
    }
    if (lifeSpan) {
      res["LifeSpan"] = boost::any(*lifeSpan);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsArray") != m.end() && !m["IsArray"].empty()) {
      isArray = make_shared<bool>(boost::any_cast<bool>(m["IsArray"]));
    }
    if (m.find("IsNecessary") != m.end() && !m["IsNecessary"].empty()) {
      isNecessary = make_shared<bool>(boost::any_cast<bool>(m["IsNecessary"]));
    }
    if (m.find("LifeSpan") != m.end() && !m["LifeSpan"].empty()) {
      lifeSpan = make_shared<long>(boost::any_cast<long>(m["LifeSpan"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Question"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Question"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      question = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<TagMtopDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagMtopDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<TagMtopDTO>>(expect1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SlotrecordMtopDTO() = default;
};
class SectionMtopDTO : public Darabonba::Model {
public:
  shared_ptr<string> slotId{};
  shared_ptr<string> text{};

  SectionMtopDTO() {}

  explicit SectionMtopDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~SectionMtopDTO() = default;
};
class UsersayMtopDTO : public Darabonba::Model {
public:
  shared_ptr<vector<SectionMtopDTO>> data{};
  shared_ptr<string> id{};
  shared_ptr<bool> strict{};

  UsersayMtopDTO() {}

  explicit UsersayMtopDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (strict) {
      res["Strict"] = boost::any(*strict);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SectionMtopDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SectionMtopDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SectionMtopDTO>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Strict") != m.end() && !m["Strict"].empty()) {
      strict = make_shared<bool>(boost::any_cast<bool>(m["Strict"]));
    }
  }


  virtual ~UsersayMtopDTO() = default;
};
class IntentCreateDTO : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> name{};
  shared_ptr<vector<RuleMtopDTO>> ruleCheck{};
  shared_ptr<vector<SlotrecordMtopDTO>> slot{};
  shared_ptr<vector<UsersayMtopDTO>> userSay{};

  IntentCreateDTO() {}

  explicit IntentCreateDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleCheck) {
      vector<boost::any> temp1;
      for(auto item1:*ruleCheck){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleCheck"] = boost::any(temp1);
    }
    if (slot) {
      vector<boost::any> temp1;
      for(auto item1:*slot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Slot"] = boost::any(temp1);
    }
    if (userSay) {
      vector<boost::any> temp1;
      for(auto item1:*userSay){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserSay"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleCheck") != m.end() && !m["RuleCheck"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleCheck"].type()) {
        vector<RuleMtopDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleCheck"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RuleMtopDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleCheck = make_shared<vector<RuleMtopDTO>>(expect1);
      }
    }
    if (m.find("Slot") != m.end() && !m["Slot"].empty()) {
      if (typeid(vector<boost::any>) == m["Slot"].type()) {
        vector<SlotrecordMtopDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Slot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SlotrecordMtopDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slot = make_shared<vector<SlotrecordMtopDTO>>(expect1);
      }
    }
    if (m.find("UserSay") != m.end() && !m["UserSay"].empty()) {
      if (typeid(vector<boost::any>) == m["UserSay"].type()) {
        vector<UsersayMtopDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserSay"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UsersayMtopDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userSay = make_shared<vector<UsersayMtopDTO>>(expect1);
      }
    }
  }


  virtual ~IntentCreateDTO() = default;
};
class PaasButtonDTO : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};

  PaasButtonDTO() {}

  explicit PaasButtonDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PaasButtonDTO() = default;
};
class PaasButtonListDTO : public Darabonba::Model {
public:
  shared_ptr<vector<PaasButtonDTO>> button{};
  shared_ptr<string> intro{};

  PaasButtonListDTO() {}

  explicit PaasButtonListDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (button) {
      vector<boost::any> temp1;
      for(auto item1:*button){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Button"] = boost::any(temp1);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Button") != m.end() && !m["Button"].empty()) {
      if (typeid(vector<boost::any>) == m["Button"].type()) {
        vector<PaasButtonDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Button"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasButtonDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        button = make_shared<vector<PaasButtonDTO>>(expect1);
      }
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
  }


  virtual ~PaasButtonListDTO() = default;
};
class PaasConditionEntryDTO : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> term{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  PaasConditionEntryDTO() {}

  explicit PaasConditionEntryDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (term) {
      res["Term"] = boost::any(*term);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Term") != m.end() && !m["Term"].empty()) {
      term = make_shared<string>(boost::any_cast<string>(m["Term"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~PaasConditionEntryDTO() = default;
};
class PaasConditionSetDTO : public Darabonba::Model {
public:
  shared_ptr<vector<PaasConditionEntryDTO>> conditionEntries{};

  PaasConditionSetDTO() {}

  explicit PaasConditionSetDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionEntries) {
      vector<boost::any> temp1;
      for(auto item1:*conditionEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionEntries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionEntries") != m.end() && !m["ConditionEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionEntries"].type()) {
        vector<PaasConditionEntryDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasConditionEntryDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionEntries = make_shared<vector<PaasConditionEntryDTO>>(expect1);
      }
    }
  }


  virtual ~PaasConditionSetDTO() = default;
};
class PaasEdgeDTO : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> label{};
  shared_ptr<string> source{};
  shared_ptr<string> target{};

  PaasEdgeDTO() {}

  explicit PaasEdgeDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~PaasEdgeDTO() = default;
};
class PaasEntryPluginFieldDataDTO : public Darabonba::Model {
public:
  shared_ptr<vector<PaasConditionSetDTO>> contentEntry{};
  shared_ptr<long> lifeSpan{};
  shared_ptr<string> name{};

  PaasEntryPluginFieldDataDTO() {}

  explicit PaasEntryPluginFieldDataDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentEntry) {
      vector<boost::any> temp1;
      for(auto item1:*contentEntry){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContentEntry"] = boost::any(temp1);
    }
    if (lifeSpan) {
      res["LifeSpan"] = boost::any(*lifeSpan);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentEntry") != m.end() && !m["ContentEntry"].empty()) {
      if (typeid(vector<boost::any>) == m["ContentEntry"].type()) {
        vector<PaasConditionSetDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContentEntry"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasConditionSetDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contentEntry = make_shared<vector<PaasConditionSetDTO>>(expect1);
      }
    }
    if (m.find("LifeSpan") != m.end() && !m["LifeSpan"].empty()) {
      lifeSpan = make_shared<long>(boost::any_cast<long>(m["LifeSpan"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~PaasEntryPluginFieldDataDTO() = default;
};
class PaasEntryDTO : public Darabonba::Model {
public:
  shared_ptr<PaasEntryPluginFieldDataDTO> pluginFieldDataEntry{};

  PaasEntryDTO() {}

  explicit PaasEntryDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pluginFieldDataEntry) {
      res["PluginFieldDataEntry"] = pluginFieldDataEntry ? boost::any(pluginFieldDataEntry->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PluginFieldDataEntry") != m.end() && !m["PluginFieldDataEntry"].empty()) {
      if (typeid(map<string, boost::any>) == m["PluginFieldDataEntry"].type()) {
        PaasEntryPluginFieldDataDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PluginFieldDataEntry"]));
        pluginFieldDataEntry = make_shared<PaasEntryPluginFieldDataDTO>(model1);
      }
    }
  }


  virtual ~PaasEntryDTO() = default;
};
class PaasSwitchCaseDTO : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> label{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};
  shared_ptr<string> variableName{};

  PaasSwitchCaseDTO() {}

  explicit PaasSwitchCaseDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
  }


  virtual ~PaasSwitchCaseDTO() = default;
};
class PaasFunctionPluginFieldDataDTO : public Darabonba::Model {
public:
  shared_ptr<string> aliyunFunction{};
  shared_ptr<string> aliyunService{};
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> function{};
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<vector<PaasSwitchCaseDTO>> switch_{};
  shared_ptr<string> type{};

  PaasFunctionPluginFieldDataDTO() {}

  explicit PaasFunctionPluginFieldDataDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunFunction) {
      res["AliyunFunction"] = boost::any(*aliyunFunction);
    }
    if (aliyunService) {
      res["AliyunService"] = boost::any(*aliyunService);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (function) {
      res["Function"] = boost::any(*function);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (switch_) {
      vector<boost::any> temp1;
      for(auto item1:*switch_){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Switch"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunFunction") != m.end() && !m["AliyunFunction"].empty()) {
      aliyunFunction = make_shared<string>(boost::any_cast<string>(m["AliyunFunction"]));
    }
    if (m.find("AliyunService") != m.end() && !m["AliyunService"].empty()) {
      aliyunService = make_shared<string>(boost::any_cast<string>(m["AliyunService"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Function") != m.end() && !m["Function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["Function"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Switch") != m.end() && !m["Switch"].empty()) {
      if (typeid(vector<boost::any>) == m["Switch"].type()) {
        vector<PaasSwitchCaseDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Switch"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasSwitchCaseDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        switch_ = make_shared<vector<PaasSwitchCaseDTO>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PaasFunctionPluginFieldDataDTO() = default;
};
class PaasFunctionDTO : public Darabonba::Model {
public:
  shared_ptr<PaasFunctionPluginFieldDataDTO> pluginFieldDataFunction{};

  PaasFunctionDTO() {}

  explicit PaasFunctionDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pluginFieldDataFunction) {
      res["PluginFieldDataFunction"] = pluginFieldDataFunction ? boost::any(pluginFieldDataFunction->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PluginFieldDataFunction") != m.end() && !m["PluginFieldDataFunction"].empty()) {
      if (typeid(map<string, boost::any>) == m["PluginFieldDataFunction"].type()) {
        PaasFunctionPluginFieldDataDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PluginFieldDataFunction"]));
        pluginFieldDataFunction = make_shared<PaasFunctionPluginFieldDataDTO>(model1);
      }
    }
  }


  virtual ~PaasFunctionDTO() = default;
};
class PaasFunctionPluginParams : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<map<string, string>> header{};
  shared_ptr<string> method{};
  shared_ptr<map<string, string>> query{};
  shared_ptr<string> url{};

  PaasFunctionPluginParams() {}

  explicit PaasFunctionPluginParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (header) {
      res["Header"] = boost::any(*header);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Header"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      header = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Query"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      query = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PaasFunctionPluginParams() = default;
};
class PaasResponseNodeContentDTO : public Darabonba::Model {
public:
  shared_ptr<PaasButtonListDTO> buttonList{};
  shared_ptr<string> image{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};

  PaasResponseNodeContentDTO() {}

  explicit PaasResponseNodeContentDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttonList) {
      res["ButtonList"] = buttonList ? boost::any(buttonList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ButtonList") != m.end() && !m["ButtonList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ButtonList"].type()) {
        PaasButtonListDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ButtonList"]));
        buttonList = make_shared<PaasButtonListDTO>(model1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PaasResponseNodeContentDTO() = default;
};
class PaasResponsePluginFieldDataDTO : public Darabonba::Model {
public:
  shared_ptr<PaasResponseNodeContentDTO> contentResponse{};
  shared_ptr<string> name{};

  PaasResponsePluginFieldDataDTO() {}

  explicit PaasResponsePluginFieldDataDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentResponse) {
      res["ContentResponse"] = contentResponse ? boost::any(contentResponse->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentResponse") != m.end() && !m["ContentResponse"].empty()) {
      if (typeid(map<string, boost::any>) == m["ContentResponse"].type()) {
        PaasResponseNodeContentDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ContentResponse"]));
        contentResponse = make_shared<PaasResponseNodeContentDTO>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~PaasResponsePluginFieldDataDTO() = default;
};
class PaasResponseDTO : public Darabonba::Model {
public:
  shared_ptr<PaasResponsePluginFieldDataDTO> pluginFieldDataResponse{};

  PaasResponseDTO() {}

  explicit PaasResponseDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pluginFieldDataResponse) {
      res["PluginFieldDataResponse"] = pluginFieldDataResponse ? boost::any(pluginFieldDataResponse->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PluginFieldDataResponse") != m.end() && !m["PluginFieldDataResponse"].empty()) {
      if (typeid(map<string, boost::any>) == m["PluginFieldDataResponse"].type()) {
        PaasResponsePluginFieldDataDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PluginFieldDataResponse"]));
        pluginFieldDataResponse = make_shared<PaasResponsePluginFieldDataDTO>(model1);
      }
    }
  }


  virtual ~PaasResponseDTO() = default;
};
class PaasSlotConfigDTO : public Darabonba::Model {
public:
  shared_ptr<bool> isArray{};
  shared_ptr<bool> isNecessary{};
  shared_ptr<long> lifeSpan{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> question{};
  shared_ptr<string> value{};

  PaasSlotConfigDTO() {}

  explicit PaasSlotConfigDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isArray) {
      res["IsArray"] = boost::any(*isArray);
    }
    if (isNecessary) {
      res["IsNecessary"] = boost::any(*isNecessary);
    }
    if (lifeSpan) {
      res["LifeSpan"] = boost::any(*lifeSpan);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsArray") != m.end() && !m["IsArray"].empty()) {
      isArray = make_shared<bool>(boost::any_cast<bool>(m["IsArray"]));
    }
    if (m.find("IsNecessary") != m.end() && !m["IsNecessary"].empty()) {
      isNecessary = make_shared<bool>(boost::any_cast<bool>(m["IsNecessary"]));
    }
    if (m.find("LifeSpan") != m.end() && !m["LifeSpan"].empty()) {
      lifeSpan = make_shared<long>(boost::any_cast<long>(m["LifeSpan"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Question"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Question"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      question = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~PaasSlotConfigDTO() = default;
};
class PaasSlotPluginFieldDataDTO : public Darabonba::Model {
public:
  shared_ptr<vector<PaasSlotConfigDTO>> contentSlot{};
  shared_ptr<string> intentId{};
  shared_ptr<string> intentName{};
  shared_ptr<bool> isSysIntent{};
  shared_ptr<string> name{};

  PaasSlotPluginFieldDataDTO() {}

  explicit PaasSlotPluginFieldDataDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentSlot) {
      vector<boost::any> temp1;
      for(auto item1:*contentSlot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContentSlot"] = boost::any(temp1);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (isSysIntent) {
      res["IsSysIntent"] = boost::any(*isSysIntent);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentSlot") != m.end() && !m["ContentSlot"].empty()) {
      if (typeid(vector<boost::any>) == m["ContentSlot"].type()) {
        vector<PaasSlotConfigDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContentSlot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasSlotConfigDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contentSlot = make_shared<vector<PaasSlotConfigDTO>>(expect1);
      }
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<string>(boost::any_cast<string>(m["IntentId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("IsSysIntent") != m.end() && !m["IsSysIntent"].empty()) {
      isSysIntent = make_shared<bool>(boost::any_cast<bool>(m["IsSysIntent"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~PaasSlotPluginFieldDataDTO() = default;
};
class PaasSlotDTO : public Darabonba::Model {
public:
  shared_ptr<PaasSlotPluginFieldDataDTO> pluginFieldDataSlot{};

  PaasSlotDTO() {}

  explicit PaasSlotDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pluginFieldDataSlot) {
      res["PluginFieldDataSlot"] = pluginFieldDataSlot ? boost::any(pluginFieldDataSlot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PluginFieldDataSlot") != m.end() && !m["PluginFieldDataSlot"].empty()) {
      if (typeid(map<string, boost::any>) == m["PluginFieldDataSlot"].type()) {
        PaasSlotPluginFieldDataDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PluginFieldDataSlot"]));
        pluginFieldDataSlot = make_shared<PaasSlotPluginFieldDataDTO>(model1);
      }
    }
  }


  virtual ~PaasSlotDTO() = default;
};
class PaasPluginDataDTO : public Darabonba::Model {
public:
  shared_ptr<PaasEntryDTO> entry{};
  shared_ptr<PaasFunctionDTO> function{};
  shared_ptr<PaasResponseDTO> response{};
  shared_ptr<PaasSlotDTO> slot{};

  PaasPluginDataDTO() {}

  explicit PaasPluginDataDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entry) {
      res["Entry"] = entry ? boost::any(entry->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (function) {
      res["Function"] = function ? boost::any(function->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (response) {
      res["Response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (slot) {
      res["Slot"] = slot ? boost::any(slot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      if (typeid(map<string, boost::any>) == m["Entry"].type()) {
        PaasEntryDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Entry"]));
        entry = make_shared<PaasEntryDTO>(model1);
      }
    }
    if (m.find("Function") != m.end() && !m["Function"].empty()) {
      if (typeid(map<string, boost::any>) == m["Function"].type()) {
        PaasFunctionDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Function"]));
        function = make_shared<PaasFunctionDTO>(model1);
      }
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      if (typeid(map<string, boost::any>) == m["Response"].type()) {
        PaasResponseDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Response"]));
        response = make_shared<PaasResponseDTO>(model1);
      }
    }
    if (m.find("Slot") != m.end() && !m["Slot"].empty()) {
      if (typeid(map<string, boost::any>) == m["Slot"].type()) {
        PaasSlotDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Slot"]));
        slot = make_shared<PaasSlotDTO>(model1);
      }
    }
  }


  virtual ~PaasPluginDataDTO() = default;
};
class PaasNodeDTO : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> id{};
  shared_ptr<string> label{};
  shared_ptr<PaasPluginDataDTO> pluginData{};
  shared_ptr<double> xx{};
  shared_ptr<double> yy{};

  PaasNodeDTO() {}

  explicit PaasNodeDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (pluginData) {
      res["PluginData"] = pluginData ? boost::any(pluginData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (xx) {
      res["Xx"] = boost::any(*xx);
    }
    if (yy) {
      res["Yy"] = boost::any(*yy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("PluginData") != m.end() && !m["PluginData"].empty()) {
      if (typeid(map<string, boost::any>) == m["PluginData"].type()) {
        PaasPluginDataDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PluginData"]));
        pluginData = make_shared<PaasPluginDataDTO>(model1);
      }
    }
    if (m.find("Xx") != m.end() && !m["Xx"].empty()) {
      xx = make_shared<double>(boost::any_cast<double>(m["Xx"]));
    }
    if (m.find("Yy") != m.end() && !m["Yy"].empty()) {
      yy = make_shared<double>(boost::any_cast<double>(m["Yy"]));
    }
  }


  virtual ~PaasNodeDTO() = default;
};
class PaasProcessData : public Darabonba::Model {
public:
  shared_ptr<vector<PaasEdgeDTO>> edges{};
  shared_ptr<vector<PaasNodeDTO>> nodes{};

  PaasProcessData() {}

  explicit PaasProcessData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edges) {
      vector<boost::any> temp1;
      for(auto item1:*edges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Edges"] = boost::any(temp1);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Edges") != m.end() && !m["Edges"].empty()) {
      if (typeid(vector<boost::any>) == m["Edges"].type()) {
        vector<PaasEdgeDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Edges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasEdgeDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        edges = make_shared<vector<PaasEdgeDTO>>(expect1);
      }
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<PaasNodeDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasNodeDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<PaasNodeDTO>>(expect1);
      }
    }
  }


  virtual ~PaasProcessData() = default;
};
class UpdateDialogFlowModuleDefinition : public Darabonba::Model {
public:
  shared_ptr<vector<PaasEdgeDTO>> edges{};
  shared_ptr<vector<PaasNodeDTO>> nodes{};

  UpdateDialogFlowModuleDefinition() {}

  explicit UpdateDialogFlowModuleDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edges) {
      vector<boost::any> temp1;
      for(auto item1:*edges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Edges"] = boost::any(temp1);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Edges") != m.end() && !m["Edges"].empty()) {
      if (typeid(vector<boost::any>) == m["Edges"].type()) {
        vector<PaasEdgeDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Edges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasEdgeDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        edges = make_shared<vector<PaasEdgeDTO>>(expect1);
      }
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<PaasNodeDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaasNodeDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<PaasNodeDTO>>(expect1);
      }
    }
  }


  virtual ~UpdateDialogFlowModuleDefinition() = default;
};
class ActivatePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> perspectiveId{};

  ActivatePerspectiveRequest() {}

  explicit ActivatePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~ActivatePerspectiveRequest() = default;
};
class ActivatePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ActivatePerspectiveResponseBody() {}

  explicit ActivatePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ActivatePerspectiveResponseBody() = default;
};
class ActivatePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActivatePerspectiveResponseBody> body{};

  ActivatePerspectiveResponse() {}

  explicit ActivatePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivatePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivatePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~ActivatePerspectiveResponse() = default;
};
class AddSynonymRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> coreWordName{};
  shared_ptr<string> synonym{};

  AddSynonymRequest() {}

  explicit AddSynonymRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (synonym) {
      res["Synonym"] = boost::any(*synonym);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("Synonym") != m.end() && !m["Synonym"].empty()) {
      synonym = make_shared<string>(boost::any_cast<string>(m["Synonym"]));
    }
  }


  virtual ~AddSynonymRequest() = default;
};
class AddSynonymResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddSynonymResponseBody() {}

  explicit AddSynonymResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddSynonymResponseBody() = default;
};
class AddSynonymResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddSynonymResponseBody> body{};

  AddSynonymResponse() {}

  explicit AddSynonymResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSynonymResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSynonymResponseBody>(model1);
      }
    }
  }


  virtual ~AddSynonymResponse() = default;
};
class AppendEntityMemberRequestMember : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<vector<string>> synonyms{};

  AppendEntityMemberRequestMember() {}

  explicit AppendEntityMemberRequestMember(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AppendEntityMemberRequestMember() = default;
};
class AppendEntityMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> applyType{};
  shared_ptr<long> entityId{};
  shared_ptr<AppendEntityMemberRequestMember> member{};

  AppendEntityMemberRequest() {}

  explicit AppendEntityMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (applyType) {
      res["ApplyType"] = boost::any(*applyType);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (member) {
      res["Member"] = member ? boost::any(member->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ApplyType") != m.end() && !m["ApplyType"].empty()) {
      applyType = make_shared<string>(boost::any_cast<string>(m["ApplyType"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("Member") != m.end() && !m["Member"].empty()) {
      if (typeid(map<string, boost::any>) == m["Member"].type()) {
        AppendEntityMemberRequestMember model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Member"]));
        member = make_shared<AppendEntityMemberRequestMember>(model1);
      }
    }
  }


  virtual ~AppendEntityMemberRequest() = default;
};
class AppendEntityMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> applyType{};
  shared_ptr<long> entityId{};
  shared_ptr<string> memberShrink{};

  AppendEntityMemberShrinkRequest() {}

  explicit AppendEntityMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (applyType) {
      res["ApplyType"] = boost::any(*applyType);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (memberShrink) {
      res["Member"] = boost::any(*memberShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ApplyType") != m.end() && !m["ApplyType"].empty()) {
      applyType = make_shared<string>(boost::any_cast<string>(m["ApplyType"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("Member") != m.end() && !m["Member"].empty()) {
      memberShrink = make_shared<string>(boost::any_cast<string>(m["Member"]));
    }
  }


  virtual ~AppendEntityMemberShrinkRequest() = default;
};
class AppendEntityMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> requestId{};

  AppendEntityMemberResponseBody() {}

  explicit AppendEntityMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AppendEntityMemberResponseBody() = default;
};
class AppendEntityMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AppendEntityMemberResponseBody> body{};

  AppendEntityMemberResponse() {}

  explicit AppendEntityMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AppendEntityMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AppendEntityMemberResponseBody>(model1);
      }
    }
  }


  virtual ~AppendEntityMemberResponse() = default;
};
class AssociateRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> perspective{};
  shared_ptr<long> recommendNum{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};

  AssociateRequest() {}

  explicit AssociateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (perspective) {
      res["Perspective"] = boost::any(*perspective);
    }
    if (recommendNum) {
      res["RecommendNum"] = boost::any(*recommendNum);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Perspective") != m.end() && !m["Perspective"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Perspective"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Perspective"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspective = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RecommendNum") != m.end() && !m["RecommendNum"].empty()) {
      recommendNum = make_shared<long>(boost::any_cast<long>(m["RecommendNum"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
  }


  virtual ~AssociateRequest() = default;
};
class AssociateResponseBodyAssociate : public Darabonba::Model {
public:
  shared_ptr<string> title{};

  AssociateResponseBodyAssociate() {}

  explicit AssociateResponseBodyAssociate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~AssociateResponseBodyAssociate() = default;
};
class AssociateResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AssociateResponseBodyAssociate>> associate{};
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};

  AssociateResponseBody() {}

  explicit AssociateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associate) {
      vector<boost::any> temp1;
      for(auto item1:*associate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Associate"] = boost::any(temp1);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Associate") != m.end() && !m["Associate"].empty()) {
      if (typeid(vector<boost::any>) == m["Associate"].type()) {
        vector<AssociateResponseBodyAssociate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Associate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateResponseBodyAssociate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        associate = make_shared<vector<AssociateResponseBodyAssociate>>(expect1);
      }
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~AssociateResponseBody() = default;
};
class AssociateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateResponseBody> body{};

  AssociateResponse() {}

  explicit AssociateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateResponse() = default;
};
class ChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentName{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<vector<string>> perspective{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tag{};
  shared_ptr<string> utterance{};
  shared_ptr<string> vendorParam{};

  ChatRequest() {}

  explicit ChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (perspective) {
      res["Perspective"] = boost::any(*perspective);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    if (vendorParam) {
      res["VendorParam"] = boost::any(*vendorParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("Perspective") != m.end() && !m["Perspective"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Perspective"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Perspective"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspective = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
    if (m.find("VendorParam") != m.end() && !m["VendorParam"].empty()) {
      vendorParam = make_shared<string>(boost::any_cast<string>(m["VendorParam"]));
    }
  }


  virtual ~ChatRequest() = default;
};
class ChatResponseBodyMessagesKnowledgeRelatedKnowledges : public Darabonba::Model {
public:
  shared_ptr<string> knowledgeId{};
  shared_ptr<string> title{};

  ChatResponseBodyMessagesKnowledgeRelatedKnowledges() {}

  explicit ChatResponseBodyMessagesKnowledgeRelatedKnowledges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ChatResponseBodyMessagesKnowledgeRelatedKnowledges() = default;
};
class ChatResponseBodyMessagesKnowledge : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> category{};
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> hitStatement{};
  shared_ptr<string> id{};
  shared_ptr<vector<ChatResponseBodyMessagesKnowledgeRelatedKnowledges>> relatedKnowledges{};
  shared_ptr<double> score{};
  shared_ptr<string> summary{};
  shared_ptr<string> title{};

  ChatResponseBodyMessagesKnowledge() {}

  explicit ChatResponseBodyMessagesKnowledge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (hitStatement) {
      res["HitStatement"] = boost::any(*hitStatement);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (relatedKnowledges) {
      vector<boost::any> temp1;
      for(auto item1:*relatedKnowledges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedKnowledges"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("HitStatement") != m.end() && !m["HitStatement"].empty()) {
      hitStatement = make_shared<string>(boost::any_cast<string>(m["HitStatement"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RelatedKnowledges") != m.end() && !m["RelatedKnowledges"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedKnowledges"].type()) {
        vector<ChatResponseBodyMessagesKnowledgeRelatedKnowledges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedKnowledges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessagesKnowledgeRelatedKnowledges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedKnowledges = make_shared<vector<ChatResponseBodyMessagesKnowledgeRelatedKnowledges>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ChatResponseBodyMessagesKnowledge() = default;
};
class ChatResponseBodyMessagesRecommends : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<double> score{};
  shared_ptr<string> title{};

  ChatResponseBodyMessagesRecommends() {}

  explicit ChatResponseBodyMessagesRecommends(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ChatResponseBodyMessagesRecommends() = default;
};
class ChatResponseBodyMessagesTextSlots : public Darabonba::Model {
public:
  shared_ptr<bool> isHit{};
  shared_ptr<string> name{};
  shared_ptr<string> origin{};
  shared_ptr<string> value{};

  ChatResponseBodyMessagesTextSlots() {}

  explicit ChatResponseBodyMessagesTextSlots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isHit) {
      res["IsHit"] = boost::any(*isHit);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsHit") != m.end() && !m["IsHit"].empty()) {
      isHit = make_shared<bool>(boost::any_cast<bool>(m["IsHit"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ChatResponseBodyMessagesTextSlots() = default;
};
class ChatResponseBodyMessagesText : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> articleTitle{};
  shared_ptr<map<string, boost::any>> commands{};
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> dialogName{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<map<string, boost::any>> externalFlags{};
  shared_ptr<string> hitStatement{};
  shared_ptr<string> intentName{};
  shared_ptr<string> metaData{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<double> score{};
  shared_ptr<vector<ChatResponseBodyMessagesTextSlots>> slots{};
  shared_ptr<string> userDefinedChatTitle{};

  ChatResponseBodyMessagesText() {}

  explicit ChatResponseBodyMessagesText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (articleTitle) {
      res["ArticleTitle"] = boost::any(*articleTitle);
    }
    if (commands) {
      res["Commands"] = boost::any(*commands);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (externalFlags) {
      res["ExternalFlags"] = boost::any(*externalFlags);
    }
    if (hitStatement) {
      res["HitStatement"] = boost::any(*hitStatement);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (metaData) {
      res["MetaData"] = boost::any(*metaData);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (slots) {
      vector<boost::any> temp1;
      for(auto item1:*slots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Slots"] = boost::any(temp1);
    }
    if (userDefinedChatTitle) {
      res["UserDefinedChatTitle"] = boost::any(*userDefinedChatTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("ArticleTitle") != m.end() && !m["ArticleTitle"].empty()) {
      articleTitle = make_shared<string>(boost::any_cast<string>(m["ArticleTitle"]));
    }
    if (m.find("Commands") != m.end() && !m["Commands"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Commands"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commands = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExternalFlags") != m.end() && !m["ExternalFlags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExternalFlags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      externalFlags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("HitStatement") != m.end() && !m["HitStatement"].empty()) {
      hitStatement = make_shared<string>(boost::any_cast<string>(m["HitStatement"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("MetaData") != m.end() && !m["MetaData"].empty()) {
      metaData = make_shared<string>(boost::any_cast<string>(m["MetaData"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Slots") != m.end() && !m["Slots"].empty()) {
      if (typeid(vector<boost::any>) == m["Slots"].type()) {
        vector<ChatResponseBodyMessagesTextSlots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Slots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessagesTextSlots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slots = make_shared<vector<ChatResponseBodyMessagesTextSlots>>(expect1);
      }
    }
    if (m.find("UserDefinedChatTitle") != m.end() && !m["UserDefinedChatTitle"].empty()) {
      userDefinedChatTitle = make_shared<string>(boost::any_cast<string>(m["UserDefinedChatTitle"]));
    }
  }


  virtual ~ChatResponseBodyMessagesText() = default;
};
class ChatResponseBodyMessagesVoiceStrategy : public Darabonba::Model {
public:
  shared_ptr<string> asrMaxEndSilence{};
  shared_ptr<bool> collectNumber{};
  shared_ptr<bool> hangUp{};
  shared_ptr<bool> interruptible{};
  shared_ptr<long> maxDigits{};
  shared_ptr<long> replyTimeout{};
  shared_ptr<string> terminator{};

  ChatResponseBodyMessagesVoiceStrategy() {}

  explicit ChatResponseBodyMessagesVoiceStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrMaxEndSilence) {
      res["AsrMaxEndSilence"] = boost::any(*asrMaxEndSilence);
    }
    if (collectNumber) {
      res["CollectNumber"] = boost::any(*collectNumber);
    }
    if (hangUp) {
      res["HangUp"] = boost::any(*hangUp);
    }
    if (interruptible) {
      res["Interruptible"] = boost::any(*interruptible);
    }
    if (maxDigits) {
      res["MaxDigits"] = boost::any(*maxDigits);
    }
    if (replyTimeout) {
      res["ReplyTimeout"] = boost::any(*replyTimeout);
    }
    if (terminator) {
      res["Terminator"] = boost::any(*terminator);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrMaxEndSilence") != m.end() && !m["AsrMaxEndSilence"].empty()) {
      asrMaxEndSilence = make_shared<string>(boost::any_cast<string>(m["AsrMaxEndSilence"]));
    }
    if (m.find("CollectNumber") != m.end() && !m["CollectNumber"].empty()) {
      collectNumber = make_shared<bool>(boost::any_cast<bool>(m["CollectNumber"]));
    }
    if (m.find("HangUp") != m.end() && !m["HangUp"].empty()) {
      hangUp = make_shared<bool>(boost::any_cast<bool>(m["HangUp"]));
    }
    if (m.find("Interruptible") != m.end() && !m["Interruptible"].empty()) {
      interruptible = make_shared<bool>(boost::any_cast<bool>(m["Interruptible"]));
    }
    if (m.find("MaxDigits") != m.end() && !m["MaxDigits"].empty()) {
      maxDigits = make_shared<long>(boost::any_cast<long>(m["MaxDigits"]));
    }
    if (m.find("ReplyTimeout") != m.end() && !m["ReplyTimeout"].empty()) {
      replyTimeout = make_shared<long>(boost::any_cast<long>(m["ReplyTimeout"]));
    }
    if (m.find("Terminator") != m.end() && !m["Terminator"].empty()) {
      terminator = make_shared<string>(boost::any_cast<string>(m["Terminator"]));
    }
  }


  virtual ~ChatResponseBodyMessagesVoiceStrategy() = default;
};
class ChatResponseBodyMessages : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> answerType{};
  shared_ptr<ChatResponseBodyMessagesKnowledge> knowledge{};
  shared_ptr<vector<ChatResponseBodyMessagesRecommends>> recommends{};
  shared_ptr<ChatResponseBodyMessagesText> text{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<ChatResponseBodyMessagesVoiceStrategy> voiceStrategy{};
  shared_ptr<string> voiceTitle{};

  ChatResponseBodyMessages() {}

  explicit ChatResponseBodyMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (answerType) {
      res["AnswerType"] = boost::any(*answerType);
    }
    if (knowledge) {
      res["Knowledge"] = knowledge ? boost::any(knowledge->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recommends) {
      vector<boost::any> temp1;
      for(auto item1:*recommends){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Recommends"] = boost::any(temp1);
    }
    if (text) {
      res["Text"] = text ? boost::any(text->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (voiceStrategy) {
      res["VoiceStrategy"] = voiceStrategy ? boost::any(voiceStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (voiceTitle) {
      res["VoiceTitle"] = boost::any(*voiceTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("AnswerType") != m.end() && !m["AnswerType"].empty()) {
      answerType = make_shared<string>(boost::any_cast<string>(m["AnswerType"]));
    }
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      if (typeid(map<string, boost::any>) == m["Knowledge"].type()) {
        ChatResponseBodyMessagesKnowledge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Knowledge"]));
        knowledge = make_shared<ChatResponseBodyMessagesKnowledge>(model1);
      }
    }
    if (m.find("Recommends") != m.end() && !m["Recommends"].empty()) {
      if (typeid(vector<boost::any>) == m["Recommends"].type()) {
        vector<ChatResponseBodyMessagesRecommends> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Recommends"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessagesRecommends model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recommends = make_shared<vector<ChatResponseBodyMessagesRecommends>>(expect1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      if (typeid(map<string, boost::any>) == m["Text"].type()) {
        ChatResponseBodyMessagesText model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Text"]));
        text = make_shared<ChatResponseBodyMessagesText>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VoiceStrategy") != m.end() && !m["VoiceStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["VoiceStrategy"].type()) {
        ChatResponseBodyMessagesVoiceStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VoiceStrategy"]));
        voiceStrategy = make_shared<ChatResponseBodyMessagesVoiceStrategy>(model1);
      }
    }
    if (m.find("VoiceTitle") != m.end() && !m["VoiceTitle"].empty()) {
      voiceTitle = make_shared<string>(boost::any_cast<string>(m["VoiceTitle"]));
    }
  }


  virtual ~ChatResponseBodyMessages() = default;
};
class ChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<vector<ChatResponseBodyMessages>> messages{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tag{};

  ChatResponseBody() {}

  explicit ChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Messages"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<ChatResponseBodyMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<ChatResponseBodyMessages>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ChatResponseBody() = default;
};
class ChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatResponseBody> body{};

  ChatResponse() {}

  explicit ChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatResponseBody>(model1);
      }
    }
  }


  virtual ~ChatResponse() = default;
};
class CreateBotRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> avatar{};
  shared_ptr<string> introduction{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> name{};
  shared_ptr<string> robotType{};

  CreateBotRequest() {}

  explicit CreateBotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (robotType) {
      res["RobotType"] = boost::any(*robotType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RobotType") != m.end() && !m["RobotType"].empty()) {
      robotType = make_shared<string>(boost::any_cast<string>(m["RobotType"]));
    }
  }


  virtual ~CreateBotRequest() = default;
};
class CreateBotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  CreateBotResponseBody() {}

  explicit CreateBotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateBotResponseBody() = default;
};
class CreateBotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBotResponseBody> body{};

  CreateBotResponse() {}

  explicit CreateBotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBotResponse() = default;
};
class CreateCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};

  CreateCategoryRequest() {}

  explicit CreateCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
  }


  virtual ~CreateCategoryRequest() = default;
};
class CreateCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateCategoryResponseBody() {}

  explicit CreateCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
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
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateCategoryResponseBody() = default;
};
class CreateCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCategoryResponseBody> body{};

  CreateCategoryResponse() {}

  explicit CreateCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCategoryResponse() = default;
};
class CreateCoreWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> coreWordName{};

  CreateCoreWordRequest() {}

  explicit CreateCoreWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
  }


  virtual ~CreateCoreWordRequest() = default;
};
class CreateCoreWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> coreWordCode{};
  shared_ptr<string> requestId{};

  CreateCoreWordResponseBody() {}

  explicit CreateCoreWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordCode) {
      res["CoreWordCode"] = boost::any(*coreWordCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordCode") != m.end() && !m["CoreWordCode"].empty()) {
      coreWordCode = make_shared<string>(boost::any_cast<string>(m["CoreWordCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCoreWordResponseBody() = default;
};
class CreateCoreWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCoreWordResponseBody> body{};

  CreateCoreWordResponse() {}

  explicit CreateCoreWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCoreWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCoreWordResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCoreWordResponse() = default;
};
class CreateDialogRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> description{};
  shared_ptr<string> dialogName{};
  shared_ptr<string> instanceId{};

  CreateDialogRequest() {}

  explicit CreateDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateDialogRequest() = default;
};
class CreateDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};
  shared_ptr<string> requestId{};

  CreateDialogResponseBody() {}

  explicit CreateDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDialogResponseBody() = default;
};
class CreateDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDialogResponseBody> body{};

  CreateDialogResponse() {}

  explicit CreateDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDialogResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDialogResponse() = default;
};
class CreateEntityRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<vector<string>> synonyms{};

  CreateEntityRequestMembers() {}

  explicit CreateEntityRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateEntityRequestMembers() = default;
};
class CreateEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<vector<CreateEntityRequestMembers>> members{};
  shared_ptr<string> regex{};

  CreateEntityRequest() {}

  explicit CreateEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<CreateEntityRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEntityRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<CreateEntityRequestMembers>>(expect1);
      }
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
  }


  virtual ~CreateEntityRequest() = default;
};
class CreateEntityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> membersShrink{};
  shared_ptr<string> regex{};

  CreateEntityShrinkRequest() {}

  explicit CreateEntityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (membersShrink) {
      res["Members"] = boost::any(*membersShrink);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      membersShrink = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
  }


  virtual ~CreateEntityShrinkRequest() = default;
};
class CreateEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> requestId{};

  CreateEntityResponseBody() {}

  explicit CreateEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEntityResponseBody() = default;
};
class CreateEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEntityResponseBody> body{};

  CreateEntityResponse() {}

  explicit CreateEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEntityResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEntityResponse() = default;
};
class CreateIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};
  shared_ptr<IntentCreateDTO> intentDefinition{};

  CreateIntentRequest() {}

  explicit CreateIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (intentDefinition) {
      res["IntentDefinition"] = intentDefinition ? boost::any(intentDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["IntentDefinition"].type()) {
        IntentCreateDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IntentDefinition"]));
        intentDefinition = make_shared<IntentCreateDTO>(model1);
      }
    }
  }


  virtual ~CreateIntentRequest() = default;
};
class CreateIntentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> intentDefinitionShrink{};

  CreateIntentShrinkRequest() {}

  explicit CreateIntentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (intentDefinitionShrink) {
      res["IntentDefinition"] = boost::any(*intentDefinitionShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      intentDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["IntentDefinition"]));
    }
  }


  virtual ~CreateIntentShrinkRequest() = default;
};
class CreateIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> requestId{};

  CreateIntentResponseBody() {}

  explicit CreateIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateIntentResponseBody() = default;
};
class CreateIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIntentResponseBody> body{};

  CreateIntentResponse() {}

  explicit CreateIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIntentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIntentResponse() = default;
};
class CreateKnowledgeRequestKnowledgeOutlines : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};
  shared_ptr<long> outlineId{};
  shared_ptr<string> title{};

  CreateKnowledgeRequestKnowledgeOutlines() {}

  explicit CreateKnowledgeRequestKnowledgeOutlines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (outlineId) {
      res["OutlineId"] = boost::any(*outlineId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("OutlineId") != m.end() && !m["OutlineId"].empty()) {
      outlineId = make_shared<long>(boost::any_cast<long>(m["OutlineId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateKnowledgeRequestKnowledgeOutlines() = default;
};
class CreateKnowledgeRequestKnowledgeSimQuestions : public Darabonba::Model {
public:
  shared_ptr<string> title{};

  CreateKnowledgeRequestKnowledgeSimQuestions() {}

  explicit CreateKnowledgeRequestKnowledgeSimQuestions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateKnowledgeRequestKnowledgeSimQuestions() = default;
};
class CreateKnowledgeRequestKnowledgeSolutions : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<vector<string>> perspectiveIds{};
  shared_ptr<string> plainText{};

  CreateKnowledgeRequestKnowledgeSolutions() {}

  explicit CreateKnowledgeRequestKnowledgeSolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (perspectiveIds) {
      res["PerspectiveIds"] = boost::any(*perspectiveIds);
    }
    if (plainText) {
      res["PlainText"] = boost::any(*plainText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("PerspectiveIds") != m.end() && !m["PerspectiveIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerspectiveIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerspectiveIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspectiveIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlainText") != m.end() && !m["PlainText"].empty()) {
      plainText = make_shared<string>(boost::any_cast<string>(m["PlainText"]));
    }
  }


  virtual ~CreateKnowledgeRequestKnowledgeSolutions() = default;
};
class CreateKnowledgeRequestKnowledge : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> knowledgeTitle{};
  shared_ptr<long> knowledgeType{};
  shared_ptr<vector<CreateKnowledgeRequestKnowledgeOutlines>> outlines{};
  shared_ptr<vector<CreateKnowledgeRequestKnowledgeSimQuestions>> simQuestions{};
  shared_ptr<vector<CreateKnowledgeRequestKnowledgeSolutions>> solutions{};
  shared_ptr<string> startDate{};

  CreateKnowledgeRequestKnowledge() {}

  explicit CreateKnowledgeRequestKnowledge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (knowledgeTitle) {
      res["KnowledgeTitle"] = boost::any(*knowledgeTitle);
    }
    if (knowledgeType) {
      res["KnowledgeType"] = boost::any(*knowledgeType);
    }
    if (outlines) {
      vector<boost::any> temp1;
      for(auto item1:*outlines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outlines"] = boost::any(temp1);
    }
    if (simQuestions) {
      vector<boost::any> temp1;
      for(auto item1:*simQuestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimQuestions"] = boost::any(temp1);
    }
    if (solutions) {
      vector<boost::any> temp1;
      for(auto item1:*solutions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Solutions"] = boost::any(temp1);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("KnowledgeTitle") != m.end() && !m["KnowledgeTitle"].empty()) {
      knowledgeTitle = make_shared<string>(boost::any_cast<string>(m["KnowledgeTitle"]));
    }
    if (m.find("KnowledgeType") != m.end() && !m["KnowledgeType"].empty()) {
      knowledgeType = make_shared<long>(boost::any_cast<long>(m["KnowledgeType"]));
    }
    if (m.find("Outlines") != m.end() && !m["Outlines"].empty()) {
      if (typeid(vector<boost::any>) == m["Outlines"].type()) {
        vector<CreateKnowledgeRequestKnowledgeOutlines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outlines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateKnowledgeRequestKnowledgeOutlines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outlines = make_shared<vector<CreateKnowledgeRequestKnowledgeOutlines>>(expect1);
      }
    }
    if (m.find("SimQuestions") != m.end() && !m["SimQuestions"].empty()) {
      if (typeid(vector<boost::any>) == m["SimQuestions"].type()) {
        vector<CreateKnowledgeRequestKnowledgeSimQuestions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimQuestions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateKnowledgeRequestKnowledgeSimQuestions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        simQuestions = make_shared<vector<CreateKnowledgeRequestKnowledgeSimQuestions>>(expect1);
      }
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      if (typeid(vector<boost::any>) == m["Solutions"].type()) {
        vector<CreateKnowledgeRequestKnowledgeSolutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Solutions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateKnowledgeRequestKnowledgeSolutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        solutions = make_shared<vector<CreateKnowledgeRequestKnowledgeSolutions>>(expect1);
      }
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~CreateKnowledgeRequestKnowledge() = default;
};
class CreateKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<CreateKnowledgeRequestKnowledge> knowledge{};

  CreateKnowledgeRequest() {}

  explicit CreateKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledge) {
      res["Knowledge"] = knowledge ? boost::any(knowledge->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      if (typeid(map<string, boost::any>) == m["Knowledge"].type()) {
        CreateKnowledgeRequestKnowledge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Knowledge"]));
        knowledge = make_shared<CreateKnowledgeRequestKnowledge>(model1);
      }
    }
  }


  virtual ~CreateKnowledgeRequest() = default;
};
class CreateKnowledgeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> knowledgeShrink{};

  CreateKnowledgeShrinkRequest() {}

  explicit CreateKnowledgeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeShrink) {
      res["Knowledge"] = boost::any(*knowledgeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      knowledgeShrink = make_shared<string>(boost::any_cast<string>(m["Knowledge"]));
    }
  }


  virtual ~CreateKnowledgeShrinkRequest() = default;
};
class CreateKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};
  shared_ptr<string> requestId{};

  CreateKnowledgeResponseBody() {}

  explicit CreateKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateKnowledgeResponseBody() = default;
};
class CreateKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateKnowledgeResponseBody> body{};

  CreateKnowledgeResponse() {}

  explicit CreateKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKnowledgeResponse() = default;
};
class CreatePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};

  CreatePerspectiveRequest() {}

  explicit CreatePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreatePerspectiveRequest() = default;
};
class CreatePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> perspectiveId{};
  shared_ptr<string> requestId{};

  CreatePerspectiveResponseBody() {}

  explicit CreatePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePerspectiveResponseBody() = default;
};
class CreatePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePerspectiveResponseBody> body{};

  CreatePerspectiveResponse() {}

  explicit CreatePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePerspectiveResponse() = default;
};
class DeleteBotRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};

  DeleteBotRequest() {}

  explicit DeleteBotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteBotRequest() = default;
};
class DeleteBotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBotResponseBody() {}

  explicit DeleteBotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBotResponseBody() = default;
};
class DeleteBotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBotResponseBody> body{};

  DeleteBotResponse() {}

  explicit DeleteBotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBotResponse() = default;
};
class DeleteCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};

  DeleteCategoryRequest() {}

  explicit DeleteCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
  }


  virtual ~DeleteCategoryRequest() = default;
};
class DeleteCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCategoryResponseBody() {}

  explicit DeleteCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCategoryResponseBody() = default;
};
class DeleteCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCategoryResponseBody> body{};

  DeleteCategoryResponse() {}

  explicit DeleteCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCategoryResponse() = default;
};
class DeleteCoreWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> coreWordName{};

  DeleteCoreWordRequest() {}

  explicit DeleteCoreWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
  }


  virtual ~DeleteCoreWordRequest() = default;
};
class DeleteCoreWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCoreWordResponseBody() {}

  explicit DeleteCoreWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCoreWordResponseBody() = default;
};
class DeleteCoreWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCoreWordResponseBody> body{};

  DeleteCoreWordResponse() {}

  explicit DeleteCoreWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCoreWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCoreWordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCoreWordResponse() = default;
};
class DeleteDialogRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};

  DeleteDialogRequest() {}

  explicit DeleteDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~DeleteDialogRequest() = default;
};
class DeleteDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDialogResponseBody() {}

  explicit DeleteDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDialogResponseBody() = default;
};
class DeleteDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDialogResponseBody> body{};

  DeleteDialogResponse() {}

  explicit DeleteDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDialogResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDialogResponse() = default;
};
class DeleteEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};

  DeleteEntityRequest() {}

  explicit DeleteEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
  }


  virtual ~DeleteEntityRequest() = default;
};
class DeleteEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> requestId{};

  DeleteEntityResponseBody() {}

  explicit DeleteEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteEntityResponseBody() = default;
};
class DeleteEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEntityResponseBody> body{};

  DeleteEntityResponse() {}

  explicit DeleteEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEntityResponse() = default;
};
class DeleteIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> intentId{};

  DeleteIntentRequest() {}

  explicit DeleteIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~DeleteIntentRequest() = default;
};
class DeleteIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> requestId{};

  DeleteIntentResponseBody() {}

  explicit DeleteIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteIntentResponseBody() = default;
};
class DeleteIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIntentResponseBody> body{};

  DeleteIntentResponse() {}

  explicit DeleteIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIntentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIntentResponse() = default;
};
class DeleteKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};

  DeleteKnowledgeRequest() {}

  explicit DeleteKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~DeleteKnowledgeRequest() = default;
};
class DeleteKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteKnowledgeResponseBody() {}

  explicit DeleteKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteKnowledgeResponseBody() = default;
};
class DeleteKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteKnowledgeResponseBody> body{};

  DeleteKnowledgeResponse() {}

  explicit DeleteKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKnowledgeResponse() = default;
};
class DeletePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> perspectiveId{};

  DeletePerspectiveRequest() {}

  explicit DeletePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~DeletePerspectiveRequest() = default;
};
class DeletePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeletePerspectiveResponseBody() {}

  explicit DeletePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeletePerspectiveResponseBody() = default;
};
class DeletePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePerspectiveResponseBody> body{};

  DeletePerspectiveResponse() {}

  explicit DeletePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePerspectiveResponse() = default;
};
class DescribeBotRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};

  DescribeBotRequest() {}

  explicit DescribeBotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeBotRequest() = default;
};
class DescribeBotResponseBodyCategories : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};

  DescribeBotResponseBodyCategories() {}

  explicit DescribeBotResponseBodyCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
  }


  virtual ~DescribeBotResponseBodyCategories() = default;
};
class DescribeBotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<vector<DescribeBotResponseBodyCategories>> categories{};
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> introduction{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> logo{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> timeZone{};

  DescribeBotResponseBody() {}

  explicit DescribeBotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (logo) {
      res["Logo"] = boost::any(*logo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<DescribeBotResponseBodyCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBotResponseBodyCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<DescribeBotResponseBodyCategories>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("Logo") != m.end() && !m["Logo"].empty()) {
      logo = make_shared<string>(boost::any_cast<string>(m["Logo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~DescribeBotResponseBody() = default;
};
class DescribeBotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBotResponseBody> body{};

  DescribeBotResponse() {}

  explicit DescribeBotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBotResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBotResponse() = default;
};
class DescribeCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};

  DescribeCategoryRequest() {}

  explicit DescribeCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
  }


  virtual ~DescribeCategoryRequest() = default;
};
class DescribeCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};
  shared_ptr<string> requestId{};

  DescribeCategoryResponseBody() {}

  explicit DescribeCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCategoryResponseBody() = default;
};
class DescribeCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCategoryResponseBody> body{};

  DescribeCategoryResponse() {}

  explicit DescribeCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCategoryResponse() = default;
};
class DescribeCoreWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> coreWordName{};

  DescribeCoreWordRequest() {}

  explicit DescribeCoreWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
  }


  virtual ~DescribeCoreWordRequest() = default;
};
class DescribeCoreWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> coreWordCode{};
  shared_ptr<string> coreWordName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> synonyms{};

  DescribeCoreWordResponseBody() {}

  explicit DescribeCoreWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordCode) {
      res["CoreWordCode"] = boost::any(*coreWordCode);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordCode") != m.end() && !m["CoreWordCode"].empty()) {
      coreWordCode = make_shared<string>(boost::any_cast<string>(m["CoreWordCode"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCoreWordResponseBody() = default;
};
class DescribeCoreWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCoreWordResponseBody> body{};

  DescribeCoreWordResponse() {}

  explicit DescribeCoreWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCoreWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCoreWordResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCoreWordResponse() = default;
};
class DescribeDialogRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};

  DescribeDialogRequest() {}

  explicit DescribeDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~DescribeDialogRequest() = default;
};
class DescribeDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> description{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> dialogName{};
  shared_ptr<bool> isOnline{};
  shared_ptr<bool> isSampleDialog{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  DescribeDialogResponseBody() {}

  explicit DescribeDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (isOnline) {
      res["IsOnline"] = boost::any(*isOnline);
    }
    if (isSampleDialog) {
      res["IsSampleDialog"] = boost::any(*isSampleDialog);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("IsOnline") != m.end() && !m["IsOnline"].empty()) {
      isOnline = make_shared<bool>(boost::any_cast<bool>(m["IsOnline"]));
    }
    if (m.find("IsSampleDialog") != m.end() && !m["IsSampleDialog"].empty()) {
      isSampleDialog = make_shared<bool>(boost::any_cast<bool>(m["IsSampleDialog"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeDialogResponseBody() = default;
};
class DescribeDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDialogResponseBody> body{};

  DescribeDialogResponse() {}

  explicit DescribeDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDialogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDialogResponse() = default;
};
class DescribeDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};

  DescribeDialogFlowRequest() {}

  explicit DescribeDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~DescribeDialogFlowRequest() = default;
};
class DescribeDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> dialogName{};
  shared_ptr<map<string, boost::any>> globalVars{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<PaasProcessData> moduleDefinition{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};
  shared_ptr<string> tags{};
  shared_ptr<string> templates{};

  DescribeDialogFlowResponseBody() {}

  explicit DescribeDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (globalVars) {
      res["GlobalVars"] = boost::any(*globalVars);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (moduleDefinition) {
      res["ModuleDefinition"] = moduleDefinition ? boost::any(moduleDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (templates) {
      res["Templates"] = boost::any(*templates);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("GlobalVars") != m.end() && !m["GlobalVars"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["GlobalVars"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      globalVars = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("ModuleDefinition") != m.end() && !m["ModuleDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModuleDefinition"].type()) {
        PaasProcessData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModuleDefinition"]));
        moduleDefinition = make_shared<PaasProcessData>(model1);
      }
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      templates = make_shared<string>(boost::any_cast<string>(m["Templates"]));
    }
  }


  virtual ~DescribeDialogFlowResponseBody() = default;
};
class DescribeDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDialogFlowResponseBody> body{};

  DescribeDialogFlowResponse() {}

  explicit DescribeDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDialogFlowResponse() = default;
};
class DescribeEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};

  DescribeEntitiesRequest() {}

  explicit DescribeEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
  }


  virtual ~DescribeEntitiesRequest() = default;
};
class DescribeEntitiesResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<vector<string>> synonyms{};

  DescribeEntitiesResponseBodyMembers() {}

  explicit DescribeEntitiesResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeEntitiesResponseBodyMembers() = default;
};
class DescribeEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<vector<DescribeEntitiesResponseBodyMembers>> members{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> regex{};
  shared_ptr<string> requestId{};

  DescribeEntitiesResponseBody() {}

  explicit DescribeEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<DescribeEntitiesResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEntitiesResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<DescribeEntitiesResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEntitiesResponseBody() = default;
};
class DescribeEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEntitiesResponseBody> body{};

  DescribeEntitiesResponse() {}

  explicit DescribeEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEntitiesResponse() = default;
};
class DescribeIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> intentId{};

  DescribeIntentRequest() {}

  explicit DescribeIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~DescribeIntentRequest() = default;
};
class DescribeIntentResponseBodyRuleCheck : public Darabonba::Model {
public:
  shared_ptr<vector<string>> error{};
  shared_ptr<bool> strict{};
  shared_ptr<string> text{};
  shared_ptr<vector<string>> warning{};

  DescribeIntentResponseBodyRuleCheck() {}

  explicit DescribeIntentResponseBodyRuleCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (strict) {
      res["Strict"] = boost::any(*strict);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (warning) {
      res["Warning"] = boost::any(*warning);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Error"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Error"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      error = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Strict") != m.end() && !m["Strict"].empty()) {
      strict = make_shared<bool>(boost::any_cast<bool>(m["Strict"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Warning") != m.end() && !m["Warning"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Warning"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Warning"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      warning = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeIntentResponseBodyRuleCheck() = default;
};
class DescribeIntentResponseBodySlotTags : public Darabonba::Model {
public:
  shared_ptr<string> userSayId{};
  shared_ptr<string> value{};

  DescribeIntentResponseBodySlotTags() {}

  explicit DescribeIntentResponseBodySlotTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<string>(boost::any_cast<string>(m["UserSayId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeIntentResponseBodySlotTags() = default;
};
class DescribeIntentResponseBodySlot : public Darabonba::Model {
public:
  shared_ptr<bool> isArray{};
  shared_ptr<bool> isNecessary{};
  shared_ptr<long> lifeSpan{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> question{};
  shared_ptr<string> slotId{};
  shared_ptr<vector<DescribeIntentResponseBodySlotTags>> tags{};
  shared_ptr<string> value{};

  DescribeIntentResponseBodySlot() {}

  explicit DescribeIntentResponseBodySlot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isArray) {
      res["IsArray"] = boost::any(*isArray);
    }
    if (isNecessary) {
      res["IsNecessary"] = boost::any(*isNecessary);
    }
    if (lifeSpan) {
      res["LifeSpan"] = boost::any(*lifeSpan);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsArray") != m.end() && !m["IsArray"].empty()) {
      isArray = make_shared<bool>(boost::any_cast<bool>(m["IsArray"]));
    }
    if (m.find("IsNecessary") != m.end() && !m["IsNecessary"].empty()) {
      isNecessary = make_shared<bool>(boost::any_cast<bool>(m["IsNecessary"]));
    }
    if (m.find("LifeSpan") != m.end() && !m["LifeSpan"].empty()) {
      lifeSpan = make_shared<long>(boost::any_cast<long>(m["LifeSpan"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Question"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Question"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      question = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeIntentResponseBodySlotTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIntentResponseBodySlotTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeIntentResponseBodySlotTags>>(expect1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeIntentResponseBodySlot() = default;
};
class DescribeIntentResponseBodyUserSayData : public Darabonba::Model {
public:
  shared_ptr<string> slotId{};
  shared_ptr<string> text{};

  DescribeIntentResponseBodyUserSayData() {}

  explicit DescribeIntentResponseBodyUserSayData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~DescribeIntentResponseBodyUserSayData() = default;
};
class DescribeIntentResponseBodyUserSay : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeIntentResponseBodyUserSayData>> data{};
  shared_ptr<bool> strict{};
  shared_ptr<string> userSayId{};

  DescribeIntentResponseBodyUserSay() {}

  explicit DescribeIntentResponseBodyUserSay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (strict) {
      res["Strict"] = boost::any(*strict);
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeIntentResponseBodyUserSayData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIntentResponseBodyUserSayData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeIntentResponseBodyUserSayData>>(expect1);
      }
    }
    if (m.find("Strict") != m.end() && !m["Strict"].empty()) {
      strict = make_shared<bool>(boost::any_cast<bool>(m["Strict"]));
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<string>(boost::any_cast<string>(m["UserSayId"]));
    }
  }


  virtual ~DescribeIntentResponseBodyUserSay() = default;
};
class DescribeIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> dialogId{};
  shared_ptr<long> intentId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeIntentResponseBodyRuleCheck>> ruleCheck{};
  shared_ptr<vector<DescribeIntentResponseBodySlot>> slot{};
  shared_ptr<string> type{};
  shared_ptr<vector<DescribeIntentResponseBodyUserSay>> userSay{};

  DescribeIntentResponseBody() {}

  explicit DescribeIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleCheck) {
      vector<boost::any> temp1;
      for(auto item1:*ruleCheck){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleCheck"] = boost::any(temp1);
    }
    if (slot) {
      vector<boost::any> temp1;
      for(auto item1:*slot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Slot"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userSay) {
      vector<boost::any> temp1;
      for(auto item1:*userSay){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserSay"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleCheck") != m.end() && !m["RuleCheck"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleCheck"].type()) {
        vector<DescribeIntentResponseBodyRuleCheck> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleCheck"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIntentResponseBodyRuleCheck model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleCheck = make_shared<vector<DescribeIntentResponseBodyRuleCheck>>(expect1);
      }
    }
    if (m.find("Slot") != m.end() && !m["Slot"].empty()) {
      if (typeid(vector<boost::any>) == m["Slot"].type()) {
        vector<DescribeIntentResponseBodySlot> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Slot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIntentResponseBodySlot model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slot = make_shared<vector<DescribeIntentResponseBodySlot>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserSay") != m.end() && !m["UserSay"].empty()) {
      if (typeid(vector<boost::any>) == m["UserSay"].type()) {
        vector<DescribeIntentResponseBodyUserSay> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserSay"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIntentResponseBodyUserSay model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userSay = make_shared<vector<DescribeIntentResponseBodyUserSay>>(expect1);
      }
    }
  }


  virtual ~DescribeIntentResponseBody() = default;
};
class DescribeIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIntentResponseBody> body{};

  DescribeIntentResponse() {}

  explicit DescribeIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIntentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIntentResponse() = default;
};
class DescribeKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};

  DescribeKnowledgeRequest() {}

  explicit DescribeKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~DescribeKnowledgeRequest() = default;
};
class DescribeKnowledgeResponseBodyOutlines : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};
  shared_ptr<long> outlineId{};
  shared_ptr<string> title{};

  DescribeKnowledgeResponseBodyOutlines() {}

  explicit DescribeKnowledgeResponseBodyOutlines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (outlineId) {
      res["OutlineId"] = boost::any(*outlineId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("OutlineId") != m.end() && !m["OutlineId"].empty()) {
      outlineId = make_shared<long>(boost::any_cast<long>(m["OutlineId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeKnowledgeResponseBodyOutlines() = default;
};
class DescribeKnowledgeResponseBodySimQuestions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<long> simQuestionId{};
  shared_ptr<string> title{};

  DescribeKnowledgeResponseBodySimQuestions() {}

  explicit DescribeKnowledgeResponseBodySimQuestions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (simQuestionId) {
      res["SimQuestionId"] = boost::any(*simQuestionId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("SimQuestionId") != m.end() && !m["SimQuestionId"].empty()) {
      simQuestionId = make_shared<long>(boost::any_cast<long>(m["SimQuestionId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeKnowledgeResponseBodySimQuestions() = default;
};
class DescribeKnowledgeResponseBodySolutions : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<string>> perspectiveIds{};
  shared_ptr<string> plainText{};
  shared_ptr<long> solutionId{};
  shared_ptr<string> summary{};

  DescribeKnowledgeResponseBodySolutions() {}

  explicit DescribeKnowledgeResponseBodySolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (perspectiveIds) {
      res["PerspectiveIds"] = boost::any(*perspectiveIds);
    }
    if (plainText) {
      res["PlainText"] = boost::any(*plainText);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("PerspectiveIds") != m.end() && !m["PerspectiveIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerspectiveIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerspectiveIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspectiveIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlainText") != m.end() && !m["PlainText"].empty()) {
      plainText = make_shared<string>(boost::any_cast<string>(m["PlainText"]));
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<long>(boost::any_cast<long>(m["SolutionId"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
  }


  virtual ~DescribeKnowledgeResponseBodySolutions() = default;
};
class DescribeKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<vector<string>> coreWords{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> endDate{};
  shared_ptr<vector<string>> keyWords{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<long> knowledgeStatus{};
  shared_ptr<string> knowledgeTitle{};
  shared_ptr<long> knowledgeType{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<vector<DescribeKnowledgeResponseBodyOutlines>> outlines{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeKnowledgeResponseBodySimQuestions>> simQuestions{};
  shared_ptr<vector<DescribeKnowledgeResponseBodySolutions>> solutions{};
  shared_ptr<string> startDate{};
  shared_ptr<long> version{};

  DescribeKnowledgeResponseBody() {}

  explicit DescribeKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (coreWords) {
      res["CoreWords"] = boost::any(*coreWords);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (keyWords) {
      res["KeyWords"] = boost::any(*keyWords);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (knowledgeStatus) {
      res["KnowledgeStatus"] = boost::any(*knowledgeStatus);
    }
    if (knowledgeTitle) {
      res["KnowledgeTitle"] = boost::any(*knowledgeTitle);
    }
    if (knowledgeType) {
      res["KnowledgeType"] = boost::any(*knowledgeType);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (outlines) {
      vector<boost::any> temp1;
      for(auto item1:*outlines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outlines"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (simQuestions) {
      vector<boost::any> temp1;
      for(auto item1:*simQuestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimQuestions"] = boost::any(temp1);
    }
    if (solutions) {
      vector<boost::any> temp1;
      for(auto item1:*solutions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Solutions"] = boost::any(temp1);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CoreWords") != m.end() && !m["CoreWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CoreWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoreWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      coreWords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyWords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("KnowledgeStatus") != m.end() && !m["KnowledgeStatus"].empty()) {
      knowledgeStatus = make_shared<long>(boost::any_cast<long>(m["KnowledgeStatus"]));
    }
    if (m.find("KnowledgeTitle") != m.end() && !m["KnowledgeTitle"].empty()) {
      knowledgeTitle = make_shared<string>(boost::any_cast<string>(m["KnowledgeTitle"]));
    }
    if (m.find("KnowledgeType") != m.end() && !m["KnowledgeType"].empty()) {
      knowledgeType = make_shared<long>(boost::any_cast<long>(m["KnowledgeType"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Outlines") != m.end() && !m["Outlines"].empty()) {
      if (typeid(vector<boost::any>) == m["Outlines"].type()) {
        vector<DescribeKnowledgeResponseBodyOutlines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outlines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKnowledgeResponseBodyOutlines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outlines = make_shared<vector<DescribeKnowledgeResponseBodyOutlines>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SimQuestions") != m.end() && !m["SimQuestions"].empty()) {
      if (typeid(vector<boost::any>) == m["SimQuestions"].type()) {
        vector<DescribeKnowledgeResponseBodySimQuestions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimQuestions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKnowledgeResponseBodySimQuestions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        simQuestions = make_shared<vector<DescribeKnowledgeResponseBodySimQuestions>>(expect1);
      }
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      if (typeid(vector<boost::any>) == m["Solutions"].type()) {
        vector<DescribeKnowledgeResponseBodySolutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Solutions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKnowledgeResponseBodySolutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        solutions = make_shared<vector<DescribeKnowledgeResponseBodySolutions>>(expect1);
      }
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~DescribeKnowledgeResponseBody() = default;
};
class DescribeKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeKnowledgeResponseBody> body{};

  DescribeKnowledgeResponse() {}

  explicit DescribeKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKnowledgeResponse() = default;
};
class DescribePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> perspectiveId{};

  DescribePerspectiveRequest() {}

  explicit DescribePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~DescribePerspectiveRequest() = default;
};
class DescribePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> name{};
  shared_ptr<string> perspectiveCode{};
  shared_ptr<string> perspectiveId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> selfDefine{};
  shared_ptr<long> status{};

  DescribePerspectiveResponseBody() {}

  explicit DescribePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (perspectiveCode) {
      res["PerspectiveCode"] = boost::any(*perspectiveCode);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (selfDefine) {
      res["SelfDefine"] = boost::any(*selfDefine);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PerspectiveCode") != m.end() && !m["PerspectiveCode"].empty()) {
      perspectiveCode = make_shared<string>(boost::any_cast<string>(m["PerspectiveCode"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SelfDefine") != m.end() && !m["SelfDefine"].empty()) {
      selfDefine = make_shared<bool>(boost::any_cast<bool>(m["SelfDefine"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribePerspectiveResponseBody() = default;
};
class DescribePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePerspectiveResponseBody> body{};

  DescribePerspectiveResponse() {}

  explicit DescribePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePerspectiveResponse() = default;
};
class DisableDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};

  DisableDialogFlowRequest() {}

  explicit DisableDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~DisableDialogFlowRequest() = default;
};
class DisableDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableDialogFlowResponseBody() {}

  explicit DisableDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableDialogFlowResponseBody() = default;
};
class DisableDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableDialogFlowResponseBody> body{};

  DisableDialogFlowResponse() {}

  explicit DisableDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DisableDialogFlowResponse() = default;
};
class DisableKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};

  DisableKnowledgeRequest() {}

  explicit DisableKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~DisableKnowledgeRequest() = default;
};
class DisableKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableKnowledgeResponseBody() {}

  explicit DisableKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableKnowledgeResponseBody() = default;
};
class DisableKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableKnowledgeResponseBody> body{};

  DisableKnowledgeResponse() {}

  explicit DisableKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~DisableKnowledgeResponse() = default;
};
class FeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> feedback{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> messageId{};
  shared_ptr<string> sessionId{};

  FeedbackRequest() {}

  explicit FeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~FeedbackRequest() = default;
};
class FeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> feedback{};
  shared_ptr<long> httpStatus{};
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FeedbackResponseBody() {}

  explicit FeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (httpStatus) {
      res["HttpStatus"] = boost::any(*httpStatus);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
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
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("HttpStatus") != m.end() && !m["HttpStatus"].empty()) {
      httpStatus = make_shared<long>(boost::any_cast<long>(m["HttpStatus"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FeedbackResponseBody() = default;
};
class FeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FeedbackResponseBody> body{};

  FeedbackResponse() {}

  explicit FeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~FeedbackResponse() = default;
};
class GetAsyncResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> taskId{};

  GetAsyncResultRequest() {}

  explicit GetAsyncResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetAsyncResultRequest() = default;
};
class GetAsyncResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

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
      res["Data"] = boost::any(*data);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAsyncResultResponseBody() = default;
};
class GetAsyncResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsyncResultResponseBody> body{};

  GetAsyncResultResponse() {}

  explicit GetAsyncResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncResultResponse() = default;
};
class GetBotChatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  GetBotChatDataRequest() {}

  explicit GetBotChatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetBotChatDataRequest() = default;
};
class GetBotChatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  GetBotChatDataResponseBody() {}

  explicit GetBotChatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBotChatDataResponseBody() = default;
};
class GetBotChatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBotChatDataResponseBody> body{};

  GetBotChatDataResponse() {}

  explicit GetBotChatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBotChatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBotChatDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetBotChatDataResponse() = default;
};
class GetBotDsStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  GetBotDsStatDataRequest() {}

  explicit GetBotDsStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetBotDsStatDataRequest() = default;
};
class GetBotDsStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  GetBotDsStatDataResponseBody() {}

  explicit GetBotDsStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBotDsStatDataResponseBody() = default;
};
class GetBotDsStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBotDsStatDataResponseBody> body{};

  GetBotDsStatDataResponse() {}

  explicit GetBotDsStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBotDsStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBotDsStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetBotDsStatDataResponse() = default;
};
class GetBotKnowledgeStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  GetBotKnowledgeStatDataRequest() {}

  explicit GetBotKnowledgeStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetBotKnowledgeStatDataRequest() = default;
};
class GetBotKnowledgeStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  GetBotKnowledgeStatDataResponseBody() {}

  explicit GetBotKnowledgeStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBotKnowledgeStatDataResponseBody() = default;
};
class GetBotKnowledgeStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBotKnowledgeStatDataResponseBody> body{};

  GetBotKnowledgeStatDataResponse() {}

  explicit GetBotKnowledgeStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBotKnowledgeStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBotKnowledgeStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetBotKnowledgeStatDataResponse() = default;
};
class GetBotSessionDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  GetBotSessionDataRequest() {}

  explicit GetBotSessionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetBotSessionDataRequest() = default;
};
class GetBotSessionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  GetBotSessionDataResponseBody() {}

  explicit GetBotSessionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBotSessionDataResponseBody() = default;
};
class GetBotSessionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBotSessionDataResponseBody> body{};

  GetBotSessionDataResponse() {}

  explicit GetBotSessionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBotSessionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBotSessionDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetBotSessionDataResponse() = default;
};
class GetConversationListRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> senderId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> startDate{};

  GetConversationListRequest() {}

  explicit GetConversationListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetConversationListRequest() = default;
};
class GetConversationListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> messages{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  GetConversationListResponseBody() {}

  explicit GetConversationListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messages) {
      res["Messages"] = boost::any(*messages);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Messages"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      messages = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~GetConversationListResponseBody() = default;
};
class GetConversationListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConversationListResponseBody> body{};

  GetConversationListResponse() {}

  explicit GetConversationListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConversationListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConversationListResponseBody>(model1);
      }
    }
  }


  virtual ~GetConversationListResponse() = default;
};
class ListBotChatHistorysRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  ListBotChatHistorysRequest() {}

  explicit ListBotChatHistorysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListBotChatHistorysRequest() = default;
};
class ListBotChatHistorysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  ListBotChatHistorysResponseBody() {}

  explicit ListBotChatHistorysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBotChatHistorysResponseBody() = default;
};
class ListBotChatHistorysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBotChatHistorysResponseBody> body{};

  ListBotChatHistorysResponse() {}

  explicit ListBotChatHistorysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotChatHistorysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotChatHistorysResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotChatHistorysResponse() = default;
};
class ListBotColdDsDatasRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  ListBotColdDsDatasRequest() {}

  explicit ListBotColdDsDatasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListBotColdDsDatasRequest() = default;
};
class ListBotColdDsDatasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  ListBotColdDsDatasResponseBody() {}

  explicit ListBotColdDsDatasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBotColdDsDatasResponseBody() = default;
};
class ListBotColdDsDatasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBotColdDsDatasResponseBody> body{};

  ListBotColdDsDatasResponse() {}

  explicit ListBotColdDsDatasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotColdDsDatasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotColdDsDatasResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotColdDsDatasResponse() = default;
};
class ListBotColdKnowledgesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  ListBotColdKnowledgesRequest() {}

  explicit ListBotColdKnowledgesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListBotColdKnowledgesRequest() = default;
};
class ListBotColdKnowledgesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  ListBotColdKnowledgesResponseBody() {}

  explicit ListBotColdKnowledgesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBotColdKnowledgesResponseBody() = default;
};
class ListBotColdKnowledgesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBotColdKnowledgesResponseBody> body{};

  ListBotColdKnowledgesResponse() {}

  explicit ListBotColdKnowledgesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotColdKnowledgesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotColdKnowledgesResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotColdKnowledgesResponse() = default;
};
class ListBotDsDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  ListBotDsDetailsRequest() {}

  explicit ListBotDsDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListBotDsDetailsRequest() = default;
};
class ListBotDsDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  ListBotDsDetailsResponseBody() {}

  explicit ListBotDsDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBotDsDetailsResponseBody() = default;
};
class ListBotDsDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBotDsDetailsResponseBody> body{};

  ListBotDsDetailsResponse() {}

  explicit ListBotDsDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotDsDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotDsDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotDsDetailsResponse() = default;
};
class ListBotHotDsDatasRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  ListBotHotDsDatasRequest() {}

  explicit ListBotHotDsDatasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListBotHotDsDatasRequest() = default;
};
class ListBotHotDsDatasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  ListBotHotDsDatasResponseBody() {}

  explicit ListBotHotDsDatasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBotHotDsDatasResponseBody() = default;
};
class ListBotHotDsDatasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBotHotDsDatasResponseBody> body{};

  ListBotHotDsDatasResponse() {}

  explicit ListBotHotDsDatasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotHotDsDatasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotHotDsDatasResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotHotDsDatasResponse() = default;
};
class ListBotHotKnowledgesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  ListBotHotKnowledgesRequest() {}

  explicit ListBotHotKnowledgesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListBotHotKnowledgesRequest() = default;
};
class ListBotHotKnowledgesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  ListBotHotKnowledgesResponseBody() {}

  explicit ListBotHotKnowledgesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBotHotKnowledgesResponseBody() = default;
};
class ListBotHotKnowledgesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBotHotKnowledgesResponseBody> body{};

  ListBotHotKnowledgesResponse() {}

  explicit ListBotHotKnowledgesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotHotKnowledgesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotHotKnowledgesResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotHotKnowledgesResponse() = default;
};
class ListBotKnowledgeDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> limit{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  ListBotKnowledgeDetailsRequest() {}

  explicit ListBotKnowledgeDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<string>(boost::any_cast<string>(m["Limit"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListBotKnowledgeDetailsRequest() = default;
};
class ListBotKnowledgeDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  ListBotKnowledgeDetailsResponseBody() {}

  explicit ListBotKnowledgeDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBotKnowledgeDetailsResponseBody() = default;
};
class ListBotKnowledgeDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBotKnowledgeDetailsResponseBody> body{};

  ListBotKnowledgeDetailsResponse() {}

  explicit ListBotKnowledgeDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotKnowledgeDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotKnowledgeDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotKnowledgeDetailsResponse() = default;
};
class ListBotReceptionDetailDatasRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> startTime{};

  ListBotReceptionDetailDatasRequest() {}

  explicit ListBotReceptionDetailDatasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListBotReceptionDetailDatasRequest() = default;
};
class ListBotReceptionDetailDatasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<vector<map<string, boost::any>>> datas{};
  shared_ptr<string> requestId{};

  ListBotReceptionDetailDatasResponseBody() {}

  explicit ListBotReceptionDetailDatasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBotReceptionDetailDatasResponseBody() = default;
};
class ListBotReceptionDetailDatasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBotReceptionDetailDatasResponseBody> body{};

  ListBotReceptionDetailDatasResponse() {}

  explicit ListBotReceptionDetailDatasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotReceptionDetailDatasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotReceptionDetailDatasResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotReceptionDetailDatasResponse() = default;
};
class ListConversationLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> sessionId{};

  ListConversationLogsRequest() {}

  explicit ListConversationLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~ListConversationLogsRequest() = default;
};
class ListConversationLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> chatLogs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rounds{};

  ListConversationLogsResponseBody() {}

  explicit ListConversationLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatLogs) {
      res["ChatLogs"] = boost::any(*chatLogs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rounds) {
      res["Rounds"] = boost::any(*rounds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChatLogs") != m.end() && !m["ChatLogs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["ChatLogs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChatLogs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      chatLogs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rounds") != m.end() && !m["Rounds"].empty()) {
      rounds = make_shared<long>(boost::any_cast<long>(m["Rounds"]));
    }
  }


  virtual ~ListConversationLogsResponseBody() = default;
};
class ListConversationLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConversationLogsResponseBody> body{};

  ListConversationLogsResponse() {}

  explicit ListConversationLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConversationLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConversationLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConversationLogsResponse() = default;
};
class MoveKnowledgeCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};
  shared_ptr<long> knowledgeId{};

  MoveKnowledgeCategoryRequest() {}

  explicit MoveKnowledgeCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~MoveKnowledgeCategoryRequest() = default;
};
class MoveKnowledgeCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveKnowledgeCategoryResponseBody() {}

  explicit MoveKnowledgeCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveKnowledgeCategoryResponseBody() = default;
};
class MoveKnowledgeCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveKnowledgeCategoryResponseBody> body{};

  MoveKnowledgeCategoryResponse() {}

  explicit MoveKnowledgeCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveKnowledgeCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveKnowledgeCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~MoveKnowledgeCategoryResponse() = default;
};
class PublishDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};

  PublishDialogFlowRequest() {}

  explicit PublishDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~PublishDialogFlowRequest() = default;
};
class PublishDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PublishDialogFlowResponseBody() {}

  explicit PublishDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishDialogFlowResponseBody() = default;
};
class PublishDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishDialogFlowResponseBody> body{};

  PublishDialogFlowResponse() {}

  explicit PublishDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~PublishDialogFlowResponse() = default;
};
class PublishKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<bool> async{};
  shared_ptr<long> knowledgeId{};

  PublishKnowledgeRequest() {}

  explicit PublishKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (async) {
      res["Async"] = boost::any(*async);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~PublishKnowledgeRequest() = default;
};
class PublishKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PublishKnowledgeResponseBody() {}

  explicit PublishKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishKnowledgeResponseBody() = default;
};
class PublishKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishKnowledgeResponseBody> body{};

  PublishKnowledgeResponse() {}

  explicit PublishKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~PublishKnowledgeResponse() = default;
};
class QueryBotsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryBotsRequest() {}

  explicit QueryBotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryBotsRequest() = default;
};
class QueryBotsResponseBodyBots : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> introduction{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> name{};
  shared_ptr<string> timeZone{};

  QueryBotsResponseBodyBots() {}

  explicit QueryBotsResponseBodyBots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~QueryBotsResponseBodyBots() = default;
};
class QueryBotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryBotsResponseBodyBots>> bots{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryBotsResponseBody() {}

  explicit QueryBotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bots) {
      vector<boost::any> temp1;
      for(auto item1:*bots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bots"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bots") != m.end() && !m["Bots"].empty()) {
      if (typeid(vector<boost::any>) == m["Bots"].type()) {
        vector<QueryBotsResponseBodyBots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBotsResponseBodyBots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bots = make_shared<vector<QueryBotsResponseBodyBots>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryBotsResponseBody() = default;
};
class QueryBotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBotsResponseBody> body{};

  QueryBotsResponse() {}

  explicit QueryBotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryBotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBotsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBotsResponse() = default;
};
class QueryCategoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeType{};
  shared_ptr<long> parentCategoryId{};
  shared_ptr<bool> showChildrens{};

  QueryCategoriesRequest() {}

  explicit QueryCategoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeType) {
      res["KnowledgeType"] = boost::any(*knowledgeType);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    if (showChildrens) {
      res["ShowChildrens"] = boost::any(*showChildrens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeType") != m.end() && !m["KnowledgeType"].empty()) {
      knowledgeType = make_shared<long>(boost::any_cast<long>(m["KnowledgeType"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
    if (m.find("ShowChildrens") != m.end() && !m["ShowChildrens"].empty()) {
      showChildrens = make_shared<bool>(boost::any_cast<bool>(m["ShowChildrens"]));
    }
  }


  virtual ~QueryCategoriesRequest() = default;
};
class QueryCategoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Children>> categories{};
  shared_ptr<string> requestId{};

  QueryCategoriesResponseBody() {}

  explicit QueryCategoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<Children> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Children model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<Children>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryCategoriesResponseBody() = default;
};
class QueryCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCategoriesResponseBody> body{};

  QueryCategoriesResponse() {}

  explicit QueryCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCategoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCategoriesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCategoriesResponse() = default;
};
class QueryCoreWordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> coreWordName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> synonym{};

  QueryCoreWordsRequest() {}

  explicit QueryCoreWordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (synonym) {
      res["Synonym"] = boost::any(*synonym);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Synonym") != m.end() && !m["Synonym"].empty()) {
      synonym = make_shared<string>(boost::any_cast<string>(m["Synonym"]));
    }
  }


  virtual ~QueryCoreWordsRequest() = default;
};
class QueryCoreWordsResponseBodyCoreWords : public Darabonba::Model {
public:
  shared_ptr<string> coreWordCode{};
  shared_ptr<string> coreWordName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<string>> synonyms{};

  QueryCoreWordsResponseBodyCoreWords() {}

  explicit QueryCoreWordsResponseBodyCoreWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordCode) {
      res["CoreWordCode"] = boost::any(*coreWordCode);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordCode") != m.end() && !m["CoreWordCode"].empty()) {
      coreWordCode = make_shared<string>(boost::any_cast<string>(m["CoreWordCode"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryCoreWordsResponseBodyCoreWords() = default;
};
class QueryCoreWordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCoreWordsResponseBodyCoreWords>> coreWords{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryCoreWordsResponseBody() {}

  explicit QueryCoreWordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWords) {
      vector<boost::any> temp1;
      for(auto item1:*coreWords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CoreWords"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWords") != m.end() && !m["CoreWords"].empty()) {
      if (typeid(vector<boost::any>) == m["CoreWords"].type()) {
        vector<QueryCoreWordsResponseBodyCoreWords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CoreWords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCoreWordsResponseBodyCoreWords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coreWords = make_shared<vector<QueryCoreWordsResponseBodyCoreWords>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryCoreWordsResponseBody() = default;
};
class QueryCoreWordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCoreWordsResponseBody> body{};

  QueryCoreWordsResponse() {}

  explicit QueryCoreWordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCoreWordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCoreWordsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCoreWordsResponse() = default;
};
class QueryDialogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dialogName{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryDialogsRequest() {}

  explicit QueryDialogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryDialogsRequest() = default;
};
class QueryDialogsResponseBodyDialogs : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> description{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> dialogName{};
  shared_ptr<bool> isOnline{};
  shared_ptr<bool> isSampleDialog{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<long> status{};

  QueryDialogsResponseBodyDialogs() {}

  explicit QueryDialogsResponseBodyDialogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (isOnline) {
      res["IsOnline"] = boost::any(*isOnline);
    }
    if (isSampleDialog) {
      res["IsSampleDialog"] = boost::any(*isSampleDialog);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("IsOnline") != m.end() && !m["IsOnline"].empty()) {
      isOnline = make_shared<bool>(boost::any_cast<bool>(m["IsOnline"]));
    }
    if (m.find("IsSampleDialog") != m.end() && !m["IsSampleDialog"].empty()) {
      isSampleDialog = make_shared<bool>(boost::any_cast<bool>(m["IsSampleDialog"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryDialogsResponseBodyDialogs() = default;
};
class QueryDialogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDialogsResponseBodyDialogs>> dialogs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryDialogsResponseBody() {}

  explicit QueryDialogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogs) {
      vector<boost::any> temp1;
      for(auto item1:*dialogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dialogs"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dialogs") != m.end() && !m["Dialogs"].empty()) {
      if (typeid(vector<boost::any>) == m["Dialogs"].type()) {
        vector<QueryDialogsResponseBodyDialogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dialogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDialogsResponseBodyDialogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogs = make_shared<vector<QueryDialogsResponseBodyDialogs>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryDialogsResponseBody() = default;
};
class QueryDialogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDialogsResponseBody> body{};

  QueryDialogsResponse() {}

  explicit QueryDialogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDialogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDialogsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDialogsResponse() = default;
};
class QueryEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> entityName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryEntitiesRequest() {}

  explicit QueryEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryEntitiesRequest() = default;
};
class QueryEntitiesResponseBodyEntitiesMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<vector<string>> synonyms{};

  QueryEntitiesResponseBodyEntitiesMembers() {}

  explicit QueryEntitiesResponseBodyEntitiesMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryEntitiesResponseBodyEntitiesMembers() = default;
};
class QueryEntitiesResponseBodyEntities : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<vector<QueryEntitiesResponseBodyEntitiesMembers>> members{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> regex{};

  QueryEntitiesResponseBodyEntities() {}

  explicit QueryEntitiesResponseBodyEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<QueryEntitiesResponseBodyEntitiesMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEntitiesResponseBodyEntitiesMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<QueryEntitiesResponseBodyEntitiesMembers>>(expect1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
  }


  virtual ~QueryEntitiesResponseBodyEntities() = default;
};
class QueryEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryEntitiesResponseBodyEntities>> entities{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryEntitiesResponseBody() {}

  explicit QueryEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entities) {
      vector<boost::any> temp1;
      for(auto item1:*entities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entities"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entities") != m.end() && !m["Entities"].empty()) {
      if (typeid(vector<boost::any>) == m["Entities"].type()) {
        vector<QueryEntitiesResponseBodyEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEntitiesResponseBodyEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entities = make_shared<vector<QueryEntitiesResponseBodyEntities>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryEntitiesResponseBody() = default;
};
class QueryEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEntitiesResponseBody> body{};

  QueryEntitiesResponse() {}

  explicit QueryEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEntitiesResponse() = default;
};
class QueryIntentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryIntentsRequest() {}

  explicit QueryIntentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryIntentsRequest() = default;
};
class QueryIntentsResponseBodyIntentsRuleCheck : public Darabonba::Model {
public:
  shared_ptr<vector<string>> error{};
  shared_ptr<bool> strict{};
  shared_ptr<string> text{};
  shared_ptr<vector<string>> warning{};

  QueryIntentsResponseBodyIntentsRuleCheck() {}

  explicit QueryIntentsResponseBodyIntentsRuleCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (strict) {
      res["Strict"] = boost::any(*strict);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (warning) {
      res["Warning"] = boost::any(*warning);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Error"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Error"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      error = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Strict") != m.end() && !m["Strict"].empty()) {
      strict = make_shared<bool>(boost::any_cast<bool>(m["Strict"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Warning") != m.end() && !m["Warning"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Warning"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Warning"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      warning = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryIntentsResponseBodyIntentsRuleCheck() = default;
};
class QueryIntentsResponseBodyIntentsSlotTags : public Darabonba::Model {
public:
  shared_ptr<string> userSayId{};
  shared_ptr<string> value{};

  QueryIntentsResponseBodyIntentsSlotTags() {}

  explicit QueryIntentsResponseBodyIntentsSlotTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<string>(boost::any_cast<string>(m["UserSayId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~QueryIntentsResponseBodyIntentsSlotTags() = default;
};
class QueryIntentsResponseBodyIntentsSlot : public Darabonba::Model {
public:
  shared_ptr<bool> isArray{};
  shared_ptr<bool> isNecessary{};
  shared_ptr<long> lifeSpan{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> question{};
  shared_ptr<string> slotId{};
  shared_ptr<vector<QueryIntentsResponseBodyIntentsSlotTags>> tags{};
  shared_ptr<string> value{};

  QueryIntentsResponseBodyIntentsSlot() {}

  explicit QueryIntentsResponseBodyIntentsSlot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isArray) {
      res["IsArray"] = boost::any(*isArray);
    }
    if (isNecessary) {
      res["IsNecessary"] = boost::any(*isNecessary);
    }
    if (lifeSpan) {
      res["LifeSpan"] = boost::any(*lifeSpan);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsArray") != m.end() && !m["IsArray"].empty()) {
      isArray = make_shared<bool>(boost::any_cast<bool>(m["IsArray"]));
    }
    if (m.find("IsNecessary") != m.end() && !m["IsNecessary"].empty()) {
      isNecessary = make_shared<bool>(boost::any_cast<bool>(m["IsNecessary"]));
    }
    if (m.find("LifeSpan") != m.end() && !m["LifeSpan"].empty()) {
      lifeSpan = make_shared<long>(boost::any_cast<long>(m["LifeSpan"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Question"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Question"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      question = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<QueryIntentsResponseBodyIntentsSlotTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryIntentsResponseBodyIntentsSlotTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<QueryIntentsResponseBodyIntentsSlotTags>>(expect1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~QueryIntentsResponseBodyIntentsSlot() = default;
};
class QueryIntentsResponseBodyIntentsUserSayData : public Darabonba::Model {
public:
  shared_ptr<string> slotId{};
  shared_ptr<string> text{};

  QueryIntentsResponseBodyIntentsUserSayData() {}

  explicit QueryIntentsResponseBodyIntentsUserSayData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~QueryIntentsResponseBodyIntentsUserSayData() = default;
};
class QueryIntentsResponseBodyIntentsUserSay : public Darabonba::Model {
public:
  shared_ptr<vector<QueryIntentsResponseBodyIntentsUserSayData>> data{};
  shared_ptr<bool> strict{};
  shared_ptr<string> userSayId{};

  QueryIntentsResponseBodyIntentsUserSay() {}

  explicit QueryIntentsResponseBodyIntentsUserSay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (strict) {
      res["Strict"] = boost::any(*strict);
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryIntentsResponseBodyIntentsUserSayData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryIntentsResponseBodyIntentsUserSayData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryIntentsResponseBodyIntentsUserSayData>>(expect1);
      }
    }
    if (m.find("Strict") != m.end() && !m["Strict"].empty()) {
      strict = make_shared<bool>(boost::any_cast<bool>(m["Strict"]));
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<string>(boost::any_cast<string>(m["UserSayId"]));
    }
  }


  virtual ~QueryIntentsResponseBodyIntentsUserSay() = default;
};
class QueryIntentsResponseBodyIntents : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> intentId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> name{};
  shared_ptr<vector<QueryIntentsResponseBodyIntentsRuleCheck>> ruleCheck{};
  shared_ptr<vector<QueryIntentsResponseBodyIntentsSlot>> slot{};
  shared_ptr<vector<QueryIntentsResponseBodyIntentsUserSay>> userSay{};

  QueryIntentsResponseBodyIntents() {}

  explicit QueryIntentsResponseBodyIntents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleCheck) {
      vector<boost::any> temp1;
      for(auto item1:*ruleCheck){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleCheck"] = boost::any(temp1);
    }
    if (slot) {
      vector<boost::any> temp1;
      for(auto item1:*slot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Slot"] = boost::any(temp1);
    }
    if (userSay) {
      vector<boost::any> temp1;
      for(auto item1:*userSay){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserSay"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleCheck") != m.end() && !m["RuleCheck"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleCheck"].type()) {
        vector<QueryIntentsResponseBodyIntentsRuleCheck> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleCheck"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryIntentsResponseBodyIntentsRuleCheck model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleCheck = make_shared<vector<QueryIntentsResponseBodyIntentsRuleCheck>>(expect1);
      }
    }
    if (m.find("Slot") != m.end() && !m["Slot"].empty()) {
      if (typeid(vector<boost::any>) == m["Slot"].type()) {
        vector<QueryIntentsResponseBodyIntentsSlot> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Slot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryIntentsResponseBodyIntentsSlot model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slot = make_shared<vector<QueryIntentsResponseBodyIntentsSlot>>(expect1);
      }
    }
    if (m.find("UserSay") != m.end() && !m["UserSay"].empty()) {
      if (typeid(vector<boost::any>) == m["UserSay"].type()) {
        vector<QueryIntentsResponseBodyIntentsUserSay> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserSay"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryIntentsResponseBodyIntentsUserSay model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userSay = make_shared<vector<QueryIntentsResponseBodyIntentsUserSay>>(expect1);
      }
    }
  }


  virtual ~QueryIntentsResponseBodyIntents() = default;
};
class QueryIntentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryIntentsResponseBodyIntents>> intents{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryIntentsResponseBody() {}

  explicit QueryIntentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intents) {
      vector<boost::any> temp1;
      for(auto item1:*intents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Intents"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Intents") != m.end() && !m["Intents"].empty()) {
      if (typeid(vector<boost::any>) == m["Intents"].type()) {
        vector<QueryIntentsResponseBodyIntents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Intents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryIntentsResponseBodyIntents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        intents = make_shared<vector<QueryIntentsResponseBodyIntents>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryIntentsResponseBody() = default;
};
class QueryIntentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryIntentsResponseBody> body{};

  QueryIntentsResponse() {}

  explicit QueryIntentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryIntentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryIntentsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryIntentsResponse() = default;
};
class QueryKnowledgesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};
  shared_ptr<string> coreWordName{};
  shared_ptr<string> knowledgeTitle{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryKnowledgesRequest() {}

  explicit QueryKnowledgesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (knowledgeTitle) {
      res["KnowledgeTitle"] = boost::any(*knowledgeTitle);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("KnowledgeTitle") != m.end() && !m["KnowledgeTitle"].empty()) {
      knowledgeTitle = make_shared<string>(boost::any_cast<string>(m["KnowledgeTitle"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryKnowledgesRequest() = default;
};
class QueryKnowledgesResponseBodyKnowledges : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<vector<string>> coreWords{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> endDate{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<long> knowledgeStatus{};
  shared_ptr<string> knowledgeTitle{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> startDate{};
  shared_ptr<string> version{};

  QueryKnowledgesResponseBodyKnowledges() {}

  explicit QueryKnowledgesResponseBodyKnowledges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (coreWords) {
      res["CoreWords"] = boost::any(*coreWords);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (knowledgeStatus) {
      res["KnowledgeStatus"] = boost::any(*knowledgeStatus);
    }
    if (knowledgeTitle) {
      res["KnowledgeTitle"] = boost::any(*knowledgeTitle);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CoreWords") != m.end() && !m["CoreWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CoreWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoreWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      coreWords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("KnowledgeStatus") != m.end() && !m["KnowledgeStatus"].empty()) {
      knowledgeStatus = make_shared<long>(boost::any_cast<long>(m["KnowledgeStatus"]));
    }
    if (m.find("KnowledgeTitle") != m.end() && !m["KnowledgeTitle"].empty()) {
      knowledgeTitle = make_shared<string>(boost::any_cast<string>(m["KnowledgeTitle"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~QueryKnowledgesResponseBodyKnowledges() = default;
};
class QueryKnowledgesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryKnowledgesResponseBodyKnowledges>> knowledges{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryKnowledgesResponseBody() {}

  explicit QueryKnowledgesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledges) {
      vector<boost::any> temp1;
      for(auto item1:*knowledges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Knowledges"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Knowledges") != m.end() && !m["Knowledges"].empty()) {
      if (typeid(vector<boost::any>) == m["Knowledges"].type()) {
        vector<QueryKnowledgesResponseBodyKnowledges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Knowledges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryKnowledgesResponseBodyKnowledges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        knowledges = make_shared<vector<QueryKnowledgesResponseBodyKnowledges>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryKnowledgesResponseBody() = default;
};
class QueryKnowledgesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryKnowledgesResponseBody> body{};

  QueryKnowledgesResponse() {}

  explicit QueryKnowledgesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryKnowledgesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryKnowledgesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryKnowledgesResponse() = default;
};
class QueryPerspectivesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};

  QueryPerspectivesRequest() {}

  explicit QueryPerspectivesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
  }


  virtual ~QueryPerspectivesRequest() = default;
};
class QueryPerspectivesResponseBodyPerspectives : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> name{};
  shared_ptr<string> perspectiveCode{};
  shared_ptr<string> perspectiveId{};
  shared_ptr<bool> selfDefine{};
  shared_ptr<long> status{};

  QueryPerspectivesResponseBodyPerspectives() {}

  explicit QueryPerspectivesResponseBodyPerspectives(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (perspectiveCode) {
      res["PerspectiveCode"] = boost::any(*perspectiveCode);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (selfDefine) {
      res["SelfDefine"] = boost::any(*selfDefine);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PerspectiveCode") != m.end() && !m["PerspectiveCode"].empty()) {
      perspectiveCode = make_shared<string>(boost::any_cast<string>(m["PerspectiveCode"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("SelfDefine") != m.end() && !m["SelfDefine"].empty()) {
      selfDefine = make_shared<bool>(boost::any_cast<bool>(m["SelfDefine"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryPerspectivesResponseBodyPerspectives() = default;
};
class QueryPerspectivesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryPerspectivesResponseBodyPerspectives>> perspectives{};
  shared_ptr<string> requestId{};

  QueryPerspectivesResponseBody() {}

  explicit QueryPerspectivesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (perspectives) {
      vector<boost::any> temp1;
      for(auto item1:*perspectives){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Perspectives"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Perspectives") != m.end() && !m["Perspectives"].empty()) {
      if (typeid(vector<boost::any>) == m["Perspectives"].type()) {
        vector<QueryPerspectivesResponseBodyPerspectives> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Perspectives"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPerspectivesResponseBodyPerspectives model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        perspectives = make_shared<vector<QueryPerspectivesResponseBodyPerspectives>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPerspectivesResponseBody() = default;
};
class QueryPerspectivesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPerspectivesResponseBody> body{};

  QueryPerspectivesResponse() {}

  explicit QueryPerspectivesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPerspectivesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPerspectivesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPerspectivesResponse() = default;
};
class QuerySystemEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> entityName{};

  QuerySystemEntitiesRequest() {}

  explicit QuerySystemEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~QuerySystemEntitiesRequest() = default;
};
class QuerySystemEntitiesResponseBodySystemEntities : public Darabonba::Model {
public:
  shared_ptr<string> defaultQuestion{};
  shared_ptr<string> entityCode{};
  shared_ptr<string> entityName{};

  QuerySystemEntitiesResponseBodySystemEntities() {}

  explicit QuerySystemEntitiesResponseBodySystemEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultQuestion) {
      res["DefaultQuestion"] = boost::any(*defaultQuestion);
    }
    if (entityCode) {
      res["EntityCode"] = boost::any(*entityCode);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultQuestion") != m.end() && !m["DefaultQuestion"].empty()) {
      defaultQuestion = make_shared<string>(boost::any_cast<string>(m["DefaultQuestion"]));
    }
    if (m.find("EntityCode") != m.end() && !m["EntityCode"].empty()) {
      entityCode = make_shared<string>(boost::any_cast<string>(m["EntityCode"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~QuerySystemEntitiesResponseBodySystemEntities() = default;
};
class QuerySystemEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QuerySystemEntitiesResponseBodySystemEntities>> systemEntities{};

  QuerySystemEntitiesResponseBody() {}

  explicit QuerySystemEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (systemEntities) {
      vector<boost::any> temp1;
      for(auto item1:*systemEntities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemEntities"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SystemEntities") != m.end() && !m["SystemEntities"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemEntities"].type()) {
        vector<QuerySystemEntitiesResponseBodySystemEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemEntities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySystemEntitiesResponseBodySystemEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemEntities = make_shared<vector<QuerySystemEntitiesResponseBodySystemEntities>>(expect1);
      }
    }
  }


  virtual ~QuerySystemEntitiesResponseBody() = default;
};
class QuerySystemEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySystemEntitiesResponseBody> body{};

  QuerySystemEntitiesResponse() {}

  explicit QuerySystemEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySystemEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySystemEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySystemEntitiesResponse() = default;
};
class RemoveEntityMemberRequestMember : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<vector<string>> synonyms{};

  RemoveEntityMemberRequestMember() {}

  explicit RemoveEntityMemberRequestMember(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveEntityMemberRequestMember() = default;
};
class RemoveEntityMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<RemoveEntityMemberRequestMember> member{};
  shared_ptr<string> removeType{};

  RemoveEntityMemberRequest() {}

  explicit RemoveEntityMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (member) {
      res["Member"] = member ? boost::any(member->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (removeType) {
      res["RemoveType"] = boost::any(*removeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("Member") != m.end() && !m["Member"].empty()) {
      if (typeid(map<string, boost::any>) == m["Member"].type()) {
        RemoveEntityMemberRequestMember model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Member"]));
        member = make_shared<RemoveEntityMemberRequestMember>(model1);
      }
    }
    if (m.find("RemoveType") != m.end() && !m["RemoveType"].empty()) {
      removeType = make_shared<string>(boost::any_cast<string>(m["RemoveType"]));
    }
  }


  virtual ~RemoveEntityMemberRequest() = default;
};
class RemoveEntityMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<string> memberShrink{};
  shared_ptr<string> removeType{};

  RemoveEntityMemberShrinkRequest() {}

  explicit RemoveEntityMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (memberShrink) {
      res["Member"] = boost::any(*memberShrink);
    }
    if (removeType) {
      res["RemoveType"] = boost::any(*removeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("Member") != m.end() && !m["Member"].empty()) {
      memberShrink = make_shared<string>(boost::any_cast<string>(m["Member"]));
    }
    if (m.find("RemoveType") != m.end() && !m["RemoveType"].empty()) {
      removeType = make_shared<string>(boost::any_cast<string>(m["RemoveType"]));
    }
  }


  virtual ~RemoveEntityMemberShrinkRequest() = default;
};
class RemoveEntityMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> requestId{};

  RemoveEntityMemberResponseBody() {}

  explicit RemoveEntityMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveEntityMemberResponseBody() = default;
};
class RemoveEntityMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveEntityMemberResponseBody> body{};

  RemoveEntityMemberResponse() {}

  explicit RemoveEntityMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveEntityMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveEntityMemberResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveEntityMemberResponse() = default;
};
class RemoveSynonymRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> coreWordName{};
  shared_ptr<string> synonym{};

  RemoveSynonymRequest() {}

  explicit RemoveSynonymRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (synonym) {
      res["Synonym"] = boost::any(*synonym);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("Synonym") != m.end() && !m["Synonym"].empty()) {
      synonym = make_shared<string>(boost::any_cast<string>(m["Synonym"]));
    }
  }


  virtual ~RemoveSynonymRequest() = default;
};
class RemoveSynonymResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveSynonymResponseBody() {}

  explicit RemoveSynonymResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveSynonymResponseBody() = default;
};
class RemoveSynonymResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveSynonymResponseBody> body{};

  RemoveSynonymResponse() {}

  explicit RemoveSynonymResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveSynonymResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveSynonymResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveSynonymResponse() = default;
};
class TestDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};

  TestDialogFlowRequest() {}

  explicit TestDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~TestDialogFlowRequest() = default;
};
class TestDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TestDialogFlowResponseBody() {}

  explicit TestDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TestDialogFlowResponseBody() = default;
};
class TestDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TestDialogFlowResponseBody> body{};

  TestDialogFlowResponse() {}

  explicit TestDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TestDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TestDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~TestDialogFlowResponse() = default;
};
class UpdateCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};

  UpdateCategoryRequest() {}

  explicit UpdateCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateCategoryRequest() = default;
};
class UpdateCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateCategoryResponseBody() {}

  explicit UpdateCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCategoryResponseBody() = default;
};
class UpdateCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCategoryResponseBody> body{};

  UpdateCategoryResponse() {}

  explicit UpdateCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCategoryResponse() = default;
};
class UpdateCoreWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> coreWordCode{};
  shared_ptr<string> coreWordName{};

  UpdateCoreWordRequest() {}

  explicit UpdateCoreWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (coreWordCode) {
      res["CoreWordCode"] = boost::any(*coreWordCode);
    }
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CoreWordCode") != m.end() && !m["CoreWordCode"].empty()) {
      coreWordCode = make_shared<string>(boost::any_cast<string>(m["CoreWordCode"]));
    }
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
  }


  virtual ~UpdateCoreWordRequest() = default;
};
class UpdateCoreWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateCoreWordResponseBody() {}

  explicit UpdateCoreWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCoreWordResponseBody() = default;
};
class UpdateCoreWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCoreWordResponseBody> body{};

  UpdateCoreWordResponse() {}

  explicit UpdateCoreWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCoreWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCoreWordResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCoreWordResponse() = default;
};
class UpdateDialogRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> description{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> dialogName{};

  UpdateDialogRequest() {}

  explicit UpdateDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
  }


  virtual ~UpdateDialogRequest() = default;
};
class UpdateDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDialogResponseBody() {}

  explicit UpdateDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDialogResponseBody() = default;
};
class UpdateDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDialogResponseBody> body{};

  UpdateDialogResponse() {}

  explicit UpdateDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDialogResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDialogResponse() = default;
};
class UpdateDialogFlowRequestModuleDefinition : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> globalVars{};
  shared_ptr<PaasProcessData> moduleDefinition{};

  UpdateDialogFlowRequestModuleDefinition() {}

  explicit UpdateDialogFlowRequestModuleDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (globalVars) {
      res["GlobalVars"] = boost::any(*globalVars);
    }
    if (moduleDefinition) {
      res["ModuleDefinition"] = moduleDefinition ? boost::any(moduleDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GlobalVars") != m.end() && !m["GlobalVars"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["GlobalVars"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      globalVars = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ModuleDefinition") != m.end() && !m["ModuleDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModuleDefinition"].type()) {
        PaasProcessData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModuleDefinition"]));
        moduleDefinition = make_shared<PaasProcessData>(model1);
      }
    }
  }


  virtual ~UpdateDialogFlowRequestModuleDefinition() = default;
};
class UpdateDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};
  shared_ptr<UpdateDialogFlowRequestModuleDefinition> moduleDefinition{};

  UpdateDialogFlowRequest() {}

  explicit UpdateDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (moduleDefinition) {
      res["ModuleDefinition"] = moduleDefinition ? boost::any(moduleDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("ModuleDefinition") != m.end() && !m["ModuleDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModuleDefinition"].type()) {
        UpdateDialogFlowRequestModuleDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModuleDefinition"]));
        moduleDefinition = make_shared<UpdateDialogFlowRequestModuleDefinition>(model1);
      }
    }
  }


  virtual ~UpdateDialogFlowRequest() = default;
};
class UpdateDialogFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> moduleDefinitionShrink{};

  UpdateDialogFlowShrinkRequest() {}

  explicit UpdateDialogFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (moduleDefinitionShrink) {
      res["ModuleDefinition"] = boost::any(*moduleDefinitionShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("ModuleDefinition") != m.end() && !m["ModuleDefinition"].empty()) {
      moduleDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["ModuleDefinition"]));
    }
  }


  virtual ~UpdateDialogFlowShrinkRequest() = default;
};
class UpdateDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDialogFlowResponseBody() {}

  explicit UpdateDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDialogFlowResponseBody() = default;
};
class UpdateDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDialogFlowResponseBody> body{};

  UpdateDialogFlowResponse() {}

  explicit UpdateDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDialogFlowResponse() = default;
};
class UpdateEntityRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<vector<string>> synonyms{};

  UpdateEntityRequestMembers() {}

  explicit UpdateEntityRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateEntityRequestMembers() = default;
};
class UpdateEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<vector<UpdateEntityRequestMembers>> members{};
  shared_ptr<string> regex{};

  UpdateEntityRequest() {}

  explicit UpdateEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<UpdateEntityRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEntityRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<UpdateEntityRequestMembers>>(expect1);
      }
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
  }


  virtual ~UpdateEntityRequest() = default;
};
class UpdateEntityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> membersShrink{};
  shared_ptr<string> regex{};

  UpdateEntityShrinkRequest() {}

  explicit UpdateEntityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (membersShrink) {
      res["Members"] = boost::any(*membersShrink);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      membersShrink = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
  }


  virtual ~UpdateEntityShrinkRequest() = default;
};
class UpdateEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> requestId{};

  UpdateEntityResponseBody() {}

  explicit UpdateEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateEntityResponseBody() = default;
};
class UpdateEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEntityResponseBody> body{};

  UpdateEntityResponse() {}

  explicit UpdateEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEntityResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEntityResponse() = default;
};
class UpdateIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<IntentCreateDTO> intentDefinition{};
  shared_ptr<long> intentId{};

  UpdateIntentRequest() {}

  explicit UpdateIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (intentDefinition) {
      res["IntentDefinition"] = intentDefinition ? boost::any(intentDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["IntentDefinition"].type()) {
        IntentCreateDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IntentDefinition"]));
        intentDefinition = make_shared<IntentCreateDTO>(model1);
      }
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~UpdateIntentRequest() = default;
};
class UpdateIntentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> intentDefinitionShrink{};
  shared_ptr<long> intentId{};

  UpdateIntentShrinkRequest() {}

  explicit UpdateIntentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (intentDefinitionShrink) {
      res["IntentDefinition"] = boost::any(*intentDefinitionShrink);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      intentDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["IntentDefinition"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~UpdateIntentShrinkRequest() = default;
};
class UpdateIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> requestId{};

  UpdateIntentResponseBody() {}

  explicit UpdateIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateIntentResponseBody() = default;
};
class UpdateIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateIntentResponseBody> body{};

  UpdateIntentResponse() {}

  explicit UpdateIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIntentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIntentResponse() = default;
};
class UpdateKnowledgeRequestKnowledgeOutlines : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<long> outlineId{};
  shared_ptr<string> title{};

  UpdateKnowledgeRequestKnowledgeOutlines() {}

  explicit UpdateKnowledgeRequestKnowledgeOutlines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (outlineId) {
      res["OutlineId"] = boost::any(*outlineId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("OutlineId") != m.end() && !m["OutlineId"].empty()) {
      outlineId = make_shared<long>(boost::any_cast<long>(m["OutlineId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateKnowledgeRequestKnowledgeOutlines() = default;
};
class UpdateKnowledgeRequestKnowledgeSimQuestions : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<long> simQuestionId{};
  shared_ptr<string> title{};

  UpdateKnowledgeRequestKnowledgeSimQuestions() {}

  explicit UpdateKnowledgeRequestKnowledgeSimQuestions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (simQuestionId) {
      res["SimQuestionId"] = boost::any(*simQuestionId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("SimQuestionId") != m.end() && !m["SimQuestionId"].empty()) {
      simQuestionId = make_shared<long>(boost::any_cast<long>(m["SimQuestionId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateKnowledgeRequestKnowledgeSimQuestions() = default;
};
class UpdateKnowledgeRequestKnowledgeSolutions : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> content{};
  shared_ptr<vector<string>> perspectiveIds{};
  shared_ptr<string> plainText{};
  shared_ptr<long> solutionId{};

  UpdateKnowledgeRequestKnowledgeSolutions() {}

  explicit UpdateKnowledgeRequestKnowledgeSolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (perspectiveIds) {
      res["PerspectiveIds"] = boost::any(*perspectiveIds);
    }
    if (plainText) {
      res["PlainText"] = boost::any(*plainText);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("PerspectiveIds") != m.end() && !m["PerspectiveIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerspectiveIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerspectiveIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspectiveIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlainText") != m.end() && !m["PlainText"].empty()) {
      plainText = make_shared<string>(boost::any_cast<string>(m["PlainText"]));
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<long>(boost::any_cast<long>(m["SolutionId"]));
    }
  }


  virtual ~UpdateKnowledgeRequestKnowledgeSolutions() = default;
};
class UpdateKnowledgeRequestKnowledge : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> endDate{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<string> knowledgeTitle{};
  shared_ptr<long> knowledgeType{};
  shared_ptr<vector<UpdateKnowledgeRequestKnowledgeOutlines>> outlines{};
  shared_ptr<vector<UpdateKnowledgeRequestKnowledgeSimQuestions>> simQuestions{};
  shared_ptr<vector<UpdateKnowledgeRequestKnowledgeSolutions>> solutions{};
  shared_ptr<string> startDate{};

  UpdateKnowledgeRequestKnowledge() {}

  explicit UpdateKnowledgeRequestKnowledge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (knowledgeTitle) {
      res["KnowledgeTitle"] = boost::any(*knowledgeTitle);
    }
    if (knowledgeType) {
      res["KnowledgeType"] = boost::any(*knowledgeType);
    }
    if (outlines) {
      vector<boost::any> temp1;
      for(auto item1:*outlines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outlines"] = boost::any(temp1);
    }
    if (simQuestions) {
      vector<boost::any> temp1;
      for(auto item1:*simQuestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimQuestions"] = boost::any(temp1);
    }
    if (solutions) {
      vector<boost::any> temp1;
      for(auto item1:*solutions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Solutions"] = boost::any(temp1);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("KnowledgeTitle") != m.end() && !m["KnowledgeTitle"].empty()) {
      knowledgeTitle = make_shared<string>(boost::any_cast<string>(m["KnowledgeTitle"]));
    }
    if (m.find("KnowledgeType") != m.end() && !m["KnowledgeType"].empty()) {
      knowledgeType = make_shared<long>(boost::any_cast<long>(m["KnowledgeType"]));
    }
    if (m.find("Outlines") != m.end() && !m["Outlines"].empty()) {
      if (typeid(vector<boost::any>) == m["Outlines"].type()) {
        vector<UpdateKnowledgeRequestKnowledgeOutlines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outlines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateKnowledgeRequestKnowledgeOutlines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outlines = make_shared<vector<UpdateKnowledgeRequestKnowledgeOutlines>>(expect1);
      }
    }
    if (m.find("SimQuestions") != m.end() && !m["SimQuestions"].empty()) {
      if (typeid(vector<boost::any>) == m["SimQuestions"].type()) {
        vector<UpdateKnowledgeRequestKnowledgeSimQuestions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimQuestions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateKnowledgeRequestKnowledgeSimQuestions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        simQuestions = make_shared<vector<UpdateKnowledgeRequestKnowledgeSimQuestions>>(expect1);
      }
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      if (typeid(vector<boost::any>) == m["Solutions"].type()) {
        vector<UpdateKnowledgeRequestKnowledgeSolutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Solutions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateKnowledgeRequestKnowledgeSolutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        solutions = make_shared<vector<UpdateKnowledgeRequestKnowledgeSolutions>>(expect1);
      }
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~UpdateKnowledgeRequestKnowledge() = default;
};
class UpdateKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<UpdateKnowledgeRequestKnowledge> knowledge{};

  UpdateKnowledgeRequest() {}

  explicit UpdateKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledge) {
      res["Knowledge"] = knowledge ? boost::any(knowledge->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      if (typeid(map<string, boost::any>) == m["Knowledge"].type()) {
        UpdateKnowledgeRequestKnowledge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Knowledge"]));
        knowledge = make_shared<UpdateKnowledgeRequestKnowledge>(model1);
      }
    }
  }


  virtual ~UpdateKnowledgeRequest() = default;
};
class UpdateKnowledgeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> knowledgeShrink{};

  UpdateKnowledgeShrinkRequest() {}

  explicit UpdateKnowledgeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeShrink) {
      res["Knowledge"] = boost::any(*knowledgeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      knowledgeShrink = make_shared<string>(boost::any_cast<string>(m["Knowledge"]));
    }
  }


  virtual ~UpdateKnowledgeShrinkRequest() = default;
};
class UpdateKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};
  shared_ptr<string> requestId{};

  UpdateKnowledgeResponseBody() {}

  explicit UpdateKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateKnowledgeResponseBody() = default;
};
class UpdateKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateKnowledgeResponseBody> body{};

  UpdateKnowledgeResponse() {}

  explicit UpdateKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateKnowledgeResponse() = default;
};
class UpdatePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<string> perspectiveId{};

  UpdatePerspectiveRequest() {}

  explicit UpdatePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~UpdatePerspectiveRequest() = default;
};
class UpdatePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdatePerspectiveResponseBody() {}

  explicit UpdatePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePerspectiveResponseBody() = default;
};
class UpdatePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePerspectiveResponseBody> body{};

  UpdatePerspectiveResponse() {}

  explicit UpdatePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePerspectiveResponse() = default;
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
  ActivatePerspectiveResponse activatePerspectiveWithOptions(shared_ptr<ActivatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivatePerspectiveResponse activatePerspective(shared_ptr<ActivatePerspectiveRequest> request);
  AddSynonymResponse addSynonymWithOptions(shared_ptr<AddSynonymRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSynonymResponse addSynonym(shared_ptr<AddSynonymRequest> request);
  AppendEntityMemberResponse appendEntityMemberWithOptions(shared_ptr<AppendEntityMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AppendEntityMemberResponse appendEntityMember(shared_ptr<AppendEntityMemberRequest> request);
  AssociateResponse associateWithOptions(shared_ptr<AssociateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateResponse associate(shared_ptr<AssociateRequest> request);
  ChatResponse chatWithOptions(shared_ptr<ChatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatResponse chat(shared_ptr<ChatRequest> request);
  CreateBotResponse createBotWithOptions(shared_ptr<CreateBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBotResponse createBot(shared_ptr<CreateBotRequest> request);
  CreateCategoryResponse createCategoryWithOptions(shared_ptr<CreateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCategoryResponse createCategory(shared_ptr<CreateCategoryRequest> request);
  CreateCoreWordResponse createCoreWordWithOptions(shared_ptr<CreateCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCoreWordResponse createCoreWord(shared_ptr<CreateCoreWordRequest> request);
  CreateDialogResponse createDialogWithOptions(shared_ptr<CreateDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDialogResponse createDialog(shared_ptr<CreateDialogRequest> request);
  CreateEntityResponse createEntityWithOptions(shared_ptr<CreateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEntityResponse createEntity(shared_ptr<CreateEntityRequest> request);
  CreateIntentResponse createIntentWithOptions(shared_ptr<CreateIntentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIntentResponse createIntent(shared_ptr<CreateIntentRequest> request);
  CreateKnowledgeResponse createKnowledgeWithOptions(shared_ptr<CreateKnowledgeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKnowledgeResponse createKnowledge(shared_ptr<CreateKnowledgeRequest> request);
  CreatePerspectiveResponse createPerspectiveWithOptions(shared_ptr<CreatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePerspectiveResponse createPerspective(shared_ptr<CreatePerspectiveRequest> request);
  DeleteBotResponse deleteBotWithOptions(shared_ptr<DeleteBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBotResponse deleteBot(shared_ptr<DeleteBotRequest> request);
  DeleteCategoryResponse deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCategoryResponse deleteCategory(shared_ptr<DeleteCategoryRequest> request);
  DeleteCoreWordResponse deleteCoreWordWithOptions(shared_ptr<DeleteCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCoreWordResponse deleteCoreWord(shared_ptr<DeleteCoreWordRequest> request);
  DeleteDialogResponse deleteDialogWithOptions(shared_ptr<DeleteDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDialogResponse deleteDialog(shared_ptr<DeleteDialogRequest> request);
  DeleteEntityResponse deleteEntityWithOptions(shared_ptr<DeleteEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEntityResponse deleteEntity(shared_ptr<DeleteEntityRequest> request);
  DeleteIntentResponse deleteIntentWithOptions(shared_ptr<DeleteIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIntentResponse deleteIntent(shared_ptr<DeleteIntentRequest> request);
  DeleteKnowledgeResponse deleteKnowledgeWithOptions(shared_ptr<DeleteKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKnowledgeResponse deleteKnowledge(shared_ptr<DeleteKnowledgeRequest> request);
  DeletePerspectiveResponse deletePerspectiveWithOptions(shared_ptr<DeletePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePerspectiveResponse deletePerspective(shared_ptr<DeletePerspectiveRequest> request);
  DescribeBotResponse describeBotWithOptions(shared_ptr<DescribeBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBotResponse describeBot(shared_ptr<DescribeBotRequest> request);
  DescribeCategoryResponse describeCategoryWithOptions(shared_ptr<DescribeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCategoryResponse describeCategory(shared_ptr<DescribeCategoryRequest> request);
  DescribeCoreWordResponse describeCoreWordWithOptions(shared_ptr<DescribeCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCoreWordResponse describeCoreWord(shared_ptr<DescribeCoreWordRequest> request);
  DescribeDialogResponse describeDialogWithOptions(shared_ptr<DescribeDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDialogResponse describeDialog(shared_ptr<DescribeDialogRequest> request);
  DescribeDialogFlowResponse describeDialogFlowWithOptions(shared_ptr<DescribeDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDialogFlowResponse describeDialogFlow(shared_ptr<DescribeDialogFlowRequest> request);
  DescribeEntitiesResponse describeEntitiesWithOptions(shared_ptr<DescribeEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEntitiesResponse describeEntities(shared_ptr<DescribeEntitiesRequest> request);
  DescribeIntentResponse describeIntentWithOptions(shared_ptr<DescribeIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIntentResponse describeIntent(shared_ptr<DescribeIntentRequest> request);
  DescribeKnowledgeResponse describeKnowledgeWithOptions(shared_ptr<DescribeKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKnowledgeResponse describeKnowledge(shared_ptr<DescribeKnowledgeRequest> request);
  DescribePerspectiveResponse describePerspectiveWithOptions(shared_ptr<DescribePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePerspectiveResponse describePerspective(shared_ptr<DescribePerspectiveRequest> request);
  DisableDialogFlowResponse disableDialogFlowWithOptions(shared_ptr<DisableDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableDialogFlowResponse disableDialogFlow(shared_ptr<DisableDialogFlowRequest> request);
  DisableKnowledgeResponse disableKnowledgeWithOptions(shared_ptr<DisableKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableKnowledgeResponse disableKnowledge(shared_ptr<DisableKnowledgeRequest> request);
  FeedbackResponse feedbackWithOptions(shared_ptr<FeedbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FeedbackResponse feedback(shared_ptr<FeedbackRequest> request);
  GetAsyncResultResponse getAsyncResultWithOptions(shared_ptr<GetAsyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncResultResponse getAsyncResult(shared_ptr<GetAsyncResultRequest> request);
  GetBotChatDataResponse getBotChatDataWithOptions(shared_ptr<GetBotChatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBotChatDataResponse getBotChatData(shared_ptr<GetBotChatDataRequest> request);
  GetBotDsStatDataResponse getBotDsStatDataWithOptions(shared_ptr<GetBotDsStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBotDsStatDataResponse getBotDsStatData(shared_ptr<GetBotDsStatDataRequest> request);
  GetBotKnowledgeStatDataResponse getBotKnowledgeStatDataWithOptions(shared_ptr<GetBotKnowledgeStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBotKnowledgeStatDataResponse getBotKnowledgeStatData(shared_ptr<GetBotKnowledgeStatDataRequest> request);
  GetBotSessionDataResponse getBotSessionDataWithOptions(shared_ptr<GetBotSessionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBotSessionDataResponse getBotSessionData(shared_ptr<GetBotSessionDataRequest> request);
  GetConversationListResponse getConversationListWithOptions(shared_ptr<GetConversationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConversationListResponse getConversationList(shared_ptr<GetConversationListRequest> request);
  ListBotChatHistorysResponse listBotChatHistorysWithOptions(shared_ptr<ListBotChatHistorysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotChatHistorysResponse listBotChatHistorys(shared_ptr<ListBotChatHistorysRequest> request);
  ListBotColdDsDatasResponse listBotColdDsDatasWithOptions(shared_ptr<ListBotColdDsDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotColdDsDatasResponse listBotColdDsDatas(shared_ptr<ListBotColdDsDatasRequest> request);
  ListBotColdKnowledgesResponse listBotColdKnowledgesWithOptions(shared_ptr<ListBotColdKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotColdKnowledgesResponse listBotColdKnowledges(shared_ptr<ListBotColdKnowledgesRequest> request);
  ListBotDsDetailsResponse listBotDsDetailsWithOptions(shared_ptr<ListBotDsDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotDsDetailsResponse listBotDsDetails(shared_ptr<ListBotDsDetailsRequest> request);
  ListBotHotDsDatasResponse listBotHotDsDatasWithOptions(shared_ptr<ListBotHotDsDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotHotDsDatasResponse listBotHotDsDatas(shared_ptr<ListBotHotDsDatasRequest> request);
  ListBotHotKnowledgesResponse listBotHotKnowledgesWithOptions(shared_ptr<ListBotHotKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotHotKnowledgesResponse listBotHotKnowledges(shared_ptr<ListBotHotKnowledgesRequest> request);
  ListBotKnowledgeDetailsResponse listBotKnowledgeDetailsWithOptions(shared_ptr<ListBotKnowledgeDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotKnowledgeDetailsResponse listBotKnowledgeDetails(shared_ptr<ListBotKnowledgeDetailsRequest> request);
  ListBotReceptionDetailDatasResponse listBotReceptionDetailDatasWithOptions(shared_ptr<ListBotReceptionDetailDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotReceptionDetailDatasResponse listBotReceptionDetailDatas(shared_ptr<ListBotReceptionDetailDatasRequest> request);
  ListConversationLogsResponse listConversationLogsWithOptions(shared_ptr<ListConversationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConversationLogsResponse listConversationLogs(shared_ptr<ListConversationLogsRequest> request);
  MoveKnowledgeCategoryResponse moveKnowledgeCategoryWithOptions(shared_ptr<MoveKnowledgeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveKnowledgeCategoryResponse moveKnowledgeCategory(shared_ptr<MoveKnowledgeCategoryRequest> request);
  PublishDialogFlowResponse publishDialogFlowWithOptions(shared_ptr<PublishDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishDialogFlowResponse publishDialogFlow(shared_ptr<PublishDialogFlowRequest> request);
  PublishKnowledgeResponse publishKnowledgeWithOptions(shared_ptr<PublishKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishKnowledgeResponse publishKnowledge(shared_ptr<PublishKnowledgeRequest> request);
  QueryBotsResponse queryBotsWithOptions(shared_ptr<QueryBotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBotsResponse queryBots(shared_ptr<QueryBotsRequest> request);
  QueryCategoriesResponse queryCategoriesWithOptions(shared_ptr<QueryCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCategoriesResponse queryCategories(shared_ptr<QueryCategoriesRequest> request);
  QueryCoreWordsResponse queryCoreWordsWithOptions(shared_ptr<QueryCoreWordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCoreWordsResponse queryCoreWords(shared_ptr<QueryCoreWordsRequest> request);
  QueryDialogsResponse queryDialogsWithOptions(shared_ptr<QueryDialogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDialogsResponse queryDialogs(shared_ptr<QueryDialogsRequest> request);
  QueryEntitiesResponse queryEntitiesWithOptions(shared_ptr<QueryEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEntitiesResponse queryEntities(shared_ptr<QueryEntitiesRequest> request);
  QueryIntentsResponse queryIntentsWithOptions(shared_ptr<QueryIntentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryIntentsResponse queryIntents(shared_ptr<QueryIntentsRequest> request);
  QueryKnowledgesResponse queryKnowledgesWithOptions(shared_ptr<QueryKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryKnowledgesResponse queryKnowledges(shared_ptr<QueryKnowledgesRequest> request);
  QueryPerspectivesResponse queryPerspectivesWithOptions(shared_ptr<QueryPerspectivesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPerspectivesResponse queryPerspectives(shared_ptr<QueryPerspectivesRequest> request);
  QuerySystemEntitiesResponse querySystemEntitiesWithOptions(shared_ptr<QuerySystemEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySystemEntitiesResponse querySystemEntities(shared_ptr<QuerySystemEntitiesRequest> request);
  RemoveEntityMemberResponse removeEntityMemberWithOptions(shared_ptr<RemoveEntityMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveEntityMemberResponse removeEntityMember(shared_ptr<RemoveEntityMemberRequest> request);
  RemoveSynonymResponse removeSynonymWithOptions(shared_ptr<RemoveSynonymRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveSynonymResponse removeSynonym(shared_ptr<RemoveSynonymRequest> request);
  TestDialogFlowResponse testDialogFlowWithOptions(shared_ptr<TestDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestDialogFlowResponse testDialogFlow(shared_ptr<TestDialogFlowRequest> request);
  UpdateCategoryResponse updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCategoryResponse updateCategory(shared_ptr<UpdateCategoryRequest> request);
  UpdateCoreWordResponse updateCoreWordWithOptions(shared_ptr<UpdateCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCoreWordResponse updateCoreWord(shared_ptr<UpdateCoreWordRequest> request);
  UpdateDialogResponse updateDialogWithOptions(shared_ptr<UpdateDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDialogResponse updateDialog(shared_ptr<UpdateDialogRequest> request);
  UpdateDialogFlowResponse updateDialogFlowWithOptions(shared_ptr<UpdateDialogFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDialogFlowResponse updateDialogFlow(shared_ptr<UpdateDialogFlowRequest> request);
  UpdateEntityResponse updateEntityWithOptions(shared_ptr<UpdateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEntityResponse updateEntity(shared_ptr<UpdateEntityRequest> request);
  UpdateIntentResponse updateIntentWithOptions(shared_ptr<UpdateIntentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIntentResponse updateIntent(shared_ptr<UpdateIntentRequest> request);
  UpdateKnowledgeResponse updateKnowledgeWithOptions(shared_ptr<UpdateKnowledgeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateKnowledgeResponse updateKnowledge(shared_ptr<UpdateKnowledgeRequest> request);
  UpdatePerspectiveResponse updatePerspectiveWithOptions(shared_ptr<UpdatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePerspectiveResponse updatePerspective(shared_ptr<UpdatePerspectiveRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Chatbot20171011

#endif
