// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZETAGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZETAGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeTagResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeTagResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeTagResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetQueryOptimizeTagResponseBodyData() = default ;
    GetQueryOptimizeTagResponseBodyData(const GetQueryOptimizeTagResponseBodyData &) = default ;
    GetQueryOptimizeTagResponseBodyData(GetQueryOptimizeTagResponseBodyData &&) = default ;
    GetQueryOptimizeTagResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeTagResponseBodyData() = default ;
    GetQueryOptimizeTagResponseBodyData& operator=(const GetQueryOptimizeTagResponseBodyData &) = default ;
    GetQueryOptimizeTagResponseBodyData& operator=(GetQueryOptimizeTagResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comments_ == nullptr
        && return this->sqlId_ == nullptr && return this->tags_ == nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetQueryOptimizeTagResponseBodyData& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetQueryOptimizeTagResponseBodyData& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetQueryOptimizeTagResponseBodyData& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The remarks.
    std::shared_ptr<string> comments_ = nullptr;
    // The SQL template ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The SQL tags. Multiple tags are separated by commas (,).
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
