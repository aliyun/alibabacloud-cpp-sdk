// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSOUNDRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSOUNDRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySoundRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySoundRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySoundRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    QuerySoundRecordResponseBodyData() = default ;
    QuerySoundRecordResponseBodyData(const QuerySoundRecordResponseBodyData &) = default ;
    QuerySoundRecordResponseBodyData(QuerySoundRecordResponseBodyData &&) = default ;
    QuerySoundRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySoundRecordResponseBodyData() = default ;
    QuerySoundRecordResponseBodyData& operator=(const QuerySoundRecordResponseBodyData &) = default ;
    QuerySoundRecordResponseBodyData& operator=(QuerySoundRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUrl_ == nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline QuerySoundRecordResponseBodyData& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


  protected:
    // 通话录音url路径，最大长度1000，有效期1小时
    std::shared_ptr<string> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
