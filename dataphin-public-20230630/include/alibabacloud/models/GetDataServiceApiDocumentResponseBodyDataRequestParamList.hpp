// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODYDATAREQUESTPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODYDATAREQUESTPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiDocumentResponseBodyDataRequestParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiDocumentResponseBodyDataRequestParamList& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiDocumentResponseBodyDataRequestParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataServiceApiDocumentResponseBodyDataRequestParamList() = default ;
    GetDataServiceApiDocumentResponseBodyDataRequestParamList(const GetDataServiceApiDocumentResponseBodyDataRequestParamList &) = default ;
    GetDataServiceApiDocumentResponseBodyDataRequestParamList(GetDataServiceApiDocumentResponseBodyDataRequestParamList &&) = default ;
    GetDataServiceApiDocumentResponseBodyDataRequestParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiDocumentResponseBodyDataRequestParamList() = default ;
    GetDataServiceApiDocumentResponseBodyDataRequestParamList& operator=(const GetDataServiceApiDocumentResponseBodyDataRequestParamList &) = default ;
    GetDataServiceApiDocumentResponseBodyDataRequestParamList& operator=(GetDataServiceApiDocumentResponseBodyDataRequestParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->description_ == nullptr && return this->isRequired_ == nullptr && return this->name_ == nullptr && return this->sample_ == nullptr && return this->type_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataRequestParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataRequestParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline GetDataServiceApiDocumentResponseBodyDataRequestParamList& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataRequestParamList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataRequestParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataRequestParamList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sample_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
