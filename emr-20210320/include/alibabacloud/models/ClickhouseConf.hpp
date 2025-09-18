// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLICKHOUSECONF_HPP_
#define ALIBABACLOUD_MODELS_CLICKHOUSECONF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ClickhouseConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClickhouseConf& obj) { 
      DARABONBA_PTR_TO_JSON(InitialReplica, initialReplica_);
      DARABONBA_PTR_TO_JSON(InitialShard, initialShard_);
      DARABONBA_PTR_TO_JSON(NewNodeCount, newNodeCount_);
      DARABONBA_PTR_TO_JSON(ResizeType, resizeType_);
    };
    friend void from_json(const Darabonba::Json& j, ClickhouseConf& obj) { 
      DARABONBA_PTR_FROM_JSON(InitialReplica, initialReplica_);
      DARABONBA_PTR_FROM_JSON(InitialShard, initialShard_);
      DARABONBA_PTR_FROM_JSON(NewNodeCount, newNodeCount_);
      DARABONBA_PTR_FROM_JSON(ResizeType, resizeType_);
    };
    ClickhouseConf() = default ;
    ClickhouseConf(const ClickhouseConf &) = default ;
    ClickhouseConf(ClickhouseConf &&) = default ;
    ClickhouseConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClickhouseConf() = default ;
    ClickhouseConf& operator=(const ClickhouseConf &) = default ;
    ClickhouseConf& operator=(ClickhouseConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->initialReplica_ != nullptr
        && this->initialShard_ != nullptr && this->newNodeCount_ != nullptr && this->resizeType_ != nullptr; };
    // initialReplica Field Functions 
    bool hasInitialReplica() const { return this->initialReplica_ != nullptr;};
    void deleteInitialReplica() { this->initialReplica_ = nullptr;};
    inline int32_t initialReplica() const { DARABONBA_PTR_GET_DEFAULT(initialReplica_, 0) };
    inline ClickhouseConf& setInitialReplica(int32_t initialReplica) { DARABONBA_PTR_SET_VALUE(initialReplica_, initialReplica) };


    // initialShard Field Functions 
    bool hasInitialShard() const { return this->initialShard_ != nullptr;};
    void deleteInitialShard() { this->initialShard_ = nullptr;};
    inline int32_t initialShard() const { DARABONBA_PTR_GET_DEFAULT(initialShard_, 0) };
    inline ClickhouseConf& setInitialShard(int32_t initialShard) { DARABONBA_PTR_SET_VALUE(initialShard_, initialShard) };


    // newNodeCount Field Functions 
    bool hasNewNodeCount() const { return this->newNodeCount_ != nullptr;};
    void deleteNewNodeCount() { this->newNodeCount_ = nullptr;};
    inline int32_t newNodeCount() const { DARABONBA_PTR_GET_DEFAULT(newNodeCount_, 0) };
    inline ClickhouseConf& setNewNodeCount(int32_t newNodeCount) { DARABONBA_PTR_SET_VALUE(newNodeCount_, newNodeCount) };


    // resizeType Field Functions 
    bool hasResizeType() const { return this->resizeType_ != nullptr;};
    void deleteResizeType() { this->resizeType_ = nullptr;};
    inline string resizeType() const { DARABONBA_PTR_GET_DEFAULT(resizeType_, "") };
    inline ClickhouseConf& setResizeType(string resizeType) { DARABONBA_PTR_SET_VALUE(resizeType_, resizeType) };


  protected:
    std::shared_ptr<int32_t> initialReplica_ = nullptr;
    std::shared_ptr<int32_t> initialShard_ = nullptr;
    std::shared_ptr<int32_t> newNodeCount_ = nullptr;
    std::shared_ptr<string> resizeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
