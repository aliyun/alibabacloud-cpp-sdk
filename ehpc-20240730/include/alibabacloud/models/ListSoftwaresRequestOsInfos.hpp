// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESREQUESTOSINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESREQUESTOSINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSoftwaresRequestOsInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresRequestOsInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(OsTag, osTag_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresRequestOsInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(OsTag, osTag_);
    };
    ListSoftwaresRequestOsInfos() = default ;
    ListSoftwaresRequestOsInfos(const ListSoftwaresRequestOsInfos &) = default ;
    ListSoftwaresRequestOsInfos(ListSoftwaresRequestOsInfos &&) = default ;
    ListSoftwaresRequestOsInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresRequestOsInfos() = default ;
    ListSoftwaresRequestOsInfos& operator=(const ListSoftwaresRequestOsInfos &) = default ;
    ListSoftwaresRequestOsInfos& operator=(ListSoftwaresRequestOsInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architecture_ == nullptr
        && return this->osTag_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline ListSoftwaresRequestOsInfos& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // osTag Field Functions 
    bool hasOsTag() const { return this->osTag_ != nullptr;};
    void deleteOsTag() { this->osTag_ = nullptr;};
    inline string osTag() const { DARABONBA_PTR_GET_DEFAULT(osTag_, "") };
    inline ListSoftwaresRequestOsInfos& setOsTag(string osTag) { DARABONBA_PTR_SET_VALUE(osTag_, osTag) };


  protected:
    // The OS architecture. Valid values:
    // 
    // *   x86_64
    // *   arm64
    std::shared_ptr<string> architecture_ = nullptr;
    // The image tag.
    std::shared_ptr<string> osTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
