// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDSASEUSERTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDSASEUSERTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class BindSaseUserTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindSaseUserTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SaseUserIds, saseUserIds_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, BindSaseUserTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SaseUserIds, saseUserIds_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    BindSaseUserTagRequest() = default ;
    BindSaseUserTagRequest(const BindSaseUserTagRequest &) = default ;
    BindSaseUserTagRequest(BindSaseUserTagRequest &&) = default ;
    BindSaseUserTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindSaseUserTagRequest() = default ;
    BindSaseUserTagRequest& operator=(const BindSaseUserTagRequest &) = default ;
    BindSaseUserTagRequest& operator=(BindSaseUserTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->saseUserIds_ == nullptr
        && this->tagIds_ == nullptr; };
    // saseUserIds Field Functions 
    bool hasSaseUserIds() const { return this->saseUserIds_ != nullptr;};
    void deleteSaseUserIds() { this->saseUserIds_ = nullptr;};
    inline const vector<string> & getSaseUserIds() const { DARABONBA_PTR_GET_CONST(saseUserIds_, vector<string>) };
    inline vector<string> getSaseUserIds() { DARABONBA_PTR_GET(saseUserIds_, vector<string>) };
    inline BindSaseUserTagRequest& setSaseUserIds(const vector<string> & saseUserIds) { DARABONBA_PTR_SET_VALUE(saseUserIds_, saseUserIds) };
    inline BindSaseUserTagRequest& setSaseUserIds(vector<string> && saseUserIds) { DARABONBA_PTR_SET_RVALUE(saseUserIds_, saseUserIds) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline BindSaseUserTagRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline BindSaseUserTagRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    // The collection of user IDs.
    shared_ptr<vector<string>> saseUserIds_ {};
    // The collection of user label IDs.
    shared_ptr<vector<string>> tagIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
