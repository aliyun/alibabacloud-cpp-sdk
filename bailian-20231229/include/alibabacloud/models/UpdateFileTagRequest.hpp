// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateFileTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    UpdateFileTagRequest() = default ;
    UpdateFileTagRequest(const UpdateFileTagRequest &) = default ;
    UpdateFileTagRequest(UpdateFileTagRequest &&) = default ;
    UpdateFileTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileTagRequest() = default ;
    UpdateFileTagRequest& operator=(const UpdateFileTagRequest &) = default ;
    UpdateFileTagRequest& operator=(UpdateFileTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tags_ == nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline UpdateFileTagRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateFileTagRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
