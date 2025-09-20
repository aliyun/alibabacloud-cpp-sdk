// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MNS_HPP_
#define ALIBABACLOUD_MODELS_MNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class MNS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MNS& obj) { 
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, MNS& obj) { 
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    MNS() = default ;
    MNS(const MNS &) = default ;
    MNS(MNS &&) = default ;
    MNS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MNS() = default ;
    MNS& operator=(const MNS &) = default ;
    MNS& operator=(MNS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topicName_ != nullptr; };
    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline MNS& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
