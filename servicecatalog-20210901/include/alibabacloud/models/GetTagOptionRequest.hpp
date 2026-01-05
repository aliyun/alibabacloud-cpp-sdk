// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTAGOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTAGOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetTagOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTagOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTagOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
    };
    GetTagOptionRequest() = default ;
    GetTagOptionRequest(const GetTagOptionRequest &) = default ;
    GetTagOptionRequest(GetTagOptionRequest &&) = default ;
    GetTagOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTagOptionRequest() = default ;
    GetTagOptionRequest& operator=(const GetTagOptionRequest &) = default ;
    GetTagOptionRequest& operator=(GetTagOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagOptionId_ == nullptr; };
    // tagOptionId Field Functions 
    bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
    void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
    inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
    inline GetTagOptionRequest& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


  protected:
    // The ID of the tag option.
    // 
    // This parameter is required.
    shared_ptr<string> tagOptionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
