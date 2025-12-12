// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFOHANDSCOREIDLIST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFOHANDSCOREIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyDataResultInfoHandScoreIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyDataResultInfoHandScoreIdList& obj) { 
      DARABONBA_PTR_TO_JSON(HandScoreIdList, handScoreIdList_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyDataResultInfoHandScoreIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(HandScoreIdList, handScoreIdList_);
    };
    UploadDataSyncResponseBodyDataResultInfoHandScoreIdList() = default ;
    UploadDataSyncResponseBodyDataResultInfoHandScoreIdList(const UploadDataSyncResponseBodyDataResultInfoHandScoreIdList &) = default ;
    UploadDataSyncResponseBodyDataResultInfoHandScoreIdList(UploadDataSyncResponseBodyDataResultInfoHandScoreIdList &&) = default ;
    UploadDataSyncResponseBodyDataResultInfoHandScoreIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyDataResultInfoHandScoreIdList() = default ;
    UploadDataSyncResponseBodyDataResultInfoHandScoreIdList& operator=(const UploadDataSyncResponseBodyDataResultInfoHandScoreIdList &) = default ;
    UploadDataSyncResponseBodyDataResultInfoHandScoreIdList& operator=(UploadDataSyncResponseBodyDataResultInfoHandScoreIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->handScoreIdList_ == nullptr; };
    // handScoreIdList Field Functions 
    bool hasHandScoreIdList() const { return this->handScoreIdList_ != nullptr;};
    void deleteHandScoreIdList() { this->handScoreIdList_ = nullptr;};
    inline const vector<string> & handScoreIdList() const { DARABONBA_PTR_GET_CONST(handScoreIdList_, vector<string>) };
    inline vector<string> handScoreIdList() { DARABONBA_PTR_GET(handScoreIdList_, vector<string>) };
    inline UploadDataSyncResponseBodyDataResultInfoHandScoreIdList& setHandScoreIdList(const vector<string> & handScoreIdList) { DARABONBA_PTR_SET_VALUE(handScoreIdList_, handScoreIdList) };
    inline UploadDataSyncResponseBodyDataResultInfoHandScoreIdList& setHandScoreIdList(vector<string> && handScoreIdList) { DARABONBA_PTR_SET_RVALUE(handScoreIdList_, handScoreIdList) };


  protected:
    std::shared_ptr<vector<string>> handScoreIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
