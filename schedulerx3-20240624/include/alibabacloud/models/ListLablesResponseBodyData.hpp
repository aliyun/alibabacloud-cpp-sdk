// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLABLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTLABLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListLablesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLablesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsDesignated, isDesignated_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListLablesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDesignated, isDesignated_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListLablesResponseBodyData() = default ;
    ListLablesResponseBodyData(const ListLablesResponseBodyData &) = default ;
    ListLablesResponseBodyData(ListLablesResponseBodyData &&) = default ;
    ListLablesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLablesResponseBodyData() = default ;
    ListLablesResponseBodyData& operator=(const ListLablesResponseBodyData &) = default ;
    ListLablesResponseBodyData& operator=(ListLablesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDesignated_ != nullptr
        && this->label_ != nullptr && this->online_ != nullptr && this->size_ != nullptr; };
    // isDesignated Field Functions 
    bool hasIsDesignated() const { return this->isDesignated_ != nullptr;};
    void deleteIsDesignated() { this->isDesignated_ = nullptr;};
    inline bool isDesignated() const { DARABONBA_PTR_GET_DEFAULT(isDesignated_, false) };
    inline ListLablesResponseBodyData& setIsDesignated(bool isDesignated) { DARABONBA_PTR_SET_VALUE(isDesignated_, isDesignated) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListLablesResponseBodyData& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline ListLablesResponseBodyData& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListLablesResponseBodyData& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<bool> isDesignated_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<bool> online_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
