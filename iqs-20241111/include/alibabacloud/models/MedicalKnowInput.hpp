// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALKNOWINPUT_HPP_
#define ALIBABACLOUD_MODELS_MEDICALKNOWINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MedicalKnowInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalKnowInput& obj) { 
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalKnowInput& obj) { 
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    MedicalKnowInput() = default ;
    MedicalKnowInput(const MedicalKnowInput &) = default ;
    MedicalKnowInput(MedicalKnowInput &&) = default ;
    MedicalKnowInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalKnowInput() = default ;
    MedicalKnowInput& operator=(const MedicalKnowInput &) = default ;
    MedicalKnowInput& operator=(MedicalKnowInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->query_ == nullptr
        && this->type_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline MedicalKnowInput& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MedicalKnowInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> query_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
