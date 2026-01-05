// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETAGOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETAGOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class DeleteTagOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTagOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTagOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
    };
    DeleteTagOptionRequest() = default ;
    DeleteTagOptionRequest(const DeleteTagOptionRequest &) = default ;
    DeleteTagOptionRequest(DeleteTagOptionRequest &&) = default ;
    DeleteTagOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTagOptionRequest() = default ;
    DeleteTagOptionRequest& operator=(const DeleteTagOptionRequest &) = default ;
    DeleteTagOptionRequest& operator=(DeleteTagOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagOptionId_ == nullptr; };
    // tagOptionId Field Functions 
    bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
    void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
    inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
    inline DeleteTagOptionRequest& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


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
