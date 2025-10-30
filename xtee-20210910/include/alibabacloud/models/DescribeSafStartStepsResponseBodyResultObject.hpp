// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFSTARTSTEPSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFSTARTSTEPSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafStartStepsResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafStartStepsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafStartStepsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeSafStartStepsResponseBodyResultObject() = default ;
    DescribeSafStartStepsResponseBodyResultObject(const DescribeSafStartStepsResponseBodyResultObject &) = default ;
    DescribeSafStartStepsResponseBodyResultObject(DescribeSafStartStepsResponseBodyResultObject &&) = default ;
    DescribeSafStartStepsResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafStartStepsResponseBodyResultObject() = default ;
    DescribeSafStartStepsResponseBodyResultObject& operator=(const DescribeSafStartStepsResponseBodyResultObject &) = default ;
    DescribeSafStartStepsResponseBodyResultObject& operator=(DescribeSafStartStepsResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->id_ == nullptr && return this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeSafStartStepsResponseBodyResultObject& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeSafStartStepsResponseBodyResultObject& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSafStartStepsResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Step content
    std::shared_ptr<string> content_ = nullptr;
    // Step title
    std::shared_ptr<string> id_ = nullptr;
    // Type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
