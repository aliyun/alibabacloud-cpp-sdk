// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKELIBRARYREVIEWCMD_HPP_
#define ALIBABACLOUD_MODELS_REVOKELIBRARYREVIEWCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RevokeLibraryReviewCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeLibraryReviewCmd& obj) { 
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeLibraryReviewCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
    };
    RevokeLibraryReviewCmd() = default ;
    RevokeLibraryReviewCmd(const RevokeLibraryReviewCmd &) = default ;
    RevokeLibraryReviewCmd(RevokeLibraryReviewCmd &&) = default ;
    RevokeLibraryReviewCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeLibraryReviewCmd() = default ;
    RevokeLibraryReviewCmd& operator=(const RevokeLibraryReviewCmd &) = default ;
    RevokeLibraryReviewCmd& operator=(RevokeLibraryReviewCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libraryId_ == nullptr; };
    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline int64_t getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, 0L) };
    inline RevokeLibraryReviewCmd& setLibraryId(int64_t libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


  protected:
    shared_ptr<int64_t> libraryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
