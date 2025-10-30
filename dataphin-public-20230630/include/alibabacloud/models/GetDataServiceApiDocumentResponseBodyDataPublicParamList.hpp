// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODYDATAPUBLICPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODYDATAPUBLICPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiDocumentResponseBodyDataPublicParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiDocumentResponseBodyDataPublicParamList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiDocumentResponseBodyDataPublicParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataServiceApiDocumentResponseBodyDataPublicParamList() = default ;
    GetDataServiceApiDocumentResponseBodyDataPublicParamList(const GetDataServiceApiDocumentResponseBodyDataPublicParamList &) = default ;
    GetDataServiceApiDocumentResponseBodyDataPublicParamList(GetDataServiceApiDocumentResponseBodyDataPublicParamList &&) = default ;
    GetDataServiceApiDocumentResponseBodyDataPublicParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiDocumentResponseBodyDataPublicParamList() = default ;
    GetDataServiceApiDocumentResponseBodyDataPublicParamList& operator=(const GetDataServiceApiDocumentResponseBodyDataPublicParamList &) = default ;
    GetDataServiceApiDocumentResponseBodyDataPublicParamList& operator=(GetDataServiceApiDocumentResponseBodyDataPublicParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->isRequired_ == nullptr && return this->name_ == nullptr && return this->sample_ == nullptr && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataPublicParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline GetDataServiceApiDocumentResponseBodyDataPublicParamList& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataPublicParamList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataPublicParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataPublicParamList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
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
