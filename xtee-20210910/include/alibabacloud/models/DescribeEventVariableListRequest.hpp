// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(filterDTO, filterDTO_);
      DARABONBA_PTR_TO_JSON(refObjId, refObjId_);
      DARABONBA_PTR_TO_JSON(refObjType, refObjType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(filterDTO, filterDTO_);
      DARABONBA_PTR_FROM_JSON(refObjId, refObjId_);
      DARABONBA_PTR_FROM_JSON(refObjType, refObjType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeEventVariableListRequest() = default ;
    DescribeEventVariableListRequest(const DescribeEventVariableListRequest &) = default ;
    DescribeEventVariableListRequest(DescribeEventVariableListRequest &&) = default ;
    DescribeEventVariableListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListRequest() = default ;
    DescribeEventVariableListRequest& operator=(const DescribeEventVariableListRequest &) = default ;
    DescribeEventVariableListRequest& operator=(DescribeEventVariableListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->createType_ != nullptr && this->filterDTO_ != nullptr && this->refObjId_ != nullptr && this->refObjType_ != nullptr && this->regId_ != nullptr
        && this->type_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventVariableListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DescribeEventVariableListRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // filterDTO Field Functions 
    bool hasFilterDTO() const { return this->filterDTO_ != nullptr;};
    void deleteFilterDTO() { this->filterDTO_ = nullptr;};
    inline string filterDTO() const { DARABONBA_PTR_GET_DEFAULT(filterDTO_, "") };
    inline DescribeEventVariableListRequest& setFilterDTO(string filterDTO) { DARABONBA_PTR_SET_VALUE(filterDTO_, filterDTO) };


    // refObjId Field Functions 
    bool hasRefObjId() const { return this->refObjId_ != nullptr;};
    void deleteRefObjId() { this->refObjId_ = nullptr;};
    inline string refObjId() const { DARABONBA_PTR_GET_DEFAULT(refObjId_, "") };
    inline DescribeEventVariableListRequest& setRefObjId(string refObjId) { DARABONBA_PTR_SET_VALUE(refObjId_, refObjId) };


    // refObjType Field Functions 
    bool hasRefObjType() const { return this->refObjType_ != nullptr;};
    void deleteRefObjType() { this->refObjType_ = nullptr;};
    inline string refObjType() const { DARABONBA_PTR_GET_DEFAULT(refObjType_, "") };
    inline DescribeEventVariableListRequest& setRefObjType(string refObjType) { DARABONBA_PTR_SET_VALUE(refObjType_, refObjType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeEventVariableListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEventVariableListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> createType_ = nullptr;
    std::shared_ptr<string> filterDTO_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> refObjId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> refObjType_ = nullptr;
    std::shared_ptr<string> regId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
