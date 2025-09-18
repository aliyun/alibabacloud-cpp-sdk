// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMMANDREQUESTTOOLEXAMPLES_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMMANDREQUESTTOOLEXAMPLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateCommandRequestToolExamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCommandRequestToolExamples& obj) { 
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCommandRequestToolExamples& obj) { 
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    UpdateCommandRequestToolExamples() = default ;
    UpdateCommandRequestToolExamples(const UpdateCommandRequestToolExamples &) = default ;
    UpdateCommandRequestToolExamples(UpdateCommandRequestToolExamples &&) = default ;
    UpdateCommandRequestToolExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCommandRequestToolExamples() = default ;
    UpdateCommandRequestToolExamples& operator=(const UpdateCommandRequestToolExamples &) = default ;
    UpdateCommandRequestToolExamples& operator=(UpdateCommandRequestToolExamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->query_ != nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline UpdateCommandRequestToolExamples& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
