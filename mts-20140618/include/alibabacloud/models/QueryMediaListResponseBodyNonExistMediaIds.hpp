// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYNONEXISTMEDIAIDS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYNONEXISTMEDIAIDS_HPP_
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
  class QueryMediaListResponseBodyNonExistMediaIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyNonExistMediaIds& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyNonExistMediaIds& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    QueryMediaListResponseBodyNonExistMediaIds() = default ;
    QueryMediaListResponseBodyNonExistMediaIds(const QueryMediaListResponseBodyNonExistMediaIds &) = default ;
    QueryMediaListResponseBodyNonExistMediaIds(QueryMediaListResponseBodyNonExistMediaIds &&) = default ;
    QueryMediaListResponseBodyNonExistMediaIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyNonExistMediaIds() = default ;
    QueryMediaListResponseBodyNonExistMediaIds& operator=(const QueryMediaListResponseBodyNonExistMediaIds &) = default ;
    QueryMediaListResponseBodyNonExistMediaIds& operator=(QueryMediaListResponseBodyNonExistMediaIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline const vector<string> & mediaId() const { DARABONBA_PTR_GET_CONST(mediaId_, vector<string>) };
    inline vector<string> mediaId() { DARABONBA_PTR_GET(mediaId_, vector<string>) };
    inline QueryMediaListResponseBodyNonExistMediaIds& setMediaId(const vector<string> & mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };
    inline QueryMediaListResponseBodyNonExistMediaIds& setMediaId(vector<string> && mediaId) { DARABONBA_PTR_SET_RVALUE(mediaId_, mediaId) };


  protected:
    std::shared_ptr<vector<string>> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
