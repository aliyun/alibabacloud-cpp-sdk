// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTRESPONSEBODYNONEXISTMEDIAWORKFLOWIDS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTRESPONSEBODYNONEXISTMEDIAWORKFLOWIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
    };
    QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds() = default ;
    QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds(const QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds &) = default ;
    QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds(QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds &&) = default ;
    QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds() = default ;
    QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds& operator=(const QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds &) = default ;
    QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds& operator=(QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflowId_ == nullptr; };
    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline const vector<string> & mediaWorkflowId() const { DARABONBA_PTR_GET_CONST(mediaWorkflowId_, vector<string>) };
    inline vector<string> mediaWorkflowId() { DARABONBA_PTR_GET(mediaWorkflowId_, vector<string>) };
    inline QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds& setMediaWorkflowId(const vector<string> & mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };
    inline QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds& setMediaWorkflowId(vector<string> && mediaWorkflowId) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowId_, mediaWorkflowId) };


  protected:
    std::shared_ptr<vector<string>> mediaWorkflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
