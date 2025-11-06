// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCUBEWHITELISTRESPONSEBODYADDWHITELISTRESULTADDWHITELISTINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCUBEWHITELISTRESPONSEBODYADDWHITELISTRESULTADDWHITELISTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FailNum, failNum_);
      DARABONBA_PTR_TO_JSON(FailUserIds, failUserIds_);
      DARABONBA_PTR_TO_JSON(SuccessNum, successNum_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FailNum, failNum_);
      DARABONBA_PTR_FROM_JSON(FailUserIds, failUserIds_);
      DARABONBA_PTR_FROM_JSON(SuccessNum, successNum_);
    };
    UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo() = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo(const UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo &) = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo(UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo &&) = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo() = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo& operator=(const UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo &) = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo& operator=(UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failNum_ == nullptr
        && return this->failUserIds_ == nullptr && return this->successNum_ == nullptr; };
    // failNum Field Functions 
    bool hasFailNum() const { return this->failNum_ != nullptr;};
    void deleteFailNum() { this->failNum_ = nullptr;};
    inline int64_t failNum() const { DARABONBA_PTR_GET_DEFAULT(failNum_, 0L) };
    inline UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo& setFailNum(int64_t failNum) { DARABONBA_PTR_SET_VALUE(failNum_, failNum) };


    // failUserIds Field Functions 
    bool hasFailUserIds() const { return this->failUserIds_ != nullptr;};
    void deleteFailUserIds() { this->failUserIds_ = nullptr;};
    inline string failUserIds() const { DARABONBA_PTR_GET_DEFAULT(failUserIds_, "") };
    inline UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo& setFailUserIds(string failUserIds) { DARABONBA_PTR_SET_VALUE(failUserIds_, failUserIds) };


    // successNum Field Functions 
    bool hasSuccessNum() const { return this->successNum_ != nullptr;};
    void deleteSuccessNum() { this->successNum_ = nullptr;};
    inline int64_t successNum() const { DARABONBA_PTR_GET_DEFAULT(successNum_, 0L) };
    inline UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo& setSuccessNum(int64_t successNum) { DARABONBA_PTR_SET_VALUE(successNum_, successNum) };


  protected:
    std::shared_ptr<int64_t> failNum_ = nullptr;
    std::shared_ptr<string> failUserIds_ = nullptr;
    std::shared_ptr<int64_t> successNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
