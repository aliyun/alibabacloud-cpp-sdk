// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGSSQLTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGSSQLTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag(const DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag(DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag &&) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag& operator=(const DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag& operator=(DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag &&) = default ;
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
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> comments_ = nullptr;
    // SQL ID。
    std::shared_ptr<string> sqlId_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
